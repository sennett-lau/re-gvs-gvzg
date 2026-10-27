#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00B0[4096] = {
    1, 2, 3, 4, 0, 0, 5, 0, 0, 0, 6, 0, 7, 0, 8, 9, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0,
    14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 18, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 25, 0, 0, 0,
    0, 0, 0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 30, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 33, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 61, 0, 0, 0, 0, 0,
    62, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 76, 0, 77, 0, 78, 0,
    79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 87, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0,
    90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0,
    0, 0, 98, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0,
    0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 0, 106, 0, 107, 0, 108, 0, 0, 0, 0, 109, 0, 0, 110, 0,
    0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 114, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0,
    0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 132, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0,
    0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0,
    0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0,
    140, 0, 141, 0, 142, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0,
    0, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160, 161, 0, 0, 0, 162, 0, 163, 0, 0, 164,
    0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0,
    172, 0, 0, 173, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182,
    0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 188, 0, 189, 0, 190, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0,
    198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0,
    206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0,
    0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0, 0, 227, 0, 0, 0,
    228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0,
    0, 0, 0, 241, 242, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0,
    255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259,
    0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0,
    264, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 271, 0,
    0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0,
    0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0,
    0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0,
    0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311,
    0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0,
    318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0,
    323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0,
    331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 353,
    0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0,
    363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0,
    0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 382, 0, 0, 0, 0, 0, 0,
};

void unit_00B0(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003C0000;
    case 2u: goto L_003C0004;
    case 3u: goto L_003C0008;
    case 4u: goto L_003C000C;
    case 5u: goto L_003C0018;
    case 6u: goto L_003C0028;
    case 7u: goto L_003C0030;
    case 8u: goto L_003C0038;
    case 9u: goto L_003C003C;
    case 10u: goto L_003C0040;
    case 11u: goto L_003C0050;
    case 12u: goto L_003C006C;
    case 13u: goto L_003C0078;
    case 14u: goto L_003C0080;
    case 15u: goto L_003C0088;
    case 16u: goto L_003C00AC;
    case 17u: goto L_003C00C4;
    case 18u: goto L_003C00C8;
    case 19u: goto L_003C00D0;
    case 20u: goto L_003C0104;
    case 21u: goto L_003C0134;
    case 22u: goto L_003C0140;
    case 23u: goto L_003C0158;
    case 24u: goto L_003C0168;
    case 25u: goto L_003C0170;
    case 26u: goto L_003C0190;
    case 27u: goto L_003C0198;
    case 28u: goto L_003C01E0;
    case 29u: goto L_003C01E8;
    case 30u: goto L_003C01F4;
    case 31u: goto L_003C021C;
    case 32u: goto L_003C0224;
    case 33u: goto L_003C0230;
    case 34u: goto L_003C0238;
    case 35u: goto L_003C0240;
    case 36u: goto L_003C0268;
    case 37u: goto L_003C0274;
    case 38u: goto L_003C02AC;
    case 39u: goto L_003C02B8;
    case 40u: goto L_003C02D0;
    case 41u: goto L_003C02E0;
    case 42u: goto L_003C0310;
    case 43u: goto L_003C0328;
    case 44u: goto L_003C0340;
    case 45u: goto L_003C03B8;
    case 46u: goto L_003C041C;
    case 47u: goto L_003C0428;
    case 48u: goto L_003C0440;
    case 49u: goto L_003C0470;
    case 50u: goto L_003C047C;
    case 51u: goto L_003C04C8;
    case 52u: goto L_003C04F8;
    case 53u: goto L_003C0534;
    case 54u: goto L_003C0540;
    case 55u: goto L_003C0558;
    case 56u: goto L_003C05A0;
    case 57u: goto L_003C05D0;
    case 58u: goto L_003C0610;
    case 59u: goto L_003C0618;
    case 60u: goto L_003C0664;
    case 61u: goto L_003C0668;
    case 62u: goto L_003C0680;
    case 63u: goto L_003C0688;
    case 64u: goto L_003C06A8;
    case 65u: goto L_003C06B0;
    case 66u: goto L_003C06B8;
    case 67u: goto L_003C06E0;
    case 68u: goto L_003C06E8;
    case 69u: goto L_003C0724;
    case 70u: goto L_003C0730;
    case 71u: goto L_003C0748;
    case 72u: goto L_003C0750;
    case 73u: goto L_003C07A8;
    case 74u: goto L_003C07C8;
    case 75u: goto L_003C07E0;
    case 76u: goto L_003C07E8;
    case 77u: goto L_003C07F0;
    case 78u: goto L_003C07F8;
    case 79u: goto L_003C0800;
    case 80u: goto L_003C0818;
    case 81u: goto L_003C0838;
    case 82u: goto L_003C0848;
    case 83u: goto L_003C0884;
    case 84u: goto L_003C08A0;
    case 85u: goto L_003C08BC;
    case 86u: goto L_003C08C8;
    case 87u: goto L_003C08D4;
    case 88u: goto L_003C08D8;
    case 89u: goto L_003C08F8;
    case 90u: goto L_003C0900;
    case 91u: goto L_003C0920;
    case 92u: goto L_003C0940;
    case 93u: goto L_003C0978;
    case 94u: goto L_003C09A0;
    case 95u: goto L_003C09D4;
    case 96u: goto L_003C09DC;
    case 97u: goto L_003C09E4;
    case 98u: goto L_003C0A08;
    case 99u: goto L_003C0A10;
    case 100u: goto L_003C0A1C;
    case 101u: goto L_003C0A40;
    case 102u: goto L_003C0A78;
    case 103u: goto L_003C0A88;
    case 104u: goto L_003C0AB4;
    case 105u: goto L_003C0ABC;
    case 106u: goto L_003C0AC8;
    case 107u: goto L_003C0AD0;
    case 108u: goto L_003C0AD8;
    case 109u: goto L_003C0AEC;
    case 110u: goto L_003C0AF8;
    case 111u: goto L_003C0B08;
    case 112u: goto L_003C0B28;
    case 113u: goto L_003C0B30;
    case 114u: goto L_003C0B38;
    case 115u: goto L_003C0B40;
    case 116u: goto L_003C0B50;
    case 117u: goto L_003C0BA0;
    case 118u: goto L_003C0BB8;
    case 119u: goto L_003C0BE0;
    case 120u: goto L_003C0BEC;
    case 121u: goto L_003C0C08;
    case 122u: goto L_003C0C24;
    case 123u: goto L_003C0C3C;
    case 124u: goto L_003C0C50;
    case 125u: goto L_003C0C68;
    case 126u: goto L_003C0CB8;
    case 127u: goto L_003C0D00;
    case 128u: goto L_003C0D40;
    case 129u: goto L_003C0D68;
    case 130u: goto L_003C0DC0;
    case 131u: goto L_003C0DC8;
    case 132u: goto L_003C0DD0;
    case 133u: goto L_003C0DD8;
    case 134u: goto L_003C0DF0;
    case 135u: goto L_003C0E10;
    case 136u: goto L_003C0E70;
    case 137u: goto L_003C0E90;
    case 138u: goto L_003C0ECC;
    case 139u: goto L_003C0EF8;
    case 140u: goto L_003C0F00;
    case 141u: goto L_003C0F08;
    case 142u: goto L_003C0F10;
    case 143u: goto L_003C0F20;
    case 144u: goto L_003C0F30;
    case 145u: goto L_003C0F40;
    case 146u: goto L_003C0F50;
    case 147u: goto L_003C0F90;
    case 148u: goto L_003C0FA0;
    case 149u: goto L_003C0FB4;
    case 150u: goto L_003C0FBC;
    case 151u: goto L_003C0FCC;
    case 152u: goto L_003C1010;
    case 153u: goto L_003C1034;
    case 154u: goto L_003C1054;
    case 155u: goto L_003C1078;
    case 156u: goto L_003C1098;
    case 157u: goto L_003C10A0;
    case 158u: goto L_003C10AC;
    case 159u: goto L_003C10B4;
    case 160u: goto L_003C10D4;
    case 161u: goto L_003C10D8;
    case 162u: goto L_003C10E8;
    case 163u: goto L_003C10F0;
    case 164u: goto L_003C10FC;
    case 165u: goto L_003C1104;
    case 166u: goto L_003C1128;
    case 167u: goto L_003C1130;
    case 168u: goto L_003C113C;
    case 169u: goto L_003C1144;
    case 170u: goto L_003C1168;
    case 171u: goto L_003C1178;
    case 172u: goto L_003C1180;
    case 173u: goto L_003C118C;
    case 174u: goto L_003C1194;
    case 175u: goto L_003C11B0;
    case 176u: goto L_003C11C0;
    case 177u: goto L_003C11EC;
    case 178u: goto L_003C1250;
    case 179u: goto L_003C1280;
    case 180u: goto L_003C12C4;
    case 181u: goto L_003C12E0;
    case 182u: goto L_003C12FC;
    case 183u: goto L_003C131C;
    case 184u: goto L_003C133C;
    case 185u: goto L_003C1358;
    case 186u: goto L_003C1470;
    case 187u: goto L_003C14C0;
    case 188u: goto L_003C1508;
    case 189u: goto L_003C1510;
    case 190u: goto L_003C1518;
    case 191u: goto L_003C1520;
    case 192u: goto L_003C152C;
    case 193u: goto L_003C1538;
    case 194u: goto L_003C1550;
    case 195u: goto L_003C159C;
    case 196u: goto L_003C15A8;
    case 197u: goto L_003C15F0;
    case 198u: goto L_003C1600;
    case 199u: goto L_003C1624;
    case 200u: goto L_003C1640;
    case 201u: goto L_003C164C;
    case 202u: goto L_003C1660;
    case 203u: goto L_003C1688;
    case 204u: goto L_003C16A0;
    case 205u: goto L_003C16DC;
    case 206u: goto L_003C1700;
    case 207u: goto L_003C171C;
    case 208u: goto L_003C1740;
    case 209u: goto L_003C1750;
    case 210u: goto L_003C1774;
    case 211u: goto L_003C1788;
    case 212u: goto L_003C17AC;
    case 213u: goto L_003C17C0;
    case 214u: goto L_003C1800;
    case 215u: goto L_003C1810;
    case 216u: goto L_003C1840;
    case 217u: goto L_003C1850;
    case 218u: goto L_003C1860;
    case 219u: goto L_003C18A0;
    case 220u: goto L_003C18C0;
    case 221u: goto L_003C18D0;
    case 222u: goto L_003C1C10;
    case 223u: goto L_003C1C20;
    case 224u: goto L_003C1C30;
    case 225u: goto L_003C1C58;
    case 226u: goto L_003C1C60;
    case 227u: goto L_003C1C70;
    case 228u: goto L_003C1C80;
    case 229u: goto L_003C1CAC;
    case 230u: goto L_003C1CC0;
    case 231u: goto L_003C1CE0;
    case 232u: goto L_003C1CF4;
    case 233u: goto L_003C1D3C;
    case 234u: goto L_003C1D50;
    case 235u: goto L_003C1D88;
    case 236u: goto L_003C1E60;
    case 237u: goto L_003C1E6C;
    case 238u: goto L_003C1E98;
    case 239u: goto L_003C1EB0;
    case 240u: goto L_003C1EF8;
    case 241u: goto L_003C1F0C;
    case 242u: goto L_003C1F10;
    case 243u: goto L_003C1F34;
    case 244u: goto L_003C2028;
    case 245u: goto L_003C2038;
    case 246u: goto L_003C2060;
    case 247u: goto L_003C2108;
    case 248u: goto L_003C2138;
    case 249u: goto L_003C21A0;
    case 250u: goto L_003C221C;
    case 251u: goto L_003C2238;
    case 252u: goto L_003C2248;
    case 253u: goto L_003C22C0;
    case 254u: goto L_003C22E4;
    case 255u: goto L_003C2300;
    case 256u: goto L_003C2318;
    case 257u: goto L_003C2330;
    case 258u: goto L_003C2354;
    case 259u: goto L_003C237C;
    case 260u: goto L_003C239C;
    case 261u: goto L_003C23B8;
    case 262u: goto L_003C23D0;
    case 263u: goto L_003C23EC;
    case 264u: goto L_003C2400;
    case 265u: goto L_003C2408;
    case 266u: goto L_003C2424;
    case 267u: goto L_003C2438;
    case 268u: goto L_003C2440;
    case 269u: goto L_003C245C;
    case 270u: goto L_003C2470;
    case 271u: goto L_003C2478;
    case 272u: goto L_003C2488;
    case 273u: goto L_003C24B0;
    case 274u: goto L_003C24E0;
    case 275u: goto L_003C251C;
    case 276u: goto L_003C2658;
    case 277u: goto L_003C26D8;
    case 278u: goto L_003C2700;
    case 279u: goto L_003C2718;
    case 280u: goto L_003C2740;
    case 281u: goto L_003C2758;
    case 282u: goto L_003C2780;
    case 283u: goto L_003C27A8;
    case 284u: goto L_003C27C0;
    case 285u: goto L_003C27E8;
    case 286u: goto L_003C2808;
    case 287u: goto L_003C2840;
    case 288u: goto L_003C2850;
    case 289u: goto L_003C2870;
    case 290u: goto L_003C2884;
    case 291u: goto L_003C2898;
    case 292u: goto L_003C28B0;
    case 293u: goto L_003C28C0;
    case 294u: goto L_003C28E8;
    case 295u: goto L_003C2920;
    case 296u: goto L_003C2940;
    case 297u: goto L_003C2950;
    case 298u: goto L_003C2974;
    case 299u: goto L_003C29C0;
    case 300u: goto L_003C29E8;
    case 301u: goto L_003C29F8;
    case 302u: goto L_003C2A18;
    case 303u: goto L_003C2A48;
    case 304u: goto L_003C2A74;
    case 305u: goto L_003C2AB0;
    case 306u: goto L_003C2BB0;
    case 307u: goto L_003C2CC0;
    case 308u: goto L_003C2D30;
    case 309u: goto L_003C2E40;
    case 310u: goto L_003C2ED0;
    case 311u: goto L_003C2F7C;
    case 312u: goto L_003C2F90;
    case 313u: goto L_003C3010;
    case 314u: goto L_003C3090;
    case 315u: goto L_003C30B4;
    case 316u: goto L_003C30D0;
    case 317u: goto L_003C30F8;
    case 318u: goto L_003C3100;
    case 319u: goto L_003C319C;
    case 320u: goto L_003C31AC;
    case 321u: goto L_003C31D0;
    case 322u: goto L_003C31F0;
    case 323u: goto L_003C3200;
    case 324u: goto L_003C3220;
    case 325u: goto L_003C3260;
    case 326u: goto L_003C3270;
    case 327u: goto L_003C32A0;
    case 328u: goto L_003C32B8;
    case 329u: goto L_003C32D0;
    case 330u: goto L_003C32E0;
    case 331u: goto L_003C3300;
    case 332u: goto L_003C3310;
    case 333u: goto L_003C3328;
    case 334u: goto L_003C3340;
    case 335u: goto L_003C3420;
    case 336u: goto L_003C3580;
    case 337u: goto L_003C35D0;
    case 338u: goto L_003C3710;
    case 339u: goto L_003C3760;
    case 340u: goto L_003C37C0;
    case 341u: goto L_003C3818;
    case 342u: goto L_003C3860;
    case 343u: goto L_003C3914;
    case 344u: goto L_003C3938;
    case 345u: goto L_003C3948;
    case 346u: goto L_003C3984;
    case 347u: goto L_003C399C;
    case 348u: goto L_003C39E4;
    case 349u: goto L_003C3A34;
    case 350u: goto L_003C3A64;
    case 351u: goto L_003C3AAC;
    case 352u: goto L_003C3AE0;
    case 353u: goto L_003C3AFC;
    case 354u: goto L_003C3B10;
    case 355u: goto L_003C3B4C;
    case 356u: goto L_003C3B70;
    case 357u: goto L_003C3B9C;
    case 358u: goto L_003C3BD0;
    case 359u: goto L_003C3C00;
    case 360u: goto L_003C3C34;
    case 361u: goto L_003C3C48;
    case 362u: goto L_003C3C5C;
    case 363u: goto L_003C3C80;
    case 364u: goto L_003C3CAC;
    case 365u: goto L_003C3CF8;
    case 366u: goto L_003C3D20;
    case 367u: goto L_003C3D5C;
    case 368u: goto L_003C3D98;
    case 369u: goto L_003C3DB0;
    case 370u: goto L_003C3DE0;
    case 371u: goto L_003C3E20;
    case 372u: goto L_003C3E3C;
    case 373u: goto L_003C3E48;
    case 374u: goto L_003C3E80;
    case 375u: goto L_003C3F28;
    case 376u: goto L_003C3F48;
    case 377u: goto L_003C3F60;
    case 378u: goto L_003C3F74;
    case 379u: goto L_003C3F8C;
    case 380u: goto L_003C3FB0;
    case 381u: goto L_003C3FDC;
    case 382u: goto L_003C3FE4;
    default: bad_entry(c, 0x003C0000u); return;
    }
L_003C0000:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.budget -= 1;
L_003C0004:
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.budget -= 1;
L_003C0008:
    c.f[0] = c.r[3].w[0];
    c.budget -= 1;
L_003C000C:
    c.f[1] = fp::sub(c.f[2], c.f[20]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 3;
L_003C0018:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 36u), c.f[0]);  if (t) { goto L_003C0328; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.f[20]);  if (t) { goto L_003C0328; } }
    goto L_003C002C;
L_003C0028:
    st32((c.r[16].w[0] + 36u), c.f[20]);
    c.budget -= 1;
L_003C002C:
    c.budget -= 1;
L_003C0030:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003C0038:
    c.f[12] = 0u;
    c.budget -= 1;
L_003C003C:
    set32(c.r[2], 0u + 19u);
    c.budget -= 1;
L_003C0040:
    st8((c.r[16].w[0] + 711u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.budget -= 4;
L_003C0050:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] - 14304u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], c.r[7].w[0] << 1);
    c.budget -= 7;
L_003C006C:
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
L_003C0078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0080u); set32(c.r[6], 0u + 29u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x003C0080u) [[unlikely]] return; }
L_003C0080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0088u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x003C0088u) [[unlikely]] return; }
L_003C0088:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8326u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C0328; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 23u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C00ACu); st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0039(c, 251u, depth + 1u); else { c.pc = 0x001E7BE0u; return; } if (c.pc != 0x003C00ACu) [[unlikely]] return; }
L_003C00AC:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 29u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C00C4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x003C00C4u) [[unlikely]] return; }
L_003C00C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C0328; } }
    goto L_003C00CC;
L_003C00C8:
    c.budget -= 1;
L_003C00CC:
    c.budget -= 1;
L_003C00D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[20]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 36u), c.f[0]);  if (t) { goto L_003C00F8; } }
    st32((c.r[16].w[0] + 36u), c.f[20]);
    c.budget -= 1;
L_003C00F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0104u); set32(c.r[5], 0u + 33u);  if (depth < kMaxDepth) unit_003A(c, 27u, depth + 1u); else { c.pc = 0x001E89E0u; return; } if (c.pc != 0x003C0104u) [[unlikely]] return; }
L_003C0104:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C0328; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 23u)));
    set32(c.r[2], 0u + 33u);
    set32(c.r[5], 0u + 8u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 851u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0134u); st32((c.r[16].w[0] + 36u), c.f[20]);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x003C0134u) [[unlikely]] return; }
L_003C0134:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0140u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_003A(c, 68u, depth + 1u); else { c.pc = 0x001E9DF0u; return; } if (c.pc != 0x003C0140u) [[unlikely]] return; }
L_003C0140:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0158u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x003C0158u) [[unlikely]] return; }
L_003C0158:
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 848u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003C0328; } }
    c.budget -= 1;
L_003C0168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0170u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x003C0170u) [[unlikely]] return; }
L_003C0170:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C0328; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 23u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003C0328; } }
    c.budget -= 1;
L_003C0190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0198u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x003C0198u) [[unlikely]] return; }
L_003C0198:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C0328; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 23u)));
    set32(c.r[3], 0u + 21u);
    set32(c.r[2], 0u + 33u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 16u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 711u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C01E0u); st8((c.r[16].w[0] + 851u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0039(c, 251u, depth + 1u); else { c.pc = 0x001E7BE0u; return; } if (c.pc != 0x003C01E0u) [[unlikely]] return; }
L_003C01E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C0328; } }
L_003C01E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C01F4u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_003A(c, 27u, depth + 1u); else { c.pc = 0x001E89E0u; return; } if (c.pc != 0x003C01F4u) [[unlikely]] return; }
L_003C01F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C0328; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 23u)));
    set32(c.r[3], 0u + 20u);
    set32(c.r[2], 0u + 7u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 36u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 851u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_003C021C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0224u); st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x003C0224u) [[unlikely]] return; }
L_003C0224:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0230u); set32(c.r[5], 0u + 36u);  if (depth < kMaxDepth) unit_003A(c, 68u, depth + 1u); else { c.pc = 0x001E9DF0u; return; } if (c.pc != 0x003C0230u) [[unlikely]] return; }
L_003C0230:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C0328; } }
L_003C0238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0240u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x003C0240u) [[unlikely]] return; }
L_003C0240:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C0328; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 23u)));
    set32(c.r[2], 0u + 21u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_003C0268:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0274u); set32(c.r[5], 0u + 34u);  if (depth < kMaxDepth) unit_003A(c, 27u, depth + 1u); else { c.pc = 0x001E89E0u; return; } if (c.pc != 0x003C0274u) [[unlikely]] return; }
L_003C0274:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C0328; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 23u)));
    set32(c.r[6], 0u + 34u);
    set32(c.r[3], 0u + 7u);
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 851u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C02ACu); st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x003C02ACu) [[unlikely]] return; }
L_003C02AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C02B8u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_003A(c, 68u, depth + 1u); else { c.pc = 0x001E9DF0u; return; } if (c.pc != 0x003C02B8u) [[unlikely]] return; }
L_003C02B8:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C02D0u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x003C02D0u) [[unlikely]] return; }
L_003C02D0:
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 848u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003C0328; } }
    c.budget -= 1;
L_003C02E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[20]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 36u), c.f[0]);  if (t) { goto L_003C0308; } }
    st32((c.r[16].w[0] + 36u), c.f[20]);
    c.budget -= 1;
L_003C0308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0310u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x003C0310u) [[unlikely]] return; }
L_003C0310:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C0328; } }
    st32((c.r[16].w[0] + 36u), c.f[20]);
    set32(c.r[3], 0u + 13u);
    st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_003C0328:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C0340:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] + 20096u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[3], 0u + 4u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[4].w[0] + 8u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 23u)));
    set32(c.r[4], c.r[7].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 16;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.f[20] = ld32((c.r[4].w[0]));  if (t) { goto L_003C0598; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_003C04F0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003C04C0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003C0438; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003C03B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C05B8; } }
L_003C03B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C03B8u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x003C03B8u) [[unlikely]] return; }
L_003C03B8:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C05B8; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 23u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], 0u + 19u);
    set32(c.r[2], c.r[2].w[0] - 14304u);
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[7].d[0] = c.r[7].d[0] | 4096ull;
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 711u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C041Cu); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x003C041Cu) [[unlikely]] return; }
L_003C041C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0428u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 251u, depth + 1u); else { c.pc = 0x001E7BE0u; return; } if (c.pc != 0x003C0428u) [[unlikely]] return; }
L_003C0428:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_003C05B8; } }
    c.budget -= 1;
L_003C0438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0440u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 258u, depth + 1u); else { c.pc = 0x001E7EA0u; return; } if (c.pc != 0x003C0440u) [[unlikely]] return; }
L_003C0440:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C0480; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 23u)));
    set32(c.r[3], 0u + 20u);
    set32(c.r[2], 0u + 17u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 36u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0470u); st8((c.r[16].w[0] + 851u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x003C0470u) [[unlikely]] return; }
L_003C0470:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C047Cu); set32(c.r[5], 0u + 36u);  if (depth < kMaxDepth) unit_003A(c, 68u, depth + 1u); else { c.pc = 0x001E9DF0u; return; } if (c.pc != 0x003C047Cu) [[unlikely]] return; }
L_003C047C:
    c.budget -= 1;
L_003C0480:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F7A0000u);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.r[3].d[0] = c.r[3].d[0] | 57672ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[3].w[0] + 52u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 36u), c.f[0]);  if (t) { goto L_003C05B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.f[20]);  if (t) { goto L_003C05B8; } }
L_003C04C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C04C8u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x003C04C8u) [[unlikely]] return; }
L_003C04C8:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C05B8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 23u)));
    set32(c.r[2], 0u + 21u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 711u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_003C04F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C04F8u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_003A(c, 8u, depth + 1u); else { c.pc = 0x001E8260u; return; } if (c.pc != 0x003C04F8u) [[unlikely]] return; }
L_003C04F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C0558; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 23u)));
    set32(c.r[3], 0u + 7u);
    set32(c.r[2], 0u - 4097u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 851u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0534u); st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x003C0534u) [[unlikely]] return; }
L_003C0534:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0540u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 68u, depth + 1u); else { c.pc = 0x001E9DF0u; return; } if (c.pc != 0x003C0540u) [[unlikely]] return; }
L_003C0540:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0558u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x003C0558u) [[unlikely]] return; }
L_003C0558:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[20]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[3].w[0] + 52u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 36u), c.f[0]);  if (t) { goto L_003C05B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.f[20]);  if (t) { goto L_003C05B8; } }
L_003C0598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C05A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x003C05A0u) [[unlikely]] return; }
L_003C05A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C05B8; } }
    st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 36u), c.f[20]);
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_003C05B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C05D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 23u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003C0738; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 4032u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003C0000u < 16384u) { entry = entries_00B0[(t - 0x003C0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003C0610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0618u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x003C0618u) [[unlikely]] return; }
L_003C0618:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C0738; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 23u)));
    set32(c.r[2], 0u + 19u);
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 12u);
    set32(c.r[7], 0u + 5u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 711u), static_cast<std::uint8_t>(0u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0664u); st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x003C0664u) [[unlikely]] return; }
L_003C0664:
    c.budget -= 1;
L_003C0668:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 23u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0680u); st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0039(c, 251u, depth + 1u); else { c.pc = 0x001E7BE0u; return; } if (c.pc != 0x003C0680u) [[unlikely]] return; }
L_003C0680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0688u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0039(c, 258u, depth + 1u); else { c.pc = 0x001E7EA0u; return; } if (c.pc != 0x003C0688u) [[unlikely]] return; }
L_003C0688:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C0738; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 23u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 22u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C06A8u); st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x003C06A8u) [[unlikely]] return; }
L_003C06A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C0738; } }
L_003C06B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C06B8u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x003C06B8u) [[unlikely]] return; }
L_003C06B8:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C0738; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 23u)));
    set32(c.r[2], 0u + 21u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 711u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_003C06E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C06E8u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_003A(c, 8u, depth + 1u); else { c.pc = 0x001E8260u; return; } if (c.pc != 0x003C06E8u) [[unlikely]] return; }
L_003C06E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C0738; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 23u)));
    set32(c.r[3], 0u + 7u);
    set32(c.r[2], 0u - 4097u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 851u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0724u); st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0056(c, 325u, depth + 1u); else { c.pc = 0x0025BE30u; return; } if (c.pc != 0x003C0724u) [[unlikely]] return; }
L_003C0724:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C0738; } }
    c.budget -= 1;
L_003C0730:
    st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003C0738:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C0748:
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 1;
    c.pc = 0x003C074Cu; [[clang::musttail]] return dispatch(c, 0u, depth);
L_003C0750:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003C08D0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_003C0840; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C0810; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C07C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C07A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C08F0; } }
L_003C07A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C07A8u);  if (depth < kMaxDepth) unit_0045(c, 81u, depth + 1u); else { c.pc = 0x00214AA0u; return; } if (c.pc != 0x003C07A8u) [[unlikely]] return; }
L_003C07A8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003C0900; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_003C07C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C07C8u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x003C07C8u) [[unlikely]] return; }
L_003C07C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C0900; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C07E0u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x003C07E0u) [[unlikely]] return; }
L_003C07E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C07E8u);  if (depth < kMaxDepth) unit_006A(c, 136u, depth + 1u); else { c.pc = 0x002A9F70u; return; } if (c.pc != 0x003C07E8u) [[unlikely]] return; }
L_003C07E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C07F0u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x003C07F0u) [[unlikely]] return; }
L_003C07F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C07F8u);  if (depth < kMaxDepth) unit_000B(c, 24u, depth + 1u); else { c.pc = 0x0012C850u; return; } if (c.pc != 0x003C07F8u) [[unlikely]] return; }
L_003C07F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0800u);  if (depth < kMaxDepth) unit_00BE(c, 115u, depth + 1u); else { c.pc = 0x003F9E10u; return; } if (c.pc != 0x003C0800u) [[unlikely]] return; }
L_003C0800:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003C08F0; } }
L_003C0810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0818u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x003C0818u) [[unlikely]] return; }
L_003C0818:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C08F0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0838u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8068u)));  if (depth < kMaxDepth) unit_00BE(c, 135u, depth + 1u); else { c.pc = 0x003F9FF0u; return; } if (c.pc != 0x003C0838u) [[unlikely]] return; }
L_003C0838:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C08F0; } }
L_003C0840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0848u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_00BE(c, 114u, depth + 1u); else { c.pc = 0x003F9DE0u; return; } if (c.pc != 0x003C0848u) [[unlikely]] return; }
L_003C0848:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C08F0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 54u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 21u));
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], ld32((c.r[1].w[0] + 8880u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0884u); set32(c.r[7], 0u + 16u);  if (depth < kMaxDepth) unit_004B(c, 96u, depth + 1u); else { c.pc = 0x0022D4F0u; return; } if (c.pc != 0x003C0884u) [[unlikely]] return; }
L_003C0884:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8068u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] + 8120u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C08A0u); set32(c.r[4], c.r[2].w[0] + 2u);  if (depth < kMaxDepth) unit_00C2(c, 172u, depth + 1u); else { c.pc = 0x00409CF0u; return; } if (c.pc != 0x003C08A0u) [[unlikely]] return; }
L_003C08A0:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[2].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C08BCu); set32(c.r[5], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_00C2(c, 348u, depth + 1u); else { c.pc = 0x0040B5F0u; return; } if (c.pc != 0x003C08BCu) [[unlikely]] return; }
L_003C08BC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C08C8u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x003C08C8u) [[unlikely]] return; }
L_003C08C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C08F0; } }
L_003C08D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C08D8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x003C08D8u) [[unlikely]] return; }
    goto L_003C08D8;
L_003C08D4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C08D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C08F0; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_003C08F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C08F8u);  if (depth < kMaxDepth) unit_00BE(c, 258u, depth + 1u); else { c.pc = 0x003FB360u; return; } if (c.pc != 0x003C08F8u) [[unlikely]] return; }
L_003C08F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0900u);  if (depth < kMaxDepth) unit_00BE(c, 266u, depth + 1u); else { c.pc = 0x003FB3B0u; return; } if (c.pc != 0x003C0900u) [[unlikely]] return; }
L_003C0900:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C0920:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[2], c.r[2].w[0] + 25392u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003C0000u < 16384u) { entry = entries_00B0[(t - 0x003C0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003C0940:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003C0998; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C0970; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C0A28; } }
L_003C0970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0978u);  if (depth < kMaxDepth) unit_0045(c, 81u, depth + 1u); else { c.pc = 0x00214AA0u; return; } if (c.pc != 0x003C0978u) [[unlikely]] return; }
L_003C0978:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003C0A28; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003C0A28; } }
    c.budget -= 1;
L_003C0998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C09A0u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x003C09A0u) [[unlikely]] return; }
L_003C09A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C0A28; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C09D4u); st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x003C09D4u) [[unlikely]] return; }
L_003C09D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C09DCu);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x003C09DCu) [[unlikely]] return; }
L_003C09DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C09E4u);  if (depth < kMaxDepth) unit_000B(c, 24u, depth + 1u); else { c.pc = 0x0012C850u; return; } if (c.pc != 0x003C09E4u) [[unlikely]] return; }
L_003C09E4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[16].w[0] + 28u);
    st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 31u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 30u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 29u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0A08u); st32((c.r[28].w[0] - 23888u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BE(c, 200u, depth + 1u); else { c.pc = 0x003FA7C0u; return; } if (c.pc != 0x003C0A08u) [[unlikely]] return; }
L_003C0A08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0A10u);  if (depth < kMaxDepth) unit_0047(c, 286u, depth + 1u); else { c.pc = 0x0021FF00u; return; } if (c.pc != 0x003C0A10u) [[unlikely]] return; }
L_003C0A10:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0A1Cu); set32(c.r[4], c.r[2].w[0] + 105u);  if (depth < kMaxDepth) unit_00BE(c, 160u, depth + 1u); else { c.pc = 0x003FA3A0u; return; } if (c.pc != 0x003C0A1Cu) [[unlikely]] return; }
L_003C0A1C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 54u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
L_003C0A28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C0A40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003C0B00; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C0A70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C0B40; } }
L_003C0A70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0A78u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x003C0A78u) [[unlikely]] return; }
L_003C0A78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C0A90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0A88u);  if (depth < kMaxDepth) unit_00BE(c, 174u, depth + 1u); else { c.pc = 0x003FA530u; return; } if (c.pc != 0x003C0A88u) [[unlikely]] return; }
L_003C0A88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C0A98; } }
L_003C0A90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C0B40; } }
L_003C0A98:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[4], c.r[16].w[0] + 12u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0AB4u); st8((c.r[2].w[0] + 54u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00BE(c, 320u, depth + 1u); else { c.pc = 0x003FB9C0u; return; } if (c.pc != 0x003C0AB4u) [[unlikely]] return; }
L_003C0AB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0ABCu); st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0048(c, 9u, depth + 1u); else { c.pc = 0x00220020u; return; } if (c.pc != 0x003C0ABCu) [[unlikely]] return; }
L_003C0ABC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0AC8u); set32(c.r[4], c.r[2].w[0] + 105u);  if (depth < kMaxDepth) unit_00BE(c, 211u, depth + 1u); else { c.pc = 0x003FA900u; return; } if (c.pc != 0x003C0AC8u) [[unlikely]] return; }
L_003C0AC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0AD0u);  if (depth < kMaxDepth) unit_00BE(c, 208u, depth + 1u); else { c.pc = 0x003FA8B0u; return; } if (c.pc != 0x003C0AD0u) [[unlikely]] return; }
L_003C0AD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0AD8u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00B0(c, 134u, depth + 1u); else { c.pc = 0x003C0DF0u; return; } if (c.pc != 0x003C0AD8u) [[unlikely]] return; }
L_003C0AD8:
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8068u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0AECu); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 13u)));  if (depth < kMaxDepth) unit_00C0(c, 318u, depth + 1u); else { c.pc = 0x00403830u; return; } if (c.pc != 0x003C0AECu) [[unlikely]] return; }
L_003C0AEC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0AF8u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x003C0AF8u) [[unlikely]] return; }
L_003C0AF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C0B40; } }
L_003C0B00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0B08u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x003C0B08u) [[unlikely]] return; }
L_003C0B08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C0B20; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_003C0B20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0B28u);  if (depth < kMaxDepth) unit_00BE(c, 230u, depth + 1u); else { c.pc = 0x003FAF60u; return; } if (c.pc != 0x003C0B28u) [[unlikely]] return; }
L_003C0B28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0B30u);  if (depth < kMaxDepth) unit_0045(c, 88u, depth + 1u); else { c.pc = 0x00214D60u; return; } if (c.pc != 0x003C0B30u) [[unlikely]] return; }
L_003C0B30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0B38u);  if (depth < kMaxDepth) unit_00BE(c, 258u, depth + 1u); else { c.pc = 0x003FB360u; return; } if (c.pc != 0x003C0B38u) [[unlikely]] return; }
L_003C0B38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0B40u);  if (depth < kMaxDepth) unit_00BE(c, 266u, depth + 1u); else { c.pc = 0x003FB3B0u; return; } if (c.pc != 0x003C0B40u) [[unlikely]] return; }
L_003C0B40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C0B50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 3u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_003C0D98; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C0D60; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C0D38; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C0B98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C0DB8; } }
L_003C0B98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0BA0u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x003C0BA0u) [[unlikely]] return; }
L_003C0BA0:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C0C00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0BB8u);  if (depth < kMaxDepth) unit_00AB(c, 337u, depth + 1u); else { c.pc = 0x003AFBD0u; return; } if (c.pc != 0x003C0BB8u) [[unlikely]] return; }
L_003C0BB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C0C00; } }
    set32(c.r[2], 0u + 3u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 165u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 20u));
    c.r[2].d[0] = c.r[2].d[0] & 253ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0BE0u); st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003C0BE0u) [[unlikely]] return; }
L_003C0BE0:
    set32(c.r[4], 0u + 15u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0BECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 172u, depth + 1u); else { c.pc = 0x00409CF0u; return; } if (c.pc != 0x003C0BECu) [[unlikely]] return; }
L_003C0BEC:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 8075u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003C0DB8; } }
    c.budget -= 1;
L_003C0C00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0C08u);  if (depth < kMaxDepth) unit_00BE(c, 241u, depth + 1u); else { c.pc = 0x003FB050u; return; } if (c.pc != 0x003C0C08u) [[unlikely]] return; }
L_003C0C08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C0C30; } }
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0C24u); set32(c.r[5], 0u + 167u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003C0C24u) [[unlikely]] return; }
L_003C0C24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C0DB8; } }
    c.budget -= 1;
L_003C0C30:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0C3Cu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_00BE(c, 242u, depth + 1u); else { c.pc = 0x003FB060u; return; } if (c.pc != 0x003C0C3Cu) [[unlikely]] return; }
L_003C0C3C:
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 19u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0C50u); set32(c.r[6], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_00BE(c, 243u, depth + 1u); else { c.pc = 0x003FB0D0u; return; } if (c.pc != 0x003C0C50u) [[unlikely]] return; }
L_003C0C50:
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003C0CB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0C68u); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003C0C68u) [[unlikely]] return; }
L_003C0C68:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], c.r[3].w[0] + 8064u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2052u)));
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 13u)));
    set32(c.r[3], ld32((c.r[1].w[0] + 18036u)));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1u));
    c.r[3].d[0] = c.r[3].d[0] & 127ull;
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003C0DB8; } }
    c.budget -= 1;
L_003C0CB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0CB8u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x003C0CB8u) [[unlikely]] return; }
L_003C0CB8:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C0CE8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 20u));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 254ull;  if (t) { goto L_003C0CE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003C0CE8; } }
L_003C0CE0:
    c.r[2].d[0] = c.r[3].d[0] | 1ull;
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003C0CE8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 20u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_003C0DB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0D00u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x003C0D00u) [[unlikely]] return; }
L_003C0D00:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C0DB8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 20u));
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 253ull;  if (t) { goto L_003C0D28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003C0DB8; } }
L_003C0D28:
    c.r[2].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003C0DB8; } }
    c.budget -= 1;
L_003C0D38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0D40u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x003C0D40u) [[unlikely]] return; }
L_003C0D40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C0DB8; } }
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003C0DB8; } }
L_003C0D60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0D68u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x003C0D68u) [[unlikely]] return; }
L_003C0D68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C0DB8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003C0DB8; } }
    c.budget -= 1;
L_003C0D98:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8075u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C0DB8; } }
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 20u));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_003C0DB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0DC0u);  if (depth < kMaxDepth) unit_00BE(c, 230u, depth + 1u); else { c.pc = 0x003FAF60u; return; } if (c.pc != 0x003C0DC0u) [[unlikely]] return; }
L_003C0DC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0DC8u);  if (depth < kMaxDepth) unit_0045(c, 88u, depth + 1u); else { c.pc = 0x00214D60u; return; } if (c.pc != 0x003C0DC8u) [[unlikely]] return; }
L_003C0DC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0DD0u);  if (depth < kMaxDepth) unit_00BE(c, 258u, depth + 1u); else { c.pc = 0x003FB360u; return; } if (c.pc != 0x003C0DD0u) [[unlikely]] return; }
L_003C0DD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0DD8u);  if (depth < kMaxDepth) unit_00BE(c, 266u, depth + 1u); else { c.pc = 0x003FB3B0u; return; } if (c.pc != 0x003C0DD8u) [[unlikely]] return; }
L_003C0DD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C0DF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0E10u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x003C0E10u) [[unlikely]] return; }
L_003C0E10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C0E60; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[5], 0u + 16u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 3696u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    st8((c.r[2].w[0] + 268u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    st8((c.r[2].w[0] + 270u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[2].w[0] + 264u), c.r[2].w[0]);
    st8((c.r[2].w[0] + 269u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 18;
L_003C0E60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C0E70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[2], c.r[2].w[0] + 25520u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003C0000u < 16384u) { entry = entries_00B0[(t - 0x003C0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003C0E90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 28368u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0ECCu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x003C0ECCu) [[unlikely]] return; }
L_003C0ECC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[2], c.r[2].w[0] + 25408u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0EF8u); set32(c.r[4], c.r[2].w[0] + 105u);  if (depth < kMaxDepth) unit_00BE(c, 239u, depth + 1u); else { c.pc = 0x003FB010u; return; } if (c.pc != 0x003C0EF8u) [[unlikely]] return; }
L_003C0EF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0F00u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x003C0F00u) [[unlikely]] return; }
L_003C0F00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0F08u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x003C0F08u) [[unlikely]] return; }
L_003C0F08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0F10u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x003C0F10u) [[unlikely]] return; }
L_003C0F10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C0F20:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003C0F30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003C0F40:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_003C0F50:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 5520u)));
    c.r[1].d[0] = 0ll < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] - 7712u);  if (t) { goto L_003C0FE8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C0F90:
    set32(c.r[4], ld32((c.r[20].w[0] + 184u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 4;
L_003C0FA0:
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[17].w[0] + 16u);  if (t) { goto L_003C0FD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0FB4u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003C0FB4u) [[unlikely]] return; }
L_003C0FB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0FBCu); set32(c.r[4], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x003C0FBCu) [[unlikely]] return; }
L_003C0FBC:
    set32(c.r[2], ld32((c.r[20].w[0] + 184u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0FCCu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x003C0FCCu) [[unlikely]] return; }
L_003C0FCC:
    c.budget -= 1;
L_003C0FD0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 240u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C0F90u | kUnwind; return; } goto L_003C0F90; } }
    c.budget -= 1;
L_003C0FE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003C1010:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00900000u);
    set32(c.r[4], c.r[17].w[0] + 192u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1034u); set32(c.r[16], c.r[16].w[0] - 7712u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003C1034u) [[unlikely]] return; }
L_003C1034:
    set32(c.r[4], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003C1058; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1054u);  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x003C1054u) [[unlikely]] return; }
L_003C1054:
    c.budget -= 1;
L_003C1058:
    set32(c.r[4], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003C1078; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1078u);  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x003C1078u) [[unlikely]] return; }
L_003C1078:
    set32(c.r[4], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003C10B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1098u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x003C1098u) [[unlikely]] return; }
L_003C1098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C10A0u); set32(c.r[4], c.r[16].w[0] + 496u);  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x003C10A0u) [[unlikely]] return; }
L_003C10A0:
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C10ACu); set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x003C10ACu) [[unlikely]] return; }
L_003C10AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C10B4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x003C10B4u) [[unlikely]] return; }
L_003C10B4:
    c.budget -= 1;
L_003C10B8:
    set32(c.r[4], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003C1108; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C10D8u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x003C10D8u) [[unlikely]] return; }
    goto L_003C10D8;
L_003C10D4:
    c.budget -= 1;
L_003C10D8:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[16].w[0] + 496u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C10E8u); set32(c.r[6], c.r[16].w[0] + 736u);  if (depth < kMaxDepth) unit_0000(c, 215u, depth + 1u); else { c.pc = 0x00102180u; return; } if (c.pc != 0x003C10E8u) [[unlikely]] return; }
L_003C10E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C10F0u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x003C10F0u) [[unlikely]] return; }
L_003C10F0:
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C10FCu); set32(c.r[4], ld32((c.r[2].w[0] + 12u)));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x003C10FCu) [[unlikely]] return; }
L_003C10FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1104u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x003C1104u) [[unlikely]] return; }
L_003C1104:
    c.budget -= 1;
L_003C1108:
    set32(c.r[4], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003C1148; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1128u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x003C1128u) [[unlikely]] return; }
L_003C1128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1130u); set32(c.r[4], c.r[16].w[0] + 976u);  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x003C1130u) [[unlikely]] return; }
L_003C1130:
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C113Cu); set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x003C113Cu) [[unlikely]] return; }
L_003C113C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1144u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x003C1144u) [[unlikely]] return; }
L_003C1144:
    c.budget -= 1;
L_003C1148:
    set32(c.r[4], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003C1198; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1168u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x003C1168u) [[unlikely]] return; }
L_003C1168:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[16].w[0] + 976u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1178u); set32(c.r[6], c.r[16].w[0] + 1216u);  if (depth < kMaxDepth) unit_0000(c, 215u, depth + 1u); else { c.pc = 0x00102180u; return; } if (c.pc != 0x003C1178u) [[unlikely]] return; }
L_003C1178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1180u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x003C1180u) [[unlikely]] return; }
L_003C1180:
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C118Cu); set32(c.r[4], ld32((c.r[2].w[0] + 20u)));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x003C118Cu) [[unlikely]] return; }
L_003C118C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1194u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x003C1194u) [[unlikely]] return; }
L_003C1194:
    c.budget -= 1;
L_003C1198:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003C11B0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD570u | kUnwind; return; } [[clang::musttail]] return unit_006F(c, 117u, depth); }
L_003C11C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003C1240; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26444u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C11ECu); set32(c.r[6], 0u + 148u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003C11ECu) [[unlikely]] return; }
L_003C11EC:
    set32(c.r[6], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_003C1240; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 23u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003C1240; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 25u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_003C1240; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 31u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_003C1240; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_003C1240; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26444u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_003C1240:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C1250:
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 3u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003C1270; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26444u)));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
L_003C1270:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C1280:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], c.r[18].w[0] - 27856u);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 26444u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 15;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[19], c.r[5].w[0] + 92u);  if (t) { goto L_003C1498; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C12C4u);  if (depth < kMaxDepth) unit_00AC(c, 4u, depth + 1u); else { c.pc = 0x003B0010u; return; } if (c.pc != 0x003C12C4u) [[unlikely]] return; }
L_003C12C4:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 26444u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 56u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_003C12E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26444u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[3].w[0] + 5u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C12FCu); set32(c.r[5], c.r[2].w[0] + 161u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x003C12FCu) [[unlikely]] return; }
L_003C12FC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26444u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[3].w[0] + 47u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C131Cu); set32(c.r[5], c.r[2].w[0] + 120u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x003C131Cu) [[unlikely]] return; }
L_003C131C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26444u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[3].w[0] + 51u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C133Cu); set32(c.r[5], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x003C133Cu) [[unlikely]] return; }
L_003C133C:
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 21u);
    c.r[3].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C12E0u | kUnwind; return; } goto L_003C12E0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003C1358:
    set32(c.r[4], ld32((c.r[28].w[0] - 26444u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[16].w[0] & 31u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C1480; } }
    c.r[4].d[0] = ld16((c.r[18].w[0] + 1540u));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[19].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[18].w[0] + 1538u));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[19].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[18].w[0] + 1534u));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 10u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[19].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[18].w[0] + 1532u));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[19].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[18].w[0] + 1536u));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 12u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1564u)));
    c.budget -= 23;
    { const bool t = c.r[4].sd[0] <= 0; set32(c.r[2], c.r[18].w[0] + 1520u);  if (t) { goto L_003C13E8; } }
    set32(c.r[3], 0u + 6u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[4], c.r[19].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 14u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 14u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_003C13E8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].d[0] = ld16((c.r[19].w[0] + 20u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st16((c.r[19].w[0] + 20u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.r[4].d[0] = ld16((c.r[19].w[0] + 22u));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st16((c.r[19].w[0] + 22u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));
    c.r[4].d[0] = ld16((c.r[19].w[0] + 20u));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st16((c.r[19].w[0] + 20u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 7u)));
    c.r[4].d[0] = ld16((c.r[19].w[0] + 22u));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st16((c.r[19].w[0] + 22u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 159u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 25;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C1458; } }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[19].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003C1458:
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[19].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1470u); set32(c.r[4], ld32((c.r[19].w[0] + 24u)));  if (depth < kMaxDepth) unit_0076(c, 300u, depth + 1u); else { c.pc = 0x002DBB40u; return; } if (c.pc != 0x003C1470u) [[unlikely]] return; }
L_003C1470:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003C1480:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + 28u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C1358u | kUnwind; return; } goto L_003C1358; } }
    c.budget -= 1;
L_003C1498:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003C14C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003C14E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C1540; } }
L_003C14E8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[2], c.r[2].w[0] + 25536u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1508u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C1508u) [[unlikely]] return; }
L_003C1508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1510u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x003C1510u) [[unlikely]] return; }
L_003C1510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1518u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x003C1518u) [[unlikely]] return; }
L_003C1518:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1520u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x003C1520u) [[unlikely]] return; }
L_003C1520:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C152Cu); set32(c.r[4], c.r[4].w[0] - 15136u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x003C152Cu) [[unlikely]] return; }
L_003C152C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1538u); set32(c.r[4], c.r[4].w[0] - 15024u);  if (depth < kMaxDepth) unit_0043(c, 416u, depth + 1u); else { c.pc = 0x0020FEF0u; return; } if (c.pc != 0x003C1538u) [[unlikely]] return; }
L_003C1538:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_003C1540:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C1550:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], c.r[3].w[0] + 4u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003C1658; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C15A0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C1590; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C1688; } }
    c.budget -= 1;
L_003C1590:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C159Cu); st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0044(c, 99u, depth + 1u); else { c.pc = 0x00210880u; return; } if (c.pc != 0x003C159Cu) [[unlikely]] return; }
L_003C159C:
    c.budget -= 1;
L_003C15A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C15A8u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x003C15A8u) [[unlikely]] return; }
L_003C15A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C1688; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26444u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26444u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C1638; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C15F0u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x003C15F0u) [[unlikely]] return; }
L_003C15F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26444u)));
    c.r[16].d[0] = 0ull + 0ull;
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_003C1600:
    set32(c.r[3], ld32((c.r[28].w[0] - 26444u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << (c.r[16].w[0] & 31u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003C1628; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1624u);  if (depth < kMaxDepth) unit_00B0(c, 274u, depth + 1u); else { c.pc = 0x003C24E0u; return; } if (c.pc != 0x003C1624u) [[unlikely]] return; }
L_003C1624:
    c.budget -= 1;
L_003C1628:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C1600u | kUnwind; return; } goto L_003C1600; } }
L_003C1638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1640u);  if (depth < kMaxDepth) unit_00B0(c, 216u, depth + 1u); else { c.pc = 0x003C1840u; return; } if (c.pc != 0x003C1640u) [[unlikely]] return; }
L_003C1640:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C164Cu); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x003C164Cu) [[unlikely]] return; }
L_003C164C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C1688; } }
    c.budget -= 1;
L_003C1658:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1660u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x003C1660u) [[unlikely]] return; }
L_003C1660:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C1688; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 46u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1688u); st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004E(c, 35u, depth + 1u); else { c.pc = 0x002382B0u; return; } if (c.pc != 0x003C1688u) [[unlikely]] return; }
L_003C1688:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C16A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26444u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C1708; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_003C16D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C16D4; } }
L_003C16D0:
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_003C16D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C16DCu);  if (depth < kMaxDepth) unit_0049(c, 381u, depth + 1u); else { c.pc = 0x002276D0u; return; } if (c.pc != 0x003C16DCu) [[unlikely]] return; }
L_003C16DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C17B0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 165u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1700u); st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003C1700u) [[unlikely]] return; }
L_003C1700:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C17B0; } }
L_003C1708:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C1748; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C171Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 381u, depth + 1u); else { c.pc = 0x002276D0u; return; } if (c.pc != 0x003C171Cu) [[unlikely]] return; }
L_003C171C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C17B0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26444u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 166u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1740u); st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003C1740u) [[unlikely]] return; }
L_003C1740:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C17B0; } }
L_003C1748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1750u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0049(c, 381u, depth + 1u); else { c.pc = 0x002276D0u; return; } if (c.pc != 0x003C1750u) [[unlikely]] return; }
L_003C1750:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C1780; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 165u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1774u); st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003C1774u) [[unlikely]] return; }
L_003C1774:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C17B0; } }
    c.budget -= 1;
L_003C1780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1788u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0049(c, 383u, depth + 1u); else { c.pc = 0x00227750u; return; } if (c.pc != 0x003C1788u) [[unlikely]] return; }
L_003C1788:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C17B0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26444u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 166u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C17ACu); st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003C17ACu) [[unlikely]] return; }
L_003C17AC:
    c.budget -= 1;
L_003C17B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C17C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], c.r[2].w[0] + 4u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_003C1808; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C17F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C1820; } }
L_003C17F0:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1800u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x003C1800u) [[unlikely]] return; }
L_003C1800:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C1820; } }
L_003C1808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1810u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x003C1810u) [[unlikely]] return; }
L_003C1810:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C1820; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003C1828; } }
L_003C1820:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003C1828:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C1840:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1850u);  if (depth < kMaxDepth) unit_0044(c, 110u, depth + 1u); else { c.pc = 0x00210940u; return; } if (c.pc != 0x003C1850u) [[unlikely]] return; }
L_003C1850:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1860u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x003C1860u) [[unlikely]] return; }
L_003C1860:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003C1888; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 6304u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 7216u);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 8;
L_003C1888:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C18A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[2], c.r[2].w[0] + 25552u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003C0000u < 16384u) { entry = entries_00B0[(t - 0x003C0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003C18C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003C18D0:
    set32(c.r[7], ld32((c.r[28].w[0] - 26444u)));
    set32(c.r[5], c.r[4].w[0] + 304u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 2u)));
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = ld16((c.r[7].w[0] + 92u));
    st32((c.r[4].w[0] + 304u), c.r[6].w[0]);
    c.r[8].d[0] = ld16((c.r[7].w[0] + 96u));
    c.budget -= 12;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[3], c.r[7].w[0] + 92u);  if (t) { goto L_003C1918; } }
    st32((c.r[5].w[0] + 4u), 0u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    st32((c.r[5].w[0]), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { goto L_003C1A48; } }
    c.budget -= 1;
L_003C1918:
    c.r[6].d[0] = ld16((c.r[3].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0; set32(c.r[7], c.r[6].w[0] >> 1);  if (t) { goto L_003C1930; } }
    c.f[0] = c.r[6].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003C1948; } }
L_003C1930:
    c.r[6].d[0] = c.r[6].d[0] & 1ull;
    c.r[7].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.f[0] = c.r[7].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_003C1948:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x47C30000u);
    c.r[6].d[0] = c.r[6].d[0] | 20480ull;
    c.f[0] = c.r[6].w[0];
    c.budget -= 5;
    { const bool t = c.r[8].sd[0] < 0; c.f[1] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_003C1968; } }
    c.f[0] = c.r[8].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003C1984; } }
L_003C1968:
    set32(c.r[7], c.r[8].w[0] >> 1);
    c.r[6].d[0] = c.r[8].d[0] & 1ull;
    c.r[7].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.f[0] = c.r[7].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_003C1984:
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[6].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003C19B8; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[9], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 10u);  if (t) { goto L_003C19D4; } }
L_003C19B8:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[9], c.f[1]);
    c.r[9].d[0] = c.r[9].d[0] | c.r[6].d[0];
    set32(c.r[6], 0u + 10u);
    c.budget -= 7;
L_003C19D4:
    mmi::divu(c, 0, c.r[9].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    c.r[6].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_003C19F8; } }
    set32(c.r[9], c.r[9].w[0] + 10u);
    c.budget -= 2;
L_003C19F8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10620000u);
    c.r[7].d[0] = c.r[6].d[0] | 19923ull;
    mmi::multu(c, 0, c.r[7].w[0], c.r[9].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xCCCC0000u);
    c.r[8].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.r[6].d[0] | 52429ull;
    set32(c.r[6], 0u + 100u);
    mmi::multu(c, 0, c.r[7].w[0], c.r[9].w[0]);
    set32(c.r[7], c.r[8].w[0] >> 6);
    st32((c.r[5].w[0] + 4u), c.r[7].w[0]);
    c.r[7].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[7], c.r[7].w[0] >> 3);
    mmi::divu(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    st32((c.r[5].w[0]), c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 20;
L_003C1A48:
    c.r[8].d[0] = ld16((c.r[3].w[0] + 10u));
    c.r[7].d[0] = ld16((c.r[3].w[0] + 8u));
    c.r[1].d[0] = c.r[7].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003C1A70; } }
    st32((c.r[5].w[0]), 0u);
    st32((c.r[5].w[0] + 4u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { goto L_003C1BA0; } }
    c.budget -= 1;
L_003C1A70:
    c.r[6].d[0] = ld16((c.r[3].w[0] + 12u));
    set32(c.r[9], c.r[7].w[0] + c.r[6].w[0]);
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_003C1A90; } }
    st32((c.r[5].w[0]), 0u);
    st32((c.r[5].w[0] + 4u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { goto L_003C1BA0; } }
L_003C1A90:
    set32(c.r[6], c.r[7].w[0] - c.r[8].w[0]);
    c.f[0] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x47C30000u);
    c.r[6].d[0] = c.r[6].d[0] | 20480ull;
    c.f[0] = c.r[6].w[0];
    c.budget -= 9;
    { const bool t = c.r[9].sd[0] < 0; c.f[1] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_003C1AC0; } }
    c.f[0] = c.r[9].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003C1ADC; } }
L_003C1AC0:
    set32(c.r[7], c.r[9].w[0] >> 1);
    c.r[6].d[0] = c.r[9].d[0] & 1ull;
    c.r[7].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.f[0] = c.r[7].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_003C1ADC:
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[6].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003C1B10; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[9], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 10u);  if (t) { goto L_003C1B2C; } }
L_003C1B10:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[9], c.f[1]);
    c.r[9].d[0] = c.r[9].d[0] | c.r[6].d[0];
    set32(c.r[6], 0u + 10u);
    c.budget -= 7;
L_003C1B2C:
    mmi::divu(c, 0, c.r[9].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    c.r[6].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_003C1B50; } }
    set32(c.r[9], c.r[9].w[0] + 10u);
    c.budget -= 2;
L_003C1B50:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10620000u);
    c.r[7].d[0] = c.r[6].d[0] | 19923ull;
    mmi::multu(c, 0, c.r[7].w[0], c.r[9].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xCCCC0000u);
    c.r[8].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.r[6].d[0] | 52429ull;
    set32(c.r[6], 0u + 100u);
    mmi::multu(c, 0, c.r[7].w[0], c.r[9].w[0]);
    set32(c.r[7], c.r[8].w[0] >> 6);
    st32((c.r[5].w[0]), c.r[7].w[0]);
    c.r[7].d[0] = c.hi.d[0];
    set32(c.r[7], c.r[7].w[0] >> 3);
    mmi::divu(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.budget -= 20;
L_003C1BA0:
    c.r[7].d[0] = ld8((c.r[3].w[0] + 14u));
    set32(c.r[6], 0u + 1u);
    st32((c.r[5].w[0]), c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[3].w[0] + 15u));
    st32((c.r[5].w[0] + 4u), c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[3].w[0] + 16u));
    set32(c.r[5], c.r[5].w[0] + 8u);
    st32((c.r[5].w[0]), c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[3].w[0] + 17u));
    st32((c.r[5].w[0] + 4u), c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[3].w[0] + 18u));
    set32(c.r[5], c.r[5].w[0] + 8u);
    st32((c.r[5].w[0]), c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[3].w[0] + 19u));
    st32((c.r[5].w[0] + 4u), c.r[7].w[0]);
    c.r[7].d[0] = ld16((c.r[3].w[0] + 20u));
    set32(c.r[5], c.r[5].w[0] + 8u);
    st32((c.r[5].w[0]), c.r[7].w[0]);
    c.r[7].d[0] = ld16((c.r[3].w[0] + 22u));
    st32((c.r[5].w[0] + 4u), c.r[7].w[0]);
    c.r[7].d[0] = ld16((c.r[3].w[0] + 2u));
    set32(c.r[5], c.r[5].w[0] + 8u);
    st32((c.r[5].w[0]), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[6].w[0]));  c.pc = t; return; }
L_003C1C10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003C1C20:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_003C1C30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[18].w[0] + 304u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1C58u); set32(c.r[16], c.r[16].w[0] + 25568u);  if (depth < kMaxDepth) unit_00B0(c, 231u, depth + 1u); else { c.pc = 0x003C1CE0u; return; } if (c.pc != 0x003C1C58u) [[unlikely]] return; }
L_003C1C58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1C60u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 234u, depth + 1u); else { c.pc = 0x003C1D50u; return; } if (c.pc != 0x003C1C60u) [[unlikely]] return; }
L_003C1C60:
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1C70u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_00B0(c, 239u, depth + 1u); else { c.pc = 0x003C1EB0u; return; } if (c.pc != 0x003C1C70u) [[unlikely]] return; }
L_003C1C70:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C1CB8; } }
    c.budget -= 1;
L_003C1C80:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    set32(c.r[7], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1CACu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_00B0(c, 246u, depth + 1u); else { c.pc = 0x003C2060u; return; } if (c.pc != 0x003C1CACu) [[unlikely]] return; }
L_003C1CAC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C1C80u | kUnwind; return; } goto L_003C1C80; } }
L_003C1CB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1CC0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 253u, depth + 1u); else { c.pc = 0x003C22C0u; return; } if (c.pc != 0x003C1CC0u) [[unlikely]] return; }
L_003C1CC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C1CE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 20u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1CF4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 348u, depth + 1u); else { c.pc = 0x00213090u; return; } if (c.pc != 0x003C1CF4u) [[unlikely]] return; }
L_003C1CF4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[5], ld32((c.r[28].w[0] - 26444u)));
    c.f[1] = ld32((c.r[1].w[0] + 25688u));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.f[0] = ld32((c.r[1].w[0] + 25692u));
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1D3Cu); set32(c.r[7], c.r[2].w[0] + 5u);  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x003C1D3Cu) [[unlikely]] return; }
L_003C1D3C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C1D50:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26444u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 3u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C1E50; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    set32(c.r[2], c.r[29].w[0] + 16u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[7], c.r[4].w[0] + 55u);
    set32(c.r[6], 0u - 126u);
    c.budget -= 8;
L_003C1D88:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.r[4].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 31u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    set32(c.r[5], c.r[5].w[0] + 31u);
    set32(c.r[7], c.r[7].w[0] + 2u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] + 31u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    set32(c.r[5], c.r[5].w[0] + 31u);
    set32(c.r[7], c.r[7].w[0] + 2u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] + 31u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    set32(c.r[5], c.r[5].w[0] + 31u);
    set32(c.r[7], c.r[7].w[0] + 2u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] + 31u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    set32(c.r[5], c.r[5].w[0] + 31u);
    set32(c.r[7], c.r[7].w[0] + 2u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 47;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C1D88u | kUnwind; return; } goto L_003C1D88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_003C1E60; } }
    c.budget -= 1;
L_003C1E50:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1E60u); set32(c.r[5], c.r[5].w[0] + 4064u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x003C1E60u) [[unlikely]] return; }
L_003C1E60:
    set32(c.r[4], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1E6Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 348u, depth + 1u); else { c.pc = 0x00213090u; return; } if (c.pc != 0x003C1E6Cu) [[unlikely]] return; }
L_003C1E6C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[1].w[0] + 25696u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.f[0] = ld32((c.r[1].w[0] + 25700u));
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1E98u); set32(c.r[7], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x003C1E98u) [[unlikely]] return; }
L_003C1E98:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_003C1EB0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[1].d[0] = c.r[19].sd[0] < 15ll ? 1ull : 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 11;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 44u)));  if (t) { goto L_003C1EE0; } }
    set32(c.r[19], 0u + 14u);
    c.budget -= 1;
L_003C1EE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[19].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 25712u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1EF8u); set32(c.r[18], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x003C1EF8u) [[unlikely]] return; }
L_003C1EF8:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1F0Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003C1F0Cu) [[unlikely]] return; }
L_003C1F0C:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C1F10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[2], c.r[3].w[0] << 4);  if (t) { goto L_003C1F38; } }
    set32(c.r[5], 0u + 11u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1F34u); set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x003C1F34u) [[unlikely]] return; }
L_003C1F34:
    c.budget -= 1;
L_003C1F38:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C1F10u | kUnwind; return; } goto L_003C1F10; } }
    set32(c.r[2], c.r[16].w[0] + 11280u);
    set32(c.r[3], 0u + 4u);
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[4], 0u + 9u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38E30000u);
    st32((c.r[29].w[0] + 80u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 36409ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    st32((c.r[29].w[0] + 128u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 124u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 120u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 116u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43800000u);
    set32(c.r[3], c.r[19].w[0] >> 31);
    c.f[2] = c.r[2].w[0];
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 55u);
    c.f[1] = c.r[3].w[0];
    mmi::div(c, 0, c.r[19].w[0], c.r[4].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.r[3].d[0] = c.hi.d[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 19u);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 108u), c.f[1]);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    c.f[1] = c.r[3].w[0];
    st32((c.r[29].w[0] + 92u), c.f[0]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 104u), c.f[1]);
    st32((c.r[29].w[0] + 88u), c.f[1]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.budget -= 56;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2028u); st32((c.r[29].w[0] + 96u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x003C2028u) [[unlikely]] return; }
L_003C2028:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 11u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2038u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x003C2038u) [[unlikely]] return; }
L_003C2038:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003C2060:
    set32(c.r[29], c.r[29].w[0] - 224u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F690000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[29].w[0] + 208u), c.r[5].w[0]);
    set32(c.r[16], 0u + 1u);
    st32((c.r[29].w[0] + 204u), c.r[5].w[0]);
    c.r[1].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 200u), c.r[5].w[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 196u), c.r[5].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[28].w[0] - 24092u)));
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F7F0000u);
    set32(c.r[5], ld32((c.r[5].w[0] + 44u)));
    set32(c.r[5], c.r[5].w[0] + 8880u);
    st32((c.r[29].w[0] + 184u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 212u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 168u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    c.budget -= 36;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[29].w[0] + 176u), c.r[3].w[0]);  if (t) { goto L_003C2158; } }
    set32(c.r[3], c.r[17].w[0] - 1u);
    c.r[1].d[0] = c.r[3].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[5], c.r[17].w[0] - 8u);  if (t) { goto L_003C2128; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x05F50000u);
    c.r[4].d[0] = c.r[3].d[0] | 57600ull;
    c.budget -= 2;
L_003C2108:
    set32(c.r[6], c.r[6].w[0] + 8u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[4].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C2108u | kUnwind; return; } goto L_003C2108; } }
    c.budget -= 1;
L_003C2128:
    c.r[1].d[0] = c.r[6].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003C2158; } }
    c.budget -= 1;
L_003C2138:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[16], c.r[3].w[0] << 1);
    c.r[3].d[0] = c.r[6].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C2138u | kUnwind; return; } goto L_003C2138; } }
    c.budget -= 1;
L_003C2158:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { goto L_003C2168; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003C2168:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[3].w[0] << 1);
    c.r[3].d[0] = c.r[18].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C2188; } }
    set32(c.r[18], c.r[4].w[0] - 1u);
    c.budget -= 2;
L_003C2188:
    c.r[1].d[0] = 0ll < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_003C2290; } }
    set32(c.r[22], c.r[29].w[0] + 188u);
    set32(c.r[23], c.r[29].w[0] + 180u);
    set32(c.r[30], c.r[29].w[0] + 172u);
    c.budget -= 3;
L_003C21A0:
    mmi::div(c, 0, c.r[18].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 6;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_003C21C8; } }
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[3], c.r[17].w[0] - 1u);  if (t) { goto L_003C21C8; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[3].d[0];  if (t) { goto L_003C2250; } }
L_003C21C8:
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43800000u);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.f[2] = c.r[2].w[0];
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] + 18u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[2], c.r[29].w[0] + 164u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    st32((c.r[22].w[0]), c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[23].w[0]), c.f[1]);
    st32((c.r[30].w[0]), c.f[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C221Cu); st32((c.r[2].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x003C221Cu) [[unlikely]] return; }
L_003C221C:
    c.f[1] = c.r[20].w[0];
    c.f[0] = c.r[19].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2238u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003C2238u) [[unlikely]] return; }
L_003C2238:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], 0u + 11u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2248u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x003C2248u) [[unlikely]] return; }
L_003C2248:
    set32(c.r[9], 0u + 1u);
    c.budget -= 2;
L_003C2250:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x66660000u);
    mmi::div(c, 0, c.r[18].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.r[3].d[0] | 26215ull;
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[5], c.r[16].w[0] >> 31);
    c.r[3].d[0] = c.r[21].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    set32(c.r[20], c.r[20].w[0] + 18u);
    c.r[18].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[4].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[4].w[0] + c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C21A0u | kUnwind; return; } goto L_003C21A0; } }
    c.budget -= 1;
L_003C2290:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_003C22C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C22E4u); set32(c.r[17], c.r[17].w[0] + 25744u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x003C22E4u) [[unlikely]] return; }
L_003C22E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43380000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2300u); c.f[12] = ld32((c.r[1].w[0] + 25776u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003C2300u) [[unlikely]] return; }
L_003C2300:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[4].w[0] - 14704u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2318u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x003C2318u) [[unlikely]] return; }
L_003C2318:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3380000u);
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2330u); c.f[12] = ld32((c.r[1].w[0] + 25780u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003C2330u) [[unlikely]] return; }
L_003C2330:
    set32(c.r[4], ld32((c.r[28].w[0] - 26444u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_003C2360; } }
    set32(c.r[4], c.r[16].w[0] + 12240u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2354u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x003C2354u) [[unlikely]] return; }
L_003C2354:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C2400; } }
    c.budget -= 1;
L_003C2360:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_003C2388; } }
    set32(c.r[4], c.r[16].w[0] + 12000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C237Cu); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x003C237Cu) [[unlikely]] return; }
L_003C237C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C2400; } }
    c.budget -= 1;
L_003C2388:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[16].w[0] + 12240u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C239Cu); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x003C239Cu) [[unlikely]] return; }
L_003C239C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43380000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C23B8u); c.f[12] = ld32((c.r[1].w[0] + 25784u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003C23B8u) [[unlikely]] return; }
L_003C23B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[4].w[0] - 14224u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C23D0u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x003C23D0u) [[unlikely]] return; }
L_003C23D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3380000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C23ECu); c.f[12] = ld32((c.r[1].w[0] + 25788u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003C23ECu) [[unlikely]] return; }
L_003C23EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[16].w[0] + 12480u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2400u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x003C2400u) [[unlikely]] return; }
L_003C2400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2408u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x003C2408u) [[unlikely]] return; }
L_003C2408:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2A80000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2424u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003C2424u) [[unlikely]] return; }
L_003C2424:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[16].w[0] + 12720u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2438u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x003C2438u) [[unlikely]] return; }
L_003C2438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2440u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x003C2440u) [[unlikely]] return; }
L_003C2440:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2A80000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C245Cu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003C245Cu) [[unlikely]] return; }
L_003C245C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[16].w[0] + 12720u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2470u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x003C2470u) [[unlikely]] return; }
L_003C2470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2478u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x003C2478u) [[unlikely]] return; }
L_003C2478:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_003C24C0; } }
    c.budget -= 1;
L_003C2488:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 11u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C24B0u); set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x003C24B0u) [[unlikely]] return; }
L_003C24B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C2488u | kUnwind; return; } goto L_003C2488; } }
    c.budget -= 1;
L_003C24C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C24E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], c.r[4].w[0] << 4);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26444u)));
    set32(c.r[16], c.r[29].w[0] + 104u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C251Cu); set32(c.r[17], c.r[2].w[0] + 55u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x003C251Cu) [[unlikely]] return; }
L_003C251C:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[9], c.r[29].w[0] + 105u);
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[19].w[0] << 3);
    set32(c.r[5], ld32((c.r[28].w[0] - 26444u)));
    set32(c.r[3], c.r[3].w[0] - c.r[19].w[0]);
    set32(c.r[10], c.r[3].w[0] << 2);
    set32(c.r[4], 0u - 1u);
    set32(c.r[8], c.r[19].w[0] << 1);
    set32(c.r[3], 0u + 255u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    set32(c.r[7], c.r[29].w[0] + 100u);
    c.r[24].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[19], 0u - 1024u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFF80000u);
    set32(c.r[15], 0u - 13u);
    c.r[20].d[0] = ld8((c.r[5].w[0] + 4u));
    set32(c.r[4], c.r[10].w[0] + c.r[5].w[0]);
    c.r[14].d[0] = c.r[3].d[0] | 4095ull;
    set32(c.r[6], c.r[29].w[0] + 102u);
    set32(c.r[3], c.r[8].w[0] + c.r[5].w[0]);
    set32(c.r[13], 0u - 57u);
    set32(c.r[12], 0u - 8129u);
    set32(c.r[11], 0u - 225u);
    set32(c.r[8], c.r[29].w[0] + 96u);
    c.r[10].d[0] = 0ull + 0ull;
    st8((c.r[29].w[0] + 96u), static_cast<std::uint8_t>(c.r[20].w[0]));
    set32(c.r[25], ld32((c.r[4].w[0] + 116u)));
    set32(c.r[20], ld32((c.r[29].w[0] + 96u)));
    c.r[25].d[0] = c.r[25].d[0] << 40;
    c.r[25].d[0] = c.r[25].d[0] >> 40;
    c.r[24].d[0] = c.r[20].d[0] & c.r[24].d[0];
    set32(c.r[25], c.r[25].w[0] << 8);
    c.r[24].d[0] = c.r[24].d[0] | c.r[25].d[0];
    st32((c.r[29].w[0] + 96u), c.r[24].w[0]);
    c.r[24].d[0] = ld16((c.r[4].w[0] + 94u));
    c.r[4].d[0] = ld16((c.r[7].w[0]));
    c.r[24].d[0] = c.r[24].d[0] & 1023ull;
    c.r[4].d[0] = c.r[4].d[0] & c.r[19].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[24].d[0];
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[4].d[0] = ld8((c.r[29].w[0] + 101u));
    c.r[5].d[0] = c.r[5].d[0] & 3ull;
    c.r[4].d[0] = c.r[4].d[0] & c.r[15].d[0];
    set32(c.r[5], c.r[5].w[0] << 2);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[29].w[0] + 101u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 47u)));
    set32(c.r[4], ld32((c.r[7].w[0])));
    c.r[5].d[0] = c.r[5].d[0] & 127ull;
    c.r[4].d[0] = c.r[4].d[0] & c.r[14].d[0];
    set32(c.r[5], c.r[5].w[0] << 12);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[7].w[0]), c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 51u)));
    c.r[4].d[0] = ld8((c.r[6].w[0]));
    c.r[5].d[0] = c.r[5].d[0] & 7ull;
    c.r[4].d[0] = c.r[4].d[0] & c.r[13].d[0];
    set32(c.r[5], c.r[5].w[0] << 3);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 48u)));
    c.r[4].d[0] = ld16((c.r[6].w[0]));
    c.r[5].d[0] = c.r[5].d[0] & 127ull;
    c.r[4].d[0] = c.r[4].d[0] & c.r[12].d[0];
    set32(c.r[5], c.r[5].w[0] << 6);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 52u)));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 103u));
    c.r[4].d[0] = c.r[4].d[0] & 7ull;
    set32(c.r[4], c.r[4].w[0] << 5);
    c.r[3].d[0] = c.r[3].d[0] & c.r[11].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[29].w[0] + 103u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[11].d[0] = ld8((c.r[16].w[0]));
    c.r[5].d[0] = 0ull | 65363ull;
    c.budget -= 79;
L_003C2658:
    c.r[7].d[0] = ld8((c.r[9].w[0]));
    c.r[4].d[0] = ld8((c.r[8].w[0]));
    c.r[6].d[0] = c.r[11].d[0] & 255ull;
    c.r[3].d[0] = c.r[11].d[0] & 65535ull;
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[8].w[0]));
    c.r[4].d[0] = c.r[4].d[0] ^ c.r[6].d[0];
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 1u);  if (t) { goto L_003C2688; } }
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003C2688:
    c.r[6].d[0] = c.r[11].d[0] & 65535ull;
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[4], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    c.r[3].d[0] = c.r[10].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    mmi::div(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.r[11].d[0] = c.r[4].d[0] & 65535ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C2658u | kUnwind; return; } goto L_003C2658; } }
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[3].w[0] + 4096u);
    set32(c.r[8], c.r[8].w[0] + 25792u);
    c.budget -= 6;
L_003C26D8:
    c.r[6].d[0] = c.r[4].d[0] & 7ull;
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003C27F8; } }
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.budget -= 5;
    { const std::uint32_t t = c.r[6].w[0];  c.pc = t; if (t - 0x003C0000u < 16384u) { entry = entries_00B0[(t - 0x003C0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003C2700:
    c.r[6].d[0] = ld8((c.r[5].w[0]));
    c.r[6].d[0] = c.r[6].d[0] & 248ull;
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 3));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[6].d[0] & 255ull;  if (t) { goto L_003C27F8; } }
    c.budget -= 1;
L_003C2718:
    c.r[7].d[0] = ld8((c.r[5].w[0]));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[7].d[0] = c.r[7].d[0] & 7ull;
    c.r[6].d[0] = c.r[6].d[0] & 192ull;
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 6));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[6].d[0] & 255ull;  if (t) { goto L_003C27F8; } }
L_003C2740:
    c.r[6].d[0] = ld8((c.r[5].w[0]));
    c.r[6].d[0] = c.r[6].d[0] & 62ull;
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 1));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[6].d[0] & 255ull;  if (t) { goto L_003C27F8; } }
    c.budget -= 1;
L_003C2758:
    c.r[7].d[0] = ld8((c.r[5].w[0]));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[7].d[0] = c.r[7].d[0] & 1ull;
    c.r[6].d[0] = c.r[6].d[0] & 240ull;
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 4));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[6].d[0] & 255ull;  if (t) { goto L_003C27F8; } }
L_003C2780:
    c.r[7].d[0] = ld8((c.r[5].w[0]));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[7].d[0] = c.r[7].d[0] & 15ull;
    c.r[6].d[0] = c.r[6].d[0] & 128ull;
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 7));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[6].d[0] & 255ull;  if (t) { goto L_003C27F8; } }
L_003C27A8:
    c.r[6].d[0] = ld8((c.r[5].w[0]));
    c.r[6].d[0] = c.r[6].d[0] & 124ull;
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 2));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[6].d[0] & 255ull;  if (t) { goto L_003C27F8; } }
    c.budget -= 1;
L_003C27C0:
    c.r[7].d[0] = ld8((c.r[5].w[0]));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[7].d[0] = c.r[7].d[0] & 3ull;
    c.r[6].d[0] = c.r[6].d[0] & 224ull;
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 5));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[6].d[0] & 255ull;  if (t) { goto L_003C27F8; } }
L_003C27E8:
    c.r[6].d[0] = ld8((c.r[5].w[0]));
    c.r[18].d[0] = c.r[6].d[0] & 31ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
L_003C27F8:
    c.r[6].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 4;
L_003C2808:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[6].d[0] = c.r[4].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C26D8u | kUnwind; return; } goto L_003C26D8; } }
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003C2840:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2850u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 203u, depth + 1u); else { c.pc = 0x00105190u; return; } if (c.pc != 0x003C2850u) [[unlikely]] return; }
L_003C2850:
    set_interrupts(c, true);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C2870:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2884u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 38u, depth + 1u); else { c.pc = 0x001041D0u; return; } if (c.pc != 0x003C2884u) [[unlikely]] return; }
L_003C2884:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[5], c.r[5].w[0] + 10304u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2898u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 12u, depth + 1u); else { c.pc = 0x00104060u; return; } if (c.pc != 0x003C2898u) [[unlikely]] return; }
L_003C2898:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003C28A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_003C28B0; } }
L_003C28A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C28B0u);  if (depth < kMaxDepth) unit_0001(c, 44u, depth + 1u); else { c.pc = 0x00104200u; return; } if (c.pc != 0x003C28B0u) [[unlikely]] return; }
L_003C28B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C28C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st32((c.r[1].w[0] + 10408u), 0u);
    set32(c.r[5], 0u + 31u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[4], c.r[4].w[0] + 10680u);
    st32((c.r[1].w[0] + 10424u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st32((c.r[1].w[0] + 10416u), 0u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 10;
L_003C28E8:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] - 8u), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] - 8u);
    st32((c.r[4].w[0] - 16u), c.r[3].w[0]);
    st32((c.r[4].w[0] - 24u), c.r[3].w[0]);
    st32((c.r[4].w[0] - 32u), c.r[3].w[0]);
    st32((c.r[4].w[0] - 40u), c.r[3].w[0]);
    st32((c.r[4].w[0] - 48u), c.r[3].w[0]);
    st32((c.r[4].w[0] - 56u), c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[4], c.r[4].w[0] - 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C28E8u | kUnwind; return; } goto L_003C28E8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C2920:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[16], 0u + 1024u);
    c.budget -= 8;
L_003C2940:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2950u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 447u, depth + 1u); else { c.pc = 0x001074D8u; return; } if (c.pc != 0x003C2950u) [[unlikely]] return; }
L_003C2950:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003C2960; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003C29A0; } }
L_003C2960:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_003C2998; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2974u);  if (depth < kMaxDepth) unit_00B0(c, 289u, depth + 1u); else { c.pc = 0x003C2870u; return; } if (c.pc != 0x003C2974u) [[unlikely]] return; }
L_003C2974:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003C2988; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003C29A0; } }
    c.budget -= 1;
L_003C2988:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C2940u | kUnwind; return; } goto L_003C2940; } }
    c.budget -= 1;
L_003C2998:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003C29A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C29C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22300u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C29E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C2AA0; } }
    c.budget -= 1;
L_003C29E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C29E8u);  if (depth < kMaxDepth) unit_00B0(c, 293u, depth + 1u); else { c.pc = 0x003C28C0u; return; } if (c.pc != 0x003C29E8u) [[unlikely]] return; }
L_003C29E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C29F8u); set32(c.r[4], c.r[4].w[0] + 10736u);  if (depth < kMaxDepth) unit_00B0(c, 295u, depth + 1u); else { c.pc = 0x003C2920u; return; } if (c.pc != 0x003C29F8u) [[unlikely]] return; }
L_003C29F8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003C2A08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003C2AA0; } }
L_003C2A08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[4], c.r[4].w[0] + 10688u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2A18u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B0(c, 295u, depth + 1u); else { c.pc = 0x003C2920u; return; } if (c.pc != 0x003C2A18u) [[unlikely]] return; }
L_003C2A18:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003C2A28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003C2AA0; } }
L_003C2A28:
    set32(c.r[2], ld32((c.r[28].w[0] - 26440u)));
    set32(c.r[3], 0u + 1u);
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_003C2A60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2A48u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0001(c, 60u, depth + 1u); else { c.pc = 0x001042E0u; return; } if (c.pc != 0x003C2A48u) [[unlikely]] return; }
L_003C2A48:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_003C2A58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003C2AA0; } }
L_003C2A58:
    st32((c.r[28].w[0] - 26440u), c.r[2].w[0]);
    c.budget -= 2;
L_003C2A60:
    set32(c.r[2], ld32((c.r[28].w[0] - 26436u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], c.r[29].w[0] + 16u);  if (t) { goto L_003C2A90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2A74u);  if (depth < kMaxDepth) unit_0001(c, 60u, depth + 1u); else { c.pc = 0x001042E0u; return; } if (c.pc != 0x003C2A74u) [[unlikely]] return; }
L_003C2A74:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_003C2A88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003C2AA0; } }
    c.budget -= 1;
L_003C2A88:
    st32((c.r[28].w[0] - 26436u), c.r[2].w[0]);
    c.budget -= 2;
L_003C2A90:
    set32(c.r[2], 0u + 1u);
    st32((c.r[28].w[0] - 22300u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_003C2AA0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C2AB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 10416u)));
    set32(c.r[3], c.r[3].w[0] + 10432u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[8].sd[0] < 0;  if (t) { goto L_003C2AE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003C2BA0; } }
    c.budget -= 1;
L_003C2AE0:
    c.r[10].d[0] = c.r[4].d[0] << 40;
    c.r[4].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = c.r[6].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.r[4].d[0] = c.r[4].sd[0] < 0ll ? 1ull : 0ull;
    c.r[8].d[0] = c.r[8].sd[0] < 0ll ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[8].d[0] = c.r[8].d[0] ^ 1ull;
    c.r[9].d[0] = c.r[4].d[0] & 1ull;
    c.r[10].d[0] = c.r[10].d[0] >> 40;
    c.r[4].d[0] = c.r[8].d[0] & 1ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[8], c.r[4].w[0] << 1);
    c.r[4].d[0] = c.r[7].d[0] << 48;
    c.r[9].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[4].d[0] = c.r[4].sd[0] < 0ll ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    set32(c.r[8], c.r[4].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    set32(c.r[4], c.r[4].w[0] + 10436u);
    c.r[8].d[0] = c.r[8].d[0] << 56;
    set32(c.r[9], c.r[4].w[0] + c.r[2].w[0]);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[11], c.r[8].w[0] << 24);
    set32(c.r[4], c.r[4].w[0] + 10437u);
    c.r[10].d[0] = c.r[11].d[0] | c.r[10].d[0];
    set32(c.r[8], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[10].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], c.r[4].w[0] + 10438u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[2], ld32((c.r[1].w[0] + 10416u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.budget -= 42;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 31ull;  if (t) { goto L_003C2B94; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C2B94; } }
    set32(c.r[2], c.r[2].w[0] - 32u);
    c.budget -= 1;
L_003C2B94:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st32((c.r[1].w[0] + 10416u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003C2BA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C2BB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 10416u)));
    set32(c.r[3], c.r[3].w[0] + 10432u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[8].sd[0] < 0;  if (t) { goto L_003C2BE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003C2CB8; } }
    c.budget -= 1;
L_003C2BE0:
    c.r[8].d[0] = c.r[6].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.r[10].d[0] = c.r[8].sd[0] < 0ll ? 1ull : 0ull;
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[10].d[0] = c.r[10].d[0] ^ 1ull;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.r[9].d[0] = c.r[8].sd[0] < 0ll ? 1ull : 0ull;
    c.r[9].d[0] = c.r[9].d[0] ^ 1ull;
    c.r[8].d[0] = c.r[10].d[0] & 1ull;
    c.r[10].d[0] = c.r[9].d[0] & 1ull;
    set32(c.r[9], c.r[8].w[0] << 1);
    c.r[10].d[0] = c.r[10].d[0] | 8ull;
    c.r[8].d[0] = c.r[7].d[0] << 48;
    c.r[10].d[0] = c.r[10].d[0] | c.r[9].d[0];
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    c.r[8].d[0] = c.r[8].sd[0] < 0ll ? 1ull : 0ull;
    c.r[8].d[0] = c.r[8].d[0] ^ 1ull;
    set32(c.r[9], c.r[8].w[0] << 2);
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    set32(c.r[8], 0u + 8u);
    c.r[9].d[0] = c.r[9].d[0] << 56;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    c.budget -= 24;
    { const bool t = c.r[9].d[0] != c.r[8].d[0];  if (t) { goto L_003C2C48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003C2CB8; } }
L_003C2C48:
    c.r[8].d[0] = c.r[4].d[0] << 40;
    set32(c.r[9], c.r[9].w[0] << 24);
    c.r[8].d[0] = c.r[8].d[0] >> 40;
    c.r[8].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st32((c.r[3].w[0]), c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] + 10436u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 10437u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], c.r[3].w[0] + 10438u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[2], ld32((c.r[1].w[0] + 10416u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.budget -= 22;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 31ull;  if (t) { goto L_003C2CAC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C2CAC; } }
    set32(c.r[2], c.r[2].w[0] - 32u);
    c.budget -= 1;
L_003C2CAC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st32((c.r[1].w[0] + 10416u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003C2CB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C2CC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 10416u)));
    set32(c.r[2], c.r[2].w[0] + 10432u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_003C2CF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C2D28; } }
    c.budget -= 1;
L_003C2CF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 10416u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 31ull;  if (t) { goto L_003C2D18; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C2D18; } }
    set32(c.r[2], c.r[2].w[0] - 32u);
    c.budget -= 1;
L_003C2D18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st32((c.r[1].w[0] + 10416u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_003C2D28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C2D30:
    set32(c.r[11], c.r[5].w[0] + 15u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[5], 0u - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[5].d[0] = c.r[11].d[0] & c.r[5].d[0];
    set32(c.r[12], ld32((c.r[1].w[0] + 10416u)));
    set32(c.r[11], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 4));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 20));
    set32(c.r[3], c.r[3].w[0] + 10432u);
    c.r[5].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[11].d[0] << 40;
    c.r[4].d[0] = c.r[4].d[0] >> 40;
    c.r[11].d[0] = c.r[4].d[0] | c.r[10].d[0];
    set32(c.r[4], c.r[12].w[0] << 3);
    set32(c.r[10], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[12].w[0] + 1u);
    st32((c.r[10].w[0]), c.r[11].w[0]);
    c.r[12].d[0] = c.r[4].d[0] & 31ull;
    c.budget -= 21;
    { const bool t = c.r[4].sd[0] >= 0; st32((c.r[10].w[0] + 4u), c.r[5].w[0]);  if (t) { goto L_003C2D90; } }
    c.budget -= 2;
    { const bool t = c.r[12].d[0] == 0ull; set32(c.r[5], c.r[7].w[0] + 15u);  if (t) { goto L_003C2D94; } }
    set32(c.r[12], c.r[12].w[0] - 32u);
    c.budget -= 1;
L_003C2D90:
    set32(c.r[5], c.r[7].w[0] + 15u);
    c.budget -= 1;
L_003C2D94:
    set32(c.r[4], 0u - 16u);
    c.r[7].d[0] = c.r[5].d[0] & c.r[4].d[0];
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 20));
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 4));
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[7].d[0] = c.r[10].d[0] << 40;
    set32(c.r[4], c.r[12].w[0] << 3);
    c.r[7].d[0] = c.r[7].d[0] >> 40;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    set32(c.r[11], c.r[3].w[0] + c.r[4].w[0]);
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    set32(c.r[4], c.r[12].w[0] + 1u);
    st32((c.r[11].w[0]), c.r[6].w[0]);
    c.r[10].d[0] = c.r[4].d[0] & 31ull;
    c.budget -= 16;
    { const bool t = c.r[4].sd[0] >= 0; st32((c.r[11].w[0] + 4u), c.r[5].w[0]);  if (t) { goto L_003C2DE0; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == 0ull; set32(c.r[5], c.r[9].w[0] + 15u);  if (t) { goto L_003C2DE4; } }
    set32(c.r[10], c.r[10].w[0] - 32u);
    c.budget -= 1;
L_003C2DE0:
    set32(c.r[5], c.r[9].w[0] + 15u);
    c.budget -= 1;
L_003C2DE4:
    set32(c.r[4], 0u - 16u);
    c.r[9].d[0] = c.r[5].d[0] & c.r[4].d[0];
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 4));
    set32(c.r[4], c.r[10].w[0] << 3);
    c.r[7].d[0] = c.r[6].d[0] << 40;
    set32(c.r[11], c.r[3].w[0] + c.r[4].w[0]);
    c.r[7].d[0] = c.r[7].d[0] >> 40;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 20));
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    set32(c.r[4], c.r[10].w[0] + 1u);
    c.r[5].d[0] = c.r[8].d[0] | c.r[3].d[0];
    st32((c.r[11].w[0]), c.r[6].w[0]);
    c.r[3].d[0] = c.r[4].d[0] & 31ull;
    c.budget -= 16;
    { const bool t = c.r[4].sd[0] >= 0; st32((c.r[11].w[0] + 4u), c.r[5].w[0]);  if (t) { goto L_003C2E30; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C2E30; } }
    set32(c.r[3], c.r[3].w[0] - 32u);
    c.budget -= 1;
L_003C2E30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 10416u), c.r[3].w[0]);  c.pc = t; return; }
L_003C2E40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(4096ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003C2E58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_003C2F80; } }
L_003C2E58:
    c.r[2].d[0] = c.r[5].d[0] | c.r[7].d[0];
    c.r[2].d[0] = c.r[9].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_003C2E78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C2F80; } }
    c.budget -= 1;
L_003C2E78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 65521ull;
    c.r[1].d[0] = c.r[6].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x001F0000u);  if (t) { goto L_003C2EB0; } }
    c.r[1].d[0] = c.r[1].d[0] | 65521ull;
    c.r[1].d[0] = c.r[8].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003C2EB0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 65521ull;
    c.r[1].d[0] = c.r[10].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003C2EB8; } }
L_003C2EB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 4u);  if (t) { goto L_003C2F80; } }
L_003C2EB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 10416u)));
    set32(c.r[12], 0u + 4u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], c.r[3].w[0] + 10432u);
    c.budget -= 6;
L_003C2ED0:
    set32(c.r[2], c.r[11].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_003C2EF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C2F80; } }
    c.budget -= 1;
L_003C2EF0:
    set32(c.r[2], c.r[11].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[11].d[0] = c.r[2].d[0] & 31ull;  if (t) { goto L_003C2F08; } }
    c.budget -= 2;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_003C2F08; } }
    set32(c.r[11], c.r[11].w[0] - 32u);
    c.budget -= 1;
L_003C2F08:
    set32(c.r[12], c.r[12].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[12].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C2ED0u | kUnwind; return; } goto L_003C2ED0; } }
    set32(c.r[2], c.r[4].w[0] << 8);
    set32(c.r[12], ld32((c.r[1].w[0] + 10416u)));
    c.r[3].d[0] = c.r[2].d[0] << 40;
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D000000u);
    c.r[11].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], c.r[2].w[0] + 10432u);
    set32(c.r[4], c.r[12].w[0] << 3);
    set32(c.r[3], c.r[12].w[0] + 1u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[3].d[0] & 31ull;
    c.budget -= 14;
    { const bool t = c.r[3].sd[0] >= 0; st32((c.r[4].w[0]), c.r[11].w[0]);  if (t) { goto L_003C2F58; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C2F5C; } }
    set32(c.r[2], c.r[2].w[0] - 32u);
    c.budget -= 1;
L_003C2F58:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_003C2F5C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[1].w[0] + 10416u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.r[7].d[0] = c.r[8].d[0] + 0ull;
    c.r[8].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2F7Cu); c.r[9].d[0] = c.r[10].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 308u, depth + 1u); else { c.pc = 0x003C2D30u; return; } if (c.pc != 0x003C2F7Cu) [[unlikely]] return; }
L_003C2F7C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C2F80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C2F90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 10416u)));
    set32(c.r[2], c.r[2].w[0] + 10432u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_003C2FC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C3008; } }
    c.budget -= 1;
L_003C2FC0:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 16);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[3].d[0] = c.r[3].d[0] << 40;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4A000000u);
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 10416u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.budget -= 12;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 31ull;  if (t) { goto L_003C2FFC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C2FFC; } }
    set32(c.r[2], c.r[2].w[0] - 32u);
    c.budget -= 1;
L_003C2FFC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st32((c.r[1].w[0] + 10416u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003C3008:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C3010:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 10416u)));
    set32(c.r[2], c.r[2].w[0] + 10432u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_003C3040; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C3088; } }
    c.budget -= 1;
L_003C3040:
    c.r[2].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[2].w[0] << 16);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[3].d[0] = c.r[3].d[0] << 40;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 10416u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.budget -= 12;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 31ull;  if (t) { goto L_003C307C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C307C; } }
    set32(c.r[2], c.r[2].w[0] - 32u);
    c.budget -= 1;
L_003C307C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st32((c.r[1].w[0] + 10416u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003C3088:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C3090:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[18].d[0] == 0ull; st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);  if (t) { goto L_003C30C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C30B4u); set32(c.r[4], ld32((c.r[28].w[0] - 26440u)));  if (depth < kMaxDepth) unit_0001(c, 70u, depth + 1u); else { c.pc = 0x00104330u; return; } if (c.pc != 0x003C30B4u) [[unlikely]] return; }
L_003C30B4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003C30D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003C31D8; } }
    c.budget -= 1;
L_003C30C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C30D0u); set32(c.r[4], ld32((c.r[28].w[0] - 26440u)));  if (depth < kMaxDepth) unit_0001(c, 68u, depth + 1u); else { c.pc = 0x00104320u; return; } if (c.pc != 0x003C30D0u) [[unlikely]] return; }
L_003C30D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[17], ld32((c.r[1].w[0] + 10424u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], c.r[2].w[0] + 10432u);
    set32(c.r[3], c.r[17].w[0] << 3);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003C3140; } }
    c.budget -= 1;
L_003C30F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3100u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 342u, depth + 1u); else { c.pc = 0x003C3860u; return; } if (c.pc != 0x003C3100u) [[unlikely]] return; }
L_003C3100:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], 0u - 1u);  if (t) { goto L_003C3140; } }
    set32(c.r[2], c.r[17].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; c.r[17].d[0] = c.r[2].d[0] & 31ull;  if (t) { goto L_003C3124; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003C3124; } }
    set32(c.r[17], c.r[17].w[0] - 32u);
    c.budget -= 1;
L_003C3124:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 10432u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C30F8u | kUnwind; return; } goto L_003C30F8; } }
L_003C3140:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st32((c.r[1].w[0] + 10424u), c.r[17].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 10408u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] + 16u);  if (t) { goto L_003C31C8; } }
    set32(c.r[2], 0u - 16u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; c.r[8].d[0] = c.r[3].d[0] & c.r[2].d[0];  if (t) { goto L_003C3168; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_003C3168:
    set32(c.r[2], ld32((c.r[28].w[0] - 26440u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[7], c.r[7].w[0] + 10880u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 10736u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[11], c.r[11].w[0] + 12784u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C319Cu); st64((c.r[29].w[0]), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0001(c, 459u, depth + 1u); else { c.pc = 0x001076A8u; return; } if (c.pc != 0x003C319Cu) [[unlikely]] return; }
L_003C319C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003C31B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C31ACu); set32(c.r[4], ld32((c.r[28].w[0] - 26440u)));  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x003C31ACu) [[unlikely]] return; }
L_003C31AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003C31D8; } }
    c.budget -= 1;
L_003C31B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 10408u), 0u);  if (t) { goto L_003C31D0; } }
    c.budget -= 1;
L_003C31C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C31D0u); set32(c.r[4], ld32((c.r[28].w[0] - 26440u)));  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x003C31D0u) [[unlikely]] return; }
L_003C31D0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003C31D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003C31F0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00104310u | kUnwind; return; } [[clang::musttail]] return unit_0001(c, 66u, depth); }
L_003C3200:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 26436u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3220u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 68u, depth + 1u); else { c.pc = 0x00104320u; return; } if (c.pc != 0x003C3220u) [[unlikely]] return; }
L_003C3220:
    set32(c.r[2], ld32((c.r[28].w[0] - 26436u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st32((c.r[1].w[0] + 10816u), c.r[16].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[7], c.r[7].w[0] + 10816u);
    set32(c.r[8], 0u + 16u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 10688u);
    set32(c.r[6], 0u + 1u);
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    c.r[10].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[11], c.r[11].w[0] + 12784u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3260u); st64((c.r[29].w[0]), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0001(c, 459u, depth + 1u); else { c.pc = 0x001076A8u; return; } if (c.pc != 0x003C3260u) [[unlikely]] return; }
L_003C3260:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003C3278; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3270u); set32(c.r[4], ld32((c.r[28].w[0] - 26436u)));  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x003C3270u) [[unlikely]] return; }
L_003C3270:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 9u);  if (t) { goto L_003C3280; } }
L_003C3278:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003C3280:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C32A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003C32C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C32B8u); set32(c.r[4], ld32((c.r[28].w[0] - 26436u)));  if (depth < kMaxDepth) unit_0001(c, 70u, depth + 1u); else { c.pc = 0x00104330u; return; } if (c.pc != 0x003C32B8u) [[unlikely]] return; }
L_003C32B8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003C32D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003C32E8; } }
L_003C32C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C32D0u); set32(c.r[4], ld32((c.r[28].w[0] - 26436u)));  if (depth < kMaxDepth) unit_0001(c, 68u, depth + 1u); else { c.pc = 0x00104320u; return; } if (c.pc != 0x003C32D0u) [[unlikely]] return; }
L_003C32D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[16], ld32((c.r[1].w[0] + 10816u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C32E0u); set32(c.r[4], ld32((c.r[28].w[0] - 26436u)));  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x003C32E0u) [[unlikely]] return; }
L_003C32E0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_003C32E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C3300:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3310u);  if (depth < kMaxDepth) unit_00B0(c, 323u, depth + 1u); else { c.pc = 0x003C3200u; return; } if (c.pc != 0x003C3310u) [[unlikely]] return; }
L_003C3310:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003C3320; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003C332C; } }
L_003C3320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3328u);  if (depth < kMaxDepth) unit_00B0(c, 327u, depth + 1u); else { c.pc = 0x003C32A0u; return; } if (c.pc != 0x003C3328u) [[unlikely]] return; }
L_003C3328:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003C332C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C3340:
    set32(c.r[13], c.r[4].w[0] >> 24);
    c.r[10].d[0] = c.r[13].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[10].d[0] == 0ull; set32(c.r[12], 0u + 4u);  if (t) { goto L_003C3358; } }
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.budget -= 2;
L_003C3358:
    c.r[9].d[0] = c.r[13].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_003C3368; } }
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.budget -= 1;
L_003C3368:
    c.r[8].d[0] = c.r[13].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_003C3378; } }
    set32(c.r[12], c.r[12].w[0] + 2u);
    c.budget -= 1;
L_003C3378:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 10408u)));
    set32(c.r[2], c.r[3].w[0] + c.r[12].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 512ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003C3398; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C3418; } }
L_003C3398:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], c.r[2].w[0] + 10880u);
    set32(c.r[11], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] >> 16);
    st8((c.r[11].w[0]), static_cast<std::uint8_t>(c.r[13].w[0]));
    st8((c.r[11].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[4].w[0] >> 8);
    set32(c.r[11], c.r[11].w[0] + 2u);
    st8((c.r[11].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[11].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 12;
    { const bool t = c.r[10].d[0] == 0ull; set32(c.r[11], c.r[11].w[0] + 2u);  if (t) { goto L_003C33D0; } }
    st8((c.r[11].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 2;
L_003C33D0:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_003C33E0; } }
    st8((c.r[11].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 2;
L_003C33E0:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; c.r[3].d[0] = c.r[7].d[0] & 65535ull;  if (t) { goto L_003C33F8; } }
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));
    st8((c.r[11].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[11].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[11], c.r[11].w[0] + 2u);
    c.budget -= 4;
L_003C33F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 10408u)));
    set32(c.r[3], 0u + 255u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[12].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st32((c.r[1].w[0] + 10408u), c.r[4].w[0]);
    st8((c.r[11].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_003C3418:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C3420:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[6], ld32((c.r[1].w[0] + 10408u)));
    set32(c.r[2], c.r[6].w[0] + 8u);
    c.r[2].d[0] = c.r[2].sd[0] < 512ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003C3440; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C3570; } }
L_003C3440:
    set32(c.r[9], ld32((c.r[4].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], c.r[3].w[0] + 10880u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[9].w[0] >> 24);
    set32(c.r[8], c.r[9].w[0] >> 16);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[1].w[0] + 10408u)));
    set32(c.r[7], c.r[9].w[0] >> 8);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st32((c.r[1].w[0] + 10408u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[6], ld32((c.r[1].w[0] + 10408u)));
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[6], ld32((c.r[1].w[0] + 10408u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st32((c.r[1].w[0] + 10408u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[6], ld32((c.r[1].w[0] + 10408u)));
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[1].w[0] + 10408u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st32((c.r[1].w[0] + 10408u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[6], ld32((c.r[1].w[0] + 10408u)));
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[6], ld32((c.r[1].w[0] + 10408u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st32((c.r[1].w[0] + 10408u), c.r[6].w[0]);
    set32(c.r[8], ld32((c.r[4].w[0] + 4u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 10408u)));
    set32(c.r[7], c.r[8].w[0] >> 16);
    set32(c.r[6], c.r[8].w[0] >> 8);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[4], ld32((c.r[1].w[0] + 10408u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st32((c.r[1].w[0] + 10408u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 10408u)));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[4], ld32((c.r[1].w[0] + 10408u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st32((c.r[1].w[0] + 10408u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 10408u)));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[4], ld32((c.r[1].w[0] + 10408u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st32((c.r[1].w[0] + 10408u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 10408u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 76;
L_003C3570:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C3580:
    c.r[1].d[0] = c.r[5].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003C3598; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C3708; } }
    c.budget -= 1;
L_003C3598:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 10408u)));
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 512ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003C35B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C3708; } }
L_003C35B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], c.r[2].w[0] + 10880u);
    set32(c.r[11], 0u + 24u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_003C3600; } }
L_003C35D0:
    set32(c.r[2], c.r[4].w[0] >> (c.r[11].w[0] & 31u));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 10408u)));
    set32(c.r[11], c.r[11].w[0] - 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[10], c.r[10].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st32((c.r[1].w[0] + 10408u), c.r[2].w[0]);
    c.budget -= 12;
L_003C3600:
    c.budget -= 2;
    { const bool t = c.r[10].sd[0] <= 0;  if (t) { goto L_003C3610; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C35D0u | kUnwind; return; } goto L_003C35D0; } }
L_003C3610:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[5], c.r[2].w[0] - 1u);  if (t) { goto L_003C3648; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 10408u)));
    set32(c.r[2], c.r[2].w[0] + 10880u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[1].w[0] + 10408u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st32((c.r[1].w[0] + 10408u), c.r[2].w[0]);
    c.budget -= 11;
L_003C3648:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[5], c.r[2].w[0] - 1u);  if (t) { goto L_003C3680; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 10408u)));
    set32(c.r[2], c.r[2].w[0] + 10880u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[2], ld32((c.r[1].w[0] + 10408u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st32((c.r[1].w[0] + 10408u), c.r[2].w[0]);
    c.budget -= 11;
L_003C3680:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[5], c.r[2].w[0] - 1u);  if (t) { goto L_003C36B8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 10408u)));
    set32(c.r[2], c.r[2].w[0] + 10880u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[2], ld32((c.r[1].w[0] + 10408u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st32((c.r[1].w[0] + 10408u), c.r[2].w[0]);
    c.budget -= 11;
L_003C36B8:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);  if (t) { goto L_003C36E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 10408u)));
    set32(c.r[2], c.r[2].w[0] + 10880u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[2], ld32((c.r[1].w[0] + 10408u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st32((c.r[1].w[0] + 10408u), c.r[2].w[0]);
    c.budget -= 10;
L_003C36E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 10408u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], c.r[3].w[0] + 10880u);
    set32(c.r[5], 0u + 255u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 8;
L_003C3708:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C3710:
    c.r[1].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003C3728; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C37B0; } }
    c.budget -= 1;
L_003C3728:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 10408u)));
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 512ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003C3748; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C37B0; } }
L_003C3748:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0; set32(c.r[6], 0u + 24u);  if (t) { goto L_003C3790; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], c.r[2].w[0] + 10880u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_003C3760:
    set32(c.r[2], c.r[4].w[0] >> (c.r[6].w[0] & 31u));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 10408u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] - 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 11;
    { const bool t = c.r[5].sd[0] > 0; st32((c.r[1].w[0] + 10408u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C3760u | kUnwind; return; } goto L_003C3760; } }
    c.budget -= 1;
L_003C3790:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 10408u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], c.r[3].w[0] + 10880u);
    set32(c.r[5], 0u + 255u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 8;
L_003C37B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C37C0:
    c.r[1].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_003C37D8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003C37E0; } }
    c.budget -= 1;
L_003C37D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003C3850; } }
L_003C37E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 10408u)));
    set32(c.r[2], c.r[3].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 512ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003C3800; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C3850; } }
L_003C3800:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0; set32(c.r[6], 0u + 24u);  if (t) { goto L_003C3848; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], c.r[2].w[0] + 10880u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_003C3818:
    set32(c.r[2], c.r[4].w[0] >> (c.r[6].w[0] & 31u));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 10408u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] - 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 11;
    { const bool t = c.r[5].sd[0] > 0; st32((c.r[1].w[0] + 10408u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C3818u | kUnwind; return; } goto L_003C3818; } }
    c.budget -= 1;
L_003C3848:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003C3850:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C3860:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 127u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 24));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C3888; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C3C68; } }
    c.budget -= 1;
L_003C3888:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_003C38A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C3C68; } }
    c.budget -= 1;
L_003C38A0:
    c.r[7].d[0] = c.r[5].d[0] & 240ull;
    set32(c.r[6], 0u + 80u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[6].d[0]; set32(c.r[6], 0u + 96u);  if (t) { goto L_003C3C50; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_003C3C50; } }
    set32(c.r[6], 0u + 64u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[6].d[0]; set32(c.r[6], 0u + 112u);  if (t) { goto L_003C3B18; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_003C39A8; } }
    set32(c.r[6], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[6].d[0]; set32(c.r[6], 0u + 32u);  if (t) { goto L_003C39A8; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_003C3950; } }
    set32(c.r[6], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_003C3920; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_003C3900; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C3C68; } }
    c.budget -= 1;
L_003C3900:
    c.r[5].d[0] = ld8((c.r[4].w[0] + 4u));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 5u));
    c.r[7].d[0] = ld16((c.r[4].w[0] + 6u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3914u); c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 334u, depth + 1u); else { c.pc = 0x003C3340u; return; } if (c.pc != 0x003C3914u) [[unlikely]] return; }
L_003C3914:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C3C68; } }
    c.budget -= 1;
L_003C3920:
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003C3940; } }
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3938u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00B0(c, 338u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003C3938u) [[unlikely]] return; }
L_003C3938:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C3948; } }
L_003C3940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3948u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B0(c, 338u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003C3948u) [[unlikely]] return; }
L_003C3948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C3C68; } }
L_003C3950:
    set32(c.r[2], 0u + 34u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_003C3978; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[6].d[0]; set32(c.r[2], 0u + 36u);  if (t) { goto L_003C3978; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_003C3978; } }
    set32(c.r[2], 0u + 35u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_003C3990; } }
L_003C3978:
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3984u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00B0(c, 338u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003C3984u) [[unlikely]] return; }
L_003C3984:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C3C68; } }
    c.budget -= 1;
L_003C3990:
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C399Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00B0(c, 338u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003C399Cu) [[unlikely]] return; }
L_003C399C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C3C68; } }
    c.budget -= 1;
L_003C39A8:
    set32(c.r[2], 0u + 56u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[5].w[0] - 48u);  if (t) { goto L_003C39D8; } }
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003C39D8; } }
    set32(c.r[2], 0u + 113u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 115u);  if (t) { goto L_003C39D8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_003C39F0; } }
    c.budget -= 1;
L_003C39D8:
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C39E4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00B0(c, 338u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003C39E4u) [[unlikely]] return; }
L_003C39E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C3C68; } }
    c.budget -= 1;
L_003C39F0:
    set32(c.r[2], 0u + 55u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[5].w[0] - 57u);  if (t) { goto L_003C3A28; } }
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003C3A28; } }
    set32(c.r[2], 0u + 61u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 114u);  if (t) { goto L_003C3A28; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_003C3A28; } }
    set32(c.r[2], 0u + 117u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_003C3A40; } }
L_003C3A28:
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3A34u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00B0(c, 338u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003C3A34u) [[unlikely]] return; }
L_003C3A34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C3C68; } }
    c.budget -= 1;
L_003C3A40:
    set32(c.r[2], 0u + 54u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 116u);  if (t) { goto L_003C3A58; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_003C3A70; } }
    c.budget -= 1;
L_003C3A58:
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3A64u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_00B0(c, 338u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003C3A64u) [[unlikely]] return; }
L_003C3A64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C3C68; } }
    c.budget -= 1;
L_003C3A70:
    set32(c.r[2], 0u + 119u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 60u);  if (t) { goto L_003C3A90; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_003C3A90; } }
    set32(c.r[2], 0u + 62u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_003C3AB8; } }
L_003C3A90:
    c.r[6].d[0] = ld8((c.r[4].w[0] + 4u));
    set32(c.r[5], 0u + 5u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3AACu); c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 336u, depth + 1u); else { c.pc = 0x003C3580u; return; } if (c.pc != 0x003C3AACu) [[unlikely]] return; }
L_003C3AAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C3C68; } }
    c.budget -= 1;
L_003C3AB8:
    set32(c.r[2], 0u + 63u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_003C3AE8; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 4u));
    set32(c.r[5], 0u + 7u);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 5u));
    c.r[9].d[0] = 0ull + 0ull;
    c.r[8].d[0] = ld8((c.r[4].w[0] + 6u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3AE0u); c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 336u, depth + 1u); else { c.pc = 0x003C3580u; return; } if (c.pc != 0x003C3AE0u) [[unlikely]] return; }
L_003C3AE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C3C68; } }
L_003C3AE8:
    set32(c.r[2], 0u + 53u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_003C3B04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3AFCu);  if (depth < kMaxDepth) unit_00B0(c, 335u, depth + 1u); else { c.pc = 0x003C3420u; return; } if (c.pc != 0x003C3AFCu) [[unlikely]] return; }
L_003C3AFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C3B10; } }
L_003C3B04:
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3B10u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B0(c, 338u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003C3B10u) [[unlikely]] return; }
L_003C3B10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C3C68; } }
L_003C3B18:
    set32(c.r[2], c.r[5].w[0] - 71u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 65u);  if (t) { goto L_003C3B40; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_003C3B40; } }
    set32(c.r[2], 0u + 66u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_003C3B58; } }
    c.budget -= 1;
L_003C3B40:
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3B4Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00B0(c, 338u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003C3B4Cu) [[unlikely]] return; }
L_003C3B4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C3C68; } }
    c.budget -= 1;
L_003C3B58:
    set32(c.r[2], 0u + 75u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_003C3B78; } }
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3B70u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00B0(c, 338u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003C3B70u) [[unlikely]] return; }
L_003C3B70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C3C68; } }
L_003C3B78:
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 76u);  if (t) { goto L_003C3B90; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_003C3BA8; } }
    c.budget -= 1;
L_003C3B90:
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3B9Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_00B0(c, 338u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003C3B9Cu) [[unlikely]] return; }
L_003C3B9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C3C68; } }
    c.budget -= 1;
L_003C3BA8:
    set32(c.r[2], 0u + 68u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_003C3BD8; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 4u));
    set32(c.r[5], 0u + 6u);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 5u));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3BD0u); c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 336u, depth + 1u); else { c.pc = 0x003C3580u; return; } if (c.pc != 0x003C3BD0u) [[unlikely]] return; }
L_003C3BD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C3C68; } }
L_003C3BD8:
    set32(c.r[2], 0u + 77u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 78u);  if (t) { goto L_003C3BF0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_003C3C08; } }
    c.budget -= 1;
L_003C3BF0:
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3C00u); set32(c.r[6], 0u + 21u);  if (depth < kMaxDepth) unit_00B0(c, 340u, depth + 1u); else { c.pc = 0x003C37C0u; return; } if (c.pc != 0x003C3C00u) [[unlikely]] return; }
L_003C3C00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C3C68; } }
L_003C3C08:
    set32(c.r[2], 0u + 79u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_003C3C3C; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));
    c.r[6].d[0] = c.r[2].d[0] & 255ull;
    c.r[7].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[5], 0u + 6u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3C34u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 336u, depth + 1u); else { c.pc = 0x003C3580u; return; } if (c.pc != 0x003C3C34u) [[unlikely]] return; }
L_003C3C34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C3C48; } }
L_003C3C3C:
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3C48u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B0(c, 338u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003C3C48u) [[unlikely]] return; }
L_003C3C48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C3C68; } }
L_003C3C50:
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3C5Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00B0(c, 338u, depth + 1u); else { c.pc = 0x003C3710u; return; } if (c.pc != 0x003C3C5Cu) [[unlikely]] return; }
L_003C3C5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C3C68; } }
    c.budget -= 1;
L_003C3C68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C3C80:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3CACu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x003C3CACu) [[unlikely]] return; }
L_003C3CAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003C3CF8; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u + 17u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 35u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[3], c.r[3].w[0] + 15648u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[2], c.r[2].w[0] + 18096u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3CF8u); st32((c.r[16].w[0] + 24u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x003C3CF8u) [[unlikely]] return; }
L_003C3CF8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C3D20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003C3D70; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003C3D70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3D5Cu); st8((c.r[17].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x003C3D5Cu) [[unlikely]] return; }
L_003C3D5C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003C3D70; } }
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_003C3D70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.f[0] = ld32((c.r[16].w[0] + 8252u));
    set32(c.r[2], c.r[2].w[0] + 32224u);
    st32((c.r[17].w[0] + 392u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3D98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C3D98u) [[unlikely]] return; }
L_003C3D98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C3DB0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 8192u);
    set32(c.r[3], 0u + 25600u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 562u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 566u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 384u), 0u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 388u), 0u);  c.pc = t; return; }
L_003C3DE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 32240u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[18].w[0] + 304u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 16;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3E20u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C3E20u) [[unlikely]] return; }
L_003C3E20:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003C3E30; } }
    st32((c.r[16].w[0] + 344u), c.r[2].w[0]);
    c.budget -= 1;
L_003C3E30:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3E3Cu); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_0000(c, 251u, depth + 1u); else { c.pc = 0x00102880u; return; } if (c.pc != 0x003C3E3Cu) [[unlikely]] return; }
L_003C3E3C:
    set32(c.r[4], c.r[18].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3E48u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003C3E48u) [[unlikely]] return; }
L_003C3E48:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C3E68; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003C3E68; } }
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003C3E68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C3E80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 336u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C3F90; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0800000u);
    set32(c.r[2], 0u + 70u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[18].w[0] + 516u), static_cast<std::uint8_t>(0u));
    st32((c.r[18].w[0] + 88u), 0u);
    st32((c.r[18].w[0] + 84u), 0u);
    st32((c.r[18].w[0] + 80u), 0u);
    st32((c.r[18].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 108u), 0u);
    st16((c.r[18].w[0] + 496u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 500u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 498u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 504u)));
    st32((c.r[18].w[0] + 504u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 508u)));
    st32((c.r[18].w[0] + 508u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 96u), 0u);
    st32((c.r[17].w[0] + 80u), 0u);
    st32((c.r[17].w[0] + 84u), 0u);
    st32((c.r[17].w[0] + 92u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 5u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3F28u); set32(c.r[5], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0000(c, 251u, depth + 1u); else { c.pc = 0x00102880u; return; } if (c.pc != 0x003C3F28u) [[unlikely]] return; }
L_003C3F28:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[4], c.r[18].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 6u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3F48u); set32(c.r[5], c.r[2].w[0] + 2032u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003C3F48u) [[unlikely]] return; }
L_003C3F48:
    set32(c.r[2], ld32((c.r[18].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003C3F68; } }
    set32(c.r[6], c.r[16].w[0] + 1360u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3F60u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 82u, depth + 1u); else { c.pc = 0x003C4A70u; return; } if (c.pc != 0x003C3F60u) [[unlikely]] return; }
L_003C3F60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C3F78; } }
L_003C3F68:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3F74u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 68u, depth + 1u); else { c.pc = 0x003C4840u; return; } if (c.pc != 0x003C3F74u) [[unlikely]] return; }
L_003C3F74:
    c.budget -= 1;
L_003C3F78:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3F8Cu); st16((c.r[18].w[0] + 560u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x003C3F8Cu) [[unlikely]] return; }
L_003C3F8C:
    c.budget -= 1;
L_003C3F90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C3FB0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 128u);
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3FDCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003C3FDCu) [[unlikely]] return; }
L_003C3FDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3FE4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 81u, depth + 1u); else { c.pc = 0x003C49F0u; return; } if (c.pc != 0x003C3FE4u) [[unlikely]] return; }
L_003C3FE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_00B1(c, 1u, depth); } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 512u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 504u), 0u);  if (t) { [[clang::musttail]] return unit_00B1(c, 3u, depth); } }
    c.budget -= 1;
    [[clang::musttail]] return unit_00B1(c, 1u, depth);
}

}
