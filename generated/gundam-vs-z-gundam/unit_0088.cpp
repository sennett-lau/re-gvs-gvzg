#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0088[4096] = {
    1, 2, 3, 4, 5, 6, 0, 0, 0, 0, 0, 7, 8, 9, 0, 0, 10, 0, 0, 0, 11, 0, 0, 12, 13, 14, 0, 0, 15, 0, 16, 0,
    17, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0,
    29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0,
    36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 45, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0,
    0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0,
    0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0,
    0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0,
    0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 94, 0, 95, 0, 0, 0, 0, 96,
    97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0,
    0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    104, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121,
    0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0,
    133, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 138, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0,
    141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0,
    149, 0, 150, 0, 151, 0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 157, 0,
    158, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 163, 0, 0, 0, 0, 164, 0, 0, 165, 0,
    166, 0, 0, 0, 167, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0,
    174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 177, 0, 178, 0, 0, 179, 0, 0, 180, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0,
    183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 187, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0,
    191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 198, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 206, 0, 0, 207, 0, 208, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0,
    0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 221, 0, 222, 0, 223, 0, 224, 0,
    225, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0,
    0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 253, 0, 0, 0, 254, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0,
    263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0,
    266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0,
    269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0,
    0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 293, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0,
    0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0,
    0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0,
    316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0,
    0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0, 0, 0,
    328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0,
    332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 336,
    0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 345, 0, 0, 0, 346, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 361, 0,
    0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 364, 0, 0, 365, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0,
    0, 369, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 374, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0,
    378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 380, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 385, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 391, 0, 0, 0, 392, 0,
    0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0,
    403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 405, 0, 406, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 410, 0, 0, 0, 0, 0, 0,
    411, 0, 0, 0, 0, 412, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0,
    0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0,
    420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0,
    428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0,
    0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 436, 0, 437, 0, 438, 0, 439, 0, 440, 0, 441, 0, 442, 0, 443, 0,
    444, 0, 445, 0, 446, 0, 447, 0, 448, 0, 449, 0, 450, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0,
    454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0,
    0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 461, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0,
    465, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0,
    0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 475, 0, 0, 0, 0, 476, 0, 0,
};

void unit_0088(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00320000;
    case 2u: goto L_00320004;
    case 3u: goto L_00320008;
    case 4u: goto L_0032000C;
    case 5u: goto L_00320010;
    case 6u: goto L_00320014;
    case 7u: goto L_0032002C;
    case 8u: goto L_00320030;
    case 9u: goto L_00320034;
    case 10u: goto L_00320040;
    case 11u: goto L_00320050;
    case 12u: goto L_0032005C;
    case 13u: goto L_00320060;
    case 14u: goto L_00320064;
    case 15u: goto L_00320070;
    case 16u: goto L_00320078;
    case 17u: goto L_00320080;
    case 18u: goto L_00320088;
    case 19u: goto L_00320098;
    case 20u: goto L_003200B8;
    case 21u: goto L_003200C0;
    case 22u: goto L_00320100;
    case 23u: goto L_00320130;
    case 24u: goto L_0032019C;
    case 25u: goto L_003201A8;
    case 26u: goto L_003201B0;
    case 27u: goto L_003201E0;
    case 28u: goto L_003201F4;
    case 29u: goto L_00320200;
    case 30u: goto L_00320210;
    case 31u: goto L_0032024C;
    case 32u: goto L_00320260;
    case 33u: goto L_003202A0;
    case 34u: goto L_003202B0;
    case 35u: goto L_003202EC;
    case 36u: goto L_00320300;
    case 37u: goto L_00320338;
    case 38u: goto L_00320350;
    case 39u: goto L_00320360;
    case 40u: goto L_0032038C;
    case 41u: goto L_003203A0;
    case 42u: goto L_003203D4;
    case 43u: goto L_003203E8;
    case 44u: goto L_00320414;
    case 45u: goto L_00320484;
    case 46u: goto L_00320488;
    case 47u: goto L_0032049C;
    case 48u: goto L_003204B0;
    case 49u: goto L_003204D4;
    case 50u: goto L_003204FC;
    case 51u: goto L_00320528;
    case 52u: goto L_00320538;
    case 53u: goto L_0032054C;
    case 54u: goto L_00320560;
    case 55u: goto L_00320578;
    case 56u: goto L_003205E8;
    case 57u: goto L_00320668;
    case 58u: goto L_00320700;
    case 59u: goto L_00320798;
    case 60u: goto L_00320830;
    case 61u: goto L_003208E4;
    case 62u: goto L_003208F4;
    case 63u: goto L_00320904;
    case 64u: goto L_00320914;
    case 65u: goto L_00320924;
    case 66u: goto L_00320980;
    case 67u: goto L_003209E8;
    case 68u: goto L_003209F8;
    case 69u: goto L_00320A08;
    case 70u: goto L_00320A18;
    case 71u: goto L_00320A28;
    case 72u: goto L_00320A38;
    case 73u: goto L_00320A60;
    case 74u: goto L_00320A90;
    case 75u: goto L_00320B40;
    case 76u: goto L_00320B8C;
    case 77u: goto L_00320BA0;
    case 78u: goto L_00320BB0;
    case 79u: goto L_00320BE0;
    case 80u: goto L_00320C6C;
    case 81u: goto L_00320C88;
    case 82u: goto L_00320D30;
    case 83u: goto L_00320D3C;
    case 84u: goto L_00320D54;
    case 85u: goto L_00320D70;
    case 86u: goto L_00320D84;
    case 87u: goto L_00320D8C;
    case 88u: goto L_00320DE0;
    case 89u: goto L_00320DF4;
    case 90u: goto L_00320E28;
    case 91u: goto L_00320E34;
    case 92u: goto L_00320E4C;
    case 93u: goto L_00320E58;
    case 94u: goto L_00320E60;
    case 95u: goto L_00320E68;
    case 96u: goto L_00320E7C;
    case 97u: goto L_00320E80;
    case 98u: goto L_00320EB8;
    case 99u: goto L_00320EC0;
    case 100u: goto L_00320EC8;
    case 101u: goto L_00320EE4;
    case 102u: goto L_00320EF0;
    case 103u: goto L_00320F14;
    case 104u: goto L_00320F80;
    case 105u: goto L_00320F90;
    case 106u: goto L_00320FA0;
    case 107u: goto L_00321000;
    case 108u: goto L_00321010;
    case 109u: goto L_00321050;
    case 110u: goto L_00321080;
    case 111u: goto L_003210A0;
    case 112u: goto L_003210A8;
    case 113u: goto L_003210BC;
    case 114u: goto L_003210D0;
    case 115u: goto L_003210E0;
    case 116u: goto L_00321110;
    case 117u: goto L_00321130;
    case 118u: goto L_00321140;
    case 119u: goto L_00321150;
    case 120u: goto L_00321174;
    case 121u: goto L_0032117C;
    case 122u: goto L_00321194;
    case 123u: goto L_003211AC;
    case 124u: goto L_003211C4;
    case 125u: goto L_003211D0;
    case 126u: goto L_0032121C;
    case 127u: goto L_00321254;
    case 128u: goto L_00321270;
    case 129u: goto L_003212A0;
    case 130u: goto L_003212B0;
    case 131u: goto L_003212E4;
    case 132u: goto L_003212F8;
    case 133u: goto L_00321300;
    case 134u: goto L_00321310;
    case 135u: goto L_00321320;
    case 136u: goto L_00321330;
    case 137u: goto L_00321348;
    case 138u: goto L_00321350;
    case 139u: goto L_00321358;
    case 140u: goto L_00321368;
    case 141u: goto L_00321380;
    case 142u: goto L_003213B0;
    case 143u: goto L_003213E0;
    case 144u: goto L_00321420;
    case 145u: goto L_00321428;
    case 146u: goto L_00321450;
    case 147u: goto L_0032145C;
    case 148u: goto L_00321478;
    case 149u: goto L_00321480;
    case 150u: goto L_00321488;
    case 151u: goto L_00321490;
    case 152u: goto L_003214A0;
    case 153u: goto L_003214A8;
    case 154u: goto L_003214C4;
    case 155u: goto L_003214DC;
    case 156u: goto L_003214E8;
    case 157u: goto L_003214F8;
    case 158u: goto L_00321500;
    case 159u: goto L_00321518;
    case 160u: goto L_00321520;
    case 161u: goto L_00321544;
    case 162u: goto L_00321550;
    case 163u: goto L_00321558;
    case 164u: goto L_0032156C;
    case 165u: goto L_00321578;
    case 166u: goto L_00321580;
    case 167u: goto L_00321590;
    case 168u: goto L_00321594;
    case 169u: goto L_003215B0;
    case 170u: goto L_00321610;
    case 171u: goto L_00321650;
    case 172u: goto L_0032165C;
    case 173u: goto L_00321668;
    case 174u: goto L_00321680;
    case 175u: goto L_003216A0;
    case 176u: goto L_003216AC;
    case 177u: goto L_003216B4;
    case 178u: goto L_003216BC;
    case 179u: goto L_003216C8;
    case 180u: goto L_003216D4;
    case 181u: goto L_003216E0;
    case 182u: goto L_003216F0;
    case 183u: goto L_00321700;
    case 184u: goto L_00321708;
    case 185u: goto L_00321734;
    case 186u: goto L_0032173C;
    case 187u: goto L_00321744;
    case 188u: goto L_00321750;
    case 189u: goto L_00321758;
    case 190u: goto L_00321774;
    case 191u: goto L_00321780;
    case 192u: goto L_003217A0;
    case 193u: goto L_003217A8;
    case 194u: goto L_003217C8;
    case 195u: goto L_003217D4;
    case 196u: goto L_00321824;
    case 197u: goto L_00321830;
    case 198u: goto L_00321838;
    case 199u: goto L_00321840;
    case 200u: goto L_00321860;
    case 201u: goto L_0032186C;
    case 202u: goto L_00321898;
    case 203u: goto L_003218A8;
    case 204u: goto L_003218D4;
    case 205u: goto L_003218E0;
    case 206u: goto L_0032190C;
    case 207u: goto L_00321918;
    case 208u: goto L_00321920;
    case 209u: goto L_00321930;
    case 210u: goto L_00321938;
    case 211u: goto L_00321990;
    case 212u: goto L_003219C0;
    case 213u: goto L_003219E8;
    case 214u: goto L_00321A2C;
    case 215u: goto L_00321A80;
    case 216u: goto L_00321AD8;
    case 217u: goto L_00321AF4;
    case 218u: goto L_00321B08;
    case 219u: goto L_00321B20;
    case 220u: goto L_00321B58;
    case 221u: goto L_00321B60;
    case 222u: goto L_00321B68;
    case 223u: goto L_00321B70;
    case 224u: goto L_00321B78;
    case 225u: goto L_00321B80;
    case 226u: goto L_00321B88;
    case 227u: goto L_00321B98;
    case 228u: goto L_00321BB0;
    case 229u: goto L_00321BEC;
    case 230u: goto L_00321C04;
    case 231u: goto L_00321C18;
    case 232u: goto L_00321C30;
    case 233u: goto L_00321CA8;
    case 234u: goto L_00321CC0;
    case 235u: goto L_00321CD0;
    case 236u: goto L_00321CD8;
    case 237u: goto L_00321D20;
    case 238u: goto L_00321E44;
    case 239u: goto L_00321E54;
    case 240u: goto L_00321E60;
    case 241u: goto L_00321ECC;
    case 242u: goto L_00321ED4;
    case 243u: goto L_00321EFC;
    case 244u: goto L_00321F38;
    case 245u: goto L_00321F68;
    case 246u: goto L_00321F78;
    case 247u: goto L_00321FB4;
    case 248u: goto L_00321FD4;
    case 249u: goto L_00321FF0;
    case 250u: goto L_00322028;
    case 251u: goto L_0032204C;
    case 252u: goto L_00322060;
    case 253u: goto L_00322068;
    case 254u: goto L_00322078;
    case 255u: goto L_003220A0;
    case 256u: goto L_003220CC;
    case 257u: goto L_00322100;
    case 258u: goto L_00322130;
    case 259u: goto L_00322160;
    case 260u: goto L_0032219C;
    case 261u: goto L_003221B0;
    case 262u: goto L_003221E8;
    case 263u: goto L_00322200;
    case 264u: goto L_00322214;
    case 265u: goto L_00322270;
    case 266u: goto L_00322280;
    case 267u: goto L_003222B0;
    case 268u: goto L_003222EC;
    case 269u: goto L_00322300;
    case 270u: goto L_00322338;
    case 271u: goto L_00322350;
    case 272u: goto L_00322364;
    case 273u: goto L_003223C0;
    case 274u: goto L_003223EC;
    case 275u: goto L_00322424;
    case 276u: goto L_00322430;
    case 277u: goto L_003224AC;
    case 278u: goto L_003224C0;
    case 279u: goto L_003224EC;
    case 280u: goto L_00322520;
    case 281u: goto L_00322530;
    case 282u: goto L_003225C8;
    case 283u: goto L_003225D8;
    case 284u: goto L_003225F4;
    case 285u: goto L_00322610;
    case 286u: goto L_00322638;
    case 287u: goto L_00322650;
    case 288u: goto L_00322660;
    case 289u: goto L_003226D8;
    case 290u: goto L_003226F0;
    case 291u: goto L_0032271C;
    case 292u: goto L_00322764;
    case 293u: goto L_00322770;
    case 294u: goto L_0032281C;
    case 295u: goto L_0032283C;
    case 296u: goto L_00322850;
    case 297u: goto L_003228A8;
    case 298u: goto L_003228E4;
    case 299u: goto L_003228F8;
    case 300u: goto L_00322910;
    case 301u: goto L_00322928;
    case 302u: goto L_00322944;
    case 303u: goto L_00322950;
    case 304u: goto L_003229A0;
    case 305u: goto L_003229F0;
    case 306u: goto L_00322A20;
    case 307u: goto L_00322A48;
    case 308u: goto L_00322A5C;
    case 309u: goto L_00322A70;
    case 310u: goto L_00322A84;
    case 311u: goto L_00322AE0;
    case 312u: goto L_00322B10;
    case 313u: goto L_00322B3C;
    case 314u: goto L_00322B50;
    case 315u: goto L_00322B74;
    case 316u: goto L_00322B80;
    case 317u: goto L_00322BB0;
    case 318u: goto L_00322BDC;
    case 319u: goto L_00322BF0;
    case 320u: goto L_00322C08;
    case 321u: goto L_00322C20;
    case 322u: goto L_00322C34;
    case 323u: goto L_00322C70;
    case 324u: goto L_00322CA0;
    case 325u: goto L_00322CC8;
    case 326u: goto L_00322CDC;
    case 327u: goto L_00322CE8;
    case 328u: goto L_00322D00;
    case 329u: goto L_00322D14;
    case 330u: goto L_00322D40;
    case 331u: goto L_00322D68;
    case 332u: goto L_00322D80;
    case 333u: goto L_00322D90;
    case 334u: goto L_00322DC0;
    case 335u: goto L_00322DE8;
    case 336u: goto L_00322DFC;
    case 337u: goto L_00322E08;
    case 338u: goto L_00322E20;
    case 339u: goto L_00322E34;
    case 340u: goto L_00322E60;
    case 341u: goto L_00322E88;
    case 342u: goto L_00322EA0;
    case 343u: goto L_00322EBC;
    case 344u: goto L_00322ED8;
    case 345u: goto L_00322EE0;
    case 346u: goto L_00322EF0;
    case 347u: goto L_00322F1C;
    case 348u: goto L_00322F40;
    case 349u: goto L_00322F5C;
    case 350u: goto L_00322F88;
    case 351u: goto L_00322FB0;
    case 352u: goto L_00322FCC;
    case 353u: goto L_00322FF8;
    case 354u: goto L_00323020;
    case 355u: goto L_00323030;
    case 356u: goto L_003230A8;
    case 357u: goto L_003230B8;
    case 358u: goto L_003230D8;
    case 359u: goto L_00323148;
    case 360u: goto L_00323158;
    case 361u: goto L_00323178;
    case 362u: goto L_00323190;
    case 363u: goto L_003231D8;
    case 364u: goto L_003231E4;
    case 365u: goto L_003231F0;
    case 366u: goto L_00323230;
    case 367u: goto L_00323254;
    case 368u: goto L_00323260;
    case 369u: goto L_00323284;
    case 370u: goto L_00323290;
    case 371u: goto L_003232A0;
    case 372u: goto L_003232B4;
    case 373u: goto L_003232EC;
    case 374u: goto L_003232F8;
    case 375u: goto L_00323334;
    case 376u: goto L_00323340;
    case 377u: goto L_00323374;
    case 378u: goto L_00323380;
    case 379u: goto L_003233A8;
    case 380u: goto L_003233B0;
    case 381u: goto L_003233B8;
    case 382u: goto L_003233D4;
    case 383u: goto L_003233F0;
    case 384u: goto L_00323430;
    case 385u: goto L_0032343C;
    case 386u: goto L_00323448;
    case 387u: goto L_00323488;
    case 388u: goto L_003234AC;
    case 389u: goto L_003234B8;
    case 390u: goto L_003234DC;
    case 391u: goto L_003234E8;
    case 392u: goto L_003234F8;
    case 393u: goto L_0032350C;
    case 394u: goto L_00323538;
    case 395u: goto L_00323570;
    case 396u: goto L_00323598;
    case 397u: goto L_003235C0;
    case 398u: goto L_003235D4;
    case 399u: goto L_00323610;
    case 400u: goto L_00323620;
    case 401u: goto L_00323630;
    case 402u: goto L_00323670;
    case 403u: goto L_00323680;
    case 404u: goto L_003236C0;
    case 405u: goto L_0032371C;
    case 406u: goto L_00323724;
    case 407u: goto L_0032372C;
    case 408u: goto L_00323744;
    case 409u: goto L_00323758;
    case 410u: goto L_00323764;
    case 411u: goto L_00323780;
    case 412u: goto L_00323794;
    case 413u: goto L_003237A4;
    case 414u: goto L_003237C8;
    case 415u: goto L_003237F8;
    case 416u: goto L_0032380C;
    case 417u: goto L_00323830;
    case 418u: goto L_0032384C;
    case 419u: goto L_00323870;
    case 420u: goto L_00323880;
    case 421u: goto L_003238B0;
    case 422u: goto L_003238D0;
    case 423u: goto L_003238E0;
    case 424u: goto L_00323940;
    case 425u: goto L_00323950;
    case 426u: goto L_00323960;
    case 427u: goto L_00323970;
    case 428u: goto L_00323980;
    case 429u: goto L_003239B0;
    case 430u: goto L_003239E0;
    case 431u: goto L_00323A10;
    case 432u: goto L_00323A40;
    case 433u: goto L_00323A70;
    case 434u: goto L_00323A8C;
    case 435u: goto L_00323AB8;
    case 436u: goto L_00323AC0;
    case 437u: goto L_00323AC8;
    case 438u: goto L_00323AD0;
    case 439u: goto L_00323AD8;
    case 440u: goto L_00323AE0;
    case 441u: goto L_00323AE8;
    case 442u: goto L_00323AF0;
    case 443u: goto L_00323AF8;
    case 444u: goto L_00323B00;
    case 445u: goto L_00323B08;
    case 446u: goto L_00323B10;
    case 447u: goto L_00323B18;
    case 448u: goto L_00323B20;
    case 449u: goto L_00323B28;
    case 450u: goto L_00323B30;
    case 451u: goto L_00323B40;
    case 452u: goto L_00323B80;
    case 453u: goto L_00323BF0;
    case 454u: goto L_00323C00;
    case 455u: goto L_00323C40;
    case 456u: goto L_00323C50;
    case 457u: goto L_00323C64;
    case 458u: goto L_00323C88;
    case 459u: goto L_00323CD0;
    case 460u: goto L_00323D44;
    case 461u: goto L_00323D88;
    case 462u: goto L_00323D98;
    case 463u: goto L_00323DD0;
    case 464u: goto L_00323DE0;
    case 465u: goto L_00323E00;
    case 466u: goto L_00323E1C;
    case 467u: goto L_00323E68;
    case 468u: goto L_00323EA4;
    case 469u: goto L_00323ED0;
    case 470u: goto L_00323EE0;
    case 471u: goto L_00323F4C;
    case 472u: goto L_00323F78;
    case 473u: goto L_00323F90;
    case 474u: goto L_00323FD0;
    case 475u: goto L_00323FE0;
    case 476u: goto L_00323FF4;
    default: bad_entry(c, 0x00320000u); return;
    }
L_00320000:
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 1;
L_00320004:
    st16((c.r[6].w[0] + 8284u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_00320008:
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 1;
L_0032000C:
    st8((c.r[6].w[0] + 8286u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 1;
L_00320010:
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 1;
L_00320014:
    st16((c.r[6].w[0] + 8288u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[6].w[0] + 8290u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = ld8((c.r[1].w[0] + 16016u));
    mmi::mult(c, 0, c.r[16].w[0], c.r[4].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 6;
L_0032002C:
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 1;
L_00320030:
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_00320034:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320040u); st16((c.r[2].w[0]), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0092(c, 106u, depth + 1u); else { c.pc = 0x00348D20u; return; } if (c.pc != 0x00320040u) [[unlikely]] return; }
L_00320040:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320050u); set32(c.r[5], c.r[5].w[0] - 5760u);  if (depth < kMaxDepth) unit_0091(c, 403u, depth + 1u); else { c.pc = 0x00347B50u; return; } if (c.pc != 0x00320050u) [[unlikely]] return; }
L_00320050:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320060u); set32(c.r[5], c.r[5].w[0] - 5632u);  if (depth < kMaxDepth) unit_0092(c, 219u, depth + 1u); else { c.pc = 0x00349DC0u; return; } if (c.pc != 0x00320060u) [[unlikely]] return; }
    goto L_00320060;
L_0032005C:
    set32(c.r[5], c.r[5].w[0] - 5632u);
    c.budget -= 1;
L_00320060:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    c.budget -= 1;
L_00320064:
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320070u); set32(c.r[5], c.r[5].w[0] - 5536u);  if (depth < kMaxDepth) unit_0093(c, 143u, depth + 1u); else { c.pc = 0x0034CD90u; return; } if (c.pc != 0x00320070u) [[unlikely]] return; }
L_00320070:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 2;
L_00320078:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00320080:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 4u);
    c.budget -= 2;
L_00320088:
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2589u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 4;
L_00320098:
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003200B8u); st8((c.r[2].w[0] + 2593u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0088(c, 419u, depth + 1u); else { c.pc = 0x00323870u; return; } if (c.pc != 0x003200B8u) [[unlikely]] return; }
L_003200B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003200C0u);  if (depth < kMaxDepth) unit_0088(c, 342u, depth + 1u); else { c.pc = 0x00322EA0u; return; } if (c.pc != 0x003200C0u) [[unlikely]] return; }
L_003200C0:
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[7], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[5], 0u + 346u);
    set32(c.r[4], c.r[4].w[0] - 5438u);
    set32(c.r[3], c.r[3].w[0] - 5440u);
    st8((c.r[6].w[0] + 8275u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[6].w[0] + 8279u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[6].w[0] + 10312u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[6].w[0] + 9845u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[6].d[0] = ld8((c.r[1].w[0] + 16016u));
    c.budget -= 16;
L_00320100:
    set32(c.r[6], c.r[6].w[0] - 1u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00320130:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00320170; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 4u);
    set32(c.r[4], 0u + 8u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[2].w[0] + 2589u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003201A0; } }
    c.budget -= 1;
L_00320170:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 4u);
    set32(c.r[3], 0u + 8u);
    st8((c.r[2].w[0] + 2589u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032019Cu); st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 15u, depth + 1u); else { c.pc = 0x00334150u; return; } if (c.pc != 0x0032019Cu) [[unlikely]] return; }
L_0032019C:
    c.budget -= 1;
L_003201A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003201A8u);  if (depth < kMaxDepth) unit_0088(c, 342u, depth + 1u); else { c.pc = 0x00322EA0u; return; } if (c.pc != 0x003201A8u) [[unlikely]] return; }
L_003201A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003201B0u);  if (depth < kMaxDepth) unit_008C(c, 209u, depth + 1u); else { c.pc = 0x003338E0u; return; } if (c.pc != 0x003201B0u) [[unlikely]] return; }
L_003201B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 255u);
    st8((c.r[2].w[0] + 2578u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st16((c.r[2].w[0] + 2580u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 9836u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 3418u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003201E0u); st8((c.r[2].w[0] + 3416u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008B(c, 220u, depth + 1u); else { c.pc = 0x0032EEE0u; return; } if (c.pc != 0x003201E0u) [[unlikely]] return; }
L_003201E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 2531u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003201F4:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 1;
    c.pc = 0x003201F8u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_00320200:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320210u); set32(c.r[4], 0u + 1024u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x00320210u) [[unlikely]] return; }
L_00320210:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00320258; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[2].w[0] + 2597u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 2597u));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] + 2u);  if (t) { goto L_00320258; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[1].w[0] + 15545u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032024Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0032024Cu) [[unlikely]] return; }
L_0032024C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00320340; } }
    c.budget -= 1;
L_00320258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320260u); set32(c.r[4], 0u + 2048u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x00320260u) [[unlikely]] return; }
L_00320260:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003202A8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 2597u));
    set32(c.r[5], c.r[2].w[0] + 2597u);
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] - 2u);  if (t) { goto L_003202A8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 1u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 2597u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003202A0u); st8((c.r[1].w[0] + 15545u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003202A0u) [[unlikely]] return; }
L_003202A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00320340; } }
L_003202A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003202B0u); set32(c.r[4], 0u + 8192u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x003202B0u) [[unlikely]] return; }
L_003202B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003202F8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[2].w[0] + 2597u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 2597u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003202F8; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[2].w[0] + 2597u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003202ECu); st8((c.r[1].w[0] + 15545u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003202ECu) [[unlikely]] return; }
L_003202EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00320340; } }
    c.budget -= 1;
L_003202F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320300u); set32(c.r[4], 0u + 4096u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x00320300u) [[unlikely]] return; }
L_00320300:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00320340; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[6], c.r[3].w[0] + 2597u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2597u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00320340; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 2597u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320338u); st8((c.r[1].w[0] + 15545u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x00320338u) [[unlikely]] return; }
L_00320338:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00320340; } }
L_00320340:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00320350:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320360u);  if (depth < kMaxDepth) unit_0088(c, 346u, depth + 1u); else { c.pc = 0x00322EF0u; return; } if (c.pc != 0x00320360u) [[unlikely]] return; }
L_00320360:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00320390; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 2048u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2591u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0032038Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0032038Cu) [[unlikely]] return; }
L_0032038C:
    c.budget -= 1;
L_00320390:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003203A0:
    set32(c.r[29], c.r[29].w[0] - 1296u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2592u));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 2592u);  if (t) { goto L_003204B8; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_003204A8; } }
L_003203D4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00320478; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00320450; } }
L_003203E8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003203F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00320A40; } }
L_003203F8:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 135u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 98u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320414u); st32((c.r[2].w[0] + 2612u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x003788A0u; return; } if (c.pc != 0x00320414u) [[unlikely]] return; }
L_00320414:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 10315u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[4].w[0] + 10316u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[4].w[0] + 10317u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    st32((c.r[4].w[0] + 10320u), 0u);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 649u));
    st8((c.r[5].w[0] + 9852u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22992u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00320A40; } }
    c.budget -= 1;
L_00320450:
    set32(c.r[3], ld32((c.r[5].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[5].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_00320A40; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2592u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00320A40; } }
    c.budget -= 1;
L_00320478:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320484u); st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x00320484u) [[unlikely]] return; }
L_00320484:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 1;
L_00320488:
    set32(c.r[3], 0u + 24u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], c.r[4].w[0] + 3984u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032049Cu); st8((c.r[2].w[0] + 2606u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0093(c, 585u, depth + 1u); else { c.pc = 0x0034FCD0u; return; } if (c.pc != 0x0032049Cu) [[unlikely]] return; }
L_0032049C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00320A40; } }
    c.budget -= 1;
L_003204A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003204B0u);  if (depth < kMaxDepth) unit_0085(c, 285u, depth + 1u); else { c.pc = 0x00316770u; return; } if (c.pc != 0x003204B0u) [[unlikely]] return; }
L_003204B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00320A40; } }
L_003204B8:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 2591u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0] + 2591u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003204D4u); st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0094(c, 87u, depth + 1u); else { c.pc = 0x00350770u; return; } if (c.pc != 0x003204D4u) [[unlikely]] return; }
L_003204D4:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 64u));
    set32(c.r[5], c.r[29].w[0] + 322u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[6], 0u + 16u);
    st8((c.r[2].w[0] + 2608u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 65u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[28].w[0] - 23060u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003204FCu); set32(c.r[4], c.r[2].w[0] + 10348u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x003204FCu) [[unlikely]] return; }
L_003204FC:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 10313u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 10314u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2608u));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00320630; } }
    set32(c.r[17], c.r[29].w[0] + 64u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00320528:
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[2].w[0] + 792u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320538u); set32(c.r[5], c.r[17].w[0] + 279u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00320538u) [[unlikely]] return; }
L_00320538:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], c.r[17].w[0] + 287u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032054Cu); set32(c.r[4], c.r[2].w[0] + 800u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0032054Cu) [[unlikely]] return; }
L_0032054C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], c.r[17].w[0] + 304u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320560u); set32(c.r[4], c.r[2].w[0] + 817u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00320560u) [[unlikely]] return; }
L_00320560:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], c.r[17].w[0] + 368u);
    set32(c.r[6], 0u + 120u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320578u); set32(c.r[4], c.r[2].w[0] + 672u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00320578u) [[unlikely]] return; }
L_00320578:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], 0u + 6u);
    c.r[4].d[0] = ld8((c.r[17].w[0] + 278u));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st8((c.r[3].w[0] + 898u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld16((c.r[17].w[0] + 488u));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st8((c.r[3].w[0] + 881u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 492u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0] + 900u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 496u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st16((c.r[3].w[0] + 888u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 500u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st16((c.r[3].w[0] + 882u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 504u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st16((c.r[3].w[0] + 884u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 277u));
    c.budget -= 28;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00320600; } }
L_003205E8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 10313u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 10313u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00320610; } }
    c.budget -= 1;
L_00320600:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 10314u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 10314u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00320610:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 236u);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2608u));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 232u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00320528u | kUnwind; return; } goto L_00320528; } }
    c.budget -= 1;
L_00320630:
    set32(c.r[16], c.r[29].w[0] + 66u);
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[4].w[0] + 10192u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 10193u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 10194u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 10195u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 14;
L_00320668:
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 4u));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    st8((c.r[4].w[0] + 10196u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 5u));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    st8((c.r[4].w[0] + 10197u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 6u));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    st8((c.r[4].w[0] + 10198u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 7u));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    st8((c.r[4].w[0] + 10199u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    st8((c.r[4].w[0] + 10200u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 9u));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    st8((c.r[4].w[0] + 10201u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 10u));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    st8((c.r[4].w[0] + 10202u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 11u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[3].w[0] + 10203u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.r[3].d[0] = c.r[2].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 37;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00320668u | kUnwind; return; } goto L_00320668; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00320700:
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 20u));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    st8((c.r[4].w[0] + 10212u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 21u));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    st8((c.r[4].w[0] + 10213u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 22u));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    st8((c.r[4].w[0] + 10214u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 23u));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    st8((c.r[4].w[0] + 10215u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 24u));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    st8((c.r[4].w[0] + 10216u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 25u));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    st8((c.r[4].w[0] + 10217u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 26u));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    st8((c.r[4].w[0] + 10218u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 27u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[3].w[0] + 10219u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.r[3].d[0] = c.r[2].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 37;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00320700u | kUnwind; return; } goto L_00320700; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00320798:
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 36u));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    st8((c.r[4].w[0] + 10228u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 37u));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    st8((c.r[4].w[0] + 10229u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 38u));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    st8((c.r[4].w[0] + 10230u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 39u));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    st8((c.r[4].w[0] + 10231u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 40u));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    st8((c.r[4].w[0] + 10232u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 41u));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    st8((c.r[4].w[0] + 10233u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 42u));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    st8((c.r[4].w[0] + 10234u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 43u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[3].w[0] + 10235u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.r[3].d[0] = c.r[2].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 37;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00320798u | kUnwind; return; } goto L_00320798; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00320830:
    set32(c.r[5], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 52u));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[3].w[0] + 10244u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 53u));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[3].w[0] + 10245u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 54u));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[3].w[0] + 10246u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 55u));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[3].w[0] + 10247u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 56u));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[3].w[0] + 10248u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 57u));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[3].w[0] + 10249u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 58u));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[3].w[0] + 10250u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 59u));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[3].w[0] + 10251u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.r[3].d[0] = c.r[2].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 37;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00320830u | kUnwind; return; } goto L_00320830; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 68u));
    set32(c.r[4], c.r[16].w[0] + 70u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 10260u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 69u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003208E4u); st8((c.r[2].w[0] + 10261u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0088(c, 73u, depth + 1u); else { c.pc = 0x00320A60u; return; } if (c.pc != 0x003208E4u) [[unlikely]] return; }
L_003208E4:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[16].w[0] + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003208F4u); st16((c.r[3].w[0] + 10262u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0088(c, 73u, depth + 1u); else { c.pc = 0x00320A60u; return; } if (c.pc != 0x003208F4u) [[unlikely]] return; }
L_003208F4:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[16].w[0] + 74u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320904u); st16((c.r[3].w[0] + 10264u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0088(c, 73u, depth + 1u); else { c.pc = 0x00320A60u; return; } if (c.pc != 0x00320904u) [[unlikely]] return; }
L_00320904:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[16].w[0] + 76u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320914u); st16((c.r[3].w[0] + 10266u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0088(c, 73u, depth + 1u); else { c.pc = 0x00320A60u; return; } if (c.pc != 0x00320914u) [[unlikely]] return; }
L_00320914:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[16].w[0] + 78u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320924u); st16((c.r[3].w[0] + 10268u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0088(c, 73u, depth + 1u); else { c.pc = 0x00320A60u; return; } if (c.pc != 0x00320924u) [[unlikely]] return; }
L_00320924:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st16((c.r[3].w[0] + 10270u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 10272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 10273u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 10274u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 83u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 10275u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 84u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 10276u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 85u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 10277u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[17], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320980u); set32(c.r[4], c.r[16].w[0] + 86u);  if (depth < kMaxDepth) unit_0088(c, 74u, depth + 1u); else { c.pc = 0x00320A90u; return; } if (c.pc != 0x00320980u) [[unlikely]] return; }
L_00320980:
    st64((c.r[17].w[0] + 10280u), c.r[2].d[0]);
    set32(c.r[4], c.r[16].w[0] + 104u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 94u));
    st8((c.r[17].w[0] + 10288u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 95u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 10289u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 96u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 10290u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 97u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 10291u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 98u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 10292u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 99u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 10293u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 102u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 10294u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 103u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003209E8u); st8((c.r[2].w[0] + 10295u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0088(c, 73u, depth + 1u); else { c.pc = 0x00320A60u; return; } if (c.pc != 0x003209E8u) [[unlikely]] return; }
L_003209E8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[16].w[0] + 106u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003209F8u); st16((c.r[3].w[0] + 10296u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0088(c, 73u, depth + 1u); else { c.pc = 0x00320A60u; return; } if (c.pc != 0x003209F8u) [[unlikely]] return; }
L_003209F8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[16].w[0] + 108u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320A08u); st16((c.r[3].w[0] + 10298u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0088(c, 73u, depth + 1u); else { c.pc = 0x00320A60u; return; } if (c.pc != 0x00320A08u) [[unlikely]] return; }
L_00320A08:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[16].w[0] + 110u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320A18u); st16((c.r[3].w[0] + 10300u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0088(c, 73u, depth + 1u); else { c.pc = 0x00320A60u; return; } if (c.pc != 0x00320A18u) [[unlikely]] return; }
L_00320A18:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[16].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320A28u); st16((c.r[3].w[0] + 10302u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0088(c, 73u, depth + 1u); else { c.pc = 0x00320A60u; return; } if (c.pc != 0x00320A28u) [[unlikely]] return; }
L_00320A28:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[16].w[0] + 114u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320A38u); st16((c.r[3].w[0] + 10304u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0088(c, 73u, depth + 1u); else { c.pc = 0x00320A60u; return; } if (c.pc != 0x00320A38u) [[unlikely]] return; }
L_00320A38:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st16((c.r[3].w[0] + 10306u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00320A40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1296u);  c.pc = t; return; }
L_00320A60:
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);  c.pc = t; return; }
L_00320A90:
    c.r[5].d[0] = ld8((c.r[4].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[8].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[2].d[0] = c.r[2].d[0] << 8;
    c.r[7].d[0] = ld8((c.r[4].w[0] + 4u));
    c.r[9].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 5u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[10].d[0] = c.r[5].d[0] << 32;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 32);
    c.r[8].d[0] = c.r[8].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] + c.r[10].d[0];
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[10].d[0] = c.r[9].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] << 8;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 32);
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[9].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] + c.r[10].d[0];
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 8;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 7u));
    c.r[2].d[0] = c.r[2].d[0] + c.r[9].d[0];
    c.r[5].d[0] = ld8((c.r[4].w[0] + 6u));
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 8;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] + c.r[8].d[0];
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 8;
    c.r[2].d[0] = c.r[2].d[0] + c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 8;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] + c.r[6].d[0];
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 8;
    c.r[2].d[0] = c.r[2].d[0] + c.r[4].d[0];
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 8;
    c.budget -= 42;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];  c.pc = t; return; }
L_00320B40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], c.r[3].w[0] + 2592u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2592u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00320B98; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00320B70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00320BD0; } }
L_00320B70:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 10u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320B8Cu); st32((c.r[2].w[0] + 2612u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x00320B8Cu) [[unlikely]] return; }
L_00320B8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00320BD0; } }
    c.budget -= 1;
L_00320B98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320BA0u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x00320BA0u) [[unlikely]] return; }
L_00320BA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00320BD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320BB0u);  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00320BB0u) [[unlikely]] return; }
L_00320BB0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2591u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2591u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00320BD0; } }
    c.budget -= 1;
L_00320BD0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00320BE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[7].w[0] + 2592u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[7].w[0] + 2592u);  if (t) { goto L_00320D08; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00320C10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00320D58; } }
    c.budget -= 1;
L_00320C10:
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], 0u - 1u);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[5].w[0] + 9841u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[5].w[0] + 9837u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[5].w[0] + 9842u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[5].w[0] + 9838u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[5].w[0] + 9843u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[5].w[0] + 9839u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[5].w[0] + 9844u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[5].w[0] + 9840u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[5].w[0] + 2609u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[5].w[0] + 2610u), static_cast<std::uint8_t>(0u));
    c.budget -= 23;
L_00320C6C:
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 2608u));
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00320D58; } }
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 2u);
    c.budget -= 2;
L_00320C88:
    set32(c.r[5], c.r[6].w[0] + c.r[8].w[0]);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 898u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00320CC0; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 2609u));
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    st8((c.r[5].w[0] + 9837u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 2609u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 2609u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00320CE8; } }
    c.budget -= 1;
L_00320CC0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[7].d[0];  if (t) { goto L_00320CE8; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 2610u));
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    st8((c.r[5].w[0] + 9841u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 2610u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0] + 2610u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 8;
L_00320CE8:
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 2608u));
    c.r[5].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 232u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00320C88u | kUnwind; return; } goto L_00320C88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00320D58; } }
L_00320D08:
    c.r[2].d[0] = ld8((c.r[7].w[0] + 2591u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 15536u);
    set32(c.r[6], 0u + 56u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[7].w[0] + 2591u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320D30u); st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00320D30u) [[unlikely]] return; }
L_00320D30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320D3Cu); set32(c.r[4], c.r[4].w[0] + 15536u);  if (depth < kMaxDepth) unit_00A2(c, 404u, depth + 1u); else { c.pc = 0x0038BCD0u; return; } if (c.pc != 0x00320D3Cu) [[unlikely]] return; }
L_00320D3C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320D54u); st32((c.r[2].w[0] + 2612u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_008D(c, 83u, depth + 1u); else { c.pc = 0x00334FC0u; return; } if (c.pc != 0x00320D54u) [[unlikely]] return; }
L_00320D54:
    c.budget -= 1;
L_00320D58:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00320D70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320D84u); set32(c.r[4], c.r[4].w[0] + 15536u);  if (depth < kMaxDepth) unit_00A2(c, 404u, depth + 1u); else { c.pc = 0x0038BCD0u; return; } if (c.pc != 0x00320D84u) [[unlikely]] return; }
L_00320D84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320D8Cu);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x00320D8Cu) [[unlikely]] return; }
L_00320D8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00320DD0; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 2612u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[5].w[0] + 2612u);  if (t) { goto L_00320DB0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { goto L_00320DD0; } }
L_00320DB0:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2591u));
    set32(c.r[4], 0u + 360u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 2591u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st32((c.r[3].w[0] + 2612u), c.r[4].w[0]);
    c.budget -= 8;
L_00320DD0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00320DE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320DF4u); set32(c.r[4], c.r[4].w[0] + 15536u);  if (depth < kMaxDepth) unit_00A2(c, 404u, depth + 1u); else { c.pc = 0x0038BCD0u; return; } if (c.pc != 0x00320DF4u) [[unlikely]] return; }
L_00320DF4:
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 2592u));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[6].w[0] + 2592u);  if (t) { goto L_00320F68; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 5424u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00320000u < 16384u) { entry = entries_0088[(t - 0x00320000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00320E28:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320E34u); st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x00320E34u) [[unlikely]] return; }
L_00320E34:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 25u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], c.r[4].w[0] + 4112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320E4Cu); st8((c.r[2].w[0] + 2606u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0091(c, 122u, depth + 1u); else { c.pc = 0x00345540u; return; } if (c.pc != 0x00320E4Cu) [[unlikely]] return; }
L_00320E4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00320F68; } }
    c.budget -= 1;
L_00320E58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320E60u);  if (depth < kMaxDepth) unit_0085(c, 285u, depth + 1u); else { c.pc = 0x00316770u; return; } if (c.pc != 0x00320E60u) [[unlikely]] return; }
L_00320E60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00320F68; } }
L_00320E68:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320E7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 59u, depth + 1u); else { c.pc = 0x00334D80u; return; } if (c.pc != 0x00320E7Cu) [[unlikely]] return; }
L_00320E7C:
    st8((c.r[28].w[0] - 22632u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00320E80:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[4].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_00320F68; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 16u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2592u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320EB8u); st32((c.r[2].w[0] + 2612u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x00320EB8u) [[unlikely]] return; }
L_00320EB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00320F68; } }
L_00320EC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320EC8u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x00320EC8u) [[unlikely]] return; }
L_00320EC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00320F68; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2592u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320EE4u); st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00320EE4u) [[unlikely]] return; }
L_00320EE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00320F68; } }
    c.budget -= 1;
L_00320EF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 7728u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 4760u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st32((c.r[1].w[0] + 4768u), c.r[2].w[0]);
    c.r[5].d[0] = ld16((c.r[6].w[0] + 18582u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320F14u); c.r[6].d[0] = ld16((c.r[6].w[0] + 18580u));  if (depth < kMaxDepth) unit_009E(c, 195u, depth + 1u); else { c.pc = 0x0037AD90u; return; } if (c.pc != 0x00320F14u) [[unlikely]] return; }
L_00320F14:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[1].w[0] + 4760u), 0u);
    st8((c.r[28].w[0] - 22992u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[3], 0u + 3u);
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(0u));
    st8((c.r[1].w[0] + 4757u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[28].w[0] - 23020u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[1].w[0] + 4776u)));
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23036u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23040u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23044u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st32((c.r[1].w[0] + 4776u), c.r[3].w[0]);
    c.budget -= 21;
L_00320F68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00320F80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00320F90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 4;
L_00320FA0:
    st64((c.r[29].w[0] + 24u), c.r[4].d[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2589u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00321000; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2606u));
    set32(c.r[3], 0u + 24u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 2606u);  if (t) { goto L_00321000; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00320FE8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2592u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00321000; } }
    c.budget -= 1;
L_00320FE8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 2533u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321000u); set32(c.r[4], c.r[2].w[0] + 8291u);  if (depth < kMaxDepth) unit_0091(c, 142u, depth + 1u); else { c.pc = 0x00345780u; return; } if (c.pc != 0x00321000u) [[unlikely]] return; }
L_00321000:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00321010:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 7u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2589u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00321048; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2606u));
    set32(c.r[3], 0u + 25u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 2606u);  if (t) { goto L_00321048; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2592u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_00321048:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00321050:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 5u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2589u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321080u); st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0088(c, 342u, depth + 1u); else { c.pc = 0x00322EA0u; return; } if (c.pc != 0x00321080u) [[unlikely]] return; }
L_00321080:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 76u);
    st8((c.r[2].w[0] + 2578u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st16((c.r[2].w[0] + 2580u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003210A0u); st8((c.r[2].w[0] + 9836u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x003210A0u) [[unlikely]] return; }
L_003210A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003210A8u);  if (depth < kMaxDepth) unit_008B(c, 220u, depth + 1u); else { c.pc = 0x0032EEE0u; return; } if (c.pc != 0x003210A8u) [[unlikely]] return; }
L_003210A8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 928u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003210BCu); set32(c.r[4], c.r[2].w[0] + 672u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003210BCu) [[unlikely]] return; }
L_003210BC:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003210D0u); set32(c.r[4], c.r[2].w[0] + 10192u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003210D0u) [[unlikely]] return; }
L_003210D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003210E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 2016u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2591u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00320000u < 16384u) { entry = entries_0088[(t - 0x00320000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00321110:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2591u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321130u); st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 58u, depth + 1u); else { c.pc = 0x00334D70u; return; } if (c.pc != 0x00321130u) [[unlikely]] return; }
L_00321130:
    set32(c.r[4], 0u + 1u);
    st8((c.r[28].w[0] - 22632u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321140u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x00321140u) [[unlikely]] return; }
L_00321140:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00321150:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2591u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321174u); st32((c.r[2].w[0] + 2612u), 0u);  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00321174u) [[unlikely]] return; }
L_00321174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032117Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 19u, depth + 1u); else { c.pc = 0x003341C0u; return; } if (c.pc != 0x0032117Cu) [[unlikely]] return; }
L_0032117C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2590u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 74u);  if (t) { goto L_003211A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321194u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x003788A0u; return; } if (c.pc != 0x00321194u) [[unlikely]] return; }
L_00321194:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003211B0; } }
    c.budget -= 1;
L_003211A0:
    set32(c.r[5], c.r[3].w[0] + 8291u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003211ACu); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_009E(c, 53u, depth + 1u); else { c.pc = 0x00378EA0u; return; } if (c.pc != 0x003211ACu) [[unlikely]] return; }
L_003211AC:
    c.budget -= 1;
L_003211B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 16u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003211C4u); st32((c.r[2].w[0] + 2612u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_008D(c, 83u, depth + 1u); else { c.pc = 0x00334FC0u; return; } if (c.pc != 0x003211C4u) [[unlikely]] return; }
L_003211C4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003211D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 2612u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < 600ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00321200; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_00321200:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 2612u)));
    c.r[3].d[0] = c.r[3].sd[0] < 135ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 96u);  if (t) { goto L_00321228; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032121Cu);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0032121Cu) [[unlikely]] return; }
L_0032121C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00321228; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_00321228:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00321258; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2591u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321254u); st32((c.r[2].w[0] + 2612u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x00321254u) [[unlikely]] return; }
L_00321254:
    c.budget -= 1;
L_00321258:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00321270:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[4].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_003212A0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2591u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003212A0u); st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x003212A0u) [[unlikely]] return; }
L_003212A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003212B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = ld8((c.r[28].w[0] - 23076u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003212F0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2591u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003212E4u); st8((c.r[2].w[0] + 2528u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0089(c, 139u, depth + 1u); else { c.pc = 0x00325850u; return; } if (c.pc != 0x003212E4u) [[unlikely]] return; }
L_003212E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321310; } }
    c.budget -= 1;
L_003212F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003212F8u);  if (depth < kMaxDepth) unit_008D(c, 87u, depth + 1u); else { c.pc = 0x00335040u; return; } if (c.pc != 0x003212F8u) [[unlikely]] return; }
L_003212F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321300u);  if (depth < kMaxDepth) unit_0088(c, 234u, depth + 1u); else { c.pc = 0x00321CC0u; return; } if (c.pc != 0x00321300u) [[unlikely]] return; }
L_00321300:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 55u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321310u); st8((c.r[28].w[0] - 22632u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 61u, depth + 1u); else { c.pc = 0x00334DB0u; return; } if (c.pc != 0x00321310u) [[unlikely]] return; }
L_00321310:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00321320:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321330u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_008D(c, 144u, depth + 1u); else { c.pc = 0x00335690u; return; } if (c.pc != 0x00321330u) [[unlikely]] return; }
L_00321330:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00321368; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321348u); st8((c.r[2].w[0] + 2528u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_008D(c, 87u, depth + 1u); else { c.pc = 0x00335040u; return; } if (c.pc != 0x00321348u) [[unlikely]] return; }
L_00321348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321350u);  if (depth < kMaxDepth) unit_008D(c, 87u, depth + 1u); else { c.pc = 0x00335040u; return; } if (c.pc != 0x00321350u) [[unlikely]] return; }
L_00321350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321358u);  if (depth < kMaxDepth) unit_0088(c, 234u, depth + 1u); else { c.pc = 0x00321CC0u; return; } if (c.pc != 0x00321358u) [[unlikely]] return; }
L_00321358:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 55u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321368u); st8((c.r[28].w[0] - 22632u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 61u, depth + 1u); else { c.pc = 0x00334DB0u; return; } if (c.pc != 0x00321368u) [[unlikely]] return; }
L_00321368:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00321380:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 10u);
    st8((c.r[2].w[0] + 2589u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 10;
    { st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));  goto L_00322EA0; }
L_003213B0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 1984u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2591u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00320000u < 16384u) { entry = entries_0088[(t - 0x00320000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003213E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[28].w[0] - 23064u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 2592u));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[6].w[0] + 2592u);  if (t) { goto L_00321600; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 5392u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00320000u < 16384u) { entry = entries_0088[(t - 0x00320000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00321420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321428u);  if (depth < kMaxDepth) unit_008D(c, 87u, depth + 1u); else { c.pc = 0x00335040u; return; } if (c.pc != 0x00321428u) [[unlikely]] return; }
L_00321428:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2607u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00321468; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2592u));
    set32(c.r[4], 0u + 16u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321450u); st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 59u, depth + 1u); else { c.pc = 0x00334D80u; return; } if (c.pc != 0x00321450u) [[unlikely]] return; }
L_00321450:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032145Cu); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x0032145Cu) [[unlikely]] return; }
L_0032145C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321478; } }
    c.budget -= 1;
L_00321468:
    set32(c.r[2], 0u + 2u);
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321478u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 58u, depth + 1u); else { c.pc = 0x00334D70u; return; } if (c.pc != 0x00321478u) [[unlikely]] return; }
L_00321478:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22632u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00321600; } }
L_00321480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321488u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x00321488u) [[unlikely]] return; }
L_00321488:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00321600; } }
L_00321490:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003214A0u); st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x003214A0u) [[unlikely]] return; }
L_003214A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003214A8u);  if (depth < kMaxDepth) unit_0088(c, 354u, depth + 1u); else { c.pc = 0x00323020u; return; } if (c.pc != 0x003214A8u) [[unlikely]] return; }
L_003214A8:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2607u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003214F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003214C4u);  if (depth < kMaxDepth) unit_008D(c, 19u, depth + 1u); else { c.pc = 0x003341C0u; return; } if (c.pc != 0x003214C4u) [[unlikely]] return; }
L_003214C4:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 15u);
    st32((c.r[2].w[0] + 2612u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003214DCu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2607u)));  if (depth < kMaxDepth) unit_0088(c, 219u, depth + 1u); else { c.pc = 0x00321B20u; return; } if (c.pc != 0x003214DCu) [[unlikely]] return; }
L_003214DC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003214E8u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 83u, depth + 1u); else { c.pc = 0x00334FC0u; return; } if (c.pc != 0x003214E8u) [[unlikely]] return; }
L_003214E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321600; } }
L_003214F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_00321600; } }
L_003214F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321500u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x00321500u) [[unlikely]] return; }
L_00321500:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00321600; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00321600; } }
L_00321518:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321520u); c.r[4].d[0] = ld8((c.r[6].w[0] + 2607u));  if (depth < kMaxDepth) unit_0088(c, 397u, depth + 1u); else { c.pc = 0x003235C0u; return; } if (c.pc != 0x00321520u) [[unlikely]] return; }
L_00321520:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00321600; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2592u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321544u); set32(c.r[4], ld32((c.r[1].w[0] + 10160u)));  if (depth < kMaxDepth) unit_0084(c, 76u, depth + 1u); else { c.pc = 0x00310240u; return; } if (c.pc != 0x00321544u) [[unlikely]] return; }
L_00321544:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321550u); set32(c.r[4], c.r[4].w[0] + 10160u);  if (depth < kMaxDepth) unit_0084(c, 80u, depth + 1u); else { c.pc = 0x00310270u; return; } if (c.pc != 0x00321550u) [[unlikely]] return; }
L_00321550:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321600; } }
L_00321558:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032156Cu); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x0032156Cu) [[unlikely]] return; }
L_0032156C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321600; } }
    c.budget -= 1;
L_00321578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321580u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x00321580u) [[unlikely]] return; }
L_00321580:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00321600; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321590u);  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00321590u) [[unlikely]] return; }
L_00321590:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 1;
L_00321594:
    c.r[4].d[0] = ld8((c.r[3].w[0] + 2607u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003215A8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003215D8; } }
L_003215A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003215B0u);  if (depth < kMaxDepth) unit_0086(c, 83u, depth + 1u); else { c.pc = 0x003188D0u; return; } if (c.pc != 0x003215B0u) [[unlikely]] return; }
L_003215B0:
    set32(c.r[3], 0u + 23u);
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23020u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23036u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2535u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00321600; } }
    c.budget -= 1;
L_003215D8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 16u);  if (t) { goto L_00321600; } }
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23020u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23036u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23720u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
L_00321600:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00321610:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[28].w[0] - 23064u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[6].d[0] = ld8((c.r[7].w[0] + 2592u));
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[8], c.r[7].w[0] + 2592u);  if (t) { goto L_00321A70; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 5360u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00320000u < 16384u) { entry = entries_0088[(t - 0x00320000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00321650:
    set32(c.r[2], c.r[6].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032165Cu); st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 87u, depth + 1u); else { c.pc = 0x00335040u; return; } if (c.pc != 0x0032165Cu) [[unlikely]] return; }
L_0032165C:
    set32(c.r[4], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321668u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 59u, depth + 1u); else { c.pc = 0x00334D80u; return; } if (c.pc != 0x00321668u) [[unlikely]] return; }
L_00321668:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 23076u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[28].w[0] - 22632u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00321688; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321680u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x00321680u) [[unlikely]] return; }
L_00321680:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321A70; } }
L_00321688:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 4u);
    set32(c.r[4], 0u + 16u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003216A0u); st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_008D(c, 59u, depth + 1u); else { c.pc = 0x00334D80u; return; } if (c.pc != 0x003216A0u) [[unlikely]] return; }
L_003216A0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003216ACu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_008D(c, 83u, depth + 1u); else { c.pc = 0x00334FC0u; return; } if (c.pc != 0x003216ACu) [[unlikely]] return; }
L_003216AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003216B4u); st8((c.r[28].w[0] - 22632u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x003216B4u) [[unlikely]] return; }
L_003216B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003216BCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 19u, depth + 1u); else { c.pc = 0x003341C0u; return; } if (c.pc != 0x003216BCu) [[unlikely]] return; }
L_003216BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321A70; } }
    c.budget -= 1;
L_003216C8:
    set32(c.r[2], c.r[6].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003216D4u); st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x003216D4u) [[unlikely]] return; }
L_003216D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321A70; } }
    c.budget -= 1;
L_003216E0:
    set32(c.r[2], c.r[6].w[0] + 1u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003216F0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0089(c, 139u, depth + 1u); else { c.pc = 0x00325850u; return; } if (c.pc != 0x003216F0u) [[unlikely]] return; }
L_003216F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2528u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00321A70; } }
    c.budget -= 1;
L_00321700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321708u);  if (depth < kMaxDepth) unit_008D(c, 144u, depth + 1u); else { c.pc = 0x00335690u; return; } if (c.pc != 0x00321708u) [[unlikely]] return; }
L_00321708:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00321A70; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2592u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321734u); st8((c.r[2].w[0] + 2528u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_008D(c, 83u, depth + 1u); else { c.pc = 0x00334FC0u; return; } if (c.pc != 0x00321734u) [[unlikely]] return; }
L_00321734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032173Cu);  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x0032173Cu) [[unlikely]] return; }
L_0032173C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321744u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 19u, depth + 1u); else { c.pc = 0x003341C0u; return; } if (c.pc != 0x00321744u) [[unlikely]] return; }
L_00321744:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321A70; } }
    c.budget -= 1;
L_00321750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321758u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x00321758u) [[unlikely]] return; }
L_00321758:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00321A70; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2592u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321774u); st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0088(c, 354u, depth + 1u); else { c.pc = 0x00323020u; return; } if (c.pc != 0x00321774u) [[unlikely]] return; }
L_00321774:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321A70; } }
    c.budget -= 1;
L_00321780:
    set32(c.r[2], c.r[6].w[0] + 1u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 15u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st32((c.r[2].w[0] + 2612u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003217A0u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2607u)));  if (depth < kMaxDepth) unit_0088(c, 219u, depth + 1u); else { c.pc = 0x00321B20u; return; } if (c.pc != 0x003217A0u) [[unlikely]] return; }
L_003217A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321A70; } }
L_003217A8:
    set32(c.r[3], ld32((c.r[7].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[7].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_00321A70; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 7u);
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003217C8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003217D4u); c.r[4].d[0] = ld8((c.r[2].w[0] + 2607u));  if (depth < kMaxDepth) unit_0088(c, 397u, depth + 1u); else { c.pc = 0x003235C0u; return; } if (c.pc != 0x003217D4u) [[unlikely]] return; }
L_003217D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00321A70; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], 0u + 7u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2607u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 9u);  if (t) { goto L_00321808; } }
    set32(c.r[3], 0u + 180u);
    st8((c.r[4].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_00321818; } }
    c.budget -= 1;
L_00321808:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2592u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00321818:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321824u); set32(c.r[4], ld32((c.r[1].w[0] + 10160u)));  if (depth < kMaxDepth) unit_0084(c, 76u, depth + 1u); else { c.pc = 0x00310240u; return; } if (c.pc != 0x00321824u) [[unlikely]] return; }
L_00321824:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321830u); set32(c.r[4], c.r[4].w[0] + 10160u);  if (depth < kMaxDepth) unit_0084(c, 80u, depth + 1u); else { c.pc = 0x00310270u; return; } if (c.pc != 0x00321830u) [[unlikely]] return; }
L_00321830:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321A70; } }
L_00321838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321840u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x00321840u) [[unlikely]] return; }
L_00321840:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00321870; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 10u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321860u); st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x00321860u) [[unlikely]] return; }
L_00321860:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032186Cu); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x0032186Cu) [[unlikely]] return; }
L_0032186C:
    c.budget -= 1;
L_00321870:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 2607u));
    set32(c.r[3], c.r[4].w[0] - 3u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 6u);  if (t) { goto L_00321890; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00321A70; } }
L_00321890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321898u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00321898u) [[unlikely]] return; }
L_00321898:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003218A8u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_008D(c, 98u, depth + 1u); else { c.pc = 0x003351D0u; return; } if (c.pc != 0x003218A8u) [[unlikely]] return; }
L_003218A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x438D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43470000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.f[13] = c.r[2].w[0];
    c.f[12] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[1].w[0] - 2844u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003218D4u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003218D4u) [[unlikely]] return; }
L_003218D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321A70; } }
    c.budget -= 1;
L_003218E0:
    set32(c.r[3], ld32((c.r[7].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[7].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_00321A70; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 16u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2592u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032190Cu); st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x0032190Cu) [[unlikely]] return; }
L_0032190C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321A70; } }
    c.budget -= 1;
L_00321918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321920u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x00321920u) [[unlikely]] return; }
L_00321920:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00321A70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321930u);  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00321930u) [[unlikely]] return; }
L_00321930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321938u);  if (depth < kMaxDepth) unit_008D(c, 148u, depth + 1u); else { c.pc = 0x00335710u; return; } if (c.pc != 0x00321938u) [[unlikely]] return; }
L_00321938:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00321A10; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2607u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_003219F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003219B8; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_003219B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003219B8; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00321988; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003219F0; } }
    c.budget -= 1;
L_00321988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321990u);  if (depth < kMaxDepth) unit_0086(c, 83u, depth + 1u); else { c.pc = 0x003188D0u; return; } if (c.pc != 0x00321990u) [[unlikely]] return; }
L_00321990:
    set32(c.r[3], 0u + 23u);
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23020u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23036u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2535u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00321A70; } }
    c.budget -= 1;
L_003219B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003219C0u);  if (depth < kMaxDepth) unit_0086(c, 83u, depth + 1u); else { c.pc = 0x003188D0u; return; } if (c.pc != 0x003219C0u) [[unlikely]] return; }
L_003219C0:
    set32(c.r[2], 0u + 23u);
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23020u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23036u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 2535u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003219E8u); st8((c.r[28].w[0] - 23720u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0089(c, 236u, depth + 1u); else { c.pc = 0x003264F0u; return; } if (c.pc != 0x003219E8u) [[unlikely]] return; }
L_003219E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321A70; } }
L_003219F0:
    set32(c.r[3], 0u + 16u);
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23020u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23036u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23720u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00321A70; } }
L_00321A10:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 7u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2607u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00321A50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321A2Cu);  if (depth < kMaxDepth) unit_0086(c, 83u, depth + 1u); else { c.pc = 0x003188D0u; return; } if (c.pc != 0x00321A2Cu) [[unlikely]] return; }
L_00321A2C:
    set32(c.r[3], 0u + 23u);
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23020u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23036u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2535u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00321A70; } }
L_00321A50:
    set32(c.r[3], 0u + 16u);
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23020u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23036u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23720u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_00321A70:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00321A80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 7u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], 0u - 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[2].w[0] + 2589u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2593u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2607u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321AD8u); st16((c.r[2].w[0] + 10376u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_00A2(c, 336u, depth + 1u); else { c.pc = 0x0038AE10u; return; } if (c.pc != 0x00321AD8u) [[unlikely]] return; }
L_00321AD8:
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00321B00; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321AF4u); st8((c.r[1].w[0] + 4758u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0085(c, 104u, depth + 1u); else { c.pc = 0x00314F30u; return; } if (c.pc != 0x00321AF4u) [[unlikely]] return; }
L_00321AF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321B08; } }
    c.budget -= 1;
L_00321B00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321B08u);  if (depth < kMaxDepth) unit_0085(c, 102u, depth + 1u); else { c.pc = 0x00314EF0u; return; } if (c.pc != 0x00321B08u) [[unlikely]] return; }
L_00321B08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00321B20:
    c.r[3].d[0] = c.r[4].d[0] << 56;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00321B98; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 5312u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00320000u < 16384u) { entry = entries_0088[(t - 0x00320000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00321B58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321B60u); set32(c.r[4], 0u + 156u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x003788A0u; return; } if (c.pc != 0x00321B60u) [[unlikely]] return; }
L_00321B60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321B98; } }
L_00321B68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321B70u); set32(c.r[4], 0u + 42u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x003788A0u; return; } if (c.pc != 0x00321B70u) [[unlikely]] return; }
L_00321B70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321B98; } }
L_00321B78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321B80u); set32(c.r[4], 0u + 17u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x003788A0u; return; } if (c.pc != 0x00321B80u) [[unlikely]] return; }
L_00321B80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321B98; } }
L_00321B88:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321B98u); set32(c.r[5], c.r[2].w[0] + 8291u);  if (depth < kMaxDepth) unit_009E(c, 55u, depth + 1u); else { c.pc = 0x00378F60u; return; } if (c.pc != 0x00321B98u) [[unlikely]] return; }
L_00321B98:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00321BB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], c.r[4].w[0] + 2592u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2592u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00321C10; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00321BE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321C18; } }
L_00321BE0:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321BECu); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x00321BECu) [[unlikely]] return; }
L_00321BEC:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 26u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], c.r[4].w[0] + 7216u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321C04u); st8((c.r[2].w[0] + 2606u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0092(c, 143u, depth + 1u); else { c.pc = 0x00349120u; return; } if (c.pc != 0x00321C04u) [[unlikely]] return; }
L_00321C04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321C18; } }
    c.budget -= 1;
L_00321C10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321C18u);  if (depth < kMaxDepth) unit_0085(c, 285u, depth + 1u); else { c.pc = 0x00316770u; return; } if (c.pc != 0x00321C18u) [[unlikely]] return; }
L_00321C18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00321C30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    st64((c.r[29].w[0] + 24u), c.r[4].d[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2589u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00321CA8; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2606u));
    set32(c.r[3], 0u + 26u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 2606u);  if (t) { goto L_00321CA8; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00321CA0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 2589u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00321CA8; } }
L_00321CA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321CA8u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321A80u; return; } if (c.pc != 0x00321CA8u) [[unlikely]] return; }
L_00321CA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00321CC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321CD0u);  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00321CD0u) [[unlikely]] return; }
L_00321CD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321CD8u);  if (depth < kMaxDepth) unit_008B(c, 220u, depth + 1u); else { c.pc = 0x0032EEE0u; return; } if (c.pc != 0x00321CD8u) [[unlikely]] return; }
L_00321CD8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 13u);
    st8((c.r[3].w[0] + 2589u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2594u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00321D20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2620u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00321D40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321E48; } }
L_00321D40:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2528u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00321D58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321E48; } }
    c.budget -= 1;
L_00321D58:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2589u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00321D70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321E48; } }
    c.budget -= 1;
L_00321D70:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00321D88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321E48; } }
    c.budget -= 1;
L_00321D88:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00321DA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321E48; } }
    c.budget -= 1;
L_00321DA0:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00321DB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321E48; } }
    c.budget -= 1;
L_00321DB8:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00321DD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321E48; } }
    c.budget -= 1;
L_00321DD0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2532u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00321DE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321E48; } }
    c.budget -= 1;
L_00321DE8:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 9853u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00321E00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321E48; } }
    c.budget -= 1;
L_00321E00:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2578u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 2578u);  if (t) { goto L_00321E20; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st16((c.r[2].w[0] + 2580u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 9836u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_00321E20:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 1952u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 3406u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00321E44u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00321E44u) [[unlikely]] return; }
L_00321E44:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00321E48:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00321E54:
    c.budget -= 3;
L_00321E60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 3407u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[4].w[0] + 3407u);  if (t) { goto L_00321F28; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00321F08; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00321EE0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00321EA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321FD8; } }
    c.budget -= 1;
L_00321EA8:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 255u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 76u);
    st8((c.r[2].w[0] + 3418u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321ECCu); st8((c.r[2].w[0] + 3416u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x00321ECCu) [[unlikely]] return; }
L_00321ECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321ED4u);  if (depth < kMaxDepth) unit_008C(c, 209u, depth + 1u); else { c.pc = 0x003338E0u; return; } if (c.pc != 0x00321ED4u) [[unlikely]] return; }
L_00321ED4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321FD8; } }
    c.budget -= 1;
L_00321EE0:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2620u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321EFCu); set32(c.r[5], c.r[2].w[0] + 2638u);  if (depth < kMaxDepth) unit_009E(c, 55u, depth + 1u); else { c.pc = 0x00378F60u; return; } if (c.pc != 0x00321EFCu) [[unlikely]] return; }
L_00321EFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00321FD8; } }
    c.budget -= 1;
L_00321F08:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3415u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_00321FD8; } }
    set32(c.r[4], 0u + 600u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 3412u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_00321FD8; } }
L_00321F28:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 3412u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[4].w[0] + 3412u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 4;
L_00321F38:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 3412u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00321F60; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 3406u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 3406u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 3407u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st16((c.r[2].w[0] + 3412u), static_cast<std::uint16_t>(0u));
    c.budget -= 7;
L_00321F60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321F68u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00321F68u) [[unlikely]] return; }
L_00321F68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321F78u);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x00321F78u) [[unlikely]] return; }
L_00321F78:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x88880000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[2].d[0] = c.r[2].d[0] | 34953ull;
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] - 5280u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 3412u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    set32(c.r[3], c.r[6].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321FB4u); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x00321FB4u) [[unlikely]] return; }
L_00321FB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43F90000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42980000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00321FD4u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00321FD4u) [[unlikely]] return; }
L_00321FD4:
    c.budget -= 1;
L_00321FD8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00321FF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 3407u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_003220A8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00322020; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003220E8; } }
    c.budget -= 1;
L_00322020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322028u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x00322028u) [[unlikely]] return; }
L_00322028:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00322060; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[3].w[0] + 3407u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032204Cu); st8((c.r[3].w[0] + 3407u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0032204Cu) [[unlikely]] return; }
L_0032204C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 15u);
    set32(c.r[4], 0u + 76u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322060u); st16((c.r[2].w[0] + 3412u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x00322060u) [[unlikely]] return; }
L_00322060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322068u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00322068u) [[unlikely]] return; }
L_00322068:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322078u);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x00322078u) [[unlikely]] return; }
L_00322078:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43470000u);
    c.f[13] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.f[12] = c.r[3].w[0];
    set32(c.r[2], ld32((c.r[1].w[0] - 2844u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[3].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003220A0u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003220A0u) [[unlikely]] return; }
L_003220A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003220E8; } }
L_003220A8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 3412u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[5].w[0] + 3412u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 3412u)));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_003220E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003220CCu); st8((c.r[5].w[0] + 3414u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (depth < kMaxDepth) unit_0093(c, 567u, depth + 1u); else { c.pc = 0x0034FB40u; return; } if (c.pc != 0x003220CCu) [[unlikely]] return; }
L_003220CC:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3406u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 3406u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 3407u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
L_003220E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00322100:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2620u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 3406u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 3407u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 3414u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 3410u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00322130:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 1936u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2591u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00320000u < 16384u) { entry = entries_0088[(t - 0x00320000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00322160:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2592u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 2592u);  if (t) { goto L_003221B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00322190; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003221E8; } }
    c.budget -= 1;
L_00322190:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032219Cu); st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x0032219Cu) [[unlikely]] return; }
L_0032219C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003221B0u); set32(c.r[6], 0u + 56u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003221B0u) [[unlikely]] return; }
L_003221B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003221E8; } }
L_003221B8:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 2591u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[4].w[0] + 15536u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0] + 2591u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2597u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003221E8u); st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A7(c, 159u, depth + 1u); else { c.pc = 0x0039E200u; return; } if (c.pc != 0x003221E8u) [[unlikely]] return; }
L_003221E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00322200:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322214u); set32(c.r[4], c.r[4].w[0] + 15536u);  if (depth < kMaxDepth) unit_00A7(c, 159u, depth + 1u); else { c.pc = 0x0039E200u; return; } if (c.pc != 0x00322214u) [[unlikely]] return; }
L_00322214:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 2u);  if (t) { goto L_00322258; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00322230; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00322258; } }
L_00322230:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 2528u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
L_00322258:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00322270:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00316770u | kUnwind; return; } [[clang::musttail]] return unit_0085(c, 285u, depth); }
L_00322280:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 1920u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2591u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00320000u < 16384u) { entry = entries_0088[(t - 0x00320000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003222B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2592u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 2592u);  if (t) { goto L_00322308; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003222E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00322338; } }
    c.budget -= 1;
L_003222E0:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003222ECu); st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x003222ECu) [[unlikely]] return; }
L_003222EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322300u); set32(c.r[6], 0u + 56u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00322300u) [[unlikely]] return; }
L_00322300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00322338; } }
L_00322308:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 2591u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[4].w[0] + 15536u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0] + 2591u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2597u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322338u); st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A7(c, 81u, depth + 1u); else { c.pc = 0x0039D6C0u; return; } if (c.pc != 0x00322338u) [[unlikely]] return; }
L_00322338:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00322350:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322364u); set32(c.r[4], c.r[4].w[0] + 15536u);  if (depth < kMaxDepth) unit_00A7(c, 81u, depth + 1u); else { c.pc = 0x0039D6C0u; return; } if (c.pc != 0x00322364u) [[unlikely]] return; }
L_00322364:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 2u);  if (t) { goto L_003223A8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00322380; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003223A8; } }
L_00322380:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 2528u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
L_003223A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003223C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003223ECu); st8((c.r[2].w[0] + 5275u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x003223ECu) [[unlikely]] return; }
L_003223EC:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 27u);
    set32(c.r[2], 0u + 154u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00320000u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] + 9264u);
    st8((c.r[3].w[0] + 2606u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 5276u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[3].w[0] + 4839u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322424u); set32(c.r[4], c.r[2].w[0] + 4814u);  if (depth < kMaxDepth) unit_0093(c, 506u, depth + 1u); else { c.pc = 0x0034F520u; return; } if (c.pc != 0x00322424u) [[unlikely]] return; }
L_00322424:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00322430:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    st64((c.r[29].w[0] + 24u), c.r[4].d[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2589u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003224B0; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2606u));
    set32(c.r[3], 0u + 27u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 2606u);  if (t) { goto L_003224B0; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 24u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00322498; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5275u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003224B0; } }
    c.budget -= 1;
L_00322498:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 5275u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003224ACu); set32(c.r[4], c.r[2].w[0] + 8291u);  if (depth < kMaxDepth) unit_0091(c, 142u, depth + 1u); else { c.pc = 0x00345780u; return; } if (c.pc != 0x003224ACu) [[unlikely]] return; }
L_003224AC:
    c.budget -= 1;
L_003224B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003224C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003224ECu); st8((c.r[2].w[0] + 5275u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x003224ECu) [[unlikely]] return; }
L_003224EC:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], 0u + 154u);
    set32(c.r[6], 0u + 28u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + 9520u);
    st8((c.r[4].w[0] + 2606u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 5276u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322520u); set32(c.r[4], c.r[2].w[0] + 4814u);  if (depth < kMaxDepth) unit_0093(c, 525u, depth + 1u); else { c.pc = 0x0034F710u; return; } if (c.pc != 0x00322520u) [[unlikely]] return; }
L_00322520:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00322530:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    st64((c.r[29].w[0] + 40u), c.r[4].d[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2589u));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003225F8; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2606u));
    set32(c.r[3], 0u + 28u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 2606u);  if (t) { goto L_003225F8; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 40u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003225E0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = ld8((c.r[3].w[0] + 5276u));
    st8((c.r[3].w[0] + 5275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[4].w[0] << 6);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[2].w[0] + 5278u);
    set32(c.r[5], c.r[2].w[0] + 5280u);
    set32(c.r[6], c.r[2].w[0] + 5282u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003225C8u); set32(c.r[7], c.r[2].w[0] + 5285u);  if (depth < kMaxDepth) unit_0093(c, 528u, depth + 1u); else { c.pc = 0x0034F790u; return; } if (c.pc != 0x003225C8u) [[unlikely]] return; }
L_003225C8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003225D8u); set32(c.r[4], c.r[2].w[0] + 5286u);  if (depth < kMaxDepth) unit_0093(c, 529u, depth + 1u); else { c.pc = 0x0034F7D0u; return; } if (c.pc != 0x003225D8u) [[unlikely]] return; }
L_003225D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003225F8; } }
L_003225E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 5275u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003225F4u); set32(c.r[4], c.r[2].w[0] + 8291u);  if (depth < kMaxDepth) unit_0091(c, 142u, depth + 1u); else { c.pc = 0x00345780u; return; } if (c.pc != 0x003225F4u) [[unlikely]] return; }
L_003225F4:
    c.budget -= 1;
L_003225F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00322610:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322638u); st8((c.r[2].w[0] + 5275u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x00322638u) [[unlikely]] return; }
L_00322638:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 30u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], c.r[4].w[0] + 9824u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322650u); st8((c.r[2].w[0] + 2606u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0093(c, 98u, depth + 1u); else { c.pc = 0x0034C940u; return; } if (c.pc != 0x00322650u) [[unlikely]] return; }
L_00322650:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00322660:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    st64((c.r[29].w[0] + 24u), c.r[4].d[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2589u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003226D8; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2606u));
    set32(c.r[3], 0u + 30u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 2606u);  if (t) { goto L_003226D8; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003226B8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 5275u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2576u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003226D8; } }
L_003226B8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], c.r[5].w[0] - 5264u);
    st8((c.r[2].w[0] + 5275u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003226D8u); set32(c.r[4], c.r[2].w[0] + 8291u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x003226D8u) [[unlikely]] return; }
L_003226D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003226F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032271Cu); st8((c.r[2].w[0] + 5275u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x0032271Cu) [[unlikely]] return; }
L_0032271C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[6].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[4], 0u + 29u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[2].w[0] << 1);
    st8((c.r[3].w[0] + 2606u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 5276u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 5278u));
    c.r[5].d[0] = ld16((c.r[2].w[0] + 5280u));
    c.r[6].d[0] = ld16((c.r[2].w[0] + 5282u));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322764u); set32(c.r[7], c.r[7].w[0] + 10096u);  if (depth < kMaxDepth) unit_0092(c, 124u, depth + 1u); else { c.pc = 0x00348F70u; return; } if (c.pc != 0x00322764u) [[unlikely]] return; }
L_00322764:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00322770:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    st64((c.r[29].w[0] + 24u), c.r[4].d[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2589u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00322840; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2606u));
    set32(c.r[3], 0u + 29u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 2606u);  if (t) { goto L_00322840; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 24u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00322828; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5276u));
    st8((c.r[4].w[0] + 5275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 5278u));
    st8((c.r[1].w[0] + 16008u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 5280u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    st8((c.r[1].w[0] + 16012u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 5282u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    st8((c.r[1].w[0] + 16016u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032281Cu); c.r[4].d[0] = ld16((c.r[3].w[0] + 5280u));  if (depth < kMaxDepth) unit_0097(c, 58u, depth + 1u); else { c.pc = 0x0035CD40u; return; } if (c.pc != 0x0032281Cu) [[unlikely]] return; }
L_0032281C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00322840; } }
    c.budget -= 1;
L_00322828:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 5275u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032283Cu); set32(c.r[4], c.r[2].w[0] + 8291u);  if (depth < kMaxDepth) unit_0091(c, 142u, depth + 1u); else { c.pc = 0x00345780u; return; } if (c.pc != 0x0032283Cu) [[unlikely]] return; }
L_0032283C:
    c.budget -= 1;
L_00322840:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00322850:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], c.r[4].w[0] << 6);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[16], c.r[2].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 16u);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 5278u));
    st8((c.r[1].w[0] + 16008u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 5280u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    st8((c.r[1].w[0] + 16012u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 5282u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003228A8u); st8((c.r[1].w[0] + 16016u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 59u, depth + 1u); else { c.pc = 0x00334D80u; return; } if (c.pc != 0x003228A8u) [[unlikely]] return; }
L_003228A8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], c.r[16].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[5].w[0] + 5278u));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003228F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003228D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003228F8; } }
L_003228D0:
    c.r[2].d[0] = ld16((c.r[5].w[0] + 5282u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003228F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003228E4u);  if (depth < kMaxDepth) unit_0086(c, 462u, depth + 1u); else { c.pc = 0x0031BA70u; return; } if (c.pc != 0x003228E4u) [[unlikely]] return; }
L_003228E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003228F8; } }
    c.budget -= 1;
L_003228F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003228F8u);  if (depth < kMaxDepth) unit_0088(c, 17u, depth + 1u); else { c.pc = 0x00320080u; return; } if (c.pc != 0x003228F8u) [[unlikely]] return; }
L_003228F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00322910:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322928u); st8((c.r[2].w[0] + 5275u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x00322928u) [[unlikely]] return; }
L_00322928:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], 0u + 31u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[5], c.r[5].w[0] + 10576u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322944u); st8((c.r[2].w[0] + 2606u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0093(c, 546u, depth + 1u); else { c.pc = 0x0034F920u; return; } if (c.pc != 0x00322944u) [[unlikely]] return; }
L_00322944:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00322950:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    st64((c.r[29].w[0] + 16u), c.r[4].d[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2589u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003229E0; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2606u));
    set32(c.r[3], 0u + 31u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 2606u);  if (t) { goto L_003229E0; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 28u);  if (t) { goto L_003229D0; } }
    set32(c.r[5], c.r[29].w[0] + 26u);
    set32(c.r[6], c.r[29].w[0] + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003229A0u); set32(c.r[7], c.r[29].w[0] + 31u);  if (depth < kMaxDepth) unit_0093(c, 549u, depth + 1u); else { c.pc = 0x0034F9A0u; return; } if (c.pc != 0x003229A0u) [[unlikely]] return; }
L_003229A0:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 31u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003229C0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5275u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003229E0; } }
    c.budget -= 1;
L_003229C0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5275u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003229E0; } }
L_003229D0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 5275u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_003229E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003229F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 1904u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2591u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00320000u < 16384u) { entry = entries_0088[(t - 0x00320000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00322A20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322A48u); st8((c.r[2].w[0] + 2593u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00322A48u) [[unlikely]] return; }
L_00322A48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322A5Cu); set32(c.r[6], 0u + 56u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00322A5Cu) [[unlikely]] return; }
L_00322A5C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00322A70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322A84u); set32(c.r[4], c.r[4].w[0] + 15536u);  if (depth < kMaxDepth) unit_0095(c, 59u, depth + 1u); else { c.pc = 0x00354AD0u; return; } if (c.pc != 0x00322A84u) [[unlikely]] return; }
L_00322A84:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00322AC8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00322AA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00322AC8; } }
L_00322AA0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 2528u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
L_00322AC8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00322AE0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 1896u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2591u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00320000u < 16384u) { entry = entries_0088[(t - 0x00320000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00322B10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2591u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2597u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322B3Cu); st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00322B3Cu) [[unlikely]] return; }
L_00322B3C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322B50u); set32(c.r[6], 0u + 56u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00322B50u) [[unlikely]] return; }
L_00322B50:
    set32(c.r[3], 0u + 5u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st8((c.r[1].w[0] + 15543u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322B74u); st8((c.r[1].w[0] + 15544u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0095(c, 57u, depth + 1u); else { c.pc = 0x00354A90u; return; } if (c.pc != 0x00322B74u) [[unlikely]] return; }
L_00322B74:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00322B80:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 1888u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2591u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00320000u < 16384u) { entry = entries_0088[(t - 0x00320000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00322BB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2591u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2597u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322BDCu); st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00322BDCu) [[unlikely]] return; }
L_00322BDC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322BF0u); set32(c.r[6], 0u + 56u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00322BF0u) [[unlikely]] return; }
L_00322BF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], 0u + 5u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322C08u); st8((c.r[1].w[0] + 15543u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0095(c, 57u, depth + 1u); else { c.pc = 0x00354A90u; return; } if (c.pc != 0x00322C08u) [[unlikely]] return; }
L_00322C08:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00322C20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322C34u); set32(c.r[4], c.r[4].w[0] + 15536u);  if (depth < kMaxDepth) unit_0095(c, 57u, depth + 1u); else { c.pc = 0x00354A90u; return; } if (c.pc != 0x00322C34u) [[unlikely]] return; }
L_00322C34:
    set32(c.r[3], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00322C58; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_00322C58:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00322C70:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 1880u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2591u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00320000u < 16384u) { entry = entries_0088[(t - 0x00320000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00322CA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322CC8u); st8((c.r[2].w[0] + 2593u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00322CC8u) [[unlikely]] return; }
L_00322CC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322CDCu); set32(c.r[6], 0u + 56u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00322CDCu) [[unlikely]] return; }
L_00322CDC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322CE8u); set32(c.r[4], c.r[4].w[0] + 15536u);  if (depth < kMaxDepth) unit_00A7(c, 346u, depth + 1u); else { c.pc = 0x0039FD30u; return; } if (c.pc != 0x00322CE8u) [[unlikely]] return; }
L_00322CE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00322D00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322D14u); set32(c.r[4], c.r[4].w[0] + 15536u);  if (depth < kMaxDepth) unit_00A7(c, 346u, depth + 1u); else { c.pc = 0x0039FD30u; return; } if (c.pc != 0x00322D14u) [[unlikely]] return; }
L_00322D14:
    set32(c.r[3], c.r[2].w[0] + 2u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00322D68; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 5232u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00320000u < 16384u) { entry = entries_0088[(t - 0x00320000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00322D40:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 2528u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
L_00322D68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00322D80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00322D90:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 1864u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2591u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00320000u < 16384u) { entry = entries_0088[(t - 0x00320000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00322DC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322DE8u); st8((c.r[2].w[0] + 2593u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00322DE8u) [[unlikely]] return; }
L_00322DE8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322DFCu); set32(c.r[6], 0u + 56u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00322DFCu) [[unlikely]] return; }
L_00322DFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322E08u); set32(c.r[4], c.r[4].w[0] + 15536u);  if (depth < kMaxDepth) unit_00A8(c, 219u, depth + 1u); else { c.pc = 0x003A1BE0u; return; } if (c.pc != 0x00322E08u) [[unlikely]] return; }
L_00322E08:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00322E20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322E34u); set32(c.r[4], c.r[4].w[0] + 15536u);  if (depth < kMaxDepth) unit_00A8(c, 219u, depth + 1u); else { c.pc = 0x003A1BE0u; return; } if (c.pc != 0x00322E34u) [[unlikely]] return; }
L_00322E34:
    set32(c.r[3], c.r[2].w[0] + 2u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00322E88; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 5200u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00320000u < 16384u) { entry = entries_0088[(t - 0x00320000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00322E60:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 2528u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
L_00322E88:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00322EA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u + 3u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322EBCu); set32(c.r[4], c.r[2].w[0] + 2529u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00322EBCu) [[unlikely]] return; }
L_00322EBC:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2532u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2533u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322ED8u); st8((c.r[2].w[0] + 2606u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0091(c, 94u, depth + 1u); else { c.pc = 0x00344F50u; return; } if (c.pc != 0x00322ED8u) [[unlikely]] return; }
L_00322ED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322EE0u);  if (depth < kMaxDepth) unit_0091(c, 95u, depth + 1u); else { c.pc = 0x00344F70u; return; } if (c.pc != 0x00322EE0u) [[unlikely]] return; }
L_00322EE0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00322EF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2528u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00323000; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2532u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00322F28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322F1Cu);  if (depth < kMaxDepth) unit_0088(c, 109u, depth + 1u); else { c.pc = 0x00321050u; return; } if (c.pc != 0x00322F1Cu) [[unlikely]] return; }
L_00322F1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00323008; } }
    c.budget -= 1;
L_00322F28:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2533u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_00322F48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322F40u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 141u, depth + 1u); else { c.pc = 0x00321380u; return; } if (c.pc != 0x00322F40u) [[unlikely]] return; }
L_00322F40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00323008; } }
L_00322F48:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_00322F68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322F5Cu);  if (depth < kMaxDepth) unit_0088(c, 141u, depth + 1u); else { c.pc = 0x00321380u; return; } if (c.pc != 0x00322F5Cu) [[unlikely]] return; }
L_00322F5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00323008; } }
    c.budget -= 1;
L_00322F68:
    c.r[3].d[0] = ld8((c.r[6].w[0] + 2589u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00322F90; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2529u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_00323000; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322F88u);  if (depth < kMaxDepth) unit_0086(c, 379u, depth + 1u); else { c.pc = 0x0031AE50u; return; } if (c.pc != 0x00322F88u) [[unlikely]] return; }
L_00322F88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00323008; } }
L_00322F90:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00322FD8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2530u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_00322FB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322FB0u);  if (depth < kMaxDepth) unit_0087(c, 233u, depth + 1u); else { c.pc = 0x0031E5C0u; return; } if (c.pc != 0x00322FB0u) [[unlikely]] return; }
L_00322FB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00323008; } }
L_00322FB8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2531u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_00323000; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322FCCu); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 233u, depth + 1u); else { c.pc = 0x0031E5C0u; return; } if (c.pc != 0x00322FCCu) [[unlikely]] return; }
L_00322FCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00323008; } }
    c.budget -= 1;
L_00322FD8:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00323000; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2531u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_00323000; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00322FF8u);  if (depth < kMaxDepth) unit_0088(c, 23u, depth + 1u); else { c.pc = 0x00320130u; return; } if (c.pc != 0x00322FF8u) [[unlikely]] return; }
L_00322FF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00323008; } }
L_00323000:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00323008:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00323020:
    st8((c.r[28].w[0] - 23048u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[28].w[0] - 23052u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00323030:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_003230E0; } }
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_00323088; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00323070; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00323070; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00323098; } }
    c.budget -= 1;
L_00323070:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x438D0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[20] = c.r[2].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003230A0; } }
    c.budget -= 1;
L_00323088:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B00000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003230A0; } }
L_00323098:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00323178; } }
L_003230A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003230A8u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x003230A8u) [[unlikely]] return; }
L_003230A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003230B8u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_008D(c, 98u, depth + 1u); else { c.pc = 0x003351D0u; return; } if (c.pc != 0x003230B8u) [[unlikely]] return; }
L_003230B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43260000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[4].w[0] - 5168u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003230D8u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003230D8u) [[unlikely]] return; }
L_003230D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00323178; } }
L_003230E0:
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_00323128; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00323110; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00323110; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00323138; } }
    c.budget -= 1;
L_00323110:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x438D0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[20] = c.r[2].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00323140; } }
    c.budget -= 1;
L_00323128:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B00000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00323140; } }
L_00323138:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00323178; } }
L_00323140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323148u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00323148u) [[unlikely]] return; }
L_00323148:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323158u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_008D(c, 98u, depth + 1u); else { c.pc = 0x003351D0u; return; } if (c.pc != 0x00323158u) [[unlikely]] return; }
L_00323158:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43470000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[4].w[0] - 8352u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323178u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00323178u) [[unlikely]] return; }
L_00323178:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00323190:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[28].w[0] - 23048u));
    c.r[16].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[28].w[0] - 23064u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_003233D8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 5072u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00320000u < 16384u) { entry = entries_0088[(t - 0x00320000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003231D8:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003231E4u); st8((c.r[28].w[0] - 23048u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 57u, depth + 1u); else { c.pc = 0x00334D60u; return; } if (c.pc != 0x003231E4u) [[unlikely]] return; }
L_003231E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003233D8; } }
    c.budget -= 1;
L_003231F0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1800u);
    set32(c.r[4], 0u + 3u);
    st32((c.r[2].w[0] + 2612u), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[28].w[0] - 23020u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; c.r[2].d[0] = c.r[17].d[0] & 255ull;  if (t) { goto L_00323298; } }
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_003233D8; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 5104u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00320000u < 16384u) { entry = entries_0088[(t - 0x00320000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00323230:
    c.r[5].d[0] = ld8((c.r[28].w[0] - 23048u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 32u);
    set32(c.r[4], c.r[4].w[0] + 13872u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[28].w[0] - 23048u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323254u); st8((c.r[2].w[0] + 2606u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0091(c, 122u, depth + 1u); else { c.pc = 0x00345540u; return; } if (c.pc != 0x00323254u) [[unlikely]] return; }
L_00323254:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003233D8; } }
    c.budget -= 1;
L_00323260:
    c.r[5].d[0] = ld8((c.r[28].w[0] - 23048u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 32u);
    set32(c.r[4], c.r[4].w[0] + 13872u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[28].w[0] - 23048u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323284u); st8((c.r[2].w[0] + 2606u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0091(c, 132u, depth + 1u); else { c.pc = 0x00345660u; return; } if (c.pc != 0x00323284u) [[unlikely]] return; }
L_00323284:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003233D8; } }
    c.budget -= 1;
L_00323290:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23048u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003233D8; } }
L_00323298:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23048u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003233D8; } }
L_003232A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 2612u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003232B4u); st32((c.r[3].w[0] + 2612u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0083(c, 414u, depth + 1u); else { c.pc = 0x0030FD80u; return; } if (c.pc != 0x003232B4u) [[unlikely]] return; }
L_003232B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003232D0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 2612u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003232E0; } }
    c.budget -= 1;
L_003232D0:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 23048u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[28].w[0] - 23048u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_003232E0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003232ECu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 355u, depth + 1u); else { c.pc = 0x00323030u; return; } if (c.pc != 0x003232ECu) [[unlikely]] return; }
L_003232EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003233D8; } }
    c.budget -= 1;
L_003232F8:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23020u));
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[28].w[0] - 23048u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 3u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00323320; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 60u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_00323328; } }
L_00323320:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st32((c.r[2].w[0] + 2612u), c.r[5].w[0]);
    c.budget -= 2;
L_00323328:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323334u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 355u, depth + 1u); else { c.pc = 0x00323030u; return; } if (c.pc != 0x00323334u) [[unlikely]] return; }
L_00323334:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003233D8; } }
    c.budget -= 1;
L_00323340:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 2612u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[3].w[0] + 2612u), c.r[2].w[0]);  if (t) { goto L_00323368; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 23048u));
    st8((c.r[28].w[0] - 23052u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[28].w[0] - 23048u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_00323368:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323374u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 355u, depth + 1u); else { c.pc = 0x00323030u; return; } if (c.pc != 0x00323374u) [[unlikely]] return; }
L_00323374:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003233D8; } }
    c.budget -= 1;
L_00323380:
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_003233D8; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 5136u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00320000u < 16384u) { entry = entries_0088[(t - 0x00320000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003233A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003233D8; } }
L_003233B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003233B8u);  if (depth < kMaxDepth) unit_0085(c, 36u, depth + 1u); else { c.pc = 0x00314440u; return; } if (c.pc != 0x003233B8u) [[unlikely]] return; }
L_003233B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003233C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_003233D8; } }
L_003233C8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003233D4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0088(c, 355u, depth + 1u); else { c.pc = 0x00323030u; return; } if (c.pc != 0x003233D4u) [[unlikely]] return; }
L_003233D4:
    c.budget -= 1;
L_003233D8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003233F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[28].w[0] - 23048u));
    c.r[16].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[28].w[0] - 23064u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_003235A0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 5008u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00320000u < 16384u) { entry = entries_0088[(t - 0x00320000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00323430:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032343Cu); st8((c.r[28].w[0] - 23048u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 57u, depth + 1u); else { c.pc = 0x00334D60u; return; } if (c.pc != 0x0032343Cu) [[unlikely]] return; }
L_0032343C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003235A0; } }
    c.budget -= 1;
L_00323448:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1800u);
    set32(c.r[5], 0u + 3u);
    st32((c.r[2].w[0] + 2612u), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[28].w[0] - 23020u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.r[2].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_003234F0; } }
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_003235A0; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 5040u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00320000u < 16384u) { entry = entries_0088[(t - 0x00320000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00323488:
    c.r[5].d[0] = ld8((c.r[28].w[0] - 23048u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 32u);
    set32(c.r[4], c.r[4].w[0] + 13872u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[28].w[0] - 23048u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003234ACu); st8((c.r[2].w[0] + 2606u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0091(c, 122u, depth + 1u); else { c.pc = 0x00345540u; return; } if (c.pc != 0x003234ACu) [[unlikely]] return; }
L_003234AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003235A0; } }
    c.budget -= 1;
L_003234B8:
    c.r[5].d[0] = ld8((c.r[28].w[0] - 23048u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 32u);
    set32(c.r[4], c.r[4].w[0] + 13872u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[28].w[0] - 23048u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003234DCu); st8((c.r[2].w[0] + 2606u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0091(c, 132u, depth + 1u); else { c.pc = 0x00345660u; return; } if (c.pc != 0x003234DCu) [[unlikely]] return; }
L_003234DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003235A0; } }
    c.budget -= 1;
L_003234E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23048u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_003235A0; } }
L_003234F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23048u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_003235A0; } }
L_003234F8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 2612u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032350Cu); st32((c.r[3].w[0] + 2612u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0083(c, 414u, depth + 1u); else { c.pc = 0x0030FD80u; return; } if (c.pc != 0x0032350Cu) [[unlikely]] return; }
L_0032350C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00323528; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 2612u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003235A0; } }
    c.budget -= 1;
L_00323528:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 23048u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23048u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003235A0; } }
L_00323538:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23020u));
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[28].w[0] - 23048u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 3u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00323560; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 60u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_003235A0; } }
L_00323560:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 2612u), c.r[6].w[0]);  if (t) { goto L_003235A0; } }
    c.budget -= 1;
L_00323570:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 2612u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[3].w[0] + 2612u), c.r[2].w[0]);  if (t) { goto L_003235A0; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 23048u));
    st8((c.r[28].w[0] - 23052u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23048u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003235A0; } }
L_00323598:
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 2;
L_003235A0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003235C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003235D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 148u, depth + 1u); else { c.pc = 0x00335710u; return; } if (c.pc != 0x003235D4u) [[unlikely]] return; }
L_003235D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[16].d[0] & 255ull;  if (t) { goto L_00323608; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 7u);  if (t) { goto L_00323608; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00323608; } }
    set32(c.r[2], c.r[3].w[0] - 2u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00323608; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00323618; } }
    c.budget -= 1;
L_00323608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323610u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0088(c, 362u, depth + 1u); else { c.pc = 0x00323190u; return; } if (c.pc != 0x00323610u) [[unlikely]] return; }
L_00323610:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00323620; } }
L_00323618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323620u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0088(c, 383u, depth + 1u); else { c.pc = 0x003233F0u; return; } if (c.pc != 0x00323620u) [[unlikely]] return; }
L_00323620:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00323630:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 32u);
    set32(c.r[5], c.r[4].w[0] + 2606u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2606u));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00323660; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = ld8((c.r[28].w[0] - 23048u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_00323660; } }
    st8((c.r[28].w[0] - 23048u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00323660:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00323670:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323680u);  if (depth < kMaxDepth) unit_008B(c, 221u, depth + 1u); else { c.pc = 0x0032EF00u; return; } if (c.pc != 0x00323680u) [[unlikely]] return; }
L_00323680:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003236A8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2594u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2594u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2595u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003236B0; } }
L_003236A8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003236B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003236C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2578u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003236E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00323860; } }
    c.budget -= 1;
L_003236E8:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2594u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003237C0; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2595u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[3].w[0] + 2595u);  if (t) { goto L_00323738; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], 0u + 128u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032371Cu); set32(c.r[4], c.r[2].w[0] + 8145u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0032371Cu) [[unlikely]] return; }
L_0032371C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323724u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_008D(c, 178u, depth + 1u); else { c.pc = 0x003360D0u; return; } if (c.pc != 0x00323724u) [[unlikely]] return; }
L_00323724:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032372Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00A2(c, 336u, depth + 1u); else { c.pc = 0x0038AE10u; return; } if (c.pc != 0x0032372Cu) [[unlikely]] return; }
L_0032372C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003237B8; } }
    c.budget -= 1;
L_00323738:
    set32(c.r[4], c.r[3].w[0] + 8145u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323744u); set32(c.r[5], 0u + 38u);  if (depth < kMaxDepth) unit_008D(c, 191u, depth + 1u); else { c.pc = 0x003361D0u; return; } if (c.pc != 0x00323744u) [[unlikely]] return; }
L_00323744:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003237B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323758u);  if (depth < kMaxDepth) unit_00A2(c, 336u, depth + 1u); else { c.pc = 0x0038AE10u; return; } if (c.pc != 0x00323758u) [[unlikely]] return; }
L_00323758:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323764u); set32(c.r[4], c.r[2].w[0] + 8145u);  if (depth < kMaxDepth) unit_008B(c, 238u, depth + 1u); else { c.pc = 0x0032F370u; return; } if (c.pc != 0x00323764u) [[unlikely]] return; }
L_00323764:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003237A8; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_003237A8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323780u); set32(c.r[4], c.r[2].w[0] + 8145u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00323780u) [[unlikely]] return; }
L_00323780:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003237A8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323794u); set32(c.r[4], c.r[2].w[0] + 8145u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00323794u) [[unlikely]] return; }
L_00323794:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003237A4u); set32(c.r[4], c.r[2].w[0] + 8145u);  if (depth < kMaxDepth) unit_0094(c, 177u, depth + 1u); else { c.pc = 0x003512A0u; return; } if (c.pc != 0x003237A4u) [[unlikely]] return; }
L_003237A4:
    c.budget -= 1;
L_003237A8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2594u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2595u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_003237B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00323860; } }
L_003237C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003237C8u); set32(c.r[4], 0u + 512u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x003237C8u) [[unlikely]] return; }
L_003237C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00323818; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8144u));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[3].w[0] + 8144u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 8144u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00323800; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003237F8u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003237F8u) [[unlikely]] return; }
L_003237F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00323858; } }
L_00323800:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032380Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0032380Cu) [[unlikely]] return; }
L_0032380C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00323858; } }
    c.budget -= 1;
L_00323818:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 8144u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_00323858; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323830u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x00323830u) [[unlikely]] return; }
L_00323830:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00323858; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032384Cu); st8((c.r[2].w[0] + 8144u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0032384Cu) [[unlikely]] return; }
L_0032384C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00323860; } }
    c.budget -= 1;
L_00323858:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 8144u));
    c.budget -= 2;
L_00323860:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00323870:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 3;
    { st8((c.r[2].w[0] + 8144u), static_cast<std::uint8_t>(0u));  [[clang::musttail]] return unit_00A2(c, 372u, depth); }
L_00323880:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 5u);
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 10;
    { st8((c.r[2].w[0] + 2593u), static_cast<std::uint8_t>(0u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003229F0u | kUnwind; return; } goto L_003229F0; }
L_003238B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 8;
    { st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00322130u | kUnwind; return; } goto L_00322130; }
L_003238D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003238E0u);  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x003238E0u) [[unlikely]] return; }
L_003238E0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 9u);
    st8((c.r[4].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[4].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[4].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[4].w[0] + 2593u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2589u));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_00323968; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00323958; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00323948; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00323938; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00323970; } }
L_00323938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323940u);  if (depth < kMaxDepth) unit_0086(c, 314u, depth + 1u); else { c.pc = 0x0031A450u; return; } if (c.pc != 0x00323940u) [[unlikely]] return; }
L_00323940:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00323970; } }
L_00323948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323950u);  if (depth < kMaxDepth) unit_0086(c, 387u, depth + 1u); else { c.pc = 0x0031AF80u; return; } if (c.pc != 0x00323950u) [[unlikely]] return; }
L_00323950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00323970; } }
L_00323958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323960u);  if (depth < kMaxDepth) unit_0087(c, 242u, depth + 1u); else { c.pc = 0x0031E790u; return; } if (c.pc != 0x00323960u) [[unlikely]] return; }
L_00323960:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00323970; } }
L_00323968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323970u);  if (depth < kMaxDepth) unit_0086(c, 170u, depth + 1u); else { c.pc = 0x00319330u; return; } if (c.pc != 0x00323970u) [[unlikely]] return; }
L_00323970:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00323980:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 2u);
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 10;
    { st8((c.r[2].w[0] + 2593u), static_cast<std::uint8_t>(0u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00322C70u | kUnwind; return; } goto L_00322C70; }
L_003239B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 6u);
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 10;
    { st8((c.r[2].w[0] + 2593u), static_cast<std::uint8_t>(0u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00322AE0u | kUnwind; return; } goto L_00322AE0; }
L_003239E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 7u);
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 10;
    { st8((c.r[2].w[0] + 2593u), static_cast<std::uint8_t>(0u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00322B80u | kUnwind; return; } goto L_00322B80; }
L_00323A10:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 3u);
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 10;
    { st8((c.r[2].w[0] + 2593u), static_cast<std::uint8_t>(0u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00322B80u | kUnwind; return; } goto L_00322B80; }
L_00323A40:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 4u);
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 10;
    { st8((c.r[2].w[0] + 2593u), static_cast<std::uint8_t>(0u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00322D90u | kUnwind; return; } goto L_00322D90; }
L_00323A70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323A8Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x00323A8Cu) [[unlikely]] return; }
L_00323A8C:
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00323B30; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 4976u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00320000u < 16384u) { entry = entries_0088[(t - 0x00320000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00323AB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323AC0u);  if (depth < kMaxDepth) unit_0088(c, 422u, depth + 1u); else { c.pc = 0x003238D0u; return; } if (c.pc != 0x00323AC0u) [[unlikely]] return; }
L_00323AC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00323B30; } }
L_00323AC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323AD0u);  if (depth < kMaxDepth) unit_0088(c, 421u, depth + 1u); else { c.pc = 0x003238B0u; return; } if (c.pc != 0x00323AD0u) [[unlikely]] return; }
L_00323AD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00323B30; } }
L_00323AD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323AE0u);  if (depth < kMaxDepth) unit_0088(c, 428u, depth + 1u); else { c.pc = 0x00323980u; return; } if (c.pc != 0x00323AE0u) [[unlikely]] return; }
L_00323AE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00323B30; } }
L_00323AE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323AF0u);  if (depth < kMaxDepth) unit_0088(c, 431u, depth + 1u); else { c.pc = 0x00323A10u; return; } if (c.pc != 0x00323AF0u) [[unlikely]] return; }
L_00323AF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00323B30; } }
L_00323AF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323B00u);  if (depth < kMaxDepth) unit_0088(c, 432u, depth + 1u); else { c.pc = 0x00323A40u; return; } if (c.pc != 0x00323B00u) [[unlikely]] return; }
L_00323B00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00323B30; } }
L_00323B08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323B10u);  if (depth < kMaxDepth) unit_0088(c, 420u, depth + 1u); else { c.pc = 0x00323880u; return; } if (c.pc != 0x00323B10u) [[unlikely]] return; }
L_00323B10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00323B30; } }
L_00323B18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323B20u);  if (depth < kMaxDepth) unit_0088(c, 429u, depth + 1u); else { c.pc = 0x003239B0u; return; } if (c.pc != 0x00323B20u) [[unlikely]] return; }
L_00323B20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00323B30; } }
L_00323B28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323B30u);  if (depth < kMaxDepth) unit_0088(c, 430u, depth + 1u); else { c.pc = 0x003239E0u; return; } if (c.pc != 0x00323B30u) [[unlikely]] return; }
L_00323B30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00323B40:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2582u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2582u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2588u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2578u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st16((c.r[2].w[0] + 2580u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 13;
    { st8((c.r[2].w[0] + 9836u), static_cast<std::uint8_t>(0u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00321CC0u | kUnwind; return; } goto L_00321CC0; }
L_00323B80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2582u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 2582u);  if (t) { goto L_00323C90; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00323C38; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00323C08; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00323BC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00323CC0; } }
L_00323BC0:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 15u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], 0u + 6u);
    st16((c.r[3].w[0] + 2586u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2580u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00323BF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323BF0u); set32(c.r[4], 0u + 31u);  if (depth < kMaxDepth) unit_009E(c, 34u, depth + 1u); else { c.pc = 0x00378980u; return; } if (c.pc != 0x00323BF0u) [[unlikely]] return; }
L_00323BF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00323CC0; } }
L_00323BF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323C00u); set32(c.r[4], 0u + 138u);  if (depth < kMaxDepth) unit_009E(c, 34u, depth + 1u); else { c.pc = 0x00378980u; return; } if (c.pc != 0x00323C00u) [[unlikely]] return; }
L_00323C00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00323CC0; } }
L_00323C08:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2586u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[5].w[0] + 2586u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2586u)));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00323CC0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2582u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2582u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00323CC0; } }
    c.budget -= 1;
L_00323C38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323C40u); c.r[4].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x00323C40u) [[unlikely]] return; }
L_00323C40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_00323C58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323C50u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x00323C50u) [[unlikely]] return; }
L_00323C50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00323CC0; } }
L_00323C58:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323C64u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x00323C64u) [[unlikely]] return; }
L_00323C64:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 15u);
    set32(c.r[4], 0u + 76u);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 2582u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0] + 2582u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323C88u); st16((c.r[2].w[0] + 2586u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x00323C88u) [[unlikely]] return; }
L_00323C88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00323CC0; } }
L_00323C90:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2586u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[5].w[0] + 2586u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2586u)));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00323CC0; } }
    st8((c.r[4].w[0] + 2578u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st16((c.r[3].w[0] + 2580u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 9836u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_00323CC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00323CD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[6].w[0] + 2582u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[7], c.r[6].w[0] + 2582u);  if (t) { goto L_00323E70; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00323E28; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_00323D80; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_00323D50; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00323D18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00323EC0; } }
L_00323D18:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 20u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 33u);
    st8((c.r[2].w[0] + 2585u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st16((c.r[2].w[0] + 2586u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323D44u); set32(c.r[5], c.r[2].w[0] + 2585u);  if (depth < kMaxDepth) unit_009E(c, 38u, depth + 1u); else { c.pc = 0x00378B40u; return; } if (c.pc != 0x00323D44u) [[unlikely]] return; }
L_00323D44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00323EC0; } }
    c.budget -= 1;
L_00323D50:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2586u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[6].w[0] + 2586u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2586u)));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00323EC0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2582u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2582u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00323EC0; } }
    c.budget -= 1;
L_00323D80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323D88u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x00323D88u) [[unlikely]] return; }
L_00323D88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00323DC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323D98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x00323D98u) [[unlikely]] return; }
L_00323D98:
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], 0u + 30u);
    c.r[3].d[0] = ld8((c.r[6].w[0] + 2582u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[6].w[0] + 2582u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 3420u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 2586u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_00323EC0; } }
    c.budget -= 1;
L_00323DC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323DD0u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x00323DD0u) [[unlikely]] return; }
L_00323DD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00323E08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323DE0u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x00323DE0u) [[unlikely]] return; }
L_00323DE0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 33u);
    st8((c.r[2].w[0] + 2578u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st16((c.r[2].w[0] + 2580u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323E00u); st8((c.r[2].w[0] + 9836u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x00323E00u) [[unlikely]] return; }
L_00323E00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00323EC0; } }
L_00323E08:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323E1Cu); set32(c.r[4], c.r[2].w[0] + 2585u);  if (depth < kMaxDepth) unit_008D(c, 20u, depth + 1u); else { c.pc = 0x003341D0u; return; } if (c.pc != 0x00323E1Cu) [[unlikely]] return; }
L_00323E1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00323EC0; } }
    c.budget -= 1;
L_00323E28:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2586u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[6].w[0] + 2586u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00323EC0; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 15u);
    set32(c.r[4], 0u + 33u);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 2582u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0] + 2582u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323E68u); st16((c.r[2].w[0] + 2586u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x00323E68u) [[unlikely]] return; }
L_00323E68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00323EC0; } }
L_00323E70:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2586u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[6].w[0] + 2586u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00323EC0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2585u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00323EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323EA4u);  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321A80u; return; } if (c.pc != 0x00323EA4u) [[unlikely]] return; }
L_00323EA4:
    c.budget -= 1;
L_00323EA8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2578u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st16((c.r[3].w[0] + 2580u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 9836u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_00323EC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00323ED0:
    c.budget -= 2;
    { set32(c.r[4], 0u + 2u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00321A80u | kUnwind; return; } goto L_00321A80; }
L_00323EE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2582u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 2582u);  if (t) { [[clang::musttail]] return unit_0089(c, 6u, depth); } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00323FC8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00323F98; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00323F20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0089(c, 7u, depth); } }
L_00323F20:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 10382u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 15u);  if (t) { goto L_00323F58; } }
    set32(c.r[4], 0u + 20u);
    st16((c.r[3].w[0] + 2586u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323F4Cu); set32(c.r[5], c.r[2].w[0] + 10382u);  if (depth < kMaxDepth) unit_009E(c, 55u, depth + 1u); else { c.pc = 0x00378F60u; return; } if (c.pc != 0x00323F4Cu) [[unlikely]] return; }
L_00323F4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0089(c, 7u, depth); } }
    c.budget -= 1;
L_00323F58:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 14479u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 15u);  if (t) { goto L_00323F80; } }
    set32(c.r[4], 0u + 20u);
    st16((c.r[3].w[0] + 2586u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323F78u); set32(c.r[5], c.r[2].w[0] + 14479u);  if (depth < kMaxDepth) unit_009E(c, 55u, depth + 1u); else { c.pc = 0x00378F60u; return; } if (c.pc != 0x00323F78u) [[unlikely]] return; }
L_00323F78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0089(c, 7u, depth); } }
L_00323F80:
    set32(c.r[2], 0u + 15u);
    st16((c.r[3].w[0] + 2586u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323F90u); set32(c.r[4], 0u + 144u);  if (depth < kMaxDepth) unit_009E(c, 34u, depth + 1u); else { c.pc = 0x00378980u; return; } if (c.pc != 0x00323F90u) [[unlikely]] return; }
L_00323F90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0089(c, 7u, depth); } }
L_00323F98:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2586u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[5].w[0] + 2586u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2586u)));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { [[clang::musttail]] return unit_0089(c, 7u, depth); } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2582u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2582u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0089(c, 7u, depth); } }
    c.budget -= 1;
L_00323FC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323FD0u); c.r[4].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x00323FD0u) [[unlikely]] return; }
L_00323FD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_00323FE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323FE0u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x00323FE0u) [[unlikely]] return; }
L_00323FE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0089(c, 2u, depth); } }
L_00323FE8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00323FF4u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x00323FF4u) [[unlikely]] return; }
L_00323FF4:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 15u);
    set32(c.r[4], 0u + 76u);
    c.budget -= 3;
    [[clang::musttail]] return unit_0089(c, 1u, depth);
}

}
