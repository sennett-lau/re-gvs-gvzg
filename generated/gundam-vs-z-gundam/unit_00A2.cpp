#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00A2[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 0,
    9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14,
    0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0,
    20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0,
    0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0,
    0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0,
    42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0,
    0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 57, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0,
    0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0,
    0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0,
    95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0,
    102, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 110,
    0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 116, 0, 117, 0, 0, 0, 0, 118, 0, 0,
    119, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 127,
    0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0,
    0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0,
    0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0,
    0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0,
    0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164,
    0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 169, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0,
    0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0,
    179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 184,
    0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0,
    0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0,
    196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0,
    0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0,
    0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 208, 0, 0, 209, 0, 0, 210, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0,
    214, 0, 0, 215, 0, 0, 216, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0, 0,
    224, 0, 0, 225, 0, 0, 226, 0, 0, 227, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0,
    0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0,
    0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0,
    239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0,
    261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0,
    264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0,
    270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0,
    273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280,
    0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 285, 0, 0,
    0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0,
    291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0,
    0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0,
    0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0,
    0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0,
    316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0,
    0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0,
    0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 333, 0, 334, 0, 0, 0, 0, 0, 0,
    335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0,
    339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0,
    341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0,
    0, 0, 0, 0, 0, 0, 358, 0, 0, 359, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0,
    364, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 369, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0,
    0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0,
    0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0,
    384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392,
    0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 397,
    0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0,
    0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0,
    0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 0, 410, 0, 411, 0, 0, 412, 0, 0, 0, 0, 0, 0, 413, 0, 0, 414, 0, 0,
    415, 0, 416, 0, 0, 417, 0, 0, 418, 0, 0, 419, 0, 0, 420, 0, 0, 421, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    427, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00A2(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00388000;
    case 2u: goto L_00388058;
    case 3u: goto L_00388078;
    case 4u: goto L_003880A0;
    case 5u: goto L_003880A8;
    case 6u: goto L_003880C0;
    case 7u: goto L_003880D8;
    case 8u: goto L_003880E0;
    case 9u: goto L_00388100;
    case 10u: goto L_00388114;
    case 11u: goto L_00388138;
    case 12u: goto L_00388150;
    case 13u: goto L_00388168;
    case 14u: goto L_0038817C;
    case 15u: goto L_00388190;
    case 16u: goto L_003881B4;
    case 17u: goto L_003881C8;
    case 18u: goto L_003881E4;
    case 19u: goto L_003881F0;
    case 20u: goto L_00388200;
    case 21u: goto L_00388220;
    case 22u: goto L_00388248;
    case 23u: goto L_00388250;
    case 24u: goto L_00388260;
    case 25u: goto L_00388270;
    case 26u: goto L_00388288;
    case 27u: goto L_003882A0;
    case 28u: goto L_003882D0;
    case 29u: goto L_003882E0;
    case 30u: goto L_0038831C;
    case 31u: goto L_00388330;
    case 32u: goto L_00388360;
    case 33u: goto L_00388388;
    case 34u: goto L_003883A8;
    case 35u: goto L_003883C0;
    case 36u: goto L_003883F0;
    case 37u: goto L_00388408;
    case 38u: goto L_00388410;
    case 39u: goto L_00388430;
    case 40u: goto L_00388444;
    case 41u: goto L_00388468;
    case 42u: goto L_00388480;
    case 43u: goto L_003884A8;
    case 44u: goto L_003884B0;
    case 45u: goto L_003884C0;
    case 46u: goto L_003884D8;
    case 47u: goto L_003884F8;
    case 48u: goto L_0038852C;
    case 49u: goto L_00388540;
    case 50u: goto L_00388564;
    case 51u: goto L_00388584;
    case 52u: goto L_0038859C;
    case 53u: goto L_003885B8;
    case 54u: goto L_003885E8;
    case 55u: goto L_003885F8;
    case 56u: goto L_00388640;
    case 57u: goto L_00388684;
    case 58u: goto L_0038868C;
    case 59u: goto L_00388698;
    case 60u: goto L_003886C4;
    case 61u: goto L_003886E0;
    case 62u: goto L_00388720;
    case 63u: goto L_00388730;
    case 64u: goto L_0038874C;
    case 65u: goto L_00388770;
    case 66u: goto L_00388798;
    case 67u: goto L_003887A0;
    case 68u: goto L_003887B0;
    case 69u: goto L_00388800;
    case 70u: goto L_00388814;
    case 71u: goto L_00388880;
    case 72u: goto L_003888C8;
    case 73u: goto L_003888E8;
    case 74u: goto L_0038890C;
    case 75u: goto L_00388920;
    case 76u: goto L_00388960;
    case 77u: goto L_00388970;
    case 78u: goto L_00388990;
    case 79u: goto L_003889B8;
    case 80u: goto L_003889C0;
    case 81u: goto L_003889D0;
    case 82u: goto L_003889E0;
    case 83u: goto L_00388A38;
    case 84u: goto L_00388A50;
    case 85u: goto L_00388AD4;
    case 86u: goto L_00388AEC;
    case 87u: goto L_00388B20;
    case 88u: goto L_00388B60;
    case 89u: goto L_00388B74;
    case 90u: goto L_00388BAC;
    case 91u: goto L_00388BE8;
    case 92u: goto L_00388BFC;
    case 93u: goto L_00388C3C;
    case 94u: goto L_00388C68;
    case 95u: goto L_00388C80;
    case 96u: goto L_00388CCC;
    case 97u: goto L_00388CD4;
    case 98u: goto L_00388D1C;
    case 99u: goto L_00388D90;
    case 100u: goto L_00388DD8;
    case 101u: goto L_00388DEC;
    case 102u: goto L_00388E00;
    case 103u: goto L_00388E10;
    case 104u: goto L_00388E18;
    case 105u: goto L_00388E2C;
    case 106u: goto L_00388E40;
    case 107u: goto L_00388E50;
    case 108u: goto L_00388E58;
    case 109u: goto L_00388E6C;
    case 110u: goto L_00388E7C;
    case 111u: goto L_00388E88;
    case 112u: goto L_00388E9C;
    case 113u: goto L_00388EAC;
    case 114u: goto L_00388EB8;
    case 115u: goto L_00388ECC;
    case 116u: goto L_00388ED8;
    case 117u: goto L_00388EE0;
    case 118u: goto L_00388EF4;
    case 119u: goto L_00388F00;
    case 120u: goto L_00388F08;
    case 121u: goto L_00388F1C;
    case 122u: goto L_00388F2C;
    case 123u: goto L_00388F38;
    case 124u: goto L_00388F4C;
    case 125u: goto L_00388F5C;
    case 126u: goto L_00388F68;
    case 127u: goto L_00388F7C;
    case 128u: goto L_00388F88;
    case 129u: goto L_00388F90;
    case 130u: goto L_00388FB4;
    case 131u: goto L_00388FD0;
    case 132u: goto L_00389014;
    case 133u: goto L_0038902C;
    case 134u: goto L_0038903C;
    case 135u: goto L_00389070;
    case 136u: goto L_00389090;
    case 137u: goto L_00389098;
    case 138u: goto L_003890A8;
    case 139u: goto L_003890CC;
    case 140u: goto L_00389100;
    case 141u: goto L_0038912C;
    case 142u: goto L_00389134;
    case 143u: goto L_00389144;
    case 144u: goto L_00389158;
    case 145u: goto L_003891A4;
    case 146u: goto L_003891C0;
    case 147u: goto L_003891EC;
    case 148u: goto L_003891F4;
    case 149u: goto L_00389204;
    case 150u: goto L_0038921C;
    case 151u: goto L_0038924C;
    case 152u: goto L_00389254;
    case 153u: goto L_00389270;
    case 154u: goto L_00389294;
    case 155u: goto L_0038929C;
    case 156u: goto L_003892AC;
    case 157u: goto L_003892C0;
    case 158u: goto L_003892F0;
    case 159u: goto L_003892F8;
    case 160u: goto L_00389310;
    case 161u: goto L_0038934C;
    case 162u: goto L_00389354;
    case 163u: goto L_00389364;
    case 164u: goto L_0038937C;
    case 165u: goto L_0038939C;
    case 166u: goto L_003893BC;
    case 167u: goto L_003893C4;
    case 168u: goto L_003893E0;
    case 169u: goto L_0038940C;
    case 170u: goto L_00389414;
    case 171u: goto L_00389424;
    case 172u: goto L_0038943C;
    case 173u: goto L_0038946C;
    case 174u: goto L_00389474;
    case 175u: goto L_00389490;
    case 176u: goto L_003894CC;
    case 177u: goto L_003894D4;
    case 178u: goto L_003894E4;
    case 179u: goto L_00389500;
    case 180u: goto L_00389518;
    case 181u: goto L_00389534;
    case 182u: goto L_00389550;
    case 183u: goto L_00389574;
    case 184u: goto L_0038957C;
    case 185u: goto L_0038958C;
    case 186u: goto L_003895A0;
    case 187u: goto L_003895D0;
    case 188u: goto L_003895D8;
    case 189u: goto L_003895F0;
    case 190u: goto L_00389614;
    case 191u: goto L_0038961C;
    case 192u: goto L_0038962C;
    case 193u: goto L_003896AC;
    case 194u: goto L_003896DC;
    case 195u: goto L_003896E4;
    case 196u: goto L_00389700;
    case 197u: goto L_0038973C;
    case 198u: goto L_00389744;
    case 199u: goto L_00389754;
    case 200u: goto L_0038976C;
    case 201u: goto L_0038978C;
    case 202u: goto L_003897AC;
    case 203u: goto L_003897B4;
    case 204u: goto L_003897D0;
    case 205u: goto L_003897F0;
    case 206u: goto L_00389810;
    case 207u: goto L_00389824;
    case 208u: goto L_00389830;
    case 209u: goto L_0038983C;
    case 210u: goto L_00389848;
    case 211u: goto L_00389850;
    case 212u: goto L_00389860;
    case 213u: goto L_00389874;
    case 214u: goto L_00389880;
    case 215u: goto L_0038988C;
    case 216u: goto L_00389898;
    case 217u: goto L_003898A0;
    case 218u: goto L_003898B0;
    case 219u: goto L_003898C4;
    case 220u: goto L_003898D0;
    case 221u: goto L_003898DC;
    case 222u: goto L_003898E8;
    case 223u: goto L_003898F4;
    case 224u: goto L_00389900;
    case 225u: goto L_0038990C;
    case 226u: goto L_00389918;
    case 227u: goto L_00389924;
    case 228u: goto L_00389930;
    case 229u: goto L_00389938;
    case 230u: goto L_00389950;
    case 231u: goto L_00389978;
    case 232u: goto L_003899F0;
    case 233u: goto L_00389A10;
    case 234u: goto L_00389A50;
    case 235u: goto L_00389A60;
    case 236u: goto L_00389A70;
    case 237u: goto L_00389A90;
    case 238u: goto L_00389AE0;
    case 239u: goto L_00389B00;
    case 240u: goto L_00389B50;
    case 241u: goto L_00389B6C;
    case 242u: goto L_00389C40;
    case 243u: goto L_00389C68;
    case 244u: goto L_00389CC0;
    case 245u: goto L_00389CE0;
    case 246u: goto L_00389D30;
    case 247u: goto L_00389D50;
    case 248u: goto L_00389DA0;
    case 249u: goto L_00389DC0;
    case 250u: goto L_00389E10;
    case 251u: goto L_00389E40;
    case 252u: goto L_00389E60;
    case 253u: goto L_00389EB0;
    case 254u: goto L_00389EC4;
    case 255u: goto L_00389F30;
    case 256u: goto L_00389F50;
    case 257u: goto L_00389FA0;
    case 258u: goto L_00389FB4;
    case 259u: goto L_00389FC4;
    case 260u: goto L_00389FE0;
    case 261u: goto L_0038A000;
    case 262u: goto L_0038A050;
    case 263u: goto L_0038A060;
    case 264u: goto L_0038A080;
    case 265u: goto L_0038A110;
    case 266u: goto L_0038A15C;
    case 267u: goto L_0038A1D0;
    case 268u: goto L_0038A1F8;
    case 269u: goto L_0038A260;
    case 270u: goto L_0038A280;
    case 271u: goto L_0038A2B0;
    case 272u: goto L_0038A2E0;
    case 273u: goto L_0038A300;
    case 274u: goto L_0038A330;
    case 275u: goto L_0038A3A0;
    case 276u: goto L_0038A3C0;
    case 277u: goto L_0038A440;
    case 278u: goto L_0038A4B8;
    case 279u: goto L_0038A4E0;
    case 280u: goto L_0038A4FC;
    case 281u: goto L_0038A508;
    case 282u: goto L_0038A51C;
    case 283u: goto L_0038A550;
    case 284u: goto L_0038A56C;
    case 285u: goto L_0038A574;
    case 286u: goto L_0038A598;
    case 287u: goto L_0038A5B0;
    case 288u: goto L_0038A644;
    case 289u: goto L_0038A64C;
    case 290u: goto L_0038A660;
    case 291u: goto L_0038A680;
    case 292u: goto L_0038A6B0;
    case 293u: goto L_0038A800;
    case 294u: goto L_0038A820;
    case 295u: goto L_0038A840;
    case 296u: goto L_0038A918;
    case 297u: goto L_0038A968;
    case 298u: goto L_0038A990;
    case 299u: goto L_0038AA0C;
    case 300u: goto L_0038AA2C;
    case 301u: goto L_0038AA4C;
    case 302u: goto L_0038AA6C;
    case 303u: goto L_0038AA90;
    case 304u: goto L_0038AAAC;
    case 305u: goto L_0038AAD4;
    case 306u: goto L_0038AAF8;
    case 307u: goto L_0038AB1C;
    case 308u: goto L_0038AB30;
    case 309u: goto L_0038AB50;
    case 310u: goto L_0038AB64;
    case 311u: goto L_0038AB74;
    case 312u: goto L_0038AB90;
    case 313u: goto L_0038ABA8;
    case 314u: goto L_0038ABC0;
    case 315u: goto L_0038ABE4;
    case 316u: goto L_0038AC00;
    case 317u: goto L_0038AC2C;
    case 318u: goto L_0038AC44;
    case 319u: goto L_0038AC60;
    case 320u: goto L_0038AC8C;
    case 321u: goto L_0038ACA4;
    case 322u: goto L_0038ACC0;
    case 323u: goto L_0038ACD0;
    case 324u: goto L_0038ACE0;
    case 325u: goto L_0038ACF0;
    case 326u: goto L_0038AD10;
    case 327u: goto L_0038AD24;
    case 328u: goto L_0038AD50;
    case 329u: goto L_0038AD70;
    case 330u: goto L_0038AD94;
    case 331u: goto L_0038ADB0;
    case 332u: goto L_0038ADD4;
    case 333u: goto L_0038ADDC;
    case 334u: goto L_0038ADE4;
    case 335u: goto L_0038AE00;
    case 336u: goto L_0038AE10;
    case 337u: goto L_0038AE50;
    case 338u: goto L_0038AE70;
    case 339u: goto L_0038AE80;
    case 340u: goto L_0038AEEC;
    case 341u: goto L_0038AF00;
    case 342u: goto L_0038AFA0;
    case 343u: goto L_0038AFB8;
    case 344u: goto L_0038AFCC;
    case 345u: goto L_0038AFF0;
    case 346u: goto L_0038B040;
    case 347u: goto L_0038B0F0;
    case 348u: goto L_0038B1E0;
    case 349u: goto L_0038B2D0;
    case 350u: goto L_0038B308;
    case 351u: goto L_0038B318;
    case 352u: goto L_0038B330;
    case 353u: goto L_0038B33C;
    case 354u: goto L_0038B3A0;
    case 355u: goto L_0038B40C;
    case 356u: goto L_0038B42C;
    case 357u: goto L_0038B478;
    case 358u: goto L_0038B498;
    case 359u: goto L_0038B4A4;
    case 360u: goto L_0038B4B0;
    case 361u: goto L_0038B4C8;
    case 362u: goto L_0038B4D4;
    case 363u: goto L_0038B4E0;
    case 364u: goto L_0038B500;
    case 365u: goto L_0038B508;
    case 366u: goto L_0038B5A0;
    case 367u: goto L_0038B5A8;
    case 368u: goto L_0038B5E8;
    case 369u: goto L_0038B5F0;
    case 370u: goto L_0038B620;
    case 371u: goto L_0038B628;
    case 372u: goto L_0038B650;
    case 373u: goto L_0038B670;
    case 374u: goto L_0038B6E8;
    case 375u: goto L_0038B70C;
    case 376u: goto L_0038B764;
    case 377u: goto L_0038B774;
    case 378u: goto L_0038B788;
    case 379u: goto L_0038B7AC;
    case 380u: goto L_0038B810;
    case 381u: goto L_0038B820;
    case 382u: goto L_0038B844;
    case 383u: goto L_0038B860;
    case 384u: goto L_0038B880;
    case 385u: goto L_0038B8CC;
    case 386u: goto L_0038B918;
    case 387u: goto L_0038B938;
    case 388u: goto L_0038B988;
    case 389u: goto L_0038B9B0;
    case 390u: goto L_0038BA94;
    case 391u: goto L_0038BAC0;
    case 392u: goto L_0038BAFC;
    case 393u: goto L_0038BB0C;
    case 394u: goto L_0038BB20;
    case 395u: goto L_0038BB50;
    case 396u: goto L_0038BB60;
    case 397u: goto L_0038BB7C;
    case 398u: goto L_0038BB8C;
    case 399u: goto L_0038BBD8;
    case 400u: goto L_0038BC08;
    case 401u: goto L_0038BC34;
    case 402u: goto L_0038BC50;
    case 403u: goto L_0038BC98;
    case 404u: goto L_0038BCD0;
    case 405u: goto L_0038BCF8;
    case 406u: goto L_0038BD10;
    case 407u: goto L_0038BD6C;
    case 408u: goto L_0038BD90;
    case 409u: goto L_0038BDA0;
    case 410u: goto L_0038BDB8;
    case 411u: goto L_0038BDC0;
    case 412u: goto L_0038BDCC;
    case 413u: goto L_0038BDE8;
    case 414u: goto L_0038BDF4;
    case 415u: goto L_0038BE00;
    case 416u: goto L_0038BE08;
    case 417u: goto L_0038BE14;
    case 418u: goto L_0038BE20;
    case 419u: goto L_0038BE2C;
    case 420u: goto L_0038BE38;
    case 421u: goto L_0038BE44;
    case 422u: goto L_0038BE50;
    case 423u: goto L_0038BE70;
    case 424u: goto L_0038BE98;
    case 425u: goto L_0038BF10;
    case 426u: goto L_0038BF30;
    case 427u: goto L_0038BF80;
    case 428u: goto L_0038BF90;
    case 429u: goto L_0038BFB0;
    default: bad_entry(c, 0x00388000u); return;
    }
L_00388000:
    set32(c.r[9], c.r[9].w[0] + c.r[6].w[0]);
    st8((c.r[9].w[0] + 21898u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[9], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[9], c.r[9].w[0] + c.r[6].w[0]);
    st8((c.r[9].w[0] + 22027u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[9], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[9], c.r[9].w[0] + c.r[6].w[0]);
    st8((c.r[9].w[0] + 22030u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[9], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[9], c.r[9].w[0] + c.r[6].w[0]);
    st8((c.r[9].w[0] + 22159u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[9], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[9], c.r[9].w[0] + c.r[6].w[0]);
    st8((c.r[9].w[0] + 22162u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[9], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[9], c.r[9].w[0] + c.r[6].w[0]);
    st8((c.r[9].w[0] + 22291u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[9], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[9], c.r[9].w[0] + c.r[6].w[0]);
    st8((c.r[9].w[0] + 22294u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 22;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 1056u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00387F88u | kUnwind; return; } [[clang::musttail]] return unit_00A1(c, 295u, depth); } }
L_00388058:
    c.r[1].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] << 5);  if (t) { goto L_003880A0; } }
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[8], c.r[2].w[0] << 2);
    set32(c.r[7], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
L_00388078:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    st8((c.r[3].w[0] + 21367u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    st8((c.r[3].w[0] + 21370u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 132u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00388078u | kUnwind; return; } goto L_00388078; } }
L_003880A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003880A8u);  if (depth < kMaxDepth) unit_00A2(c, 293u, depth + 1u); else { c.pc = 0x0038A800u; return; } if (c.pc != 0x003880A8u) [[unlikely]] return; }
L_003880A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003880C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003880D8u); st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A2(c, 212u, depth + 1u); else { c.pc = 0x00389860u; return; } if (c.pc != 0x003880D8u) [[unlikely]] return; }
L_003880D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003880E0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 19u, depth + 1u); else { c.pc = 0x003341C0u; return; } if (c.pc != 0x003880E0u) [[unlikely]] return; }
L_003880E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 2598u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00388100:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388114u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x00388114u) [[unlikely]] return; }
L_00388114:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00388130; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_00388130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388138u);  if (depth < kMaxDepth) unit_00A2(c, 95u, depth + 1u); else { c.pc = 0x00388C80u; return; } if (c.pc != 0x00388138u) [[unlikely]] return; }
L_00388138:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00388150:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388168u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x00388168u) [[unlikely]] return; }
L_00388168:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00388188; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038817Cu); c.r[4].d[0] = ld8((c.r[2].w[0] + 2598u));  if (depth < kMaxDepth) unit_00A2(c, 84u, depth + 1u); else { c.pc = 0x00388A50u; return; } if (c.pc != 0x0038817Cu) [[unlikely]] return; }
L_0038817C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003881E8; } }
    c.budget -= 1;
L_00388188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388190u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x00388190u) [[unlikely]] return; }
L_00388190:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003881C0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003881B4u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003881B4u) [[unlikely]] return; }
L_003881B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003881E8; } }
    c.budget -= 1;
L_003881C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003881C8u);  if (depth < kMaxDepth) unit_00A2(c, 298u, depth + 1u); else { c.pc = 0x0038A990u; return; } if (c.pc != 0x003881C8u) [[unlikely]] return; }
L_003881C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003881E8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003881E4u); set32(c.r[4], c.r[2].w[0] + 2598u);  if (depth < kMaxDepth) unit_008D(c, 20u, depth + 1u); else { c.pc = 0x003341D0u; return; } if (c.pc != 0x003881E4u) [[unlikely]] return; }
L_003881E4:
    c.budget -= 1;
L_003881E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003881F0u);  if (depth < kMaxDepth) unit_00A2(c, 95u, depth + 1u); else { c.pc = 0x00388C80u; return; } if (c.pc != 0x003881F0u) [[unlikely]] return; }
L_003881F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00388200:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 280u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00388000u < 16384u) { entry = entries_00A2[(t - 0x00388000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00388220:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388248u); st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x00388248u) [[unlikely]] return; }
L_00388248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388250u);  if (depth < kMaxDepth) unit_00A2(c, 95u, depth + 1u); else { c.pc = 0x00388C80u; return; } if (c.pc != 0x00388250u) [[unlikely]] return; }
L_00388250:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00388260:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388270u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x00388270u) [[unlikely]] return; }
L_00388270:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u - 2u);  if (t) { goto L_00388280; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22528u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00388288; } }
L_00388280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388288u);  if (depth < kMaxDepth) unit_00A2(c, 95u, depth + 1u); else { c.pc = 0x00388C80u; return; } if (c.pc != 0x00388288u) [[unlikely]] return; }
L_00388288:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003882A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st8((c.r[28].w[0] - 22528u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 288u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003882D0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003882D0u) [[unlikely]] return; }
L_003882D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22528u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003882E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 516u)));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00388320; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 304u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038831Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038831Cu) [[unlikely]] return; }
L_0038831C:
    c.budget -= 1;
L_00388320:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00388330:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 16u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388360u); st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 83u, depth + 1u); else { c.pc = 0x00334FC0u; return; } if (c.pc != 0x00388360u) [[unlikely]] return; }
L_00388360:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 285u)));
    st8((c.r[2].w[0] + 10190u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 10190u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    st32((c.r[28].w[0] - 22444u), c.r[2].w[0]);
    c.budget -= 10;
L_00388388:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[6], 0u + 20u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[3].w[0] + 9854u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003883A8u); set32(c.r[5], c.r[2].w[0] + 201u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x003883A8u) [[unlikely]] return; }
L_003883A8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[6], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[2].w[0] + 9938u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003883C0u); set32(c.r[5], c.r[2].w[0] + 9854u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x003883C0u) [[unlikely]] return; }
L_003883C0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 21u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00388388u | kUnwind; return; } goto L_00388388; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003883F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388408u); st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A2(c, 218u, depth + 1u); else { c.pc = 0x003898B0u; return; } if (c.pc != 0x00388408u) [[unlikely]] return; }
L_00388408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388410u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 19u, depth + 1u); else { c.pc = 0x003341C0u; return; } if (c.pc != 0x00388410u) [[unlikely]] return; }
L_00388410:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2598u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00388430:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388444u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x00388444u) [[unlikely]] return; }
L_00388444:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00388460; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_00388460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388468u);  if (depth < kMaxDepth) unit_00A2(c, 135u, depth + 1u); else { c.pc = 0x00389070u; return; } if (c.pc != 0x00388468u) [[unlikely]] return; }
L_00388468:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00388480:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 320u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003884A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003884A8u) [[unlikely]] return; }
L_003884A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003884B0u);  if (depth < kMaxDepth) unit_00A2(c, 135u, depth + 1u); else { c.pc = 0x00389070u; return; } if (c.pc != 0x003884B0u) [[unlikely]] return; }
L_003884B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003884C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003884D8u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x003884D8u) [[unlikely]] return; }
L_003884D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00388538; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 2598u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00388500; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003884F8u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003884F8u) [[unlikely]] return; }
L_003884F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00388630; } }
L_00388500:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], 0u + 30u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038852Cu); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0038852Cu) [[unlikely]] return; }
L_0038852C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00388630; } }
    c.budget -= 1;
L_00388538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388540u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x00388540u) [[unlikely]] return; }
L_00388540:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00388570; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388564u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x00388564u) [[unlikely]] return; }
L_00388564:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00388630; } }
    c.budget -= 1;
L_00388570:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388584u); set32(c.r[4], c.r[2].w[0] + 2598u);  if (depth < kMaxDepth) unit_008D(c, 20u, depth + 1u); else { c.pc = 0x003341D0u; return; } if (c.pc != 0x00388584u) [[unlikely]] return; }
L_00388584:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2598u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 2048u);  if (t) { goto L_00388630; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038859Cu);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0038859Cu) [[unlikely]] return; }
L_0038859C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003885E0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003885B8u); st8((c.r[2].w[0] + 2602u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003885B8u) [[unlikely]] return; }
L_003885B8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 10190u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 10190u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[4].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 10190u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00388630; } }
    c.budget -= 1;
L_003885E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003885E8u); set32(c.r[4], 0u + 1024u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x003885E8u) [[unlikely]] return; }
L_003885E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00388628; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003885F8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003885F8u) [[unlikely]] return; }
L_003885F8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 2602u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 10190u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 10190u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[4].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 10190u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00388630; } }
L_00388628:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2602u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00388630:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00388640:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003886C8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2598u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388684u); set32(c.r[16], c.r[3].w[0] - 1u);  if (depth < kMaxDepth) unit_00A2(c, 325u, depth + 1u); else { c.pc = 0x0038ACF0u; return; } if (c.pc != 0x00388684u) [[unlikely]] return; }
L_00388684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038868Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00A2(c, 336u, depth + 1u); else { c.pc = 0x0038AE10u; return; } if (c.pc != 0x0038868Cu) [[unlikely]] return; }
L_0038868C:
    set32(c.r[4], 0u + 68u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388698u); set32(c.r[5], 0u + 328u);  if (depth < kMaxDepth) unit_00A2(c, 337u, depth + 1u); else { c.pc = 0x0038AE50u; return; } if (c.pc != 0x00388698u) [[unlikely]] return; }
L_00388698:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[6], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], c.r[6].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[6], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003886C4u); set32(c.r[7], c.r[2].w[0] + 9854u);  if (depth < kMaxDepth) unit_008D(c, 323u, depth + 1u); else { c.pc = 0x003374D0u; return; } if (c.pc != 0x003886C4u) [[unlikely]] return; }
L_003886C4:
    c.budget -= 1;
L_003886C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003886E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 20u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2598u));
    set32(c.r[3], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[17], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[17].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388720u); set32(c.r[4], c.r[2].w[0] + 9854u);  if (depth < kMaxDepth) unit_008D(c, 191u, depth + 1u); else { c.pc = 0x003361D0u; return; } if (c.pc != 0x00388720u) [[unlikely]] return; }
L_00388720:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00388750; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388730u);  if (depth < kMaxDepth) unit_00A2(c, 336u, depth + 1u); else { c.pc = 0x0038AE10u; return; } if (c.pc != 0x00388730u) [[unlikely]] return; }
L_00388730:
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038874Cu); set32(c.r[4], c.r[2].w[0] + 9854u);  if (depth < kMaxDepth) unit_008B(c, 222u, depth + 1u); else { c.pc = 0x0032F060u; return; } if (c.pc != 0x0038874Cu) [[unlikely]] return; }
L_0038874C:
    c.budget -= 1;
L_00388750:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00388770:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 336u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00388798u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00388798u) [[unlikely]] return; }
L_00388798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003887A0u);  if (depth < kMaxDepth) unit_00A2(c, 135u, depth + 1u); else { c.pc = 0x00389070u; return; } if (c.pc != 0x003887A0u) [[unlikely]] return; }
L_003887A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003887B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st32((c.r[28].w[0] - 22448u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 22444u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 10190u));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003887F8; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[28].w[0] - 22448u), c.r[2].w[0]);
    c.budget -= 3;
L_003887F8:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00388800:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[2].w[0] + 9854u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388814u); set32(c.r[5], c.r[2].w[0] + 9938u);  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x00388814u) [[unlikely]] return; }
L_00388814:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00388830; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22448u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 22448u), c.r[3].w[0]);  if (t) { goto L_00388840; } }
    c.budget -= 1;
L_00388830:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 21u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00388800u | kUnwind; return; } goto L_00388800; } }
L_00388840:
    set32(c.r[3], ld32((c.r[28].w[0] - 22448u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00388860; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_00388860:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00388880:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[4].w[0] + 4u));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00388918; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003888B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00388940; } }
    c.budget -= 1;
L_003888B8:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_003888C8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[6], 0u + 20u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[3].w[0] + 201u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003888E8u); set32(c.r[5], c.r[2].w[0] + 9854u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x003888E8u) [[unlikely]] return; }
L_003888E8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 21u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003888C8u | kUnwind; return; } goto L_003888C8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 10190u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038890Cu); st8((c.r[2].w[0] + 285u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_008D(c, 111u, depth + 1u); else { c.pc = 0x00335410u; return; } if (c.pc != 0x0038890Cu) [[unlikely]] return; }
L_0038890C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2528u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00388940; } }
L_00388918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388920u);  if (depth < kMaxDepth) unit_008D(c, 122u, depth + 1u); else { c.pc = 0x00335500u; return; } if (c.pc != 0x00388920u) [[unlikely]] return; }
L_00388920:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00388940; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2528u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
L_00388940:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00388960:
    set32(c.r[3], 0u + 3u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00388970:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 352u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00388000u < 16384u) { entry = entries_00A2[(t - 0x00388000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00388990:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003889B8u); st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x003889B8u) [[unlikely]] return; }
L_003889B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003889C0u);  if (depth < kMaxDepth) unit_00A2(c, 135u, depth + 1u); else { c.pc = 0x00389070u; return; } if (c.pc != 0x003889C0u) [[unlikely]] return; }
L_003889C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003889D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003889E0u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x003889E0u) [[unlikely]] return; }
L_003889E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00388A30; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 22448u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00388A20; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00388A20; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00388A10; } }
L_00388A10:
    set32(c.r[3], 0u - 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22528u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00388A28; } }
    c.budget -= 1;
L_00388A20:
    set32(c.r[3], 0u + 1u);
    st8((c.r[28].w[0] - 22528u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00388A28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00388A38; } }
L_00388A30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388A38u);  if (depth < kMaxDepth) unit_00A2(c, 135u, depth + 1u); else { c.pc = 0x00389070u; return; } if (c.pc != 0x00388A38u) [[unlikely]] return; }
L_00388A38:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00388A50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 3u);
    set32(c.r[7], ld32((c.r[28].w[0] - 23068u)));
    c.r[6].d[0] = ld8((c.r[1].w[0] + 15543u));
    set32(c.r[8], c.r[7].w[0] + 18589u);
    set32(c.r[5], c.r[8].w[0] + c.r[6].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[5].d[0] = ld8((c.r[5].w[0]));  if (t) { goto L_00388C08; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00388B80; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00388AF8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00388AA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00388C68; } }
    c.budget -= 1;
L_00388AA0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);  if (t) { goto L_00388AB8; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 15544u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00388AE0; } }
    c.budget -= 1;
L_00388AB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 15543u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388AD4u); st8((c.r[1].w[0] + 15544u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x00388AD4u) [[unlikely]] return; }
L_00388AD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00388C68; } }
    c.budget -= 1;
L_00388AE0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388AECu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x00388AECu) [[unlikely]] return; }
L_00388AEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00388C68; } }
    c.budget -= 1;
L_00388AF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 15544u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00388B28; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[1].w[0] + 15544u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388B20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x00388B20u) [[unlikely]] return; }
L_00388B20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00388C68; } }
L_00388B28:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] - 1u);  if (t) { goto L_00388B68; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 15543u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[1].w[0] + 15543u));
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388B60u); st8((c.r[1].w[0] + 15544u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x00388B60u) [[unlikely]] return; }
L_00388B60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00388C68; } }
L_00388B68:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388B74u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x00388B74u) [[unlikely]] return; }
L_00388B74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00388C68; } }
    c.budget -= 1;
L_00388B80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15544u));
    set32(c.r[2], c.r[5].w[0] - 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00388BB8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[1].w[0] + 15544u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388BACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x00388BACu) [[unlikely]] return; }
L_00388BAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00388C68; } }
    c.budget -= 1;
L_00388BB8:
    c.r[2].d[0] = ld8((c.r[7].w[0] + 18588u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);  if (t) { goto L_00388BF0; } }
    set32(c.r[2], c.r[6].w[0] + 1u);
    st8((c.r[1].w[0] + 15544u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388BE8u); st8((c.r[1].w[0] + 15543u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x00388BE8u) [[unlikely]] return; }
L_00388BE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00388C68; } }
L_00388BF0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388BFCu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x00388BFCu) [[unlikely]] return; }
L_00388BFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00388C68; } }
    c.budget -= 1;
L_00388C08:
    c.r[2].d[0] = ld8((c.r[7].w[0] + 18588u));
    set32(c.r[5], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[8].w[0] + c.r[5].w[0]);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[5].d[0]; c.r[4].d[0] = ld8((c.r[2].w[0]));  if (t) { goto L_00388C48; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], c.r[4].w[0] - 1u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15544u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00388C48; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388C3Cu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x00388C3Cu) [[unlikely]] return; }
L_00388C3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00388C68; } }
    c.budget -= 1;
L_00388C48:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 15543u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[4].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[1].w[0] + 15544u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388C68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x00388C68u) [[unlikely]] return; }
L_00388C68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00388C80:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[18].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[16].d[0] = ld8((c.r[1].w[0] + 15544u));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388CCCu); c.r[22].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x00388CCCu) [[unlikely]] return; }
L_00388CCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388CD4u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00388CD4u) [[unlikely]] return; }
L_00388CD4:
    set32(c.r[3], c.r[16].w[0] << 5);
    set32(c.r[2], c.r[18].w[0] << 5);
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[19], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42400000u);
    set32(c.r[23], c.r[3].w[0] << 4);
    c.f[12] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[13] = c.r[3].w[0];
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.f[14] = 0u;
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388D1Cu); set32(c.r[4], c.r[2].w[0] + 18660u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00388D1Cu) [[unlikely]] return; }
L_00388D1C:
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[4], c.r[23].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[19].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 18727u));
    st8((c.r[29].w[0] + 188u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 18728u));
    st8((c.r[29].w[0] + 189u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 18729u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[29].w[0] + 190u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00388D70; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 18725u));
    set32(c.r[3], c.r[4].w[0] << 5);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[23], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[23].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    c.r[16].d[0] = ld8((c.r[3].w[0] + 18726u));
    c.budget -= 10;
L_00388D70:
    set32(c.r[3], c.r[16].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[20], 0u + 2u);
    set32(c.r[30], c.r[3].w[0] << 2);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[21], c.r[29].w[0] + 188u);
    set32(c.r[16], c.r[23].w[0] + c.r[30].w[0]);
    c.budget -= 8;
L_00388D90:
    c.r[4].d[0] = ld8((c.r[21].w[0]));
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00388DA8; } }
    set32(c.r[22], 0u + 1u);
    c.budget -= 2;
L_00388DA8:
    c.r[18].d[0] = c.r[4].d[0] & 127ull;
    c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00388F90; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 21568u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00388000u < 16384u) { entry = entries_00A2[(t - 0x00388000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00388DD8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 18632u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388DECu); set32(c.r[4], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_00A2(c, 204u, depth + 1u); else { c.pc = 0x003897D0u; return; } if (c.pc != 0x00388DECu) [[unlikely]] return; }
L_00388DEC:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 18636u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388E00u); set32(c.r[4], c.r[29].w[0] + 180u);  if (depth < kMaxDepth) unit_00A2(c, 204u, depth + 1u); else { c.pc = 0x003897D0u; return; } if (c.pc != 0x00388E00u) [[unlikely]] return; }
L_00388E00:
    set32(c.r[4], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388E10u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 146u, depth + 1u); else { c.pc = 0x003891C0u; return; } if (c.pc != 0x00388E10u) [[unlikely]] return; }
L_00388E10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00388F90; } }
L_00388E18:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 18640u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388E2Cu); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_00A2(c, 204u, depth + 1u); else { c.pc = 0x003897D0u; return; } if (c.pc != 0x00388E2Cu) [[unlikely]] return; }
L_00388E2C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 18644u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388E40u); set32(c.r[4], c.r[29].w[0] + 180u);  if (depth < kMaxDepth) unit_00A2(c, 204u, depth + 1u); else { c.pc = 0x003897D0u; return; } if (c.pc != 0x00388E40u) [[unlikely]] return; }
L_00388E40:
    set32(c.r[4], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388E50u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 168u, depth + 1u); else { c.pc = 0x003893E0u; return; } if (c.pc != 0x00388E50u) [[unlikely]] return; }
L_00388E50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00388F90; } }
L_00388E58:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 18640u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388E6Cu); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_00A2(c, 204u, depth + 1u); else { c.pc = 0x003897D0u; return; } if (c.pc != 0x00388E6Cu) [[unlikely]] return; }
L_00388E6C:
    set32(c.r[4], ld32((c.r[29].w[0] + 176u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388E7Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 160u, depth + 1u); else { c.pc = 0x00389310u; return; } if (c.pc != 0x00388E7Cu) [[unlikely]] return; }
L_00388E7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00388F90; } }
    c.budget -= 1;
L_00388E88:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 18644u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388E9Cu); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_00A2(c, 204u, depth + 1u); else { c.pc = 0x003897D0u; return; } if (c.pc != 0x00388E9Cu) [[unlikely]] return; }
L_00388E9C:
    set32(c.r[4], ld32((c.r[29].w[0] + 176u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388EACu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A2(c, 160u, depth + 1u); else { c.pc = 0x00389310u; return; } if (c.pc != 0x00388EACu) [[unlikely]] return; }
L_00388EAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00388F90; } }
    c.budget -= 1;
L_00388EB8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 18624u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388ECCu); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_00A2(c, 204u, depth + 1u); else { c.pc = 0x003897D0u; return; } if (c.pc != 0x00388ECCu) [[unlikely]] return; }
L_00388ECC:
    set32(c.r[4], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388ED8u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 182u, depth + 1u); else { c.pc = 0x00389550u; return; } if (c.pc != 0x00388ED8u) [[unlikely]] return; }
L_00388ED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00388F90; } }
L_00388EE0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 18648u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388EF4u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_00A2(c, 205u, depth + 1u); else { c.pc = 0x003897F0u; return; } if (c.pc != 0x00388EF4u) [[unlikely]] return; }
L_00388EF4:
    set32(c.r[4], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388F00u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 189u, depth + 1u); else { c.pc = 0x003895F0u; return; } if (c.pc != 0x00388F00u) [[unlikely]] return; }
L_00388F00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00388F90; } }
L_00388F08:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 18652u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388F1Cu); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_00A2(c, 204u, depth + 1u); else { c.pc = 0x003897D0u; return; } if (c.pc != 0x00388F1Cu) [[unlikely]] return; }
L_00388F1C:
    set32(c.r[4], ld32((c.r[29].w[0] + 176u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388F2Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A2(c, 196u, depth + 1u); else { c.pc = 0x00389700u; return; } if (c.pc != 0x00388F2Cu) [[unlikely]] return; }
L_00388F2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00388F90; } }
    c.budget -= 1;
L_00388F38:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 18656u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388F4Cu); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_00A2(c, 204u, depth + 1u); else { c.pc = 0x003897D0u; return; } if (c.pc != 0x00388F4Cu) [[unlikely]] return; }
L_00388F4C:
    set32(c.r[4], ld32((c.r[29].w[0] + 176u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388F5Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 196u, depth + 1u); else { c.pc = 0x00389700u; return; } if (c.pc != 0x00388F5Cu) [[unlikely]] return; }
L_00388F5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00388F90; } }
    c.budget -= 1;
L_00388F68:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 18628u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388F7Cu); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_00A2(c, 204u, depth + 1u); else { c.pc = 0x003897D0u; return; } if (c.pc != 0x00388F7Cu) [[unlikely]] return; }
L_00388F7C:
    set32(c.r[4], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388F88u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 153u, depth + 1u); else { c.pc = 0x00389270u; return; } if (c.pc != 0x00388F88u) [[unlikely]] return; }
L_00388F88:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00388F90:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_00388FD0; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00388FD0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 18608u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388FB4u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_00A2(c, 204u, depth + 1u); else { c.pc = 0x003897D0u; return; } if (c.pc != 0x00388FB4u) [[unlikely]] return; }
L_00388FB4:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 1));  if (t) { goto L_00388FC4; } }
    set32(c.r[2], c.r[17].w[0] + 1u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00388FC4:
    set32(c.r[4], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388FD0u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 140u, depth + 1u); else { c.pc = 0x00389100u; return; } if (c.pc != 0x00388FD0u) [[unlikely]] return; }
L_00388FD0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00388FE0; } }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 2;
L_00388FE0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00388D90u | kUnwind; return; } goto L_00388D90; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], c.r[23].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[30].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 18730u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00389040; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 18620u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389014u); set32(c.r[4], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_00A2(c, 205u, depth + 1u); else { c.pc = 0x003897F0u; return; } if (c.pc != 0x00389014u) [[unlikely]] return; }
L_00389014:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[30].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 18616u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038902Cu); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_00A2(c, 205u, depth + 1u); else { c.pc = 0x003897F0u; return; } if (c.pc != 0x0038902Cu) [[unlikely]] return; }
L_0038902C:
    set32(c.r[4], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038903Cu); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 175u, depth + 1u); else { c.pc = 0x00389490u; return; } if (c.pc != 0x0038903Cu) [[unlikely]] return; }
L_0038903C:
    c.budget -= 1;
L_00389040:
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
L_00389070:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389090u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x00389090u) [[unlikely]] return; }
L_00389090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389098u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00389098u) [[unlikely]] return; }
L_00389098:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], 0u + 125u);
    c.budget -= 4;
L_003890A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C50000u);
    c.f[12] = c.r[2].w[0];
    c.f[0] = c.r[16].w[0];
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.f[14] = 0u;
    c.f[13] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003890CCu); set32(c.r[4], c.r[2].w[0] + 9854u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003890CCu) [[unlikely]] return; }
L_003890CC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 21u);
    c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 49u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003890A8u | kUnwind; return; } goto L_003890A8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00389100:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038912Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x0038912Cu) [[unlikely]] return; }
L_0038912C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389134u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00389134u) [[unlikely]] return; }
L_00389134:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389144u); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00389144u) [[unlikely]] return; }
L_00389144:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389158u); set32(c.r[5], c.r[5].w[0] + 21616u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x00389158u) [[unlikely]] return; }
L_00389158:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 100u);
    set32(c.r[3], c.r[3].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.f[14] = 0u;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003891A4u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003891A4u) [[unlikely]] return; }
L_003891A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003891C0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003891ECu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x003891ECu) [[unlikely]] return; }
L_003891EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003891F4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x003891F4u) [[unlikely]] return; }
L_003891F4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389204u); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00389204u) [[unlikely]] return; }
L_00389204:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038921Cu); set32(c.r[5], c.r[5].w[0] + 21632u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0038921Cu) [[unlikely]] return; }
L_0038921C:
    set32(c.r[3], c.r[16].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42400000u);
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 100u);
    c.f[0] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038924Cu); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x0038924Cu) [[unlikely]] return; }
L_0038924C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389254u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00389254u) [[unlikely]] return; }
L_00389254:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00389270:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389294u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x00389294u) [[unlikely]] return; }
L_00389294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038929Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x0038929Cu) [[unlikely]] return; }
L_0038929C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003892ACu); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003892ACu) [[unlikely]] return; }
L_003892AC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003892C0u); set32(c.r[5], c.r[5].w[0] + 21664u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x003892C0u) [[unlikely]] return; }
L_003892C0:
    set32(c.r[3], c.r[16].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42400000u);
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 100u);
    c.f[0] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003892F0u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003892F0u) [[unlikely]] return; }
L_003892F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003892F8u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x003892F8u) [[unlikely]] return; }
L_003892F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00389310:
    set32(c.r[29], c.r[29].w[0] - 192u);
    set32(c.r[2], c.r[5].w[0] << 3);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], c.r[2].w[0] - c.r[5].w[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] << 2);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[12] = c.r[2].w[0];
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038934Cu); set32(c.r[18], c.r[3].w[0] + 100u);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x0038934Cu) [[unlikely]] return; }
L_0038934C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389354u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00389354u) [[unlikely]] return; }
L_00389354:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389364u); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00389364u) [[unlikely]] return; }
L_00389364:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00389388; } }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038937Cu); set32(c.r[5], c.r[5].w[0] + 21680u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0038937Cu) [[unlikely]] return; }
L_0038937C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003893A0; } }
    c.budget -= 1;
L_00389388:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038939Cu); set32(c.r[5], c.r[5].w[0] + 21696u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0038939Cu) [[unlikely]] return; }
L_0038939C:
    c.budget -= 1;
L_003893A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42400000u);
    c.f[0] = c.r[18].w[0];
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003893BCu); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003893BCu) [[unlikely]] return; }
L_003893BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003893C4u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x003893C4u) [[unlikely]] return; }
L_003893C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003893E0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038940Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x0038940Cu) [[unlikely]] return; }
L_0038940C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389414u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00389414u) [[unlikely]] return; }
L_00389414:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389424u); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00389424u) [[unlikely]] return; }
L_00389424:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038943Cu); set32(c.r[5], c.r[5].w[0] + 21712u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0038943Cu) [[unlikely]] return; }
L_0038943C:
    set32(c.r[3], c.r[16].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42400000u);
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 100u);
    c.f[0] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038946Cu); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x0038946Cu) [[unlikely]] return; }
L_0038946C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389474u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00389474u) [[unlikely]] return; }
L_00389474:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00389490:
    set32(c.r[29], c.r[29].w[0] - 192u);
    set32(c.r[2], c.r[6].w[0] << 3);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], c.r[2].w[0] - c.r[6].w[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] << 2);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.f[12] = c.r[2].w[0];
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003894CCu); set32(c.r[18], c.r[3].w[0] + 100u);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x003894CCu) [[unlikely]] return; }
L_003894CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003894D4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x003894D4u) [[unlikely]] return; }
L_003894D4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003894E4u); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003894E4u) [[unlikely]] return; }
L_003894E4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00389508; } }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389500u); set32(c.r[5], c.r[5].w[0] + 21744u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x00389500u) [[unlikely]] return; }
L_00389500:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00389518; } }
L_00389508:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389518u); set32(c.r[5], c.r[5].w[0] + 21776u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x00389518u) [[unlikely]] return; }
L_00389518:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42400000u);
    c.f[0] = c.r[18].w[0];
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389534u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00389534u) [[unlikely]] return; }
L_00389534:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00389550:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389574u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x00389574u) [[unlikely]] return; }
L_00389574:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038957Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x0038957Cu) [[unlikely]] return; }
L_0038957C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038958Cu); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0038958Cu) [[unlikely]] return; }
L_0038958C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003895A0u); set32(c.r[5], c.r[5].w[0] + 21808u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x003895A0u) [[unlikely]] return; }
L_003895A0:
    set32(c.r[3], c.r[16].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42400000u);
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 100u);
    c.f[0] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003895D0u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003895D0u) [[unlikely]] return; }
L_003895D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003895D8u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x003895D8u) [[unlikely]] return; }
L_003895D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003895F0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389614u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x00389614u) [[unlikely]] return; }
L_00389614:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038961Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x0038961Cu) [[unlikely]] return; }
L_0038961C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038962Cu); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0038962Cu) [[unlikely]] return; }
L_0038962C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x88880000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x22B60000u);
    c.r[2].d[0] = c.r[2].d[0] | 34953ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    set32(c.r[9], 0u + 60u);
    set32(c.r[8], c.r[17].w[0] >> 31);
    set32(c.r[7], 0u + 59u);
    c.r[3].d[0] = c.r[3].d[0] | 15551ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] + 21840u);
    c.r[6].d[0] = c.hi.d[0];
    set32(c.r[2], 0u + 99u);
    mmi::div(c, 0, c.r[17].w[0], c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[17].w[0]);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 5));
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    c.r[8].d[0] = c.hi.d[0];
    set32(c.r[8], c.r[7].w[0] - c.r[8].w[0]);
    set32(c.r[7], c.r[8].w[0] << 5);
    set32(c.r[8], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[7], c.r[7].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003896ACu); set32(c.r[7], c.r[2].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x003896ACu) [[unlikely]] return; }
L_003896AC:
    set32(c.r[3], c.r[16].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42400000u);
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 100u);
    c.f[0] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003896DCu); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003896DCu) [[unlikely]] return; }
L_003896DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003896E4u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x003896E4u) [[unlikely]] return; }
L_003896E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00389700:
    set32(c.r[29], c.r[29].w[0] - 192u);
    set32(c.r[2], c.r[5].w[0] << 3);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], c.r[2].w[0] - c.r[5].w[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] << 2);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[12] = c.r[2].w[0];
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038973Cu); set32(c.r[18], c.r[3].w[0] + 100u);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x0038973Cu) [[unlikely]] return; }
L_0038973C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389744u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00389744u) [[unlikely]] return; }
L_00389744:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389754u); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00389754u) [[unlikely]] return; }
L_00389754:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00389778; } }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038976Cu); set32(c.r[5], c.r[5].w[0] + 21872u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0038976Cu) [[unlikely]] return; }
L_0038976C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00389790; } }
    c.budget -= 1;
L_00389778:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038978Cu); set32(c.r[5], c.r[5].w[0] + 21888u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0038978Cu) [[unlikely]] return; }
L_0038978C:
    c.budget -= 1;
L_00389790:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42400000u);
    c.f[0] = c.r[18].w[0];
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003897ACu); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003897ACu) [[unlikely]] return; }
L_003897AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003897B4u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x003897B4u) [[unlikely]] return; }
L_003897B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003897D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 34464ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_003897E8; } }
    c.r[5].d[0] = c.r[3].d[0] | 34463ull;
    c.budget -= 1;
L_003897E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[5].w[0]);  c.pc = t; return; }
L_003897F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16960ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x000F0000u);  if (t) { goto L_00389808; } }
    c.r[5].d[0] = c.r[3].d[0] | 16959ull;
    c.budget -= 1;
L_00389808:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[5].w[0]);  c.pc = t; return; }
L_00389810:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389824u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 230u, depth + 1u); else { c.pc = 0x00389950u; return; } if (c.pc != 0x00389824u) [[unlikely]] return; }
L_00389824:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389830u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 230u, depth + 1u); else { c.pc = 0x00389950u; return; } if (c.pc != 0x00389830u) [[unlikely]] return; }
L_00389830:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038983Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 230u, depth + 1u); else { c.pc = 0x00389950u; return; } if (c.pc != 0x0038983Cu) [[unlikely]] return; }
L_0038983C:
    set32(c.r[4], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389848u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 230u, depth + 1u); else { c.pc = 0x00389950u; return; } if (c.pc != 0x00389848u) [[unlikely]] return; }
L_00389848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389850u);  if (depth < kMaxDepth) unit_0095(c, 272u, depth + 1u); else { c.pc = 0x00356350u; return; } if (c.pc != 0x00389850u) [[unlikely]] return; }
L_00389850:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00389860:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389874u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 230u, depth + 1u); else { c.pc = 0x00389950u; return; } if (c.pc != 0x00389874u) [[unlikely]] return; }
L_00389874:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389880u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 230u, depth + 1u); else { c.pc = 0x00389950u; return; } if (c.pc != 0x00389880u) [[unlikely]] return; }
L_00389880:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038988Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 230u, depth + 1u); else { c.pc = 0x00389950u; return; } if (c.pc != 0x0038988Cu) [[unlikely]] return; }
L_0038988C:
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389898u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 230u, depth + 1u); else { c.pc = 0x00389950u; return; } if (c.pc != 0x00389898u) [[unlikely]] return; }
L_00389898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003898A0u);  if (depth < kMaxDepth) unit_0095(c, 272u, depth + 1u); else { c.pc = 0x00356350u; return; } if (c.pc != 0x003898A0u) [[unlikely]] return; }
L_003898A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003898B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 8u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003898C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 230u, depth + 1u); else { c.pc = 0x00389950u; return; } if (c.pc != 0x003898C4u) [[unlikely]] return; }
L_003898C4:
    set32(c.r[4], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003898D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 230u, depth + 1u); else { c.pc = 0x00389950u; return; } if (c.pc != 0x003898D0u) [[unlikely]] return; }
L_003898D0:
    set32(c.r[4], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003898DCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A2(c, 230u, depth + 1u); else { c.pc = 0x00389950u; return; } if (c.pc != 0x003898DCu) [[unlikely]] return; }
L_003898DC:
    set32(c.r[4], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003898E8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00A2(c, 230u, depth + 1u); else { c.pc = 0x00389950u; return; } if (c.pc != 0x003898E8u) [[unlikely]] return; }
L_003898E8:
    set32(c.r[4], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003898F4u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00A2(c, 230u, depth + 1u); else { c.pc = 0x00389950u; return; } if (c.pc != 0x003898F4u) [[unlikely]] return; }
L_003898F4:
    set32(c.r[4], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389900u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_00A2(c, 230u, depth + 1u); else { c.pc = 0x00389950u; return; } if (c.pc != 0x00389900u) [[unlikely]] return; }
L_00389900:
    set32(c.r[4], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038990Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 230u, depth + 1u); else { c.pc = 0x00389950u; return; } if (c.pc != 0x0038990Cu) [[unlikely]] return; }
L_0038990C:
    set32(c.r[4], 0u + 11u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389918u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 230u, depth + 1u); else { c.pc = 0x00389950u; return; } if (c.pc != 0x00389918u) [[unlikely]] return; }
L_00389918:
    set32(c.r[4], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389924u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 230u, depth + 1u); else { c.pc = 0x00389950u; return; } if (c.pc != 0x00389924u) [[unlikely]] return; }
L_00389924:
    set32(c.r[4], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389930u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A2(c, 230u, depth + 1u); else { c.pc = 0x00389950u; return; } if (c.pc != 0x00389930u) [[unlikely]] return; }
L_00389930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389938u);  if (depth < kMaxDepth) unit_0095(c, 272u, depth + 1u); else { c.pc = 0x00356350u; return; } if (c.pc != 0x00389938u) [[unlikely]] return; }
L_00389938:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00389950:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389978u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x00389978u) [[unlikely]] return; }
L_00389978:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003899D0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 368u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], 0u + 20u);
    set32(c.r[4], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 380u)));
    st32((c.r[2].w[0] + 304u), c.r[3].w[0]);
    st8((c.r[2].w[0] + 310u), static_cast<std::uint8_t>(0u));
    c.budget -= 20;
L_003899D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003899F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 424u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00388000u < 16384u) { entry = entries_00A2[(t - 0x00388000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00389A10:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[6], c.r[6].w[0] + 15856u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 8u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 116u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[5].w[0]);
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00389A50:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00389A60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00389A70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 440u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00388000u < 16384u) { entry = entries_00A2[(t - 0x00388000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00389A90:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[7], c.r[7].w[0] + 15856u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], 0u + 11u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00389AE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 448u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00388000u < 16384u) { entry = entries_00A2[(t - 0x00388000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00389B00:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[7], c.r[7].w[0] + 16096u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], 0u + 11u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    c.r[6].d[0] = ld8((c.r[6].w[0] + 2597u));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 313u), static_cast<std::uint8_t>(0u));
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 312u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00389B50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389B6Cu); set32(c.r[16], c.r[17].w[0] + 304u);  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x00389B6Cu) [[unlikely]] return; }
L_00389B6C:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2597u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00389B98; } }
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 128u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2597u));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_00389B98:
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[5], c.r[5].w[0] + 464u);
    set32(c.r[4], c.r[4].w[0] + 466u);
    set32(c.r[3], 0u + 1u);
    c.r[6].d[0] = ld8((c.r[6].w[0] + 2597u));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2600u));
    c.budget -= 24;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00389C20; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], 0u + 20u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 9u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
L_00389C20:
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00389C40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[16].w[0] + 304u);  if (t) { goto L_00389C78; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389C68u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x00389C68u) [[unlikely]] return; }
L_00389C68:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00389CA8; } }
    c.budget -= 1;
L_00389C78:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2600u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00389CA8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], 0u + 128u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 116u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 112u), c.r[4].w[0]);
    st8((c.r[6].w[0] + 9u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[6].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_00389CA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00389CC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 488u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00388000u < 16384u) { entry = entries_00A2[(t - 0x00388000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00389CE0:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[7], c.r[7].w[0] + 15856u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[3], 0u + 8u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00389D30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 496u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00388000u < 16384u) { entry = entries_00A2[(t - 0x00388000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00389D50:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[7], c.r[7].w[0] + 15856u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[3], 0u + 11u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00389DA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 504u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00388000u < 16384u) { entry = entries_00A2[(t - 0x00388000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00389DC0:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[7], c.r[7].w[0] + 15856u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], 0u + 8u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00389E10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[5], c.r[4].w[0] + 304u);  if (t) { goto L_00389E28; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_00389E28:
    set32(c.r[3], c.r[3].w[0] + 3u);
    st8((c.r[5].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00389E40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 512u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00388000u < 16384u) { entry = entries_00A2[(t - 0x00388000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00389E60:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[8], c.r[8].w[0] + 16096u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xC33B0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[3], 0u + 7u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 116u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00389EB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389EC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x00389EC4u) [[unlikely]] return; }
L_00389EC4:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[4], c.r[4].w[0] + 528u);
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 2598u));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2600u));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00389F18; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 20u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_00389F18:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00389F30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 536u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00388000u < 16384u) { entry = entries_00A2[(t - 0x00388000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00389F50:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[7], c.r[7].w[0] + 15856u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[3], 0u + 10u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00389FA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389FB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 148u, depth + 1u); else { c.pc = 0x00335710u; return; } if (c.pc != 0x00389FB4u) [[unlikely]] return; }
L_00389FB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_00389FC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389FC4u); st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (depth < kMaxDepth) unit_009E(c, 196u, depth + 1u); else { c.pc = 0x0037ADE0u; return; } if (c.pc != 0x00389FC4u) [[unlikely]] return; }
L_00389FC4:
    c.budget -= 1;
L_00389FC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00389FE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 544u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00388000u < 16384u) { entry = entries_00A2[(t - 0x00388000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0038A000:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00390000u);
    set32(c.r[7], c.r[7].w[0] - 23328u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 16u);
    set32(c.r[3], 0u + 21u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0038A050:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0038A060:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 552u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00388000u < 16384u) { entry = entries_00A2[(t - 0x00388000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0038A080:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[7], c.r[7].w[0] + 16096u);
    set32(c.r[6], c.r[6].w[0] + 21912u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 12u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    st32((c.r[4].w[0] + 116u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[5].w[0]);
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 26;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[9], c.r[4].w[0] + 304u);  if (t) { goto L_0038A0F8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1C40000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 32u), c.r[3].w[0]);  if (t) { goto L_0038A100; } }
    c.budget -= 1;
L_0038A0F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41940000u);
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 2;
L_0038A100:
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(0u));
    st8((c.r[9].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0038A110:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[7], c.r[7].w[0] + 16096u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 168u), c.r[7].w[0]);
    set32(c.r[16], c.r[17].w[0] + 304u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[6].d[0] = ld8((c.r[3].w[0] + 2598u));
    c.r[3].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[6].d[0] != c.r[5].d[0]; c.r[3].d[0] = c.r[3].d[0] ^ 1ull;  if (t) { goto L_0038A190; } }
    set32(c.r[2], c.r[3].w[0] + 12u);
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A15Cu); st32((c.r[17].w[0] + 168u), c.r[7].w[0]);  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x0038A15Cu) [[unlikely]] return; }
L_0038A15C:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2600u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0038A1B0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], 0u + 24u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0038A1B0; } }
L_0038A190:
    set32(c.r[3], c.r[3].w[0] + 25u);
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[3], c.r[3].w[0] + 15856u);
    st32((c.r[17].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[3], 0u + 112u);
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_0038A1B0:
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0038A1D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 304u);  if (t) { goto L_0038A208; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A1F8u); st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x0038A1F8u) [[unlikely]] return; }
L_0038A1F8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0038A248; } }
    c.budget -= 1;
L_0038A208:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2600u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0038A238; } }
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 128u);
    st8((c.r[5].w[0] + 9u), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 10u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0038A248; } }
    c.budget -= 1;
L_0038A238:
    set32(c.r[3], 0u + 77u);
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0038A248:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0038A260:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 568u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00388000u < 16384u) { entry = entries_00A2[(t - 0x00388000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0038A280:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[6], c.r[6].w[0] + 15776u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[3], 0u + 16u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0038A2B0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2598u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[4].w[0] + 304u);  if (t) { goto L_0038A2D0; } }
    set32(c.r[5], c.r[3].w[0] + 15u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[6].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0038A2D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0038A2E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 576u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00388000u < 16384u) { entry = entries_00A2[(t - 0x00388000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0038A300:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00390000u);
    set32(c.r[6], c.r[6].w[0] - 23216u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[3], 0u + 14u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0038A330:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 15u);
    set32(c.r[7], c.r[4].w[0] + 304u);
    c.r[6].d[0] = ld8((c.r[3].w[0] + 10190u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2598u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);  if (t) { goto L_0038A370; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0xFF800000u);  if (t) { goto L_0038A360; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] | 32768ull;  if (t) { goto L_0038A388; } }
    c.budget -= 1;
L_0038A360:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] | 16512ull;  if (t) { goto L_0038A388; } }
    c.budget -= 1;
L_0038A370:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[3], 0u - 256u);  if (t) { goto L_0038A380; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038A388; } }
L_0038A380:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[3].d[0] = c.r[3].d[0] | 33023ull;
    c.budget -= 2;
L_0038A388:
    st32((c.r[4].w[0] + 276u), c.r[3].w[0]);
    st8((c.r[7].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0038A3A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 584u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00388000u < 16384u) { entry = entries_00A2[(t - 0x00388000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0038A3C0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00390000u);
    set32(c.r[6], c.r[6].w[0] - 23120u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 11u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 116u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[5].w[0]);
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[4].w[0] + 304u);  if (t) { goto L_0038A410; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x433E0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 32u), c.r[3].w[0]);  if (t) { goto L_0038A420; } }
    c.budget -= 1;
L_0038A410:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43840000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 4;
L_0038A420:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43060000u);
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[3], 0u + 4u);
    st8((c.r[8].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 32u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[8].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0038A440:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2602u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0038A470; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 112u), c.r[2].w[0]);  if (t) { goto L_0038A4B0; } }
L_0038A470:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[16].w[0] + 112u));
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x3DA30000u);  if (t) { goto L_0038A4A8; } }
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 112u), c.f[0]);  if (t) { goto L_0038A4B0; } }
    c.budget -= 1;
L_0038A4A8:
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.budget -= 2;
L_0038A4B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A4B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x0038A4B8u) [[unlikely]] return; }
L_0038A4B8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2598u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0038A4D0; } }
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0038A4D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0038A4E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[17], c.r[4].w[0] + 304u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A4FCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0038A4FCu) [[unlikely]] return; }
L_0038A4FC:
    set32(c.r[18], 0u + 21u);
    set32(c.r[16], 0u + 5040u);
    c.budget -= 3;
L_0038A508:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 4u));
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A51Cu); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0038A51Cu) [[unlikely]] return; }
L_0038A51C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[1].d[0] = c.r[18].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 240u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038A508u | kUnwind; return; } goto L_0038A508; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0038A550:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A56Cu); set32(c.r[16], c.r[17].w[0] + 304u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0038A56Cu) [[unlikely]] return; }
L_0038A56C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A574u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x0038A574u) [[unlikely]] return; }
L_0038A574:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 6u));
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[6], ld32((c.r[17].w[0] + 276u)));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A598u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 22u, depth + 1u); else { c.pc = 0x002D83F0u; return; } if (c.pc != 0x0038A598u) [[unlikely]] return; }
L_0038A598:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0038A5B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 312u));
    c.r[17].d[0] = ld8((c.r[4].w[0] + 310u));
    c.budget -= 13;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[16], c.r[18].w[0] + 304u);  if (t) { goto L_0038A5F0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0038A60C; } }
L_0038A5F0:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_0038A60C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[2].w[0];
    c.f[20] = ld32((c.r[18].w[0] + 112u));
    fpu_div(c, 22u, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038A638; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[21] = c.f[20] ^ fp::kSign;  if (t) { goto L_0038A63C; } }
L_0038A638:
    c.f[21] = c.f[20];
    c.budget -= 1;
L_0038A63C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A644u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0038A644u) [[unlikely]] return; }
L_0038A644:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A64Cu); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x0038A64Cu) [[unlikely]] return; }
L_0038A64C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.f[12] = c.f[21];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A660u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0038A660u) [[unlikely]] return; }
L_0038A660:
    set32(c.r[2], c.r[17].w[0] << 4);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[3], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.f[12] = c.f[22];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A680u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 18u, depth + 1u); else { c.pc = 0x002D8380u; return; } if (c.pc != 0x0038A680u) [[unlikely]] return; }
L_0038A680:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0038A6B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[6], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].d[0] = ld16((c.r[1].w[0] - 2384u));
    c.r[7].d[0] = ld8((c.r[6].w[0] + 1630u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[4].d[0] = c.r[7].sd[0] < 79ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = ld16((c.r[1].w[0] - 2376u));  if (t) { goto L_0038A6F8; } }
    c.r[1].d[0] = c.r[7].sd[0] < 83ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);  if (t) { goto L_0038A6F8; } }
    set32(c.r[5], c.r[7].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + 434u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 7;
L_0038A6F8:
    c.r[6].d[0] = ld8((c.r[6].w[0] + 1628u));
    c.r[4].d[0] = c.r[6].sd[0] < 79ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; c.r[1].d[0] = c.r[6].sd[0] < 83ll ? 1ull : 0ull;  if (t) { goto L_0038A728; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);  if (t) { goto L_0038A728; } }
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + 434u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 6;
L_0038A728:
    set32(c.r[4], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[4].d[0];  if (t) { goto L_0038A740; } }
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
L_0038A740:
    set32(c.r[4], 0u + 41u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[4].d[0];  if (t) { goto L_0038A758; } }
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
L_0038A758:
    set32(c.r[4], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_0038A770; } }
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 3;
L_0038A770:
    set32(c.r[4], 0u + 41u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_0038A788; } }
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 3;
L_0038A788:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038A7E0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);  if (t) { goto L_0038A7A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 15555u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0038A7F0; } }
L_0038A7A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 15555u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 15555u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 15555u));
    c.r[2].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0038A7D8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[3], 0u + 14u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 15555u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0038A7F0; } }
L_0038A7D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0038A7F0; } }
L_0038A7E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 15555u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_0038A7F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0038A800:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[10].d[0] = ld8((c.r[4].w[0] + 18588u));
    c.r[1].d[0] = 0ll < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0038A948; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], c.r[3].w[0] + 5616u);
    c.budget -= 2;
L_0038A820:
    c.r[9].d[0] = ld8((c.r[4].w[0] + 18589u));
    c.r[1].d[0] = 0ll < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0038A938; } }
    c.r[1].d[0] = c.r[9].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[5], c.r[9].w[0] - 8u);  if (t) { goto L_0038A908; } }
    c.budget -= 1;
L_0038A840:
    set32(c.r[11], c.r[6].w[0] << 1);
    set32(c.r[12], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[11], c.r[6].w[0] + 1u);
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[11], c.r[11].w[0] << 1);
    st8((c.r[12].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[12], c.r[3].w[0] + c.r[11].w[0]);
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[11], c.r[7].w[0] + 1u);
    st8((c.r[12].w[0] + 1u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[11], c.r[6].w[0] + 2u);
    set32(c.r[12], c.r[7].w[0] + 2u);
    set32(c.r[11], c.r[11].w[0] << 1);
    set32(c.r[13], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[11], c.r[6].w[0] + 3u);
    st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[11], c.r[11].w[0] << 1);
    st8((c.r[13].w[0] + 1u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[12], c.r[3].w[0] + c.r[11].w[0]);
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[11], c.r[7].w[0] + 3u);
    st8((c.r[12].w[0] + 1u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[11], c.r[6].w[0] + 4u);
    set32(c.r[12], c.r[7].w[0] + 4u);
    set32(c.r[11], c.r[11].w[0] << 1);
    set32(c.r[13], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[11], c.r[6].w[0] + 5u);
    st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[11], c.r[11].w[0] << 1);
    st8((c.r[13].w[0] + 1u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[12], c.r[3].w[0] + c.r[11].w[0]);
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[11], c.r[7].w[0] + 5u);
    st8((c.r[12].w[0] + 1u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[11], c.r[6].w[0] + 6u);
    set32(c.r[12], c.r[7].w[0] + 6u);
    set32(c.r[11], c.r[11].w[0] << 1);
    set32(c.r[13], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[11], c.r[6].w[0] + 7u);
    st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[11], c.r[11].w[0] << 1);
    st8((c.r[13].w[0] + 1u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[12], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[11], c.r[7].w[0] + 7u);
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[12].w[0] + 1u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.r[11].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 50;
    { const bool t = c.r[11].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038A840u | kUnwind; return; } goto L_0038A840; } }
L_0038A908:
    c.r[1].d[0] = c.r[7].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[6].w[0] << 1);  if (t) { goto L_0038A938; } }
    set32(c.r[11], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_0038A918:
    st8((c.r[11].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[11].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[5].d[0] = c.r[7].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[11], c.r[11].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038A918u | kUnwind; return; } goto L_0038A918; } }
    c.budget -= 1;
L_0038A938:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[5].d[0] = c.r[8].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038A820u | kUnwind; return; } goto L_0038A820; } }
L_0038A948:
    c.r[1].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0038A988; } }
    set32(c.r[4], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + 5616u);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], 0u - 1u);
    c.budget -= 5;
L_0038A968:
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038A968u | kUnwind; return; } goto L_0038A968; } }
    c.budget -= 1;
L_0038A988:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0038A990:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 1630u));
    c.r[2].d[0] = c.r[4].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 40ll ? 1ull : 0ull;  if (t) { goto L_0038A9F8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] - 30u);  if (t) { goto L_0038A9F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], c.r[2].w[0] + 5616u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);  if (t) { goto L_0038A9F8; } }
    st8((c.r[1].w[0] + 15543u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], c.r[2].w[0] + 5617u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 15544u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0038AA80; } }
    c.budget -= 1;
L_0038A9F8:
    set32(c.r[2], 0u + 74u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0038AA18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038AA0Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 84u, depth + 1u); else { c.pc = 0x00388A50u; return; } if (c.pc != 0x0038AA0Cu) [[unlikely]] return; }
L_0038AA0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0038AA80; } }
    c.budget -= 1;
L_0038AA18:
    set32(c.r[2], 0u + 77u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0038AA38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038AA2Cu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_00A2(c, 84u, depth + 1u); else { c.pc = 0x00388A50u; return; } if (c.pc != 0x0038AA2Cu) [[unlikely]] return; }
L_0038AA2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0038AA80; } }
    c.budget -= 1;
L_0038AA38:
    set32(c.r[2], 0u + 44u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0038AA58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038AA4Cu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_00A2(c, 84u, depth + 1u); else { c.pc = 0x00388A50u; return; } if (c.pc != 0x0038AA4Cu) [[unlikely]] return; }
L_0038AA4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0038AA80; } }
    c.budget -= 1;
L_0038AA58:
    set32(c.r[2], 0u + 42u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0038AA78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038AA6Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00A2(c, 84u, depth + 1u); else { c.pc = 0x00388A50u; return; } if (c.pc != 0x0038AA6Cu) [[unlikely]] return; }
L_0038AA6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0038AA80; } }
    c.budget -= 1;
L_0038AA78:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0038AA80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0038AA90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 5648u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038AAACu); set32(c.r[6], 0u + 296u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0038AAACu) [[unlikely]] return; }
L_0038AAAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF050000u);
    set32(c.r[4], 0u + 13u);
    c.r[5].d[0] = c.r[2].d[0] | 56044ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF580000u);
    c.r[6].d[0] = c.r[2].d[0] | 22616ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF3F0000u);
    c.r[7].d[0] = c.r[2].d[0] | 16191ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF220000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038AAD4u); c.r[8].d[0] = c.r[2].d[0] | 8738ull;  if (depth < kMaxDepth) unit_00AA(c, 43u, depth + 1u); else { c.pc = 0x003A85D0u; return; } if (c.pc != 0x0038AAD4u) [[unlikely]] return; }
L_0038AAD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF500000u);
    set32(c.r[4], 0u + 14u);
    c.r[5].d[0] = c.r[2].d[0] | 20560ull;
    set32(c.r[8], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFA10000u);
    c.r[6].d[0] = c.r[2].d[0] | 41377ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFD30000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038AAF8u); c.r[7].d[0] = c.r[2].d[0] | 54227ull;  if (depth < kMaxDepth) unit_00AA(c, 43u, depth + 1u); else { c.pc = 0x003A85D0u; return; } if (c.pc != 0x0038AAF8u) [[unlikely]] return; }
L_0038AAF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF9E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF5B0000u);
    c.r[7].d[0] = c.r[2].d[0] | 22355ull;
    set32(c.r[4], 0u + 15u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFDC0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] | 19544ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038AB1Cu); c.r[8].d[0] = c.r[2].d[0] | 25664ull;  if (depth < kMaxDepth) unit_00AA(c, 43u, depth + 1u); else { c.pc = 0x003A85D0u; return; } if (c.pc != 0x0038AB1Cu) [[unlikely]] return; }
L_0038AB1C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0038AB30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5648u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 3145u);  if (t) { goto L_0038AB80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038AB50u);  if (depth < kMaxDepth) unit_008B(c, 78u, depth + 1u); else { c.pc = 0x0032C6A0u; return; } if (c.pc != 0x0038AB50u) [[unlikely]] return; }
L_0038AB50:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 3145u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01030000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038AB64u); c.r[5].d[0] = c.r[2].d[0] | 61440ull;  if (depth < kMaxDepth) unit_008B(c, 82u, depth + 1u); else { c.pc = 0x0032C6F0u; return; } if (c.pc != 0x0038AB64u) [[unlikely]] return; }
L_0038AB64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01030000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038AB74u); c.r[4].d[0] = c.r[2].d[0] | 61440ull;  if (depth < kMaxDepth) unit_008A(c, 113u, depth + 1u); else { c.pc = 0x00329CC0u; return; } if (c.pc != 0x0038AB74u) [[unlikely]] return; }
L_0038AB74:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 5912u), c.r[2].w[0]);  if (t) { goto L_0038ABA8; } }
L_0038AB80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01030000u);
    set32(c.r[4], 0u + 3145u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038AB90u); c.r[5].d[0] = c.r[2].d[0] | 61440ull;  if (depth < kMaxDepth) unit_0009(c, 73u, depth + 1u); else { c.pc = 0x001251F0u; return; } if (c.pc != 0x0038AB90u) [[unlikely]] return; }
L_0038AB90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01030000u);
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[2].d[0] | 61440ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038ABA8u); set32(c.r[7], c.r[28].w[0] - 23748u);  if (depth < kMaxDepth) unit_000A(c, 165u, depth + 1u); else { c.pc = 0x0012A180u; return; } if (c.pc != 0x0038ABA8u) [[unlikely]] return; }
L_0038ABA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0038ABC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5648u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0038ABE8; } }
    set32(c.r[5], ld32((c.r[1].w[0] + 5912u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038ABE4u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x0038ABE4u) [[unlikely]] return; }
L_0038ABE4:
    c.budget -= 1;
L_0038ABE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0038AC00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0038AC38; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0038AC20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038AC48; } }
L_0038AC20:
    set32(c.r[4], 0u + 99u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038AC2Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x0038AC2Cu) [[unlikely]] return; }
L_0038AC2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038AC48; } }
    c.budget -= 1;
L_0038AC38:
    set32(c.r[4], 0u + 99u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038AC44u); c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x0038AC44u) [[unlikely]] return; }
L_0038AC44:
    c.budget -= 1;
L_0038AC48:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0038AC60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0038AC98; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0038AC80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038ACA8; } }
L_0038AC80:
    set32(c.r[4], 0u + 94u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038AC8Cu); set32(c.r[5], 0u + 50u);  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x0038AC8Cu) [[unlikely]] return; }
L_0038AC8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038ACA8; } }
    c.budget -= 1;
L_0038AC98:
    set32(c.r[4], 0u + 94u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038ACA4u); set32(c.r[5], 0u + 18u);  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x0038ACA4u) [[unlikely]] return; }
L_0038ACA4:
    c.budget -= 1;
L_0038ACA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0038ACC0:
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 3;
    { c.r[5].d[0] = c.r[5].d[0] & 255ull;  [[clang::musttail]] return unit_00AA(c, 45u, depth); }
L_0038ACD0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_00AA(c, 48u, depth); }
L_0038ACE0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_00AA(c, 46u, depth); }
L_0038ACF0:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5648u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], c.r[3].w[0] + 9600u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 5908u), c.r[3].w[0]);  c.pc = t; return; }
L_0038AD10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038AD24u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 232u, depth + 1u); else { c.pc = 0x00392DA0u; return; } if (c.pc != 0x0038AD24u) [[unlikely]] return; }
L_0038AD24:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5649u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0038AD58; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 5908u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038AD50u); set32(c.r[4], c.r[4].w[0] + 5650u);  if (depth < kMaxDepth) unit_008D(c, 357u, depth + 1u); else { c.pc = 0x00337940u; return; } if (c.pc != 0x0038AD50u) [[unlikely]] return; }
L_0038AD50:
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 2;
L_0038AD58:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0038AD70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 5649u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0038AD98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038AD94u);  if (depth < kMaxDepth) unit_008E(c, 96u, depth + 1u); else { c.pc = 0x003392B0u; return; } if (c.pc != 0x0038AD94u) [[unlikely]] return; }
L_0038AD94:
    c.budget -= 1;
L_0038AD98:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0038ADB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 5649u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0038ADE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038ADD4u);  if (depth < kMaxDepth) unit_008E(c, 96u, depth + 1u); else { c.pc = 0x003392B0u; return; } if (c.pc != 0x0038ADD4u) [[unlikely]] return; }
L_0038ADD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038ADDCu);  if (depth < kMaxDepth) unit_00AA(c, 78u, depth + 1u); else { c.pc = 0x003A8C50u; return; } if (c.pc != 0x0038ADDCu) [[unlikely]] return; }
L_0038ADDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038ADE4u);  if (depth < kMaxDepth) unit_00AA(c, 36u, depth + 1u); else { c.pc = 0x003A8430u; return; } if (c.pc != 0x0038ADE4u) [[unlikely]] return; }
L_0038ADE4:
    c.budget -= 1;
L_0038ADE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0038AE00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 5650u);  c.pc = t; return; }
L_0038AE10:
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0038AE40; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0038AE30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038AE48; } }
L_0038AE30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5649u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0038AE48; } }
    c.budget -= 1;
L_0038AE40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5649u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0038AE48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0038AE50:
    c.f[0] = c.r[4].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00339BA0u | kUnwind; return; } [[clang::musttail]] return unit_008E(c, 160u, depth); }
L_0038AE70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 5908u), c.r[4].w[0]);  c.pc = t; return; }
L_0038AE80:
    set32(c.r[2], 0u - 16384u);
    set32(c.r[3], 0u + 2u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[2].d[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[6].d[0] = c.r[6].d[0] | 16383ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[7].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    set32(c.r[8], 0u - 1u);
    c.r[8].d[0] = c.r[8].d[0] << 16;
    c.r[8].d[0] = c.r[8].d[0] | 255ull;
    c.r[8].d[0] = c.r[8].d[0] << 16;
    c.r[8].d[0] = c.r[8].d[0] | 65535ull;
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[8].d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038AEECu); c.r[5].d[0] = c.r[2].d[0] | c.r[5].d[0];  if (depth < kMaxDepth) unit_0074(c, 98u, depth + 1u); else { c.pc = 0x002D0DF0u; return; } if (c.pc != 0x0038AEECu) [[unlikely]] return; }
L_0038AEEC:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[29].w[0])));  goto L_0038AEF4; }
L_0038AEF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0038AF00:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[2], 0u - 16384u);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    set32(c.r[3], 0u + 11u);
    c.r[20].d[0] = c.r[20].d[0] & c.r[2].d[0];
    c.r[9].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[9].d[0] = c.r[9].d[0] | 16383ull;
    c.r[20].d[0] = c.r[20].d[0] | c.r[3].d[0];
    set32(c.r[2], 0u + 16384u);
    c.r[20].d[0] = c.r[20].d[0] & c.r[9].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[20].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[20].d[0] = c.r[20].d[0] & c.r[3].d[0];
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 255ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[20].d[0] = c.r[20].d[0] | c.r[9].d[0];
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[20].d[0] & c.r[2].d[0];
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], 0u + 40u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[20].d[0] = c.r[20].d[0] | c.r[2].d[0];
    st32((c.r[29].w[0] + 4u), c.r[16].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 40;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038AFA0u); c.r[4].d[0] = c.r[29].d[0] | 8ull;  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0038AFA0u) [[unlikely]] return; }
L_0038AFA0:
    set32(c.r[16], c.r[16].w[0] + c.r[29].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038AFB8u); st32((c.r[29].w[0]), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0038AFB8u) [[unlikely]] return; }
L_0038AFB8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038AFCCu); c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 80u, depth + 1u); else { c.pc = 0x002D0B28u; return; } if (c.pc != 0x0038AFCCu) [[unlikely]] return; }
L_0038AFCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0038AFF0:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 160ll ? 1ull : 0ull;  if (t) { goto L_0038B010; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0038B010; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038B038; } }
L_0038B010:
    c.r[2].d[0] = c.r[3].sd[0] < 224ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 256ll ? 1ull : 0ull;  if (t) { goto L_0038B030; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0038B030; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038B038; } }
    c.budget -= 1;
L_0038B030:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0038B038:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0038B040:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01030000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01040000u);
    c.r[3].d[0] = c.r[3].d[0] | 61440ull;
    st32((c.r[28].w[0] - 22432u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] - 796u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01040000u);
    st32((c.r[1].w[0] - 796u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22432u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 3300u)));
    set32(c.r[5], c.r[3].w[0] + 3300u);
    c.r[3].d[0] = c.r[4].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] - 50u);  if (t) { goto L_0038B080; } }
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_0038B080:
    set32(c.r[3], ld32((c.r[28].w[0] - 22432u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 3308u)));
    set32(c.r[4], c.r[3].w[0] + 3308u);
    set32(c.r[3], ld32((c.r[3].w[0] + 3300u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; set32(c.r[3], c.r[6].w[0] + 1u);  if (t) { goto L_0038B0E8; } }
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22432u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 3308u)));
    set32(c.r[5], c.r[3].w[0] + 3308u);
    c.r[3].d[0] = c.r[4].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0038B0C0; } }
    set32(c.r[3], c.r[4].w[0] - 50u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_0038B0C0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 8144u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038B0E8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 22432u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 3304u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; set32(c.r[5], c.r[4].w[0] + 3304u);  if (t) { goto L_0038B0E8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 3308u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_0038B0E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0038B0F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 2376u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 20u);  if (t) { goto L_0038B110; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22440u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0038B1D8; } }
L_0038B110:
    set32(c.r[5], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], 0u + 82u);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1630u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[3], 0u + 20u);  if (t) { goto L_0038B130; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22440u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0038B1D8; } }
L_0038B130:
    set32(c.r[3], 0u + 75u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0038B150; } }
    set32(c.r[3], 0u + 20u);
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22440u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0038B1D8; } }
    c.budget -= 1;
L_0038B150:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 22440u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038B170; } }
    set32(c.r[3], c.r[2].w[0] - 1u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22440u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0038B1D8; } }
    c.budget -= 1;
L_0038B170:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 2384u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038B198; } }
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22440u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0038B1D8; } }
    c.budget -= 1;
L_0038B198:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1628u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0038B1B8; } }
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22440u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0038B1D8; } }
    c.budget -= 1;
L_0038B1B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0038B1D0; } }
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22440u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0038B1D8; } }
L_0038B1D0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0038B1D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0038B1E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 2376u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 20u);  if (t) { goto L_0038B200; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22436u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0038B2C8; } }
L_0038B200:
    set32(c.r[5], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], 0u + 81u);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1630u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[3], 0u + 20u);  if (t) { goto L_0038B220; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22436u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0038B2C8; } }
L_0038B220:
    set32(c.r[3], 0u + 78u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0038B240; } }
    set32(c.r[3], 0u + 20u);
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22436u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0038B2C8; } }
    c.budget -= 1;
L_0038B240:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 22436u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038B260; } }
    set32(c.r[3], c.r[2].w[0] - 1u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22436u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0038B2C8; } }
    c.budget -= 1;
L_0038B260:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 2384u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038B288; } }
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22436u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0038B2C8; } }
    c.budget -= 1;
L_0038B288:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1628u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0038B2A8; } }
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22436u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0038B2C8; } }
    c.budget -= 1;
L_0038B2A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0038B2C0; } }
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22436u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0038B2C8; } }
L_0038B2C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0038B2C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0038B2D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2589u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0038B300; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0038B380; } }
L_0038B300:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0038B308:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B318u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0038B318u) [[unlikely]] return; }
L_0038B318:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[6], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B330u); set32(c.r[5], c.r[2].w[0] + 1720u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x0038B330u) [[unlikely]] return; }
L_0038B330:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B33Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x0038B33Cu) [[unlikely]] return; }
L_0038B33C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0038B368; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[2].w[0] + 1826u));  if (t) { goto L_0038B380; } }
L_0038B368:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 232u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038B308u | kUnwind; return; } goto L_0038B308; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0038B380:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0038B3A0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01030000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 61440ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01040000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[28].w[0] - 22432u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] - 796u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01030000u);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.r[1].d[0] = c.r[1].d[0] | 61440ull;
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B40Cu); set32(c.r[4], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0038B40Cu) [[unlikely]] return; }
L_0038B40C:
    set32(c.r[4], ld32((c.r[28].w[0] - 22432u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 3300u)));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B42Cu); set32(c.r[4], c.r[2].w[0] + 400u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0038B42Cu) [[unlikely]] return; }
L_0038B42C:
    set32(c.r[3], ld32((c.r[28].w[0] - 22432u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 3300u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] + 3312u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 22432u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 3300u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] + 3362u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 22432u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 3300u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] + 3412u), static_cast<std::uint8_t>(c.r[21].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 22432u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 3300u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] + 3462u), static_cast<std::uint8_t>(c.r[22].w[0]));
    set32(c.r[16], ld32((c.r[28].w[0] - 22432u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B478u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 349u, depth + 1u); else { c.pc = 0x0038B2D0u; return; } if (c.pc != 0x0038B478u) [[unlikely]] return; }
L_0038B478:
    set32(c.r[3], ld32((c.r[16].w[0] + 3300u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st8((c.r[3].w[0] + 3512u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0038B4C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B498u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0038B498u) [[unlikely]] return; }
L_0038B498:
    set32(c.r[16], c.r[2].w[0] + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B4A4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0038B4A4u) [[unlikely]] return; }
L_0038B4A4:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B4B0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0038B4B0u) [[unlikely]] return; }
L_0038B4B0:
    set32(c.r[3], c.r[2].w[0] + 7u);
    set32(c.r[2], 0u + 64u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] - c.r[3].w[0]);  if (t) { goto L_0038B4F0; } }
L_0038B4C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B4C8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0038B4C8u) [[unlikely]] return; }
L_0038B4C8:
    set32(c.r[16], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B4D4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0038B4D4u) [[unlikely]] return; }
L_0038B4D4:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B4E0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0038B4E0u) [[unlikely]] return; }
L_0038B4E0:
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[2], 0u + 64u);
    set32(c.r[17], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 4;
L_0038B4F0:
    c.r[1].d[0] = c.r[16].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0038B5F8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0038B500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B508u); c.r[4].d[0] = ld8((c.r[18].w[0]));  if (depth < kMaxDepth) unit_00A2(c, 345u, depth + 1u); else { c.pc = 0x0038AFF0u; return; } if (c.pc != 0x0038B508u) [[unlikely]] return; }
L_0038B508:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0038B548; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0038B570; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[3], c.r[16].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[3].w[0] + 128u);
    set32(c.r[16], c.r[16].w[0] + 2u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 2u);  if (t) { goto L_0038B560; } }
    c.budget -= 1;
L_0038B548:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st8((c.r[2].w[0] + 128u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 6;
L_0038B560:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038B500u | kUnwind; return; } goto L_0038B500; } }
    c.budget -= 1;
L_0038B570:
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    st8((c.r[2].w[0] + 128u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[4], ld32((c.r[28].w[0] - 22432u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 3300u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B5A0u); set32(c.r[4], c.r[2].w[0] + 1250u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0038B5A0u) [[unlikely]] return; }
L_0038B5A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B5A8u);  if (depth < kMaxDepth) unit_00A2(c, 346u, depth + 1u); else { c.pc = 0x0038B040u; return; } if (c.pc != 0x0038B5A8u) [[unlikely]] return; }
L_0038B5A8:
    set32(c.r[4], ld32((c.r[28].w[0] - 22432u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 3300u)));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 400u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 22432u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 3300u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B5E8u); set32(c.r[4], c.r[2].w[0] + 1250u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0038B5E8u) [[unlikely]] return; }
L_0038B5E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B5F0u);  if (depth < kMaxDepth) unit_00A2(c, 346u, depth + 1u); else { c.pc = 0x0038B040u; return; } if (c.pc != 0x0038B5F0u) [[unlikely]] return; }
L_0038B5F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038B628; } }
L_0038B5F8:
    set32(c.r[4], ld32((c.r[28].w[0] - 22432u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 3300u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B620u); set32(c.r[4], c.r[2].w[0] + 1250u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0038B620u) [[unlikely]] return; }
L_0038B620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B628u);  if (depth < kMaxDepth) unit_00A2(c, 346u, depth + 1u); else { c.pc = 0x0038B040u; return; } if (c.pc != 0x0038B628u) [[unlikely]] return; }
L_0038B628:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0038B650:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01030000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] | 61440ull;
    set32(c.r[6], 0u + 3564u);
    c.budget -= 6;
    { st32((c.r[28].w[0] - 22432u), c.r[4].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011AB50u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 201u, depth); }
L_0038B670:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x01030000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = c.r[6].d[0] | 61440ull;
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], 0u + 2u);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st32((c.r[28].w[0] - 22432u), c.r[6].w[0]);  if (t) { goto L_0038B7B8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0038B718; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0038B6B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038B848; } }
    c.budget -= 1;
L_0038B6B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01040000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 734u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0038B6E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], c.r[2].w[0] + 10177u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0038B6F0; } }
L_0038B6E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B6E8u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x0038B6E8u) [[unlikely]] return; }
L_0038B6E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038B848; } }
L_0038B6F0:
    set32(c.r[2], c.r[3].w[0] - 48u);
    c.r[3].d[0] = c.r[2].d[0] & 7ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 600u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B70Cu); c.r[4].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x0038B70Cu) [[unlikely]] return; }
L_0038B70C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038B848; } }
    c.budget -= 1;
L_0038B718:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01040000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 684u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0038B748; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], c.r[2].w[0] + 10177u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0038B790; } }
L_0038B748:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01030000u);
    set32(c.r[2], c.r[4].w[0] << 3);
    c.r[1].d[0] = c.r[1].d[0] | 61440ull;
    set32(c.r[4], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B764u); set32(c.r[5], c.r[2].w[0] + 560u);  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x0038B764u) [[unlikely]] return; }
L_0038B764:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_0038B780; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B774u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x0038B774u) [[unlikely]] return; }
L_0038B774:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038B848; } }
    c.budget -= 1;
L_0038B780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B788u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x0038B788u) [[unlikely]] return; }
L_0038B788:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038B848; } }
L_0038B790:
    set32(c.r[2], c.r[3].w[0] - 48u);
    c.r[3].d[0] = c.r[2].d[0] & 7ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 600u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B7ACu); c.r[4].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x0038B7ACu) [[unlikely]] return; }
L_0038B7AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038B848; } }
    c.budget -= 1;
L_0038B7B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01040000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 634u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0038B7F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], c.r[2].w[0] + 10177u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038B7F8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 8144u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038B828; } }
L_0038B7F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 8144u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0038B818; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B810u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x0038B810u) [[unlikely]] return; }
L_0038B810:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038B848; } }
L_0038B818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B820u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x0038B820u) [[unlikely]] return; }
L_0038B820:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038B848; } }
L_0038B828:
    set32(c.r[2], c.r[3].w[0] - 48u);
    c.r[3].d[0] = c.r[2].d[0] & 7ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 600u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B844u); c.r[4].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x0038B844u) [[unlikely]] return; }
L_0038B844:
    c.budget -= 1;
L_0038B848:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0038B860:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], c.r[2].w[0] + 5944u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[2].w[0]));  c.pc = t; return; }
L_0038B880:
    set32(c.r[29], c.r[29].w[0] - 256u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01030000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[2].d[0] | 61440ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B8CCu); st32((c.r[28].w[0] - 22432u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x0038B8CCu) [[unlikely]] return; }
L_0038B8CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.f[23] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.f[22] = c.f[23];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[23] = fp::sub(c.f[23], c.f[1]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8144u));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.f[22] = fp::add(c.f[22], c.f[0]);  if (t) { goto L_0038BA20; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2578u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0038BA10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B918u);  if (depth < kMaxDepth) unit_00A2(c, 347u, depth + 1u); else { c.pc = 0x0038B0F0u; return; } if (c.pc != 0x0038B918u) [[unlikely]] return; }
L_0038B918:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] << 48;  if (t) { goto L_0038B980; } }
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0038BA10; } }
L_0038B938:
    set32(c.r[2], ld32((c.r[28].w[0] - 22432u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 3304u)));
    set32(c.r[4], c.r[2].w[0] + 3304u);
    set32(c.r[2], ld32((c.r[2].w[0] + 3308u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[2], c.r[3].w[0] - 1u);  if (t) { goto L_0038B968; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0038B960; } }
    set32(c.r[2], c.r[2].w[0] + 50u);
    c.budget -= 2;
L_0038B960:
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0038B968:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038B938u | kUnwind; return; } goto L_0038B938; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038BA10; } }
L_0038B980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B988u);  if (depth < kMaxDepth) unit_00A2(c, 348u, depth + 1u); else { c.pc = 0x0038B1E0u; return; } if (c.pc != 0x0038B988u) [[unlikely]] return; }
L_0038B988:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[2].d[0] << 48;  if (t) { goto L_0038BA10; } }
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[1].d[0] = 0ll < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0038BA10; } }
    set32(c.r[3], 0u + 50u);
    c.budget -= 2;
L_0038B9B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 22432u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 3300u)));
    set32(c.r[6], c.r[2].w[0] + 3304u);
    set32(c.r[2], ld32((c.r[2].w[0] + 3304u)));
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0038B9D0; } }
    set32(c.r[2], c.r[2].w[0] + 50u);
    c.budget -= 1;
L_0038B9D0:
    c.r[1].d[0] = c.r[2].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0038BA00; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22432u)));
    set32(c.r[4], c.r[2].w[0] + 3304u);
    set32(c.r[2], ld32((c.r[2].w[0] + 3304u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0038BA00; } }
    st32((c.r[4].w[0]), 0u);
    c.budget -= 1;
L_0038BA00:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038B9B0u | kUnwind; return; } goto L_0038B9B0; } }
L_0038BA10:
    set32(c.r[2], ld32((c.r[28].w[0] - 22432u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 3304u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0038BA80; } }
L_0038BA20:
    set32(c.r[3], ld32((c.r[28].w[0] - 22432u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 3308u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 3300u)));
    set32(c.r[2], c.r[4].w[0] - c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0038BA40; } }
    set32(c.r[2], c.r[2].w[0] + 50u);
    c.budget -= 2;
L_0038BA40:
    c.r[1].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0038BA58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 3304u), c.r[5].w[0]);  if (t) { goto L_0038BA70; } }
    c.budget -= 1;
L_0038BA58:
    set32(c.r[2], c.r[4].w[0] - 10u);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0038BA68; } }
    set32(c.r[2], c.r[2].w[0] + 50u);
    c.budget -= 1;
L_0038BA68:
    st32((c.r[3].w[0] + 3304u), c.r[2].w[0]);
    c.budget -= 2;
L_0038BA70:
    set32(c.r[2], ld32((c.r[28].w[0] - 22432u)));
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[18], ld32((c.r[2].w[0] + 3304u)));
    c.budget -= 4;
L_0038BA80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], c.r[4].w[0] + 5944u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BA94u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0038BA94u) [[unlikely]] return; }
L_0038BA94:
    c.r[1].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40900000u);  if (t) { goto L_0038BC88; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[16], c.r[16].w[0] + 5944u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[21] = fp::mul(c.f[1], c.f[23]);
    fpu_div(c, 20u, c.f[23], c.f[0]);
    c.budget -= 8;
L_0038BAC0:
    set32(c.r[3], ld32((c.r[28].w[0] - 22432u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42040000u);
    c.f[24] = c.r[2].w[0];
    set32(c.r[2], c.r[18].w[0] << 4);
    set32(c.r[19], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 400u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[20], c.r[18].w[0] << 3);  if (t) { goto L_0038BBD0; } }
    set32(c.r[2], c.r[3].w[0] + c.r[20].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0038BBD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BAFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 373u, depth + 1u); else { c.pc = 0x0038B670u; return; } if (c.pc != 0x0038BAFCu) [[unlikely]] return; }
L_0038BAFC:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BB0Cu); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0038BB0Cu) [[unlikely]] return; }
L_0038BB0C:
    set32(c.r[2], ld32((c.r[28].w[0] - 22432u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[6], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BB20u); set32(c.r[5], c.r[2].w[0] + c.r[20].w[0]);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x0038BB20u) [[unlikely]] return; }
L_0038BB20:
    c.f[1] = c.r[17].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B80000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42040000u);
    c.f[1] = fp::mul(c.f[22], c.f[1]);
    c.f[25] = fp::add(c.f[0], c.f[1]);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BB50u); c.f[13] = c.f[25];  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x0038BB50u) [[unlikely]] return; }
L_0038BB50:
    c.f[24] = fp::add(c.f[24], c.f[21]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BB60u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A2(c, 373u, depth + 1u); else { c.pc = 0x0038B670u; return; } if (c.pc != 0x0038BB60u) [[unlikely]] return; }
L_0038BB60:
    set32(c.r[2], ld32((c.r[28].w[0] - 22432u)));
    c.f[14] = 0u;
    c.f[13] = c.f[25];
    c.f[12] = c.f[24];
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BB7Cu); set32(c.r[4], c.r[2].w[0] + 400u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x0038BB7Cu) [[unlikely]] return; }
L_0038BB7C:
    set32(c.r[2], ld32((c.r[28].w[0] - 22432u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BB8Cu); set32(c.r[4], c.r[2].w[0] + 400u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0038BB8Cu) [[unlikely]] return; }
L_0038BB8C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0038BBA0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0038BBB8; } }
L_0038BBA0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0038BBB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[23]);
    c.f[24] = fp::add(c.f[24], c.f[0]);
    c.budget -= 6;
L_0038BBD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BBD8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x0038BBD8u) [[unlikely]] return; }
L_0038BBD8:
    c.f[1] = c.r[17].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B80000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[4], c.r[4].w[0] + 21928u);
    c.f[1] = fp::mul(c.f[22], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[14] = 0u;
    c.f[25] = fp::add(c.f[0], c.f[1]);
    c.f[12] = c.f[24];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BC08u); c.f[13] = c.f[25];  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x0038BC08u) [[unlikely]] return; }
L_0038BC08:
    set32(c.r[2], c.r[18].w[0] << 2);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[5], 0u + 2u);
    set32(c.r[2], ld32((c.r[28].w[0] - 22432u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[19], c.r[3].w[0] + c.r[18].w[0]);
    c.f[24] = fp::add(c.f[24], c.f[20]);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BC34u); st8((c.r[2].w[0] + 1290u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A2(c, 373u, depth + 1u); else { c.pc = 0x0038B670u; return; } if (c.pc != 0x0038BC34u) [[unlikely]] return; }
L_0038BC34:
    set32(c.r[2], ld32((c.r[28].w[0] - 22432u)));
    c.f[14] = 0u;
    c.f[12] = c.f[24];
    c.f[13] = c.f[25];
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BC50u); set32(c.r[4], c.r[2].w[0] + 1250u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x0038BC50u) [[unlikely]] return; }
L_0038BC50:
    set32(c.r[2], ld32((c.r[28].w[0] - 22432u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 3512u));
    set32(c.r[18], c.r[18].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[18].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0038BC78; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0038BC78:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038BAC0u | kUnwind; return; } goto L_0038BAC0; } }
L_0038BC88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BC98u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_008D(c, 98u, depth + 1u); else { c.pc = 0x003351D0u; return; } if (c.pc != 0x0038BC98u) [[unlikely]] return; }
L_0038BC98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_0038BCD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 688u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BCF8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038BCF8u) [[unlikely]] return; }
L_0038BCF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0038BD10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0038BD58; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0038BD38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038BD78; } }
L_0038BD38:
    set32(c.r[3], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 516u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_0038BD78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0038BD78; } }
    c.budget -= 1;
L_0038BD58:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BD6Cu); st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A2(c, 409u, depth + 1u); else { c.pc = 0x0038BDA0u; return; } if (c.pc != 0x0038BD6Cu) [[unlikely]] return; }
L_0038BD6C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st32((c.r[3].w[0] + 2616u), 0u);
    c.budget -= 3;
L_0038BD78:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0038BD90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0038BDA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 6u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BDB8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00A2(c, 423u, depth + 1u); else { c.pc = 0x0038BE70u; return; } if (c.pc != 0x0038BDB8u) [[unlikely]] return; }
L_0038BDB8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0038BDC0:
    set32(c.r[4], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BDCCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 423u, depth + 1u); else { c.pc = 0x0038BE70u; return; } if (c.pc != 0x0038BDCCu) [[unlikely]] return; }
L_0038BDCC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038BDC0u | kUnwind; return; } goto L_0038BDC0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BDE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 423u, depth + 1u); else { c.pc = 0x0038BE70u; return; } if (c.pc != 0x0038BDE8u) [[unlikely]] return; }
L_0038BDE8:
    set32(c.r[4], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BDF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 423u, depth + 1u); else { c.pc = 0x0038BE70u; return; } if (c.pc != 0x0038BDF4u) [[unlikely]] return; }
L_0038BDF4:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BE00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 423u, depth + 1u); else { c.pc = 0x0038BE70u; return; } if (c.pc != 0x0038BE00u) [[unlikely]] return; }
L_0038BE00:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0038BE08:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BE14u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 423u, depth + 1u); else { c.pc = 0x0038BE70u; return; } if (c.pc != 0x0038BE14u) [[unlikely]] return; }
L_0038BE14:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BE20u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 423u, depth + 1u); else { c.pc = 0x0038BE70u; return; } if (c.pc != 0x0038BE20u) [[unlikely]] return; }
L_0038BE20:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BE2Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 423u, depth + 1u); else { c.pc = 0x0038BE70u; return; } if (c.pc != 0x0038BE2Cu) [[unlikely]] return; }
L_0038BE2C:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BE38u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 423u, depth + 1u); else { c.pc = 0x0038BE70u; return; } if (c.pc != 0x0038BE38u) [[unlikely]] return; }
L_0038BE38:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BE44u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 423u, depth + 1u); else { c.pc = 0x0038BE70u; return; } if (c.pc != 0x0038BE44u) [[unlikely]] return; }
L_0038BE44:
    set32(c.r[4], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BE50u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 423u, depth + 1u); else { c.pc = 0x0038BE70u; return; } if (c.pc != 0x0038BE50u) [[unlikely]] return; }
L_0038BE50:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038BE08u | kUnwind; return; } goto L_0038BE08; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0038BE70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BE98u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0038BE98u) [[unlikely]] return; }
L_0038BE98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038BEF0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 704u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], 0u + 20u);
    set32(c.r[4], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 296u)));
    st32((c.r[2].w[0] + 304u), c.r[3].w[0]);
    c.budget -= 20;
L_0038BEF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0038BF10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 752u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00388000u < 16384u) { entry = entries_00A2[(t - 0x00388000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0038BF30:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[7], c.r[7].w[0] + 15856u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 23u);
    set32(c.r[3], 0u + 16u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0038BF80:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0038BF90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 760u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00388000u < 16384u) { entry = entries_00A2[(t - 0x00388000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0038BFB0:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[7], c.r[7].w[0] + 15856u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 20u);
    set32(c.r[3], 0u + 8u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
}

}
