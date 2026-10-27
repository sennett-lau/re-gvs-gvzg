#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0044[4096] = {
    1, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 12, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0,
    0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 20, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0,
    0, 24, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0,
    0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 49, 0, 0,
    0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0,
    0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 62, 0, 0, 0,
    0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0,
    69, 0, 70, 0, 71, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0,
    0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0,
    0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0,
    95, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    99, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 106,
    0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 112, 0, 113, 0, 114, 0, 115, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0,
    119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 124, 0, 125, 0, 126, 0, 127, 0, 128, 0, 0,
    129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 137,
    0, 0, 138, 139, 0, 140, 0, 0, 141, 0, 0, 142, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146,
    0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152,
    0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0,
    0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0,
    170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 173, 0, 174, 0, 175, 0, 176, 0, 0, 0, 0,
    0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 182, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 189, 0, 0, 190,
    191, 0, 0, 0, 192, 0, 193, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0,
    0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    216, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0,
    0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 241, 0, 242, 0, 243, 0, 244, 0, 0, 0, 0, 0,
    245, 0, 246, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 0,
    0, 251, 0, 252, 0, 253, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    256, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0,
    259, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 263,
    0, 0, 264, 0, 265, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 268, 0, 269, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 0, 272,
    0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 280, 0, 281, 0, 282, 0, 0, 0, 0, 0, 283, 0, 284, 0, 0, 285,
    0, 0, 0, 0, 0, 0, 286, 0, 0, 287, 0, 0, 288, 0, 289, 0, 290, 0, 291, 0, 292, 0, 293, 0, 294, 0, 0, 0, 295, 0, 0, 0,
    0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 298, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0,
    301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0,
    306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307,
    0, 0, 308, 0, 309, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 312, 0, 0, 313, 0, 314, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 318, 0, 319, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336,
    0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 339, 0, 0, 0, 0, 0,
    340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0,
    355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0,
    0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 361, 0,
    0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 372, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374,
    0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 378, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382,
    0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0,
    0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 390, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 397, 0, 398, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 414, 0, 415, 0, 416, 0, 417, 0, 0, 418, 0, 0, 419, 0, 0, 0, 420, 0, 421, 0, 0, 0,
    0, 422, 0, 0, 423, 0, 0, 0, 0, 0, 424, 0, 425, 0, 0, 0, 0, 0, 0, 426, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 428, 0,
    429, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0044(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00210000;
    case 2u: goto L_00210004;
    case 3u: goto L_00210008;
    case 4u: goto L_0021000C;
    case 5u: goto L_00210010;
    case 6u: goto L_00210014;
    case 7u: goto L_00210018;
    case 8u: goto L_00210020;
    case 9u: goto L_00210024;
    case 10u: goto L_00210028;
    case 11u: goto L_0021002C;
    case 12u: goto L_00210030;
    case 13u: goto L_00210038;
    case 14u: goto L_00210054;
    case 15u: goto L_00210068;
    case 16u: goto L_00210070;
    case 17u: goto L_00210088;
    case 18u: goto L_002100B0;
    case 19u: goto L_002100B8;
    case 20u: goto L_002100C0;
    case 21u: goto L_002100C8;
    case 22u: goto L_002100E0;
    case 23u: goto L_002100F0;
    case 24u: goto L_00210104;
    case 25u: goto L_00210114;
    case 26u: goto L_00210120;
    case 27u: goto L_00210134;
    case 28u: goto L_00210190;
    case 29u: goto L_00210198;
    case 30u: goto L_002101A8;
    case 31u: goto L_00210210;
    case 32u: goto L_00210250;
    case 33u: goto L_00210258;
    case 34u: goto L_002102C8;
    case 35u: goto L_00210300;
    case 36u: goto L_00210350;
    case 37u: goto L_00210380;
    case 38u: goto L_002103A0;
    case 39u: goto L_002103B4;
    case 40u: goto L_002103C4;
    case 41u: goto L_002103E4;
    case 42u: goto L_002103F4;
    case 43u: goto L_00210408;
    case 44u: goto L_00210418;
    case 45u: goto L_00210438;
    case 46u: goto L_00210448;
    case 47u: goto L_0021045C;
    case 48u: goto L_0021046C;
    case 49u: goto L_00210474;
    case 50u: goto L_0021048C;
    case 51u: goto L_0021049C;
    case 52u: goto L_002104B0;
    case 53u: goto L_002104C0;
    case 54u: goto L_002104E0;
    case 55u: goto L_002104F0;
    case 56u: goto L_00210504;
    case 57u: goto L_00210514;
    case 58u: goto L_00210534;
    case 59u: goto L_00210544;
    case 60u: goto L_00210558;
    case 61u: goto L_00210560;
    case 62u: goto L_00210570;
    case 63u: goto L_00210584;
    case 64u: goto L_00210594;
    case 65u: goto L_002105B4;
    case 66u: goto L_002105C4;
    case 67u: goto L_002105D8;
    case 68u: goto L_002105F0;
    case 69u: goto L_00210600;
    case 70u: goto L_00210608;
    case 71u: goto L_00210610;
    case 72u: goto L_00210618;
    case 73u: goto L_00210630;
    case 74u: goto L_00210644;
    case 75u: goto L_00210650;
    case 76u: goto L_00210670;
    case 77u: goto L_00210690;
    case 78u: goto L_002106A0;
    case 79u: goto L_002106B4;
    case 80u: goto L_002106BC;
    case 81u: goto L_002106CC;
    case 82u: goto L_002106E0;
    case 83u: goto L_002106F4;
    case 84u: goto L_00210714;
    case 85u: goto L_00210728;
    case 86u: goto L_00210740;
    case 87u: goto L_00210750;
    case 88u: goto L_00210758;
    case 89u: goto L_00210770;
    case 90u: goto L_002107AC;
    case 91u: goto L_002107C0;
    case 92u: goto L_002107D0;
    case 93u: goto L_002107D8;
    case 94u: goto L_002107E4;
    case 95u: goto L_00210800;
    case 96u: goto L_0021080C;
    case 97u: goto L_00210820;
    case 98u: goto L_00210830;
    case 99u: goto L_00210880;
    case 100u: goto L_00210890;
    case 101u: goto L_002108A0;
    case 102u: goto L_002108C0;
    case 103u: goto L_002108D0;
    case 104u: goto L_002108D8;
    case 105u: goto L_002108E8;
    case 106u: goto L_002108FC;
    case 107u: goto L_00210910;
    case 108u: goto L_00210920;
    case 109u: goto L_00210928;
    case 110u: goto L_00210940;
    case 111u: goto L_00210960;
    case 112u: goto L_0021098C;
    case 113u: goto L_00210994;
    case 114u: goto L_0021099C;
    case 115u: goto L_002109A4;
    case 116u: goto L_002109AC;
    case 117u: goto L_002109C0;
    case 118u: goto L_002109F8;
    case 119u: goto L_00210A00;
    case 120u: goto L_00210A20;
    case 121u: goto L_00210A28;
    case 122u: goto L_00210A44;
    case 123u: goto L_00210A4C;
    case 124u: goto L_00210A54;
    case 125u: goto L_00210A5C;
    case 126u: goto L_00210A64;
    case 127u: goto L_00210A6C;
    case 128u: goto L_00210A74;
    case 129u: goto L_00210A80;
    case 130u: goto L_00210AD4;
    case 131u: goto L_00210B10;
    case 132u: goto L_00210B34;
    case 133u: goto L_00210B4C;
    case 134u: goto L_00210B58;
    case 135u: goto L_00210B64;
    case 136u: goto L_00210B70;
    case 137u: goto L_00210B7C;
    case 138u: goto L_00210B88;
    case 139u: goto L_00210B8C;
    case 140u: goto L_00210B94;
    case 141u: goto L_00210BA0;
    case 142u: goto L_00210BAC;
    case 143u: goto L_00210BB8;
    case 144u: goto L_00210BC4;
    case 145u: goto L_00210BD8;
    case 146u: goto L_00210BFC;
    case 147u: goto L_00210C08;
    case 148u: goto L_00210C38;
    case 149u: goto L_00210C40;
    case 150u: goto L_00210C50;
    case 151u: goto L_00210C80;
    case 152u: goto L_00210D7C;
    case 153u: goto L_00210DA0;
    case 154u: goto L_00210DF8;
    case 155u: goto L_00210E64;
    case 156u: goto L_00210EA0;
    case 157u: goto L_00211000;
    case 158u: goto L_00211048;
    case 159u: goto L_00211070;
    case 160u: goto L_00211094;
    case 161u: goto L_002110C0;
    case 162u: goto L_002110D0;
    case 163u: goto L_00211118;
    case 164u: goto L_00211120;
    case 165u: goto L_00211130;
    case 166u: goto L_00211140;
    case 167u: goto L_00211150;
    case 168u: goto L_00211160;
    case 169u: goto L_00211170;
    case 170u: goto L_00211180;
    case 171u: goto L_002111C4;
    case 172u: goto L_002111CC;
    case 173u: goto L_002111D4;
    case 174u: goto L_002111DC;
    case 175u: goto L_002111E4;
    case 176u: goto L_002111EC;
    case 177u: goto L_00211208;
    case 178u: goto L_00211220;
    case 179u: goto L_00211230;
    case 180u: goto L_002112B0;
    case 181u: goto L_002112C0;
    case 182u: goto L_00211308;
    case 183u: goto L_00211310;
    case 184u: goto L_0021132C;
    case 185u: goto L_00211334;
    case 186u: goto L_0021133C;
    case 187u: goto L_00211358;
    case 188u: goto L_00211360;
    case 189u: goto L_00211370;
    case 190u: goto L_0021137C;
    case 191u: goto L_00211380;
    case 192u: goto L_00211390;
    case 193u: goto L_00211398;
    case 194u: goto L_002113A0;
    case 195u: goto L_002113B0;
    case 196u: goto L_002113C4;
    case 197u: goto L_002113D0;
    case 198u: goto L_002113E0;
    case 199u: goto L_00211410;
    case 200u: goto L_002114E0;
    case 201u: goto L_0021152C;
    case 202u: goto L_00211540;
    case 203u: goto L_00211700;
    case 204u: goto L_00211764;
    case 205u: goto L_00211788;
    case 206u: goto L_002117C4;
    case 207u: goto L_00211810;
    case 208u: goto L_00211858;
    case 209u: goto L_00211880;
    case 210u: goto L_002118B0;
    case 211u: goto L_002118D8;
    case 212u: goto L_00211910;
    case 213u: goto L_00211940;
    case 214u: goto L_00211980;
    case 215u: goto L_002119B0;
    case 216u: goto L_00211A80;
    case 217u: goto L_00211A94;
    case 218u: goto L_00211AA4;
    case 219u: goto L_00211B40;
    case 220u: goto L_00211B54;
    case 221u: goto L_00211B64;
    case 222u: goto L_00211BA0;
    case 223u: goto L_00211BC8;
    case 224u: goto L_00211DB0;
    case 225u: goto L_00211E10;
    case 226u: goto L_00211E70;
    case 227u: goto L_00211EF0;
    case 228u: goto L_00211F20;
    case 229u: goto L_00211F70;
    case 230u: goto L_00211FB8;
    case 231u: goto L_00211FC0;
    case 232u: goto L_00211FD4;
    case 233u: goto L_00212000;
    case 234u: goto L_00212034;
    case 235u: goto L_00212050;
    case 236u: goto L_00212070;
    case 237u: goto L_00212084;
    case 238u: goto L_00212090;
    case 239u: goto L_002120AC;
    case 240u: goto L_002120C8;
    case 241u: goto L_002120D0;
    case 242u: goto L_002120D8;
    case 243u: goto L_002120E0;
    case 244u: goto L_002120E8;
    case 245u: goto L_00212100;
    case 246u: goto L_00212108;
    case 247u: goto L_00212110;
    case 248u: goto L_00212144;
    case 249u: goto L_00212160;
    case 250u: goto L_00212168;
    case 251u: goto L_00212184;
    case 252u: goto L_0021218C;
    case 253u: goto L_00212194;
    case 254u: goto L_002121A4;
    case 255u: goto L_002121B4;
    case 256u: goto L_00212200;
    case 257u: goto L_0021220C;
    case 258u: goto L_00212270;
    case 259u: goto L_00212280;
    case 260u: goto L_0021228C;
    case 261u: goto L_0021229C;
    case 262u: goto L_002122D8;
    case 263u: goto L_002122FC;
    case 264u: goto L_00212308;
    case 265u: goto L_00212310;
    case 266u: goto L_0021231C;
    case 267u: goto L_0021233C;
    case 268u: goto L_00212344;
    case 269u: goto L_0021234C;
    case 270u: goto L_00212358;
    case 271u: goto L_00212360;
    case 272u: goto L_0021237C;
    case 273u: goto L_00212394;
    case 274u: goto L_002123A8;
    case 275u: goto L_002123C0;
    case 276u: goto L_002123D8;
    case 277u: goto L_002123EC;
    case 278u: goto L_00212420;
    case 279u: goto L_00212434;
    case 280u: goto L_00212440;
    case 281u: goto L_00212448;
    case 282u: goto L_00212450;
    case 283u: goto L_00212468;
    case 284u: goto L_00212470;
    case 285u: goto L_0021247C;
    case 286u: goto L_00212498;
    case 287u: goto L_002124A4;
    case 288u: goto L_002124B0;
    case 289u: goto L_002124B8;
    case 290u: goto L_002124C0;
    case 291u: goto L_002124C8;
    case 292u: goto L_002124D0;
    case 293u: goto L_002124D8;
    case 294u: goto L_002124E0;
    case 295u: goto L_002124F0;
    case 296u: goto L_00212510;
    case 297u: goto L_00212534;
    case 298u: goto L_00212540;
    case 299u: goto L_00212548;
    case 300u: goto L_00212560;
    case 301u: goto L_00212580;
    case 302u: goto L_0021259C;
    case 303u: goto L_00212630;
    case 304u: goto L_00212650;
    case 305u: goto L_002126F0;
    case 306u: goto L_00212700;
    case 307u: goto L_0021277C;
    case 308u: goto L_00212788;
    case 309u: goto L_00212790;
    case 310u: goto L_00212798;
    case 311u: goto L_002127A8;
    case 312u: goto L_00212818;
    case 313u: goto L_00212824;
    case 314u: goto L_0021282C;
    case 315u: goto L_00212834;
    case 316u: goto L_00212844;
    case 317u: goto L_002128B4;
    case 318u: goto L_002128C0;
    case 319u: goto L_002128C8;
    case 320u: goto L_002128D0;
    case 321u: goto L_002128E0;
    case 322u: goto L_00212934;
    case 323u: goto L_00212948;
    case 324u: goto L_0021295C;
    case 325u: goto L_002129A4;
    case 326u: goto L_002129BC;
    case 327u: goto L_002129D0;
    case 328u: goto L_002129E0;
    case 329u: goto L_00212A40;
    case 330u: goto L_00212AD0;
    case 331u: goto L_00212B60;
    case 332u: goto L_00212B78;
    case 333u: goto L_00212C30;
    case 334u: goto L_00212C80;
    case 335u: goto L_00212CC4;
    case 336u: goto L_00212CFC;
    case 337u: goto L_00212D1C;
    case 338u: goto L_00212DE0;
    case 339u: goto L_00212DE8;
    case 340u: goto L_00212E00;
    case 341u: goto L_00212E40;
    case 342u: goto L_00212EC0;
    case 343u: goto L_00212F00;
    case 344u: goto L_00212FA0;
    case 345u: goto L_00212FF0;
    case 346u: goto L_00213050;
    case 347u: goto L_00213080;
    case 348u: goto L_00213090;
    case 349u: goto L_002130B0;
    case 350u: goto L_0021311C;
    case 351u: goto L_0021312C;
    case 352u: goto L_00213148;
    case 353u: goto L_00213160;
    case 354u: goto L_00213170;
    case 355u: goto L_00213180;
    case 356u: goto L_002131F4;
    case 357u: goto L_00213208;
    case 358u: goto L_0021322C;
    case 359u: goto L_00213250;
    case 360u: goto L_0021326C;
    case 361u: goto L_00213278;
    case 362u: goto L_00213290;
    case 363u: goto L_002132A0;
    case 364u: goto L_002132C8;
    case 365u: goto L_002132D8;
    case 366u: goto L_00213314;
    case 367u: goto L_00213354;
    case 368u: goto L_00213390;
    case 369u: goto L_002133C8;
    case 370u: goto L_002133D8;
    case 371u: goto L_002133E8;
    case 372u: goto L_002133F4;
    case 373u: goto L_00213450;
    case 374u: goto L_0021347C;
    case 375u: goto L_002134A0;
    case 376u: goto L_002134D0;
    case 377u: goto L_002134E8;
    case 378u: goto L_002134F0;
    case 379u: goto L_00213528;
    case 380u: goto L_00213530;
    case 381u: goto L_002135E0;
    case 382u: goto L_002135FC;
    case 383u: goto L_00213618;
    case 384u: goto L_0021363C;
    case 385u: goto L_00213650;
    case 386u: goto L_002136F0;
    case 387u: goto L_00213714;
    case 388u: goto L_00213728;
    case 389u: goto L_0021373C;
    case 390u: goto L_00213748;
    case 391u: goto L_00213750;
    case 392u: goto L_00213760;
    case 393u: goto L_002137C4;
    case 394u: goto L_002137E0;
    case 395u: goto L_00213838;
    case 396u: goto L_0021384C;
    case 397u: goto L_00213858;
    case 398u: goto L_00213860;
    case 399u: goto L_00213890;
    case 400u: goto L_002138A0;
    case 401u: goto L_002138B0;
    case 402u: goto L_002138C0;
    case 403u: goto L_002138D0;
    case 404u: goto L_002138E0;
    case 405u: goto L_00213950;
    case 406u: goto L_00213A98;
    case 407u: goto L_00213AD4;
    case 408u: goto L_00213AE0;
    case 409u: goto L_00213B90;
    case 410u: goto L_00213CD8;
    case 411u: goto L_00213D10;
    case 412u: goto L_00213D40;
    case 413u: goto L_00213DA0;
    case 414u: goto L_00213DA8;
    case 415u: goto L_00213DB0;
    case 416u: goto L_00213DB8;
    case 417u: goto L_00213DC0;
    case 418u: goto L_00213DCC;
    case 419u: goto L_00213DD8;
    case 420u: goto L_00213DE8;
    case 421u: goto L_00213DF0;
    case 422u: goto L_00213E04;
    case 423u: goto L_00213E10;
    case 424u: goto L_00213E28;
    case 425u: goto L_00213E30;
    case 426u: goto L_00213E4C;
    case 427u: goto L_00213E58;
    case 428u: goto L_00213E78;
    case 429u: goto L_00213E80;
    case 430u: goto L_00213EA4;
    case 431u: goto L_00213EB0;
    case 432u: goto L_00213EC0;
    case 433u: goto L_00213F10;
    case 434u: goto L_00213F70;
    default: bad_entry(c, 0x00210000u); return;
    }
L_00210000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210008u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00210008u) [[unlikely]] return; }
    goto L_00210008;
L_00210004:
    set32(c.r[4], c.r[16].w[0] + 192u);
    c.budget -= 1;
L_00210008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210010u); set32(c.r[4], ld32((c.r[16].w[0] + 188u)));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x00210010u) [[unlikely]] return; }
    goto L_00210010;
L_0021000C:
    set32(c.r[4], ld32((c.r[16].w[0] + 188u)));
    c.budget -= 1;
L_00210010:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00210014:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 1;
L_00210018:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00210020:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 1;
L_00210024:
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_00210028:
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 1;
L_0021002C:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 1;
L_00210030:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[4].w[0] + 1u);  if (t) { goto L_002100E8; } }
    goto L_0021003C;
L_00210038:
    set32(c.r[6], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0021003C:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002100C0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002100A8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00210060; } }
    goto L_00210058;
L_00210054:
    c.budget -= 1;
L_00210058:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00210180; } }
L_00210060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210068u);  if (depth < kMaxDepth) unit_0043(c, 373u, depth + 1u); else { c.pc = 0x0020F490u; return; } if (c.pc != 0x00210068u) [[unlikely]] return; }
L_00210068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210070u);  if (depth < kMaxDepth) unit_0009(c, 165u, depth + 1u); else { c.pc = 0x001261A0u; return; } if (c.pc != 0x00210070u) [[unlikely]] return; }
L_00210070:
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 78u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_00210090; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00210180; } }
    goto L_0021008C;
L_00210088:
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0021008C:
    c.budget -= 1;
L_00210090:
    set32(c.r[3], 0u + 1u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00210180; } }
    c.budget -= 1;
L_002100A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002100B0u); st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (depth < kMaxDepth) unit_00AB(c, 160u, depth + 1u); else { c.pc = 0x003AE4E0u; return; } if (c.pc != 0x002100B0u) [[unlikely]] return; }
L_002100B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002100B8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0044(c, 306u, depth + 1u); else { c.pc = 0x00212700u; return; } if (c.pc != 0x002100B8u) [[unlikely]] return; }
L_002100B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00210180; } }
L_002100C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002100C8u);  if (depth < kMaxDepth) unit_008F(c, 103u, depth + 1u); else { c.pc = 0x0033D7E0u; return; } if (c.pc != 0x002100C8u) [[unlikely]] return; }
L_002100C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00210180; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002100E0u); st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0049(c, 163u, depth + 1u); else { c.pc = 0x002251C0u; return; } if (c.pc != 0x002100E0u) [[unlikely]] return; }
L_002100E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00210180; } }
L_002100E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002100F0u);  if (depth < kMaxDepth) unit_000B(c, 107u, depth + 1u); else { c.pc = 0x0012DFD0u; return; } if (c.pc != 0x002100F0u) [[unlikely]] return; }
L_002100F0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 78u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00210120; } }
L_00210104:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210114u); st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0049(c, 164u, depth + 1u); else { c.pc = 0x002251D0u; return; } if (c.pc != 0x00210114u) [[unlikely]] return; }
L_00210114:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00210138; } }
    c.budget -= 1;
L_00210120:
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210134u); st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0066(c, 314u, depth + 1u); else { c.pc = 0x0029A7B0u; return; } if (c.pc != 0x00210134u) [[unlikely]] return; }
L_00210134:
    c.budget -= 1;
L_00210138:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 78u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 56u), static_cast<std::uint8_t>(0u));
    st32((c.r[1].w[0] + 10512u), 0u);
    c.budget -= 18;
L_00210180:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00210190:
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_00210198:
    c.r[9].d[0] = ld64((c.r[4].w[0]));
    set32(c.r[8], 0u + 32u);
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.budget -= 4;
L_002101A8:
    c.budget -= 2;
    { const bool t = c.r[9].sd[0] < 0;  if (t) { goto L_002101C8; } }
    c.r[2].d[0] = ld64((c.r[4].w[0]));
    st64((c.r[7].w[0]), c.r[2].d[0]);
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 8u);  if (t) { goto L_00210230; } }
    c.budget -= 1;
L_002101C8:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = ld64((c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[4], c.r[2].w[0] + 8u);  if (t) { goto L_002101F0; } }
    c.r[3].d[0] = c.r[7].d[0] << 32;
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] - c.r[2].d[0];  if (t) { goto L_00210248; } }
L_002101F0:
    c.r[2].d[0] = c.r[6].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    c.r[6].d[0] = c.r[6].d[0] >> 24;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[7].w[0] - c.r[2].w[0]);
    c.budget -= 8;
L_00210210:
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    c.r[6].d[0] = c.r[6].d[0] + static_cast<std::uint64_t>(-1ll);
    st64((c.r[7].w[0]), c.r[2].d[0]);
    set32(c.r[3], c.r[3].w[0] + 8u);
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00210210u | kUnwind; return; } goto L_00210210; } }
    c.budget -= 1;
L_00210230:
    c.r[8].d[0] = c.r[8].d[0] + static_cast<std::uint64_t>(-1ll);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != 0ull; c.r[9].d[0] = c.r[9].d[0] << 1;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002101A8u | kUnwind; return; } goto L_002101A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00210198u | kUnwind; return; } goto L_00210198; } }
    c.budget -= 1;
L_00210248:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00210250:
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_00210258:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_00210270; } }
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.r[8].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.budget -= 4;
L_00210270:
    c.r[2].d[0] = c.r[9].d[0] & c.r[8].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00210328; } }
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    c.r[6].d[0] = c.r[2].d[0] >> 11;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 2u);  if (t) { goto L_00210298; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 2047ull;  if (t) { goto L_002102A0; } }
    c.budget -= 1;
L_00210298:
    c.r[6].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.budget -= 2;
L_002102A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002102F0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; c.r[3].d[0] = c.r[7].d[0] << 32;  if (t) { goto L_002102C8; } }
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] - c.r[2].d[0];  if (t) { goto L_00210340; } }
    c.budget -= 1;
L_002102C8:
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(0u));
    c.r[6].d[0] = c.r[6].d[0] + static_cast<std::uint64_t>(-1ll);
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002102C8u | kUnwind; return; } goto L_002102C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00210338; } }
    c.budget -= 1;
L_002102F0:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[7].w[0] - c.r[2].w[0]);
    c.budget -= 4;
L_00210300:
    c.r[2].d[0] = ld16((c.r[3].w[0]));
    c.r[6].d[0] = c.r[6].d[0] + static_cast<std::uint64_t>(-1ll);
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + 2u);
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00210300u | kUnwind; return; } goto L_00210300; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00210338; } }
    c.budget -= 1;
L_00210328:
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 2u);
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.budget -= 4;
L_00210338:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00210258u | kUnwind; return; } goto L_00210258; } }
L_00210340:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00210350:
    c.r[5].d[0] = c.r[4].d[0] << 56;
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[28].w[0] - 24092u)));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.r[5].d[0] = c.r[3].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 600u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 600u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00210380:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01170000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[2].d[0] | 61440ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[28].w[0] - 24092u), c.r[4].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002103A0u); set32(c.r[6], 0u + 740u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002103A0u) [[unlikely]] return; }
L_002103A0:
    set32(c.r[4], ld32((c.r[28].w[0] - 24092u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01170000u);
    c.r[5].d[0] = c.r[2].d[0] | 62180ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002103B4u); c.r[6].sd[0] = static_cast<std::int32_t>(0x01FE0000u);  if (depth < kMaxDepth) unit_0079(c, 141u, depth + 1u); else { c.pc = 0x002E6F00u; return; } if (c.pc != 0x002103B4u) [[unlikely]] return; }
L_002103B4:
    set32(c.r[6], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 3153u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002103C4u); set32(c.r[4], c.r[6].w[0] + 12u);  if (depth < kMaxDepth) unit_0079(c, 151u, depth + 1u); else { c.pc = 0x002E7010u; return; } if (c.pc != 0x002103C4u) [[unlikely]] return; }
L_002103C4:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 28816u);
    set32(c.r[5], 0u + 3u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002103E4u); set32(c.r[6], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002103E4u) [[unlikely]] return; }
L_002103E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00130000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002103F4u); set32(c.r[4], c.r[4].w[0] - 13504u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002103F4u) [[unlikely]] return; }
L_002103F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 848u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210408u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x00210408u) [[unlikely]] return; }
L_00210408:
    set32(c.r[6], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 3156u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210418u); set32(c.r[4], c.r[6].w[0] + 96u);  if (depth < kMaxDepth) unit_0079(c, 151u, depth + 1u); else { c.pc = 0x002E7010u; return; } if (c.pc != 0x00210418u) [[unlikely]] return; }
L_00210418:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 28816u);
    set32(c.r[5], 0u + 3u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210438u); set32(c.r[6], c.r[2].w[0] + 96u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x00210438u) [[unlikely]] return; }
L_00210438:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00130000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210448u); set32(c.r[4], c.r[4].w[0] - 13504u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x00210448u) [[unlikely]] return; }
L_00210448:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 848u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021045Cu); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021045Cu) [[unlikely]] return; }
L_0021045C:
    set32(c.r[6], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 3157u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021046Cu); set32(c.r[4], c.r[6].w[0] + 180u);  if (depth < kMaxDepth) unit_0079(c, 151u, depth + 1u); else { c.pc = 0x002E7010u; return; } if (c.pc != 0x0021046Cu) [[unlikely]] return; }
L_0021046C:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.budget -= 2;
L_00210474:
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 28816u);
    set32(c.r[5], 0u + 3u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021048Cu); set32(c.r[6], c.r[2].w[0] + 180u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021048Cu) [[unlikely]] return; }
L_0021048C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00130000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021049Cu); set32(c.r[4], c.r[4].w[0] - 13504u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021049Cu) [[unlikely]] return; }
L_0021049C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 848u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002104B0u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002104B0u) [[unlikely]] return; }
L_002104B0:
    set32(c.r[6], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 3158u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002104C0u); set32(c.r[4], c.r[6].w[0] + 264u);  if (depth < kMaxDepth) unit_0079(c, 151u, depth + 1u); else { c.pc = 0x002E7010u; return; } if (c.pc != 0x002104C0u) [[unlikely]] return; }
L_002104C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 28816u);
    set32(c.r[5], 0u + 3u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002104E0u); set32(c.r[6], c.r[2].w[0] + 264u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002104E0u) [[unlikely]] return; }
L_002104E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00130000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002104F0u); set32(c.r[4], c.r[4].w[0] - 13504u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002104F0u) [[unlikely]] return; }
L_002104F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 848u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210504u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x00210504u) [[unlikely]] return; }
L_00210504:
    set32(c.r[6], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 3159u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210514u); set32(c.r[4], c.r[6].w[0] + 348u);  if (depth < kMaxDepth) unit_0079(c, 151u, depth + 1u); else { c.pc = 0x002E7010u; return; } if (c.pc != 0x00210514u) [[unlikely]] return; }
L_00210514:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 28816u);
    set32(c.r[5], 0u + 3u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210534u); set32(c.r[6], c.r[2].w[0] + 348u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x00210534u) [[unlikely]] return; }
L_00210534:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00130000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210544u); set32(c.r[4], c.r[4].w[0] - 13504u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x00210544u) [[unlikely]] return; }
L_00210544:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 848u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210558u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x00210558u) [[unlikely]] return; }
L_00210558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210560u);  if (depth < kMaxDepth) unit_0048(c, 275u, depth + 1u); else { c.pc = 0x00223E50u; return; } if (c.pc != 0x00210560u) [[unlikely]] return; }
L_00210560:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00210000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210570u); set32(c.r[4], c.r[4].w[0] + 9776u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x00210570u) [[unlikely]] return; }
L_00210570:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 9984u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210584u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x00210584u) [[unlikely]] return; }
L_00210584:
    set32(c.r[6], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 3160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210594u); set32(c.r[4], c.r[6].w[0] + 432u);  if (depth < kMaxDepth) unit_0079(c, 151u, depth + 1u); else { c.pc = 0x002E7010u; return; } if (c.pc != 0x00210594u) [[unlikely]] return; }
L_00210594:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 28816u);
    set32(c.r[5], 0u + 3u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002105B4u); set32(c.r[6], c.r[2].w[0] + 432u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002105B4u) [[unlikely]] return; }
L_002105B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00130000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002105C4u); set32(c.r[4], c.r[4].w[0] - 13504u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002105C4u) [[unlikely]] return; }
L_002105C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 848u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002105D8u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002105D8u) [[unlikely]] return; }
L_002105D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002105F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210600u);  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x00210600u) [[unlikely]] return; }
L_00210600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210608u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x00210608u) [[unlikely]] return; }
L_00210608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210610u);  if (depth < kMaxDepth) unit_000B(c, 24u, depth + 1u); else { c.pc = 0x0012C850u; return; } if (c.pc != 0x00210610u) [[unlikely]] return; }
L_00210610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210618u);  if (depth < kMaxDepth) unit_0043(c, 413u, depth + 1u); else { c.pc = 0x0020FEA0u; return; } if (c.pc != 0x00210618u) [[unlikely]] return; }
L_00210618:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01170000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] | 61440ull;
    set32(c.r[6], 0u + 740u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210630u); st32((c.r[28].w[0] - 24092u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00210630u) [[unlikely]] return; }
L_00210630:
    set32(c.r[4], ld32((c.r[28].w[0] - 24092u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01170000u);
    c.r[5].d[0] = c.r[2].d[0] | 62180ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210644u); c.r[6].sd[0] = static_cast<std::int32_t>(0x01FE0000u);  if (depth < kMaxDepth) unit_0079(c, 141u, depth + 1u); else { c.pc = 0x002E6F00u; return; } if (c.pc != 0x00210644u) [[unlikely]] return; }
L_00210644:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00210650:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 3161u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[28].w[0] - 24092u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210670u); set32(c.r[4], c.r[6].w[0] + 12u);  if (depth < kMaxDepth) unit_0079(c, 151u, depth + 1u); else { c.pc = 0x002E7010u; return; } if (c.pc != 0x00210670u) [[unlikely]] return; }
L_00210670:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 28816u);
    set32(c.r[5], 0u + 3u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210690u); set32(c.r[6], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x00210690u) [[unlikely]] return; }
L_00210690:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00130000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002106A0u); set32(c.r[4], c.r[4].w[0] - 13504u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002106A0u) [[unlikely]] return; }
L_002106A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 848u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002106B4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002106B4u) [[unlikely]] return; }
L_002106B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002106BCu);  if (depth < kMaxDepth) unit_0048(c, 275u, depth + 1u); else { c.pc = 0x00223E50u; return; } if (c.pc != 0x002106BCu) [[unlikely]] return; }
L_002106BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00210000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002106CCu); set32(c.r[4], c.r[4].w[0] + 9776u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002106CCu) [[unlikely]] return; }
L_002106CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 9984u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002106E0u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002106E0u) [[unlikely]] return; }
L_002106E0:
    set32(c.r[6], ld32((c.r[28].w[0] - 24092u)));
    c.r[5].d[0] = c.r[16].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002106F4u); set32(c.r[4], c.r[6].w[0] + 432u);  if (depth < kMaxDepth) unit_0079(c, 151u, depth + 1u); else { c.pc = 0x002E7010u; return; } if (c.pc != 0x002106F4u) [[unlikely]] return; }
L_002106F4:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[4], c.r[4].w[0] + 28816u);
    set32(c.r[5], 0u + 3u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210714u); set32(c.r[6], c.r[2].w[0] + 432u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x00210714u) [[unlikely]] return; }
L_00210714:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 848u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210728u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x00210728u) [[unlikely]] return; }
L_00210728:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00210740:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210750u);  if (depth < kMaxDepth) unit_0044(c, 68u, depth + 1u); else { c.pc = 0x002105F0u; return; } if (c.pc != 0x00210750u) [[unlikely]] return; }
L_00210750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210758u); set32(c.r[4], 0u + 3160u);  if (depth < kMaxDepth) unit_0044(c, 75u, depth + 1u); else { c.pc = 0x00210650u; return; } if (c.pc != 0x00210758u) [[unlikely]] return; }
L_00210758:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00210770:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    st32((c.r[4].w[0] + 716u), c.r[2].w[0]);
    set32(c.r[5], c.r[4].w[0] + 724u);
    set32(c.r[2], ld32((c.r[4].w[0] + 716u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 468u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 6u)));
    st16((c.r[1].w[0] + 10488u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[4].w[0] + 720u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002107ACu); set32(c.r[6], c.r[29].w[0] + 24u);  if (depth < kMaxDepth) unit_000A(c, 194u, depth + 1u); else { c.pc = 0x0012ABA0u; return; } if (c.pc != 0x002107ACu) [[unlikely]] return; }
L_002107AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002107C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002107D0u);  if (depth < kMaxDepth) unit_0044(c, 68u, depth + 1u); else { c.pc = 0x002105F0u; return; } if (c.pc != 0x002107D0u) [[unlikely]] return; }
L_002107D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002107D8u); set32(c.r[4], 0u + 3155u);  if (depth < kMaxDepth) unit_0044(c, 75u, depth + 1u); else { c.pc = 0x00210650u; return; } if (c.pc != 0x002107D8u) [[unlikely]] return; }
L_002107D8:
    set32(c.r[4], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002107E4u); set32(c.r[5], 0u + 2048u);  if (depth < kMaxDepth) unit_0079(c, 143u, depth + 1u); else { c.pc = 0x002E6F20u; return; } if (c.pc != 0x002107E4u) [[unlikely]] return; }
L_002107E4:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    st32((c.r[3].w[0] + 720u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 720u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210800u); set32(c.r[4], 0u + 3419u);  if (depth < kMaxDepth) unit_0045(c, 59u, depth + 1u); else { c.pc = 0x002147C0u; return; } if (c.pc != 0x00210800u) [[unlikely]] return; }
L_00210800:
    set32(c.r[4], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021080Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 144u, depth + 1u); else { c.pc = 0x002E6F40u; return; } if (c.pc != 0x0021080Cu) [[unlikely]] return; }
L_0021080C:
    set32(c.r[6], ld32((c.r[28].w[0] - 24092u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[4], c.r[4].w[0] + 1904u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210820u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x00210820u) [[unlikely]] return; }
L_00210820:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00210830:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 3));  if (t) { goto L_00210840; } }
    set32(c.r[2], c.r[4].w[0] + 7u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_00210840:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00210860; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 716u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 468u)));  if (t) { goto L_00210870; } }
L_00210860:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 720u)));
    c.budget -= 4;
L_00210870:
    c.r[6].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 3;
    { set32(c.r[5], 0u + 2u);  [[clang::musttail]] return unit_0076(c, 6u, depth); }
L_00210880:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210890u);  if (depth < kMaxDepth) unit_0044(c, 68u, depth + 1u); else { c.pc = 0x002105F0u; return; } if (c.pc != 0x00210890u) [[unlikely]] return; }
L_00210890:
    set32(c.r[6], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 3424u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002108A0u); set32(c.r[4], c.r[6].w[0] + 12u);  if (depth < kMaxDepth) unit_0079(c, 151u, depth + 1u); else { c.pc = 0x002E7010u; return; } if (c.pc != 0x002108A0u) [[unlikely]] return; }
L_002108A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 28816u);
    set32(c.r[5], 0u + 3u);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002108C0u); set32(c.r[6], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002108C0u) [[unlikely]] return; }
L_002108C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00130000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002108D0u); set32(c.r[4], c.r[4].w[0] - 13504u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002108D0u) [[unlikely]] return; }
L_002108D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002108D8u);  if (depth < kMaxDepth) unit_0048(c, 275u, depth + 1u); else { c.pc = 0x00223E50u; return; } if (c.pc != 0x002108D8u) [[unlikely]] return; }
L_002108D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00210000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002108E8u); set32(c.r[4], c.r[4].w[0] + 9776u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002108E8u) [[unlikely]] return; }
L_002108E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 9984u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002108FCu); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002108FCu) [[unlikely]] return; }
L_002108FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00210910:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210920u);  if (depth < kMaxDepth) unit_0044(c, 68u, depth + 1u); else { c.pc = 0x002105F0u; return; } if (c.pc != 0x00210920u) [[unlikely]] return; }
L_00210920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210928u); set32(c.r[4], 0u + 3154u);  if (depth < kMaxDepth) unit_0044(c, 75u, depth + 1u); else { c.pc = 0x00210650u; return; } if (c.pc != 0x00210928u) [[unlikely]] return; }
L_00210928:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00210940:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[4], 0u + 128u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 6;
    { set32(c.r[7], 0u + 16u);  [[clang::musttail]] return unit_004B(c, 96u, depth); }
L_00210960:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 8512u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021098Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021098Cu) [[unlikely]] return; }
L_0021098C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210994u);  if (depth < kMaxDepth) unit_0044(c, 191u, depth + 1u); else { c.pc = 0x00211380u; return; } if (c.pc != 0x00210994u) [[unlikely]] return; }
L_00210994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021099Cu);  if (depth < kMaxDepth) unit_0044(c, 195u, depth + 1u); else { c.pc = 0x002113B0u; return; } if (c.pc != 0x0021099Cu) [[unlikely]] return; }
L_0021099C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002109A4u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x002109A4u) [[unlikely]] return; }
L_002109A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002109ACu);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x002109ACu) [[unlikely]] return; }
L_002109AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002109C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[3].w[0] + 2u);  if (t) { goto L_00210C68; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 16848u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00210000u < 16384u) { entry = entries_0044[(t - 0x00210000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002109F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210A00u);  if (depth < kMaxDepth) unit_0045(c, 81u, depth + 1u); else { c.pc = 0x00214AA0u; return; } if (c.pc != 0x00210A00u) [[unlikely]] return; }
L_00210A00:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00210C68; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00210C68; } }
L_00210A20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210A28u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x00210A28u) [[unlikely]] return; }
L_00210A28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00210C68; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210A44u); st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x00210A44u) [[unlikely]] return; }
L_00210A44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210A4Cu);  if (depth < kMaxDepth) unit_005B(c, 61u, depth + 1u); else { c.pc = 0x0026C8B0u; return; } if (c.pc != 0x00210A4Cu) [[unlikely]] return; }
L_00210A4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210A54u);  if (depth < kMaxDepth) unit_005B(c, 64u, depth + 1u); else { c.pc = 0x0026C960u; return; } if (c.pc != 0x00210A54u) [[unlikely]] return; }
L_00210A54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210A5Cu);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x00210A5Cu) [[unlikely]] return; }
L_00210A5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210A64u);  if (depth < kMaxDepth) unit_000B(c, 24u, depth + 1u); else { c.pc = 0x0012C850u; return; } if (c.pc != 0x00210A64u) [[unlikely]] return; }
L_00210A64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210A6Cu);  if (depth < kMaxDepth) unit_00C0(c, 297u, depth + 1u); else { c.pc = 0x00403180u; return; } if (c.pc != 0x00210A6Cu) [[unlikely]] return; }
L_00210A6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210A74u);  if (depth < kMaxDepth) unit_0044(c, 37u, depth + 1u); else { c.pc = 0x00210380u; return; } if (c.pc != 0x00210A74u) [[unlikely]] return; }
L_00210A74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00210C68; } }
    c.budget -= 1;
L_00210A80:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 600u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00210C68; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 196u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210AD4u); st8((c.r[3].w[0] + 76u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 113u, depth + 1u); else { c.pc = 0x0012E180u; return; } if (c.pc != 0x00210AD4u) [[unlikely]] return; }
L_00210AD4:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 3600u);
    st8((c.r[2].w[0] + 56u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    st8((c.r[2].w[0] + 628u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    st32((c.r[2].w[0] + 604u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 604u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210B10u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0044(c, 189u, depth + 1u); else { c.pc = 0x00211370u; return; } if (c.pc != 0x00210B10u) [[unlikely]] return; }
L_00210B10:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    st32((c.r[2].w[0] + 604u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    st8((c.r[2].w[0] + 630u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210B34u); st8((c.r[2].w[0] + 76u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0049(c, 164u, depth + 1u); else { c.pc = 0x002251D0u; return; } if (c.pc != 0x00210B34u) [[unlikely]] return; }
L_00210B34:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[4], 0u + 128u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210B4Cu); set32(c.r[7], 0u + 16u);  if (depth < kMaxDepth) unit_004B(c, 96u, depth + 1u); else { c.pc = 0x0022D4F0u; return; } if (c.pc != 0x00210B4Cu) [[unlikely]] return; }
L_00210B4C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210B58u); set32(c.r[5], 0u + 128u);  if (depth < kMaxDepth) unit_004B(c, 88u, depth + 1u); else { c.pc = 0x0022D3B0u; return; } if (c.pc != 0x00210B58u) [[unlikely]] return; }
L_00210B58:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210B64u); set32(c.r[5], 0u + 128u);  if (depth < kMaxDepth) unit_004B(c, 88u, depth + 1u); else { c.pc = 0x0022D3B0u; return; } if (c.pc != 0x00210B64u) [[unlikely]] return; }
L_00210B64:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210B70u); set32(c.r[5], 0u + 129u);  if (depth < kMaxDepth) unit_004B(c, 88u, depth + 1u); else { c.pc = 0x0022D3B0u; return; } if (c.pc != 0x00210B70u) [[unlikely]] return; }
L_00210B70:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210B7Cu); set32(c.r[5], 0u + 130u);  if (depth < kMaxDepth) unit_004B(c, 88u, depth + 1u); else { c.pc = 0x0022D3B0u; return; } if (c.pc != 0x00210B7Cu) [[unlikely]] return; }
L_00210B7C:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210B88u); set32(c.r[5], 0u + 131u);  if (depth < kMaxDepth) unit_004B(c, 88u, depth + 1u); else { c.pc = 0x0022D3B0u; return; } if (c.pc != 0x00210B88u) [[unlikely]] return; }
L_00210B88:
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_00210B8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210B94u); set32(c.r[5], 0u + 132u);  if (depth < kMaxDepth) unit_004B(c, 88u, depth + 1u); else { c.pc = 0x0022D3B0u; return; } if (c.pc != 0x00210B94u) [[unlikely]] return; }
L_00210B94:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210BA0u); set32(c.r[5], 0u + 133u);  if (depth < kMaxDepth) unit_004B(c, 88u, depth + 1u); else { c.pc = 0x0022D3B0u; return; } if (c.pc != 0x00210BA0u) [[unlikely]] return; }
L_00210BA0:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210BACu); set32(c.r[5], 0u + 134u);  if (depth < kMaxDepth) unit_004B(c, 88u, depth + 1u); else { c.pc = 0x0022D3B0u; return; } if (c.pc != 0x00210BACu) [[unlikely]] return; }
L_00210BAC:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210BB8u); set32(c.r[5], 0u + 135u);  if (depth < kMaxDepth) unit_004B(c, 88u, depth + 1u); else { c.pc = 0x0022D3B0u; return; } if (c.pc != 0x00210BB8u) [[unlikely]] return; }
L_00210BB8:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210BC4u); set32(c.r[5], 0u + 136u);  if (depth < kMaxDepth) unit_004B(c, 88u, depth + 1u); else { c.pc = 0x0022D3B0u; return; } if (c.pc != 0x00210BC4u) [[unlikely]] return; }
L_00210BC4:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 629u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00210C68; } }
    c.budget -= 1;
L_00210BD8:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 629u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00210C68; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    set32(c.r[4], 0u + 3u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210BFCu); set32(c.r[5], 0u + 128u);  if (depth < kMaxDepth) unit_004B(c, 88u, depth + 1u); else { c.pc = 0x0022D3B0u; return; } if (c.pc != 0x00210BFCu) [[unlikely]] return; }
L_00210BFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00210C68; } }
    c.budget -= 1;
L_00210C08:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 630u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_00210C68; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 630u)));
    c.r[3].d[0] = c.r[3].d[0] & 127ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 630u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00210C68; } }
    c.budget -= 1;
L_00210C38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210C40u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x00210C40u) [[unlikely]] return; }
L_00210C40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 46u);  if (t) { goto L_00210C50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210C50u);  if (depth < kMaxDepth) unit_004E(c, 35u, depth + 1u); else { c.pc = 0x002382B0u; return; } if (c.pc != 0x00210C50u) [[unlikely]] return; }
L_00210C50:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_00210C68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00210C80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], ld32((c.r[28].w[0] - 23780u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 2u)));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[8], c.r[7].w[0] + 2u);  if (t) { goto L_00210FE0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00210F30; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00210EF8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00210EA8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00210CD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00210FF0; } }
L_00210CD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[9].d[0] = ld16((c.r[1].w[0] + 9540u));
    set32(c.r[3], 0u + 7u);
    set32(c.r[4], ld32((c.r[28].w[0] - 24092u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 604u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[6].d[0] = ld16((c.r[1].w[0] + 9556u));  if (t) { goto L_00210D00; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; c.r[3].d[0] = c.r[9].d[0] | c.r[6].d[0];  if (t) { goto L_00210D00; } }
    c.r[9].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 2;
L_00210D00:
    c.r[3].d[0] = c.r[9].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 32800ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00210D88; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[3], 0u + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 24092u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 630u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st8((c.r[4].w[0] + 630u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[1].w[0] + 9540u));
    c.r[2].d[0] = c.r[2].d[0] & 32800ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00210D60; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 608u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00210D70; } }
    c.budget -= 1;
L_00210D60:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[3], 0u + 2u);
    st16((c.r[2].w[0] + 608u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00210D70:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210D7Cu); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x00210D7Cu) [[unlikely]] return; }
L_00210D7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00210FF0; } }
    c.budget -= 1;
L_00210D88:
    c.r[3].d[0] = c.r[6].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 32800ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00210DA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210DA0u); set32(c.r[5], 0u + 171u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x00210DA0u) [[unlikely]] return; }
L_00210DA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00210DE8; } }
L_00210DA8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[7].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00210DE8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 5u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00210FF0; } }
    c.budget -= 1;
L_00210DE8:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 604u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210DF8u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x00210DF8u) [[unlikely]] return; }
L_00210DF8:
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00210E10; } }
    set32(c.r[6], 0u - 1u);
    c.budget -= 2;
L_00210E10:
    c.r[3].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00210E20; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_00210E20:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00210E78; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 24092u)));
    c.r[5].d[0] = c.r[6].d[0] << 56;
    set32(c.r[2], 0u + 9u);
    set32(c.r[3], ld32((c.r[4].w[0] + 604u)));
    set32(c.r[3], c.r[3].w[0] + 9u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    st32((c.r[4].w[0] + 604u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 604u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210E64u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_0044(c, 189u, depth + 1u); else { c.pc = 0x00211370u; return; } if (c.pc != 0x00210E64u) [[unlikely]] return; }
L_00210E64:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    st32((c.r[3].w[0] + 604u), c.r[4].w[0]);
    c.budget -= 5;
L_00210E78:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 604u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_00210FF0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 3600u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 166u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00210EA0u); st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x00210EA0u) [[unlikely]] return; }
L_00210EA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00210FF0; } }
L_00210EA8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[7].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00210FF0; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u + 10u);
    set32(c.r[3], 0u - 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 24092u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 630u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 630u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00210FF0; } }
L_00210EF8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[7].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00210FF0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00210FF0; } }
L_00210F30:
    set32(c.r[7], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[3], 0u + 8u);
    set32(c.r[4], ld32((c.r[7].w[0] + 604u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00210F88; } }
    st8((c.r[7].w[0] + 628u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00210FC0; } }
    c.budget -= 1;
L_00210F88:
    set32(c.r[3], c.r[6].w[0] + 1u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 83u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 84u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 81u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].d[0] = ld16((c.r[4].w[0] + 608u));
    st8((c.r[3].w[0] + 56u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 14;
L_00210FC0:
    set32(c.r[4], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 604u)));
    st8((c.r[3].w[0] + 76u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 196u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00210FF0; } }
L_00210FE0:
    set32(c.r[3], 0u + 2u);
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00210FF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00211000:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 23780u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_002110F0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002110C8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00211068; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00211040; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00211208; } }
L_00211040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211048u);  if (depth < kMaxDepth) unit_0045(c, 81u, depth + 1u); else { c.pc = 0x00214AA0u; return; } if (c.pc != 0x00211048u) [[unlikely]] return; }
L_00211048:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00211208; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00211208; } }
L_00211068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211070u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x00211070u) [[unlikely]] return; }
L_00211070:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00211208; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211094u); st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x00211094u) [[unlikely]] return; }
L_00211094:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 6u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 7u);  if (t) { goto L_002110B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00211208; } }
L_002110B0:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002110C0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x002110C0u) [[unlikely]] return; }
L_002110C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00211208; } }
L_002110C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002110D0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x002110D0u) [[unlikely]] return; }
L_002110D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00211208; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00211208; } }
    c.budget -= 1;
L_002110F0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 76u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_00211188; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 16880u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00210000u < 16384u) { entry = entries_0044[(t - 0x00210000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00211118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00211188; } }
L_00211120:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00211188; } }
    c.budget -= 1;
L_00211130:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00211188; } }
    c.budget -= 1;
L_00211140:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00211188; } }
    c.budget -= 1;
L_00211150:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00211188; } }
    c.budget -= 1;
L_00211160:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00211188; } }
    c.budget -= 1;
L_00211170:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00211188; } }
    c.budget -= 1;
L_00211180:
    set32(c.r[2], 0u + 7u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00211188:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002111C4u); st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0044(c, 362u, depth + 1u); else { c.pc = 0x00213290u; return; } if (c.pc != 0x002111C4u) [[unlikely]] return; }
L_002111C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002111CCu);  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x002111CCu) [[unlikely]] return; }
L_002111CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002111D4u);  if (depth < kMaxDepth) unit_0043(c, 413u, depth + 1u); else { c.pc = 0x0020FEA0u; return; } if (c.pc != 0x002111D4u) [[unlikely]] return; }
L_002111D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002111DCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 25u, depth + 1u); else { c.pc = 0x001246A0u; return; } if (c.pc != 0x002111DCu) [[unlikely]] return; }
L_002111DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002111E4u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x002111E4u) [[unlikely]] return; }
L_002111E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002111ECu);  if (depth < kMaxDepth) unit_004E(c, 18u, depth + 1u); else { c.pc = 0x002380D0u; return; } if (c.pc != 0x002111ECu) [[unlikely]] return; }
L_002111EC:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 7u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00211208; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211208u);  if (depth < kMaxDepth) unit_004E(c, 5u, depth + 1u); else { c.pc = 0x00238040u; return; } if (c.pc != 0x00211208u) [[unlikely]] return; }
L_00211208:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00211220:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211230u);  if (depth < kMaxDepth) unit_0049(c, 240u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x00211230u) [[unlikely]] return; }
L_00211230:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002112A0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], 0u + 3600u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 56u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st16((c.r[3].w[0] + 10u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    st32((c.r[3].w[0] + 604u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    st8((c.r[3].w[0] + 628u), static_cast<std::uint8_t>(0u));
    c.budget -= 26;
L_002112A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002112B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002112C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[4].w[0] + 2u);  if (t) { goto L_00211348; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00211308; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002112F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00211360; } }
L_002112F8:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211308u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x00211308u) [[unlikely]] return; }
L_00211308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211310u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x00211310u) [[unlikely]] return; }
L_00211310:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00211360; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021132Cu); st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x0021132Cu) [[unlikely]] return; }
L_0021132C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211334u);  if (depth < kMaxDepth) unit_0043(c, 413u, depth + 1u); else { c.pc = 0x0020FEA0u; return; } if (c.pc != 0x00211334u) [[unlikely]] return; }
L_00211334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021133Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 25u, depth + 1u); else { c.pc = 0x001246A0u; return; } if (c.pc != 0x0021133Cu) [[unlikely]] return; }
L_0021133C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00211360; } }
    c.budget -= 1;
L_00211348:
    set32(c.r[2], 0u + 1u);
    st64((c.r[4].w[0]), c.r[2].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211358u); st64((c.r[4].w[0] + 8u), 0ull);  if (depth < kMaxDepth) unit_000B(c, 152u, depth + 1u); else { c.pc = 0x0012E530u; return; } if (c.pc != 0x00211358u) [[unlikely]] return; }
L_00211358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211360u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x00211360u) [[unlikely]] return; }
L_00211360:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00211370:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0021137C:
    c.budget -= 1;
L_00211380:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211390u);  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x00211390u) [[unlikely]] return; }
L_00211390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211398u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x00211398u) [[unlikely]] return; }
L_00211398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002113A0u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x002113A0u) [[unlikely]] return; }
L_002113A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002113B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002113C4u); set32(c.r[4], c.r[4].w[0] - 15136u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002113C4u) [[unlikely]] return; }
L_002113C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002113D0u); set32(c.r[4], c.r[4].w[0] - 15024u);  if (depth < kMaxDepth) unit_0043(c, 416u, depth + 1u); else { c.pc = 0x0020FEF0u; return; } if (c.pc != 0x002113D0u) [[unlikely]] return; }
L_002113D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002113E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 9540u));
    c.r[3].d[0] = c.r[3].d[0] & 1008ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00211400; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
L_00211400:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00211410:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st8((c.r[1].w[0] - 8941u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st8((c.r[1].w[0] - 30051u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st8((c.r[1].w[0] - 30052u), static_cast<std::uint8_t>(0u));
    set32(c.r[9], c.r[9].w[0] - 8480u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[8], c.r[8].w[0] - 8479u);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8941u)));
    set32(c.r[7], c.r[7].w[0] - 8478u);
    set32(c.r[6], c.r[6].w[0] - 8477u);
    set32(c.r[5], c.r[5].w[0] - 8476u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 3u);
    set32(c.r[10], c.r[11].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[8], c.r[8].w[0] + c.r[10].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    set32(c.r[7], c.r[7].w[0] + c.r[10].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[10].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[10].w[0]);
    st8((c.r[1].w[0] - 30050u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] - 30049u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] - 30048u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] - 30053u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] - 30054u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 45;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002114D0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 155u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
L_002114D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002114E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 30050u)));
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_002114F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));  if (t) { goto L_00211500; } }
L_002114F8:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 2;
L_00211500:
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 276u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 30049u)));
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_00211528; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));  if (t) { goto L_00211530; } }
L_00211528:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021152C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 1;
L_00211530:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 280u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_00211540:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00211600; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 5u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 155u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0] + 155u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 152u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002115C0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = c.r[4].sd[0] < 30ll ? 1ull : 0ull;  if (t) { goto L_002115C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002115C0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 155u)));
    set32(c.r[3], c.r[3].w[0] - 4u);
    st8((c.r[5].w[0] + 155u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002115C0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], c.r[3].w[0] + 155u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 155u)));
    c.r[3].d[0] = c.r[3].sd[0] < 31ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 31u);  if (t) { goto L_002115E0; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002115E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] - 30053u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 155u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 30054u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002117A0; } }
    c.budget -= 1;
L_00211600:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[4].w[0] + 88u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 88u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);  if (t) { goto L_00211670; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8941u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[7], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[5], c.r[5].w[0] - 8432u);
    set32(c.r[4], c.r[4].w[0] - 8431u);
    set32(c.r[8], c.r[6].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 151u)));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[8].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st8((c.r[1].w[0] - 30053u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 151u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 30054u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002116B0; } }
    c.budget -= 1;
L_00211670:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8941u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], c.r[5].w[0] - 8477u);
    set32(c.r[4], c.r[4].w[0] - 8476u);
    set32(c.r[6], c.r[7].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st8((c.r[1].w[0] - 30053u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] - 30054u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 16;
L_002116B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] - 27094u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] - 27093u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] - 18390u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] - 18389u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] - 9686u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] - 9685u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] - 982u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] - 981u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002117A0; } }
    c.budget -= 1;
L_00211700:
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].d[0] = c.r[16].d[0] << 48;
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 56u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00211788; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8941u)));
    set32(c.r[4], c.r[4].w[0] - 8256u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 151u)));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 12;
    { const bool t = c.r[3].sd[0] <= 0; c.r[5].d[0] = c.r[3].d[0] << 56;  if (t) { goto L_00211770; } }
    c.r[4].d[0] = c.r[16].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211764u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_0044(c, 224u, depth + 1u); else { c.pc = 0x00211DB0u; return; } if (c.pc != 0x00211764u) [[unlikely]] return; }
L_00211764:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00211788; } }
    c.budget -= 1;
L_00211770:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0; c.r[5].d[0] = c.r[3].d[0] << 56;  if (t) { goto L_00211788; } }
    c.r[4].d[0] = c.r[16].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211788u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_0044(c, 225u, depth + 1u); else { c.pc = 0x00211E10u; return; } if (c.pc != 0x00211788u) [[unlikely]] return; }
L_00211788:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00211700u | kUnwind; return; } goto L_00211700; } }
L_002117A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 13u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002118F0; } }
    set32(c.r[2], c.r[3].w[0] - c.r[4].w[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002117C4u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x002117C4u) [[unlikely]] return; }
L_002117C4:
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] - 8160u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[19].w[0] - 27856u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 12u)));
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[4].d[0] = c.r[4].d[0] & 3ull;
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 13u)));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    c.r[18].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.r[18].d[0] = c.r[18].d[0] ^ 1ull;
    c.budget -= 19;
L_00211810:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002118D8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002118D8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8661u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00211888; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);  if (t) { goto L_00211860; } }
    c.r[4].d[0] = c.r[16].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8941u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211858u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_0044(c, 224u, depth + 1u); else { c.pc = 0x00211DB0u; return; } if (c.pc != 0x00211858u) [[unlikely]] return; }
L_00211858:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002118D8; } }
L_00211860:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8941u)));
    c.r[4].d[0] = c.r[16].d[0] << 56;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211880u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_0044(c, 225u, depth + 1u); else { c.pc = 0x00211E10u; return; } if (c.pc != 0x00211880u) [[unlikely]] return; }
L_00211880:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002118D8; } }
L_00211888:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);  if (t) { goto L_002118B8; } }
    c.r[4].d[0] = c.r[16].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8941u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002118B0u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_0044(c, 224u, depth + 1u); else { c.pc = 0x00211DB0u; return; } if (c.pc != 0x002118B0u) [[unlikely]] return; }
L_002118B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002118D8; } }
L_002118B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8941u)));
    c.r[4].d[0] = c.r[16].d[0] << 56;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002118D8u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_0044(c, 225u, depth + 1u); else { c.pc = 0x00211E10u; return; } if (c.pc != 0x002118D8u) [[unlikely]] return; }
L_002118D8:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00211810u | kUnwind; return; } goto L_00211810; } }
L_002118F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00211910:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 88u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002119A0; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] - 27856u);
    c.budget -= 3;
L_00211940:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00211980; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00211980; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[5], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8661u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 20u)));
    set32(c.r[3], c.r[5].w[0] << (c.r[3].w[0] & 31u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00211980; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211980u);  if (depth < kMaxDepth) unit_0044(c, 226u, depth + 1u); else { c.pc = 0x00211E70u; return; } if (c.pc != 0x00211980u) [[unlikely]] return; }
L_00211980:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[3].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.r[3].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00211940u | kUnwind; return; } goto L_00211940; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00211B88; } }
L_002119A0:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[18], c.r[18].w[0] - 27856u);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
L_002119B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00211B68; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00211B68; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8661u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00211B68; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8661u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[6].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 128u)));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));  if (t) { goto L_00211A10; } }
    set32(c.r[2], c.r[3].w[0] + 7u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_00211A10:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 130u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00211A48; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 2;
L_00211A48:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8941u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    set32(c.r[3], c.r[3].w[0] - 8128u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 12;
    { const bool t = c.r[5].sd[0] <= 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00211A88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211A80u);  if (depth < kMaxDepth) unit_0044(c, 226u, depth + 1u); else { c.pc = 0x00211E70u; return; } if (c.pc != 0x00211A80u) [[unlikely]] return; }
L_00211A80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00211AA8; } }
L_00211A88:
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211A94u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x00211A94u) [[unlikely]] return; }
L_00211A94:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211AA4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 227u, depth + 1u); else { c.pc = 0x00211EF0u; return; } if (c.pc != 0x00211AA4u) [[unlikely]] return; }
L_00211AA4:
    c.budget -= 1;
L_00211AA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 8944u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00211B68; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 180u)));
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 3));  if (t) { goto L_00211AD4; } }
    set32(c.r[2], c.r[4].w[0] + 7u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_00211AD4:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00211B08; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 2;
L_00211B08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8941u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    set32(c.r[3], c.r[3].w[0] - 8064u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 12;
    { const bool t = c.r[5].sd[0] <= 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00211B48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211B40u);  if (depth < kMaxDepth) unit_0044(c, 226u, depth + 1u); else { c.pc = 0x00211E70u; return; } if (c.pc != 0x00211B40u) [[unlikely]] return; }
L_00211B40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00211B68; } }
L_00211B48:
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211B54u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x00211B54u) [[unlikely]] return; }
L_00211B54:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211B64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 227u, depth + 1u); else { c.pc = 0x00211EF0u; return; } if (c.pc != 0x00211B64u) [[unlikely]] return; }
L_00211B64:
    c.budget -= 1;
L_00211B68:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] << 56;
    set32(c.r[17], c.r[17].w[0] + 8704u);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002119B0u | kUnwind; return; } goto L_002119B0; } }
    c.budget -= 1;
L_00211B88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00211BA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[7].d[0] = 0ull << 56;
    st8((c.r[1].w[0] - 30051u), static_cast<std::uint8_t>(0u));
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] - 30052u), static_cast<std::uint8_t>(0u));
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 27856u);
    c.budget -= 10;
L_00211BC8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00211C38; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00211C38; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8661u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[8].w[0] + 1u);  if (t) { goto L_00211C10; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[8].d[0] = c.r[3].d[0] << 56;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 30052u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8662u)));
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 30052u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00211C38; } }
L_00211C10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 30051u)));
    set32(c.r[3], c.r[7].w[0] + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8662u)));
    c.r[7].d[0] = c.r[3].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    st8((c.r[1].w[0] - 30051u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 10;
L_00211C38:
    set32(c.r[3], c.r[9].w[0] + 1u);
    c.r[9].d[0] = c.r[3].d[0] << 56;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    c.r[3].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00211BC8u | kUnwind; return; } goto L_00211BC8; } }
    c.r[4].d[0] = c.r[8].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_00211C80; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 30052u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[7].d[0] << 56;  if (t) { goto L_00211C88; } }
L_00211C80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 30048u)));
    c.r[4].d[0] = c.r[7].d[0] << 56;
    c.budget -= 2;
L_00211C88:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st8((c.r[1].w[0] - 30052u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00211CB8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 30051u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00211CC0; } }
L_00211CB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 30048u)));
    c.budget -= 2;
L_00211CC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] - 30051u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 30054u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 30052u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_00211CE8; } }
    st8((c.r[1].w[0] - 30052u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_00211CE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 30052u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[5].d[0] = c.r[5].d[0] & 31ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 30054u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 30051u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] - 30052u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_00211D20; } }
    st8((c.r[1].w[0] - 30051u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_00211D20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 30051u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[5].d[0] = c.r[5].d[0] & 31ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 30053u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 30052u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] - 30051u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_00211D58; } }
    st8((c.r[1].w[0] - 30052u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_00211D58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 30052u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_00211D70; } }
    st8((c.r[1].w[0] - 30052u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00211D70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 30053u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 30051u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_00211D90; } }
    st8((c.r[1].w[0] - 30051u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_00211D90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 30051u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_00211DA8; } }
    st8((c.r[1].w[0] - 30051u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00211DA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00211DB0:
    c.r[6].d[0] = c.r[4].d[0] << 56;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] - 19194u);
    set32(c.r[4], c.r[6].w[0] << 4);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 9);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 30054u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00211DF8; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_00211DF8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 31ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00211E10:
    c.r[6].d[0] = c.r[4].d[0] << 56;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] - 19194u);
    set32(c.r[4], c.r[6].w[0] << 4);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 9);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 30053u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00211E58; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_00211E58:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00211E68; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00211E68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00211E70:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 88u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00211E98; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[3].w[0] + 280u);  if (t) { goto L_00211EAC; } }
L_00211E98:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[3].w[0] + 276u);
    c.budget -= 5;
L_00211EAC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 30054u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00211ED8; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_00211ED8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 31ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00211EF0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 88u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00211F18; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[3].w[0] + 280u);  if (t) { goto L_00211F2C; } }
L_00211F18:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.budget -= 2;
L_00211F20:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[3].w[0] + 276u);
    c.budget -= 3;
L_00211F2C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 30053u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00211F58; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_00211F58:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00211F68; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00211F68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00211F70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x007E0000u);
    set32(c.r[17], c.r[17].w[0] - 8560u);
    set32(c.r[16], c.r[16].w[0] - 2208u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211FB8u); st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0046(c, 201u, depth + 1u); else { c.pc = 0x0021B4E0u; return; } if (c.pc != 0x00211FB8u) [[unlikely]] return; }
L_00211FB8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 77u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00211FC0:
    c.r[2].d[0] = ld16((c.r[16].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00211FE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00211FD4u);  if (depth < kMaxDepth) unit_006B(c, 203u, depth + 1u); else { c.pc = 0x002AECD0u; return; } if (c.pc != 0x00211FD4u) [[unlikely]] return; }
L_00211FD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00211FF0; } }
    c.budget -= 1;
L_00211FE0:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st32((c.r[1].w[0] - 20312u), c.r[2].w[0]);
    c.budget -= 4;
L_00211FF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212000u); st32((c.r[1].w[0] + 19072u), 0u);  if (depth < kMaxDepth) unit_0068(c, 110u, depth + 1u); else { c.pc = 0x002A2B70u; return; } if (c.pc != 0x00212000u) [[unlikely]] return; }
L_00212000:
    c.r[2].d[0] = ld16((c.r[16].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002120C8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 41u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);  if (t) { goto L_00212058; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 7744u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_00212040; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212034u); set32(c.r[4], c.r[4].w[0] - 16656u);  if (depth < kMaxDepth) unit_006B(c, 176u, depth + 1u); else { c.pc = 0x002AE5D0u; return; } if (c.pc != 0x00212034u) [[unlikely]] return; }
L_00212034:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002120C8; } }
    c.budget -= 1;
L_00212040:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[4].w[0] - 16784u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212050u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_006B(c, 176u, depth + 1u); else { c.pc = 0x002AE5D0u; return; } if (c.pc != 0x00212050u) [[unlikely]] return; }
L_00212050:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002120C8; } }
L_00212058:
    set32(c.r[2], ld32((c.r[28].w[0] - 23908u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 816u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], 0u + 5u);  if (t) { goto L_00212078; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212070u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006B(c, 186u, depth + 1u); else { c.pc = 0x002AE9F0u; return; } if (c.pc != 0x00212070u) [[unlikely]] return; }
L_00212070:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00212088; } }
L_00212078:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212084u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_006B(c, 186u, depth + 1u); else { c.pc = 0x002AE9F0u; return; } if (c.pc != 0x00212084u) [[unlikely]] return; }
L_00212084:
    c.budget -= 1;
L_00212088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212090u);  if (depth < kMaxDepth) unit_006B(c, 201u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x00212090u) [[unlikely]] return; }
L_00212090:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 7744u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_002120B8; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002120ACu); set32(c.r[4], c.r[4].w[0] - 16336u);  if (depth < kMaxDepth) unit_006B(c, 176u, depth + 1u); else { c.pc = 0x002AE5D0u; return; } if (c.pc != 0x002120ACu) [[unlikely]] return; }
L_002120AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002120C8; } }
    c.budget -= 1;
L_002120B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[4].w[0] - 16464u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002120C8u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_006B(c, 176u, depth + 1u); else { c.pc = 0x002AE5D0u; return; } if (c.pc != 0x002120C8u) [[unlikely]] return; }
L_002120C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002120D0u);  if (depth < kMaxDepth) unit_008E(c, 192u, depth + 1u); else { c.pc = 0x0033A2B0u; return; } if (c.pc != 0x002120D0u) [[unlikely]] return; }
L_002120D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002120D8u);  if (depth < kMaxDepth) unit_0044(c, 295u, depth + 1u); else { c.pc = 0x002124F0u; return; } if (c.pc != 0x002120D8u) [[unlikely]] return; }
L_002120D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002120E0u);  if (depth < kMaxDepth) unit_004F(c, 31u, depth + 1u); else { c.pc = 0x0023C6E0u; return; } if (c.pc != 0x002120E0u) [[unlikely]] return; }
L_002120E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002120E8u);  if (depth < kMaxDepth) unit_0044(c, 392u, depth + 1u); else { c.pc = 0x00213760u; return; } if (c.pc != 0x002120E8u) [[unlikely]] return; }
L_002120E8:
    set32(c.r[2], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[28].w[0] - 23904u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212100u); st8((c.r[1].w[0] + 10517u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004F(c, 99u, depth + 1u); else { c.pc = 0x0023DA00u; return; } if (c.pc != 0x00212100u) [[unlikely]] return; }
L_00212100:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00212108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212110u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 18u, depth + 1u); else { c.pc = 0x002A4310u; return; } if (c.pc != 0x00212110u) [[unlikely]] return; }
L_00212110:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00212108u | kUnwind; return; } goto L_00212108; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 19072u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00212148; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212144u);  if (depth < kMaxDepth) unit_004F(c, 152u, depth + 1u); else { c.pc = 0x0023FA10u; return; } if (c.pc != 0x00212144u) [[unlikely]] return; }
L_00212144:
    c.budget -= 1;
L_00212148:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 19072u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00212198; } }
L_00212160:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212168u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 31u, depth + 1u); else { c.pc = 0x002A4540u; return; } if (c.pc != 0x00212168u) [[unlikely]] return; }
L_00212168:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00212160u | kUnwind; return; } goto L_00212160; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212184u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0069(c, 73u, depth + 1u); else { c.pc = 0x002A5300u; return; } if (c.pc != 0x00212184u) [[unlikely]] return; }
L_00212184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021218Cu);  if (depth < kMaxDepth) unit_0069(c, 67u, depth + 1u); else { c.pc = 0x002A5240u; return; } if (c.pc != 0x0021218Cu) [[unlikely]] return; }
L_0021218C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212194u);  if (depth < kMaxDepth) unit_0068(c, 127u, depth + 1u); else { c.pc = 0x002A3230u; return; } if (c.pc != 0x00212194u) [[unlikely]] return; }
L_00212194:
    c.budget -= 1;
L_00212198:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002121A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0067(c, 192u, depth + 1u); else { c.pc = 0x0029F3C0u; return; } if (c.pc != 0x002121A4u) [[unlikely]] return; }
L_002121A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002121B4u); set32(c.r[4], c.r[4].w[0] - 16864u);  if (depth < kMaxDepth) unit_006B(c, 176u, depth + 1u); else { c.pc = 0x002AE5D0u; return; } if (c.pc != 0x002121B4u) [[unlikely]] return; }
L_002121B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 19072u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00880000u);  if (t) { goto L_00212300; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 15920u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00212300; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00212300; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], 0u + 26u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00212300; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212200u);  if (depth < kMaxDepth) unit_0069(c, 62u, depth + 1u); else { c.pc = 0x002A51B0u; return; } if (c.pc != 0x00212200u) [[unlikely]] return; }
L_00212200:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021220Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0067(c, 192u, depth + 1u); else { c.pc = 0x0029F3C0u; return; } if (c.pc != 0x0021220Cu) [[unlikely]] return; }
L_0021220C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 39u);  if (t) { goto L_00212268; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00212268; } }
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 11u);  if (t) { goto L_00212268; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00212268; } }
    set32(c.r[2], c.r[3].w[0] - 15u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 27u);  if (t) { goto L_00212268; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00212268; } }
    set32(c.r[2], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00212278; } }
    c.budget -= 1;
L_00212268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212270u);  if (depth < kMaxDepth) unit_004F(c, 179u, depth + 1u); else { c.pc = 0x0023FDF0u; return; } if (c.pc != 0x00212270u) [[unlikely]] return; }
L_00212270:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00212280; } }
L_00212278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212280u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0069(c, 73u, depth + 1u); else { c.pc = 0x002A5300u; return; } if (c.pc != 0x00212280u) [[unlikely]] return; }
L_00212280:
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021228Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 433u)));  if (depth < kMaxDepth) unit_004F(c, 99u, depth + 1u); else { c.pc = 0x0023DA00u; return; } if (c.pc != 0x0021228Cu) [[unlikely]] return; }
L_0021228C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021229Cu); set32(c.r[4], c.r[4].w[0] - 16848u);  if (depth < kMaxDepth) unit_006B(c, 176u, depth + 1u); else { c.pc = 0x002AE5D0u; return; } if (c.pc != 0x0021229Cu) [[unlikely]] return; }
L_0021229C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[3].w[0] - 3u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 19u);  if (t) { goto L_002122C8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002122C8; } }
    set32(c.r[2], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002122D8; } }
L_002122C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[4].w[0] - 16832u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002122D8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006B(c, 176u, depth + 1u); else { c.pc = 0x002AE5D0u; return; } if (c.pc != 0x002122D8u) [[unlikely]] return; }
L_002122D8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23776u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00880000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[4].w[0] + 15920u);
    c.r[5].d[0] = 0ull | 32773ull;
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 433u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002122FCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004F(c, 116u, depth + 1u); else { c.pc = 0x0023E200u; return; } if (c.pc != 0x002122FCu) [[unlikely]] return; }
L_002122FC:
    c.budget -= 1;
L_00212300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212308u);  if (depth < kMaxDepth) unit_0069(c, 62u, depth + 1u); else { c.pc = 0x002A51B0u; return; } if (c.pc != 0x00212308u) [[unlikely]] return; }
L_00212308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212310u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0069(c, 73u, depth + 1u); else { c.pc = 0x002A5300u; return; } if (c.pc != 0x00212310u) [[unlikely]] return; }
L_00212310:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021231Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0067(c, 192u, depth + 1u); else { c.pc = 0x0029F3C0u; return; } if (c.pc != 0x0021231Cu) [[unlikely]] return; }
L_0021231C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 19072u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 4u);  if (t) { goto L_00212350; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021233Cu);  if (depth < kMaxDepth) unit_0069(c, 73u, depth + 1u); else { c.pc = 0x002A5300u; return; } if (c.pc != 0x0021233Cu) [[unlikely]] return; }
L_0021233C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212344u);  if (depth < kMaxDepth) unit_0069(c, 67u, depth + 1u); else { c.pc = 0x002A5240u; return; } if (c.pc != 0x00212344u) [[unlikely]] return; }
L_00212344:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021234Cu);  if (depth < kMaxDepth) unit_0069(c, 8u, depth + 1u); else { c.pc = 0x002A4120u; return; } if (c.pc != 0x0021234Cu) [[unlikely]] return; }
L_0021234C:
    c.budget -= 1;
L_00212350:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00212358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212360u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 25u, depth + 1u); else { c.pc = 0x002A4440u; return; } if (c.pc != 0x00212360u) [[unlikely]] return; }
L_00212360:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00212358u | kUnwind; return; } goto L_00212358; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021237Cu);  if (depth < kMaxDepth) unit_004D(c, 119u, depth + 1u); else { c.pc = 0x00236040u; return; } if (c.pc != 0x0021237Cu) [[unlikely]] return; }
L_0021237C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 41u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002123A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212394u);  if (depth < kMaxDepth) unit_00C0(c, 313u, depth + 1u); else { c.pc = 0x00403590u; return; } if (c.pc != 0x00212394u) [[unlikely]] return; }
L_00212394:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002123A8; } }
    c.budget -= 1;
L_002123A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002123A8u);  if (depth < kMaxDepth) unit_00C0(c, 309u, depth + 1u); else { c.pc = 0x00403330u; return; } if (c.pc != 0x002123A8u) [[unlikely]] return; }
L_002123A8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 41u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002123F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002123C0u);  if (depth < kMaxDepth) unit_005B(c, 99u, depth + 1u); else { c.pc = 0x0026CEE0u; return; } if (c.pc != 0x002123C0u) [[unlikely]] return; }
L_002123C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23908u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 816u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], 0u + 4u);  if (t) { goto L_002123E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002123D8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_006B(c, 186u, depth + 1u); else { c.pc = 0x002AE9F0u; return; } if (c.pc != 0x002123D8u) [[unlikely]] return; }
L_002123D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002123F0; } }
L_002123E0:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002123ECu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006B(c, 186u, depth + 1u); else { c.pc = 0x002AE9F0u; return; } if (c.pc != 0x002123ECu) [[unlikely]] return; }
L_002123EC:
    c.budget -= 1;
L_002123F0:
    c.r[2].d[0] = ld16((c.r[16].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00212438; } }
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_00212438; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 816u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_00212428; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212420u); set32(c.r[4], c.r[4].w[0] - 16496u);  if (depth < kMaxDepth) unit_006B(c, 176u, depth + 1u); else { c.pc = 0x002AE5D0u; return; } if (c.pc != 0x00212420u) [[unlikely]] return; }
L_00212420:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00212438; } }
L_00212428:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212434u); set32(c.r[4], c.r[4].w[0] - 16528u);  if (depth < kMaxDepth) unit_006B(c, 176u, depth + 1u); else { c.pc = 0x002AE5D0u; return; } if (c.pc != 0x00212434u) [[unlikely]] return; }
L_00212434:
    c.budget -= 1;
L_00212438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212440u);  if (depth < kMaxDepth) unit_004D(c, 77u, depth + 1u); else { c.pc = 0x002357E0u; return; } if (c.pc != 0x00212440u) [[unlikely]] return; }
L_00212440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212448u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_004D(c, 56u, depth + 1u); else { c.pc = 0x00234E50u; return; } if (c.pc != 0x00212448u) [[unlikely]] return; }
L_00212448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212450u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 45u, depth + 1u); else { c.pc = 0x002D8B20u; return; } if (c.pc != 0x00212450u) [[unlikely]] return; }
L_00212450:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 16208u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212468u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0067(c, 173u, depth + 1u); else { c.pc = 0x0029ED30u; return; } if (c.pc != 0x00212468u) [[unlikely]] return; }
L_00212468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212470u);  if (depth < kMaxDepth) unit_0050(c, 407u, depth + 1u); else { c.pc = 0x002438C0u; return; } if (c.pc != 0x00212470u) [[unlikely]] return; }
L_00212470:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021247Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0067(c, 192u, depth + 1u); else { c.pc = 0x0029F3C0u; return; } if (c.pc != 0x0021247Cu) [[unlikely]] return; }
L_0021247C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 7u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002124A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212498u);  if (depth < kMaxDepth) unit_0044(c, 359u, depth + 1u); else { c.pc = 0x00213250u; return; } if (c.pc != 0x00212498u) [[unlikely]] return; }
L_00212498:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002124A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0067(c, 192u, depth + 1u); else { c.pc = 0x0029F3C0u; return; } if (c.pc != 0x002124A4u) [[unlikely]] return; }
L_002124A4:
    c.budget -= 1;
L_002124A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002124B0u);  if (depth < kMaxDepth) unit_008B(c, 24u, depth + 1u); else { c.pc = 0x0032C1D0u; return; } if (c.pc != 0x002124B0u) [[unlikely]] return; }
L_002124B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002124B8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 45u, depth + 1u); else { c.pc = 0x002D8B20u; return; } if (c.pc != 0x002124B8u) [[unlikely]] return; }
L_002124B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002124C0u);  if (depth < kMaxDepth) unit_008B(c, 26u, depth + 1u); else { c.pc = 0x0032C200u; return; } if (c.pc != 0x002124C0u) [[unlikely]] return; }
L_002124C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002124C8u);  if (depth < kMaxDepth) unit_0046(c, 202u, depth + 1u); else { c.pc = 0x0021B4F0u; return; } if (c.pc != 0x002124C8u) [[unlikely]] return; }
L_002124C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002124D0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0076(c, 45u, depth + 1u); else { c.pc = 0x002D8B20u; return; } if (c.pc != 0x002124D0u) [[unlikely]] return; }
L_002124D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002124D8u);  if (depth < kMaxDepth) unit_0045(c, 89u, depth + 1u); else { c.pc = 0x00214EB0u; return; } if (c.pc != 0x002124D8u) [[unlikely]] return; }
L_002124D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002124E0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 234u, depth + 1u); else { c.pc = 0x00225930u; return; } if (c.pc != 0x002124E0u) [[unlikely]] return; }
L_002124E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00211FC0u | kUnwind; return; } goto L_00211FC0; } }
    c.budget -= 2;
L_002124F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00212538; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212510u);  if (depth < kMaxDepth) unit_0043(c, 413u, depth + 1u); else { c.pc = 0x0020FEA0u; return; } if (c.pc != 0x00212510u) [[unlikely]] return; }
L_00212510:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 8000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00212534u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00212534u) [[unlikely]] return; }
L_00212534:
    c.budget -= 1;
L_00212538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212540u);  if (depth < kMaxDepth) unit_0043(c, 423u, depth + 1u); else { c.pc = 0x0020FF90u; return; } if (c.pc != 0x00212540u) [[unlikely]] return; }
L_00212540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212548u);  if (depth < kMaxDepth) unit_0043(c, 419u, depth + 1u); else { c.pc = 0x0020FF30u; return; } if (c.pc != 0x00212548u) [[unlikely]] return; }
L_00212548:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00212560:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01F90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[2].d[0] | 59392ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[28].w[0] - 24080u), c.r[4].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212580u); set32(c.r[6], 0u + 6168u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00212580u) [[unlikely]] return; }
L_00212580:
    set32(c.r[2], ld32((c.r[28].w[0] - 24080u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01DE0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01EE0000u);
    set32(c.r[5], 0u + 1394u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021259Cu); st32((c.r[2].w[0] + 6140u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0044(c, 305u, depth + 1u); else { c.pc = 0x002126F0u; return; } if (c.pc != 0x0021259Cu) [[unlikely]] return; }
L_0021259C:
    set32(c.r[3], ld32((c.r[28].w[0] - 24080u)));
    set32(c.r[7], 0u + 20u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[6], 0u + 5u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x01EE0000u);
    set32(c.r[4], c.r[4].w[0] - 27248u);
    st32((c.r[3].w[0] + 6060u), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24080u)));
    st32((c.r[3].w[0] + 6068u), c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[28].w[0] - 24080u)));
    set32(c.r[6], ld32((c.r[7].w[0] + 6060u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 6068u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[7].w[0] + 6076u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24080u)));
    st32((c.r[3].w[0] + 6084u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 24080u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 6060u)));
    st32((c.r[5].w[0] + 6064u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 24080u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 6068u)));
    st32((c.r[5].w[0] + 6072u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 24080u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 6076u)));
    st32((c.r[5].w[0] + 6080u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 24080u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 6084u)));
    st32((c.r[5].w[0] + 6088u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24080u)));
    st32((c.r[3].w[0] + 6136u), c.r[4].w[0]);
    st32((c.r[28].w[0] - 24084u), 0u);
    st32((c.r[28].w[0] - 24088u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 35;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00212630:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01F90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[2].d[0] | 59392ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[28].w[0] - 24080u), c.r[4].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212650u); set32(c.r[6], 0u + 6168u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00212650u) [[unlikely]] return; }
L_00212650:
    set32(c.r[3], ld32((c.r[28].w[0] - 24080u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x01DE0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[7], 0u + 20u);
    set32(c.r[6], 0u + 5u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x01EE0000u);
    set32(c.r[4], c.r[4].w[0] - 27248u);
    st32((c.r[3].w[0] + 6140u), c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24080u)));
    st32((c.r[3].w[0] + 6060u), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24080u)));
    st32((c.r[3].w[0] + 6068u), c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[28].w[0] - 24080u)));
    set32(c.r[6], ld32((c.r[7].w[0] + 6060u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 6068u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[7].w[0] + 6076u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24080u)));
    st32((c.r[3].w[0] + 6084u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 24080u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 6060u)));
    st32((c.r[5].w[0] + 6064u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 24080u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 6068u)));
    st32((c.r[5].w[0] + 6072u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 24080u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 6076u)));
    st32((c.r[5].w[0] + 6080u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 24080u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 6084u)));
    st32((c.r[5].w[0] + 6088u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24080u)));
    st32((c.r[3].w[0] + 6136u), c.r[4].w[0]);
    st32((c.r[28].w[0] - 24084u), 0u);
    st32((c.r[28].w[0] - 24088u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 38;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002126F0:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001251F0u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 73u, depth); }
L_00212700:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], 0u + 4u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; st32((c.r[28].w[0] - 24084u), c.r[3].w[0]);  if (t) { goto L_00212918; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00212880; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[8], 0u + 2u);  if (t) { goto L_00212880; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[8].d[0];  if (t) { goto L_002127E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00212748; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00212920; } }
    c.budget -= 1;
L_00212748:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[7].d[0] = c.r[2].d[0] | 26214ull;
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24080u)));
    set32(c.r[6], 0u + 400u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[2].w[0] + 6104u), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24080u)));
    st32((c.r[2].w[0] + 6124u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24080u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021277Cu); st32((c.r[2].w[0] + 6128u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0044(c, 348u, depth + 1u); else { c.pc = 0x00213090u; return; } if (c.pc != 0x0021277Cu) [[unlikely]] return; }
L_0021277C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212788u); c.r[4].d[0] = c.r[2].d[0] | 32896ull;  if (depth < kMaxDepth) unit_0044(c, 349u, depth + 1u); else { c.pc = 0x002130B0u; return; } if (c.pc != 0x00212788u) [[unlikely]] return; }
L_00212788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212790u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 353u, depth + 1u); else { c.pc = 0x00213160u; return; } if (c.pc != 0x00212790u) [[unlikely]] return; }
L_00212790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212798u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 354u, depth + 1u); else { c.pc = 0x00213170u; return; } if (c.pc != 0x00212798u) [[unlikely]] return; }
L_00212798:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002127A8u);  if (depth < kMaxDepth) unit_0044(c, 347u, depth + 1u); else { c.pc = 0x00213080u; return; } if (c.pc != 0x002127A8u) [[unlikely]] return; }
L_002127A8:
    set32(c.r[2], ld32((c.r[28].w[0] - 24080u)));
    set32(c.r[5], 0u + 512u);
    set32(c.r[4], 0u + 24u);
    set32(c.r[3], 0u + 20u);
    st16((c.r[2].w[0] + 6158u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24080u)));
    st16((c.r[2].w[0] + 6160u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24080u)));
    st16((c.r[2].w[0] + 6162u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 24080u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6162u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 6164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00212920; } }
L_002127E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[7].d[0] = c.r[2].d[0] | 26214ull;
    set32(c.r[4], 0u + 24u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24080u)));
    set32(c.r[6], 0u + 400u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[2].w[0] + 6104u), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24080u)));
    st32((c.r[2].w[0] + 6124u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24080u)));
    st32((c.r[2].w[0] + 6128u), c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212818u); st32((c.r[28].w[0] - 24084u), c.r[8].w[0]);  if (depth < kMaxDepth) unit_0044(c, 348u, depth + 1u); else { c.pc = 0x00213090u; return; } if (c.pc != 0x00212818u) [[unlikely]] return; }
L_00212818:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212824u); c.r[4].d[0] = c.r[2].d[0] | 32896ull;  if (depth < kMaxDepth) unit_0044(c, 349u, depth + 1u); else { c.pc = 0x002130B0u; return; } if (c.pc != 0x00212824u) [[unlikely]] return; }
L_00212824:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021282Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 353u, depth + 1u); else { c.pc = 0x00213160u; return; } if (c.pc != 0x0021282Cu) [[unlikely]] return; }
L_0021282C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212834u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 354u, depth + 1u); else { c.pc = 0x00213170u; return; } if (c.pc != 0x00212834u) [[unlikely]] return; }
L_00212834:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212844u);  if (depth < kMaxDepth) unit_0044(c, 347u, depth + 1u); else { c.pc = 0x00213080u; return; } if (c.pc != 0x00212844u) [[unlikely]] return; }
L_00212844:
    set32(c.r[2], ld32((c.r[28].w[0] - 24080u)));
    set32(c.r[5], 0u + 512u);
    set32(c.r[4], 0u + 22u);
    set32(c.r[3], 0u + 20u);
    st16((c.r[2].w[0] + 6158u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24080u)));
    st16((c.r[2].w[0] + 6160u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24080u)));
    st16((c.r[2].w[0] + 6162u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 24080u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6162u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 6164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00212920; } }
    c.budget -= 1;
L_00212880:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[7].d[0] = c.r[2].d[0] | 26214ull;
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24080u)));
    set32(c.r[6], 0u + 100u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[2].w[0] + 6104u), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24080u)));
    st32((c.r[2].w[0] + 6124u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24080u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002128B4u); st32((c.r[2].w[0] + 6128u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0044(c, 348u, depth + 1u); else { c.pc = 0x00213090u; return; } if (c.pc != 0x002128B4u) [[unlikely]] return; }
L_002128B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002128C0u); c.r[4].d[0] = c.r[2].d[0] | 32896ull;  if (depth < kMaxDepth) unit_0044(c, 349u, depth + 1u); else { c.pc = 0x002130B0u; return; } if (c.pc != 0x002128C0u) [[unlikely]] return; }
L_002128C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002128C8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 353u, depth + 1u); else { c.pc = 0x00213160u; return; } if (c.pc != 0x002128C8u) [[unlikely]] return; }
L_002128C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002128D0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 354u, depth + 1u); else { c.pc = 0x00213170u; return; } if (c.pc != 0x002128D0u) [[unlikely]] return; }
L_002128D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002128E0u);  if (depth < kMaxDepth) unit_0044(c, 347u, depth + 1u); else { c.pc = 0x00213080u; return; } if (c.pc != 0x002128E0u) [[unlikely]] return; }
L_002128E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 24080u)));
    set32(c.r[5], 0u + 256u);
    set32(c.r[4], 0u + 24u);
    set32(c.r[3], 0u + 10u);
    st16((c.r[2].w[0] + 6158u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24080u)));
    st16((c.r[2].w[0] + 6160u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24080u)));
    st16((c.r[2].w[0] + 6162u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 24080u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6162u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 6164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00212920; } }
L_00212918:
    st32((c.r[28].w[0] - 24084u), 0u);
    c.budget -= 2;
L_00212920:
    set32(c.r[4], ld32((c.r[28].w[0] - 24080u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[4].w[0] + 6048u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212934u); set32(c.r[6], c.r[2].w[0] - c.r[4].w[0]);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00212934u) [[unlikely]] return; }
L_00212934:
    set32(c.r[2], ld32((c.r[28].w[0] - 24080u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1600u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212948u); set32(c.r[4], c.r[2].w[0] + 2048u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00212948u) [[unlikely]] return; }
L_00212948:
    set32(c.r[2], ld32((c.r[28].w[0] - 24080u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 800u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021295Cu); set32(c.r[4], c.r[2].w[0] + 3648u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0021295Cu) [[unlikely]] return; }
L_0021295C:
    set32(c.r[2], ld32((c.r[28].w[0] - 24080u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[2].w[0] + 6092u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24080u)));
    st32((c.r[2].w[0] + 6096u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24080u)));
    st32((c.r[2].w[0] + 6100u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24080u)));
    c.f[0] = ld32((c.r[2].w[0] + 6128u));
    st32((c.r[2].w[0] + 6108u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24080u)));
    c.f[0] = ld32((c.r[2].w[0] + 6128u));
    st32((c.r[2].w[0] + 6112u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24080u)));
    st32((c.r[2].w[0] + 6116u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24080u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002129A4u); st32((c.r[2].w[0] + 6120u), 0u);  if (depth < kMaxDepth) unit_0044(c, 385u, depth + 1u); else { c.pc = 0x00213650u; return; } if (c.pc != 0x002129A4u) [[unlikely]] return; }
L_002129A4:
    set32(c.r[2], ld32((c.r[28].w[0] - 24080u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 6136u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002129BCu); c.r[6].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002129BCu) [[unlikely]] return; }
L_002129BC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002129D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002129E0u);  if (depth < kMaxDepth) unit_0044(c, 329u, depth + 1u); else { c.pc = 0x00212A40u; return; } if (c.pc != 0x002129E0u) [[unlikely]] return; }
L_002129E0:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[4], c.r[3].w[0] - 33u);
    set32(c.r[2], c.r[2].w[0] - 33u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00212A40:
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    c.r[5].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.r[1].d[0] = c.r[4].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 177u);  if (t) { goto L_00212A60; } }
    set32(c.r[2], 0u + 113u);
    c.budget -= 1;
L_00212A60:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[2].sd[0] < 128ll ? 1ull : 0ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_00212A90; } }
    set32(c.r[2], c.r[5].w[0] - 1u);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
L_00212A90:
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < 158ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] - 125u);  if (t) { goto L_00212AB0; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_00212AB8; } }
L_00212AB0:
    set32(c.r[2], c.r[5].w[0] - 31u);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_00212AB8:
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[3], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  c.pc = t; return; }
L_00212AD0:
    c.r[10].d[0] = c.r[4].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[8], c.r[7].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - 7808u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[7], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] - 7806u);
    c.r[11].d[0] = ld16((c.r[7].w[0]));
    set32(c.r[4], c.r[3].w[0] + c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 7804u);
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 48);
    set32(c.r[9], c.r[3].w[0] + c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] - 7802u);
    st16((c.r[29].w[0] + 8u), static_cast<std::uint16_t>(c.r[11].w[0]));
    set32(c.r[8], c.r[3].w[0] + c.r[8].w[0]);
    c.r[11].d[0] = ld16((c.r[4].w[0]));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 24080u)));
    st16((c.r[29].w[0] + 10u), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[9].d[0] = ld16((c.r[9].w[0]));
    set32(c.r[4], c.r[6].w[0] + c.r[3].w[0]);
    st16((c.r[29].w[0] + 12u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[8].d[0] = ld16((c.r[8].w[0]));
    st16((c.r[29].w[0] + 14u), static_cast<std::uint16_t>(c.r[8].w[0]));
    set32(c.r[9], ld32((c.r[4].w[0] + 6076u)));
    set32(c.r[8], ld32((c.r[4].w[0] + 6084u)));
    mmi::mult(c, 0, c.r[9].w[0], c.r[10].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[4].w[0] + 6060u)));
    c.r[1].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 35;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[9], c.r[8].w[0] + c.r[9].w[0]);  if (t) { goto L_00212C20; } }
    c.budget -= 1;
L_00212B60:
    set32(c.r[11], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[10], ld32((c.r[11].w[0] + 6068u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].d[0] = 0ll < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00212C08; } }
L_00212B78:
    c.r[13].d[0] = ld8((c.r[9].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[13].d[0] & 192ull;
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 6));
    c.r[10].d[0] = c.r[10].d[0] & 3ull;
    c.r[3].d[0] = c.r[13].d[0] & 48ull;
    set32(c.r[10], c.r[10].w[0] << 1);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    set32(c.r[10], c.r[10].w[0] + c.r[29].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.r[12].d[0] = ld16((c.r[10].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[11], c.r[3].w[0] + c.r[29].w[0]);
    c.r[3].d[0] = c.r[13].d[0] & 3ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[12].w[0]));
    c.r[10].d[0] = c.r[13].d[0] & 12ull;
    c.r[11].d[0] = ld16((c.r[11].w[0] + 8u));
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 2));
    c.r[10].d[0] = c.r[10].d[0] & 3ull;
    set32(c.r[10], c.r[10].w[0] << 1);
    set32(c.r[10], c.r[10].w[0] + c.r[29].w[0]);
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[10].d[0] = ld16((c.r[10].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 4u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 8u));
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 24080u)));
    set32(c.r[11], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[10], ld32((c.r[11].w[0] + 6068u)));
    c.r[10].d[0] = c.r[8].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 36;
    { const bool t = c.r[10].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00212B78u | kUnwind; return; } goto L_00212B78; } }
L_00212C08:
    set32(c.r[4], ld32((c.r[11].w[0] + 6060u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00212B60u | kUnwind; return; } goto L_00212B60; } }
    c.budget -= 1;
L_00212C20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00212C30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24080u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 6158u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 6100u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 6140u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[2].w[0] + 6136u)));
    set32(c.r[5], c.r[5].w[0] << 1);
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 24080u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 6124u)));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00212DC8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00212C80:
    set32(c.r[4], ld32((c.r[28].w[0] - 24080u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 6100u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 3648u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] << 5);  if (t) { goto L_00212D80; } }
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212CC4u); c.r[4].d[0] = ld16((c.r[2].w[0] + 2048u));  if (depth < kMaxDepth) unit_0044(c, 327u, depth + 1u); else { c.pc = 0x002129D0u; return; } if (c.pc != 0x00212CC4u) [[unlikely]] return; }
L_00212CC4:
    set32(c.r[5], ld32((c.r[28].w[0] - 24080u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    set32(c.r[3], ld32((c.r[5].w[0] + 6100u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[6].d[0] = ld8((c.r[2].w[0] + 4448u));
    c.r[7].d[0] = ld8((c.r[2].w[0] + 5248u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212CFCu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0044(c, 330u, depth + 1u); else { c.pc = 0x00212AD0u; return; } if (c.pc != 0x00212CFCu) [[unlikely]] return; }
L_00212CFC:
    set32(c.r[4], ld32((c.r[28].w[0] - 24080u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 6124u)));
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 6100u)));
    set32(c.r[7], ld32((c.r[4].w[0] + 6140u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212D1Cu); set32(c.r[5], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 189u, depth + 1u); else { c.pc = 0x0012ECB0u; return; } if (c.pc != 0x00212D1Cu) [[unlikely]] return; }
L_00212D1C:
    set32(c.r[4], ld32((c.r[28].w[0] - 24080u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 6100u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 3648u));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st8((c.r[3].w[0] + 3648u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 24080u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 6100u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 3648u));
    c.r[2].d[0] = c.r[2].d[0] & 253ull;
    st8((c.r[3].w[0] + 3648u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 25;
L_00212D80:
    set32(c.r[4], ld32((c.r[28].w[0] - 24080u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 6100u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 3648u));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 254ull;
    st8((c.r[3].w[0] + 3648u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 24080u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 6124u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00212C80u | kUnwind; return; } goto L_00212C80; } }
L_00212DC8:
    set32(c.r[3], ld32((c.r[5].w[0] + 6100u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[4].d[0] = c.r[2].d[0] | 32896ull;
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212DE0u); st32((c.r[5].w[0] + 6100u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 349u, depth + 1u); else { c.pc = 0x002130B0u; return; } if (c.pc != 0x00212DE0u) [[unlikely]] return; }
L_00212DE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00212DE8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 82u, depth + 1u); else { c.pc = 0x00104560u; return; } if (c.pc != 0x00212DE8u) [[unlikely]] return; }
L_00212DE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00212E00:
    set32(c.r[7], ld32((c.r[28].w[0] - 24080u)));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[7].w[0] + 6124u)));
    c.r[1].d[0] = 0ll < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[7].w[0] + 6124u);  if (t) { goto L_00212EA8; } }
    set32(c.r[10], ld32((c.r[7].w[0] + 6100u)));
    c.r[8].d[0] = c.r[4].d[0] << 48;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    set32(c.r[4], c.r[7].w[0] + 6100u);
    set32(c.r[9], c.r[10].w[0] << 2);
    set32(c.r[10], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[10].w[0] << 2);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[9].w[0] << 5);
    set32(c.r[11], c.r[7].w[0] + c.r[9].w[0]);
    c.budget -= 10;
L_00212E40:
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0] + 2048u)));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != c.r[8].d[0];  if (t) { goto L_00212E90; } }
    set32(c.r[10], ld32((c.r[4].w[0])));
    set32(c.r[9], c.r[10].w[0] << 2);
    set32(c.r[10], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[10].w[0] << 2);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[9].w[0] << 4);
    set32(c.r[9], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[10], c.r[9].w[0] + c.r[2].w[0]);
    c.r[9].d[0] = ld8((c.r[10].w[0] + 4448u));
    c.budget -= 11;
    { const bool t = c.r[9].d[0] != c.r[5].d[0];  if (t) { goto L_00212E90; } }
    c.r[9].d[0] = ld8((c.r[10].w[0] + 5248u));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != c.r[6].d[0];  if (t) { goto L_00212E90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00212EB0; } }
    c.budget -= 1;
L_00212E90:
    set32(c.r[9], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[9].d[0] = c.r[2].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[11], c.r[11].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00212E40u | kUnwind; return; } goto L_00212E40; } }
    c.budget -= 1;
L_00212EA8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_00212EB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00212EC0:
    set32(c.r[7], ld32((c.r[28].w[0] - 24080u)));
    set32(c.r[9], ld32((c.r[7].w[0] + 6124u)));
    c.r[1].d[0] = 0ll < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[11].d[0] = 0ull + 0ull;  if (t) { goto L_00212F90; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 6100u)));
    set32(c.r[6], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[10], ld32((c.r[2].w[0] + 6092u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 5);
    set32(c.r[8], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[5], c.r[7].w[0] + c.r[2].w[0]);
    c.budget -= 11;
L_00212F00:
    mmi::div(c, 0, c.r[10].w[0], c.r[9].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2048u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);  if (t) { goto L_00212F40; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 3648u));
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00212F80; } }
    c.r[3].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00212F80; } }
L_00212F40:
    set32(c.r[4], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 6092u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 6092u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24080u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 6100u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 6124u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 6092u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 6092u), c.r[3].w[0]);  if (t) { goto L_00212F98; } }
L_00212F80:
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.r[2].d[0] = c.r[11].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[10], c.r[10].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00212F00u | kUnwind; return; } goto L_00212F00; } }
L_00212F90:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_00212F98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00212FA0:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 160ll ? 1ull : 0ull;  if (t) { goto L_00212FC0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00212FC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00212FE8; } }
L_00212FC0:
    c.r[2].d[0] = c.r[3].sd[0] < 224ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 256ll ? 1ull : 0ull;  if (t) { goto L_00212FE0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00212FE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00212FE8; } }
    c.budget -= 1;
L_00212FE0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00212FE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00212FF0:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].sd[0] < 96ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 32767u);  if (t) { goto L_00213010; } }
    set32(c.r[2], c.r[2].w[0] + 1312u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_00213048; } }
    c.budget -= 1;
L_00213010:
    c.r[1].d[0] = c.r[3].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 32767u);  if (t) { goto L_00213028; } }
    set32(c.r[2], c.r[2].w[0] + 1313u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_00213048; } }
L_00213028:
    set32(c.r[2], 0u + 165u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] + 32767u);  if (t) { goto L_0021303C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull | 34211ull;  if (t) { goto L_00213044; } }
L_0021303C:
    set32(c.r[2], c.r[2].w[0] + 1279u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_00213044:
    c.budget -= 1;
L_00213048:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00213050:
    set32(c.r[6], ld32((c.r[28].w[0] - 24080u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 7952u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[6].w[0] + 6120u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[28].w[0] - 24080u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 6144u), c.r[4].w[0]);  c.pc = t; return; }
L_00213080:
    set32(c.r[3], ld32((c.r[28].w[0] - 24080u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 6116u), c.f[12]);  c.pc = t; return; }
L_00213090:
    set32(c.r[3], ld32((c.r[28].w[0] - 24080u)));
    st16((c.r[3].w[0] + 6152u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 24080u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[3].w[0] + 6154u), static_cast<std::uint16_t>(c.r[5].w[0]));  c.pc = t; return; }
L_002130B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], c.r[2].w[0] >> 24);
    set32(c.r[3], ld32((c.r[28].w[0] - 24080u)));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[3].w[0] + 6144u), c.r[4].w[0]);  if (t) { goto L_002130E0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002130FC; } }
L_002130E0:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_002130FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021311Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0005(c, 46u, depth + 1u); else { c.pc = 0x001158E0u; return; } if (c.pc != 0x0021311Cu) [[unlikely]] return; }
L_0021311C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FF00000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021312Cu); c.r[5].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_0000(c, 38u, depth + 1u); else { c.pc = 0x001002A0u; return; } if (c.pc != 0x0021312Cu) [[unlikely]] return; }
L_0021312C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00213140; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 3;
L_00213140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213148u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0044(c, 347u, depth + 1u); else { c.pc = 0x00213080u; return; } if (c.pc != 0x00213148u) [[unlikely]] return; }
L_00213148:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00213160:
    set32(c.r[3], ld32((c.r[28].w[0] - 24080u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 6148u), c.r[4].w[0]);  c.pc = t; return; }
L_00213170:
    set32(c.r[3], ld32((c.r[28].w[0] - 24080u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[3].w[0] + 6156u), static_cast<std::uint16_t>(c.r[4].w[0]));  c.pc = t; return; }
L_00213180:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], 0u + 4u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 112u), c.r[7].w[0]);
    st64((c.r[29].w[0] + 128u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 136u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 152u), c.r[11].d[0]);
    st32((c.r[28].w[0] - 24084u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002131D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002131DC; } }
L_002131D0:
    set32(c.r[2], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.budget -= 3;
L_002131DC:
    set32(c.r[5], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[2], c.r[29].w[0] + 160u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[6], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002131F4u); set32(c.r[4], c.r[4].w[0] - 27392u);  if (depth < kMaxDepth) unit_0008(c, 321u, depth + 1u); else { c.pc = 0x00123268u; return; } if (c.pc != 0x002131F4u) [[unlikely]] return; }
L_002131F4:
    set32(c.r[2], ld32((c.r[28].w[0] - 24080u)));
    set32(c.r[3], 0u + 4u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213208u); st32((c.r[2].w[0] + 6132u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0044(c, 346u, depth + 1u); else { c.pc = 0x00213050u; return; } if (c.pc != 0x00213208u) [[unlikely]] return; }
L_00213208:
    c.f[1] = c.r[18].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.f[0] = c.r[17].w[0];
    set32(c.r[4], ld32((c.r[28].w[0] - 24080u)));
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[5], c.r[5].w[0] - 27392u);
    c.f[14] = 0u;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021322Cu); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 193u, depth + 1u); else { c.pc = 0x0012EDD0u; return; } if (c.pc != 0x0021322Cu) [[unlikely]] return; }
L_0021322C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00213250:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24084u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00213280; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021326Cu);  if (depth < kMaxDepth) unit_0044(c, 333u, depth + 1u); else { c.pc = 0x00212C30u; return; } if (c.pc != 0x0021326Cu) [[unlikely]] return; }
L_0021326C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213278u); set32(c.r[4], c.r[4].w[0] - 27248u);  if (depth < kMaxDepth) unit_000A(c, 231u, depth + 1u); else { c.pc = 0x0012B650u; return; } if (c.pc != 0x00213278u) [[unlikely]] return; }
L_00213278:
    st32((c.r[28].w[0] - 24084u), 0u);
    c.budget -= 2;
L_00213280:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00213290:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 24084u), 0u);  c.pc = t; return; }
L_002132A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00E90000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[2].d[0] | 24576ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002132C8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002132C8u) [[unlikely]] return; }
L_002132C8:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_002132D8:
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00213320; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 161u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00213358; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00E90000u);
    set32(c.r[5], c.r[4].w[0] + 161u);
    c.r[2].d[0] = c.r[2].d[0] | 24576ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213314u); set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 373u, depth + 1u); else { c.pc = 0x00213450u; return; } if (c.pc != 0x00213314u) [[unlikely]] return; }
L_00213314:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00213358; } }
    c.budget -= 1;
L_00213320:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 56u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[18].w[0] & 31u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00213358; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00E90000u);
    c.r[3].d[0] = c.r[3].d[0] | 24576ull;
    set32(c.r[4], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213354u); set32(c.r[5], c.r[2].w[0] + 161u);  if (depth < kMaxDepth) unit_0044(c, 373u, depth + 1u); else { c.pc = 0x00213450u; return; } if (c.pc != 0x00213354u) [[unlikely]] return; }
L_00213354:
    c.budget -= 1;
L_00213358:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 21u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 12288u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002132D8u | kUnwind; return; } goto L_002132D8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00213390:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01DC0000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00040000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[2].d[0] | 16384ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002133C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002133C8u) [[unlikely]] return; }
L_002133C8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] + 10304u);
    c.budget -= 4;
L_002133D8:
    c.r[21].d[0] = 0ull + 0ull;
    c.r[20].d[0] = c.r[16].d[0] + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_002133E8:
    set32(c.r[4], c.r[17].w[0] + c.r[19].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002133F4u); set32(c.r[5], c.r[20].w[0] + 556u);  if (depth < kMaxDepth) unit_0044(c, 373u, depth + 1u); else { c.pc = 0x00213450u; return; } if (c.pc != 0x002133F4u) [[unlikely]] return; }
L_002133F4:
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] + 21u);
    c.r[3].d[0] = c.r[21].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 12288u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002133E8u | kUnwind; return; } goto L_002133E8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 84u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002133D8u | kUnwind; return; } goto L_002133D8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00213450:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021347Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0021347Cu) [[unlikely]] return; }
L_0021347C:
    set32(c.r[16], c.r[2].w[0] >> 1);
    c.r[1].d[0] = c.r[16].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00213490; } }
    set32(c.r[16], 0u + 12u);
    c.budget -= 1;
L_00213490:
    c.r[1].d[0] = 0ll < c.r[16].sd[0] ? 1ull : 0ull;
    set32(c.r[20], c.r[20].w[0] + 2u);
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002135B8; } }
L_002134A0:
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 1u));
    c.r[18].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[19], c.r[19].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002134D0u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0044(c, 327u, depth + 1u); else { c.pc = 0x002129D0u; return; } if (c.pc != 0x002134D0u) [[unlikely]] return; }
L_002134D0:
    set32(c.r[5], ld32((c.r[28].w[0] - 24080u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002134E8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 330u, depth + 1u); else { c.pc = 0x00212AD0u; return; } if (c.pc != 0x002134E8u) [[unlikely]] return; }
L_002134E8:
    set32(c.r[6], ld32((c.r[28].w[0] - 24080u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002134F0:
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 2u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 5u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.r[3].d[0] = c.r[4].sd[0] < 20ll ? 1ull : 0ull;
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 2u), static_cast<std::uint16_t>(0u));
    set32(c.r[18], c.r[18].w[0] + 4u);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002134F0u | kUnwind; return; } goto L_002134F0; } }
    set32(c.r[18], c.r[18].w[0] + 472u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
L_00213528:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00213530:
    c.r[4].d[0] = ld16((c.r[6].w[0]));
    set32(c.r[7], c.r[7].w[0] + 7u);
    c.r[3].d[0] = c.r[7].sd[0] < 21ll ? 1ull : 0ull;
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[6].w[0] + 2u));
    st16((c.r[18].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.r[4].d[0] = ld16((c.r[6].w[0]));
    set32(c.r[18], c.r[18].w[0] + 4u);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[6].w[0] + 2u));
    st16((c.r[18].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.r[4].d[0] = ld16((c.r[6].w[0]));
    set32(c.r[18], c.r[18].w[0] + 4u);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[6].w[0] + 2u));
    st16((c.r[18].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.r[4].d[0] = ld16((c.r[6].w[0]));
    set32(c.r[18], c.r[18].w[0] + 4u);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.budget -= 25;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00213530u | kUnwind; return; } goto L_00213530; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 22u);
    c.r[3].d[0] = c.r[5].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 470u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00213528u | kUnwind; return; } goto L_00213528; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 40u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002134A0u | kUnwind; return; } goto L_002134A0; } }
L_002135B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002135E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00E90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[2].d[0] | 24576ull;
    set32(c.r[5], 0u + 256u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002135FCu); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_000B(c, 204u, depth + 1u); else { c.pc = 0x0012F800u; return; } if (c.pc != 0x002135FCu) [[unlikely]] return; }
L_002135FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[28].w[0] - 23744u), c.r[2].w[0]);  if (t) { goto L_00213610; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[28].w[0] - 24088u), c.r[2].w[0]);
    c.budget -= 3;
L_00213610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213618u);  if (depth < kMaxDepth) unit_000B(c, 210u, depth + 1u); else { c.pc = 0x0012F8D0u; return; } if (c.pc != 0x00213618u) [[unlikely]] return; }
L_00213618:
    set32(c.r[9], ld32((c.r[28].w[0] - 23744u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00EA0000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 9424u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021363Cu); c.r[8].d[0] = c.r[2].d[0] | 24576ull;  if (depth < kMaxDepth) unit_000A(c, 111u, depth + 1u); else { c.pc = 0x00129470u; return; } if (c.pc != 0x0021363Cu) [[unlikely]] return; }
L_0021363C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00213650:
    set32(c.r[5], ld32((c.r[28].w[0] - 24080u)));
    set32(c.r[3], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st16((c.r[1].w[0] - 27248u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[5].w[0] + 6140u)));
    set32(c.r[6], c.r[5].w[0] + 6158u);
    st32((c.r[1].w[0] - 27232u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st16((c.r[1].w[0] - 27244u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 6158u)));
    c.budget -= 14;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 6));  if (t) { goto L_00213690; } }
    set32(c.r[3], c.r[4].w[0] + 63u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 6));
    c.budget -= 2;
L_00213690:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st16((c.r[1].w[0] - 27240u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 6));  if (t) { goto L_002136AC; } }
    set32(c.r[3], c.r[3].w[0] + 63u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 6));
    c.budget -= 2;
L_002136AC:
    mmi::mult(c, 0, c.r[4].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[5], 0u + 16384u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    st16((c.r[1].w[0] - 27242u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st16((c.r[1].w[0] - 27224u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st16((c.r[1].w[0] - 27236u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[1].w[0] - 27238u), static_cast<std::uint16_t>(c.r[4].w[0]));  c.pc = t; return; }
L_002136F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 26160u);
    st32((c.r[28].w[0] - 24060u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 24060u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213714u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00213714u) [[unlikely]] return; }
L_00213714:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 26096u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213728u); set32(c.r[6], 0u + 8192u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00213728u) [[unlikely]] return; }
L_00213728:
    set32(c.r[4], ld32((c.r[28].w[0] - 23924u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00213740; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021373Cu);  if (depth < kMaxDepth) unit_0060(c, 35u, depth + 1u); else { c.pc = 0x00280180u; return; } if (c.pc != 0x0021373Cu) [[unlikely]] return; }
L_0021373C:
    st32((c.r[28].w[0] - 23924u), 0u);
    c.budget -= 1;
L_00213740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213748u);  if (depth < kMaxDepth) unit_0044(c, 401u, depth + 1u); else { c.pc = 0x002138B0u; return; } if (c.pc != 0x00213748u) [[unlikely]] return; }
L_00213748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213750u);  if (depth < kMaxDepth) unit_0044(c, 402u, depth + 1u); else { c.pc = 0x002138C0u; return; } if (c.pc != 0x00213750u) [[unlikely]] return; }
L_00213750:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00213760:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24060u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_002137C8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23908u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] - 26096u);
    set32(c.r[2], c.r[2].w[0] - 7536u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 19078u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 24060u)));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 18;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002137C4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002137C4u) [[unlikely]] return; }
L_002137C4:
    c.budget -= 1;
L_002137C8:
    set32(c.r[2], ld32((c.r[28].w[0] - 24060u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002137E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 26160u);
    st32((c.r[28].w[0] - 24060u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24060u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00213810; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00213878; } }
    c.budget -= 1;
L_00213810:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 24060u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], c.r[4].w[0] - 26096u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 8192u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 24060u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213838u); st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00213838u) [[unlikely]] return; }
L_00213838:
    set32(c.r[4], ld32((c.r[28].w[0] - 23924u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00213850; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021384Cu);  if (depth < kMaxDepth) unit_0060(c, 35u, depth + 1u); else { c.pc = 0x00280180u; return; } if (c.pc != 0x0021384Cu) [[unlikely]] return; }
L_0021384C:
    st32((c.r[28].w[0] - 23924u), 0u);
    c.budget -= 1;
L_00213850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213858u);  if (depth < kMaxDepth) unit_0044(c, 401u, depth + 1u); else { c.pc = 0x002138B0u; return; } if (c.pc != 0x00213858u) [[unlikely]] return; }
L_00213858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213860u);  if (depth < kMaxDepth) unit_0044(c, 402u, depth + 1u); else { c.pc = 0x002138C0u; return; } if (c.pc != 0x00213860u) [[unlikely]] return; }
L_00213860:
    set32(c.r[3], ld32((c.r[28].w[0] - 23908u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 19078u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_00213878:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00213890:
    set32(c.r[3], ld32((c.r[28].w[0] - 24060u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_002138A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 24060u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_002138B0:
    st32((c.r[28].w[0] - 24064u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 24068u), 0u);  c.pc = t; return; }
L_002138C0:
    st32((c.r[28].w[0] - 24072u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 24076u), 0u);  c.pc = t; return; }
L_002138D0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002138C0u | kUnwind; return; } goto L_002138C0; }
L_002138E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 32u), c.r[5].w[0]);
    st64((c.r[29].w[0] + 48u), c.r[6].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[10].d[0]);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 88u), c.r[11].d[0]);  if (t) { goto L_00213918; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00213924; } }
L_00213918:
    set32(c.r[2], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.budget -= 3;
L_00213924:
    set32(c.r[6], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[2], c.r[29].w[0] + 96u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[1].d[0] = 0ll < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[2].w[0] - c.r[3].w[0]);  if (t) { goto L_00213AC8; } }
    c.r[1].d[0] = c.r[6].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] - 8u);  if (t) { goto L_00213A80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], c.r[2].w[0] - 26672u);
    c.budget -= 2;
L_00213950:
    set32(c.r[9], ld32((c.r[28].w[0] - 24064u)));
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[11], ld32((c.r[7].w[0] - 8u)));
    c.r[8].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[10], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[10], c.r[2].w[0] + c.r[10].w[0]);
    c.r[9].d[0] = c.r[9].d[0] & 127ull;
    st32((c.r[10].w[0]), c.r[11].w[0]);
    st32((c.r[28].w[0] - 24064u), c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[9], ld32((c.r[28].w[0] - 24064u)));
    set32(c.r[11], ld32((c.r[7].w[0] - 8u)));
    set32(c.r[10], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[10], c.r[2].w[0] + c.r[10].w[0]);
    c.r[9].d[0] = c.r[9].d[0] & 127ull;
    st32((c.r[10].w[0]), c.r[11].w[0]);
    st32((c.r[28].w[0] - 24064u), c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[9], ld32((c.r[28].w[0] - 24064u)));
    set32(c.r[11], ld32((c.r[7].w[0] - 8u)));
    set32(c.r[10], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[10], c.r[2].w[0] + c.r[10].w[0]);
    c.r[9].d[0] = c.r[9].d[0] & 127ull;
    st32((c.r[10].w[0]), c.r[11].w[0]);
    st32((c.r[28].w[0] - 24064u), c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[9], ld32((c.r[28].w[0] - 24064u)));
    set32(c.r[11], ld32((c.r[7].w[0] - 8u)));
    set32(c.r[10], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[10], c.r[2].w[0] + c.r[10].w[0]);
    c.r[9].d[0] = c.r[9].d[0] & 127ull;
    st32((c.r[10].w[0]), c.r[11].w[0]);
    st32((c.r[28].w[0] - 24064u), c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[9], ld32((c.r[28].w[0] - 24064u)));
    set32(c.r[11], ld32((c.r[7].w[0] - 8u)));
    set32(c.r[10], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[10], c.r[2].w[0] + c.r[10].w[0]);
    c.r[9].d[0] = c.r[9].d[0] & 127ull;
    st32((c.r[10].w[0]), c.r[11].w[0]);
    st32((c.r[28].w[0] - 24064u), c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[9], ld32((c.r[28].w[0] - 24064u)));
    set32(c.r[11], ld32((c.r[7].w[0] - 8u)));
    set32(c.r[10], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[10], c.r[2].w[0] + c.r[10].w[0]);
    c.r[9].d[0] = c.r[9].d[0] & 127ull;
    st32((c.r[10].w[0]), c.r[11].w[0]);
    st32((c.r[28].w[0] - 24064u), c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[9], ld32((c.r[28].w[0] - 24064u)));
    set32(c.r[11], ld32((c.r[7].w[0] - 8u)));
    set32(c.r[10], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[10], c.r[2].w[0] + c.r[10].w[0]);
    c.r[9].d[0] = c.r[9].d[0] & 127ull;
    st32((c.r[10].w[0]), c.r[11].w[0]);
    st32((c.r[28].w[0] - 24064u), c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[9], ld32((c.r[28].w[0] - 24064u)));
    set32(c.r[11], ld32((c.r[7].w[0] - 8u)));
    set32(c.r[10], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[10], c.r[2].w[0] + c.r[10].w[0]);
    c.r[9].d[0] = c.r[9].d[0] & 127ull;
    st32((c.r[10].w[0]), c.r[11].w[0]);
    c.budget -= 75;
    { const bool t = c.r[8].d[0] != 0ull; st32((c.r[28].w[0] - 24064u), c.r[9].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00213950u | kUnwind; return; } goto L_00213950; } }
    c.budget -= 1;
L_00213A80:
    c.r[1].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00213AC8; } }
    c.r[9].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[9], c.r[9].w[0] - 26672u);
    c.budget -= 3;
L_00213A98:
    set32(c.r[3], ld32((c.r[28].w[0] - 24064u)));
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[10], ld32((c.r[7].w[0] - 8u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    set32(c.r[8], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[8], c.r[9].w[0] + c.r[8].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 127ull;
    st32((c.r[8].w[0]), c.r[10].w[0]);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[28].w[0] - 24064u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00213A98u | kUnwind; return; } goto L_00213A98; } }
L_00213AC8:
    set32(c.r[5], ld32((c.r[28].w[0] - 24068u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213AD4u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_0045(c, 79u, depth + 1u); else { c.pc = 0x002149C0u; return; } if (c.pc != 0x00213AD4u) [[unlikely]] return; }
L_00213AD4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00213AE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[29].w[0] + 16u), c.r[5].w[0]);
    set32(c.r[12], c.r[12].w[0] - 27184u);
    st64((c.r[29].w[0] + 32u), c.r[6].d[0]);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 40u), c.r[7].d[0]);
    c.r[3].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    st64((c.r[29].w[0] + 48u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[11].d[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 24072u)));
    set32(c.r[7], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[7], c.r[12].w[0] + c.r[7].w[0]);
    st32((c.r[7].w[0]), c.r[4].w[0]);
    c.r[6].d[0] = c.r[6].d[0] & 127ull;
    st32((c.r[28].w[0] - 24072u), c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24072u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[6], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[6], c.r[12].w[0] + c.r[6].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 127ull;
    st32((c.r[6].w[0]), c.r[7].w[0]);
    c.budget -= 28;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 24072u), c.r[4].w[0]);  if (t) { goto L_00213B58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00213B64; } }
L_00213B58:
    set32(c.r[3], 0u + 8u);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[3].w[0] << 3);
    c.budget -= 3;
L_00213B64:
    set32(c.r[3], c.r[29].w[0] + 80u);
    set32(c.r[7], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    c.r[1].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00213D08; } }
    c.r[1].d[0] = c.r[4].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[5], c.r[4].w[0] - 8u);  if (t) { goto L_00213CC0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[3].w[0] - 27184u);
    c.budget -= 2;
L_00213B90:
    set32(c.r[9], ld32((c.r[28].w[0] - 24072u)));
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[11], ld32((c.r[7].w[0] - 8u)));
    c.r[8].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[10], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[10], c.r[3].w[0] + c.r[10].w[0]);
    c.r[9].d[0] = c.r[9].d[0] & 127ull;
    st32((c.r[10].w[0]), c.r[11].w[0]);
    st32((c.r[28].w[0] - 24072u), c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[9], ld32((c.r[28].w[0] - 24072u)));
    set32(c.r[11], ld32((c.r[7].w[0] - 8u)));
    set32(c.r[10], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[10], c.r[3].w[0] + c.r[10].w[0]);
    c.r[9].d[0] = c.r[9].d[0] & 127ull;
    st32((c.r[10].w[0]), c.r[11].w[0]);
    st32((c.r[28].w[0] - 24072u), c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[9], ld32((c.r[28].w[0] - 24072u)));
    set32(c.r[11], ld32((c.r[7].w[0] - 8u)));
    set32(c.r[10], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[10], c.r[3].w[0] + c.r[10].w[0]);
    c.r[9].d[0] = c.r[9].d[0] & 127ull;
    st32((c.r[10].w[0]), c.r[11].w[0]);
    st32((c.r[28].w[0] - 24072u), c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[9], ld32((c.r[28].w[0] - 24072u)));
    set32(c.r[11], ld32((c.r[7].w[0] - 8u)));
    set32(c.r[10], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[10], c.r[3].w[0] + c.r[10].w[0]);
    c.r[9].d[0] = c.r[9].d[0] & 127ull;
    st32((c.r[10].w[0]), c.r[11].w[0]);
    st32((c.r[28].w[0] - 24072u), c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[9], ld32((c.r[28].w[0] - 24072u)));
    set32(c.r[11], ld32((c.r[7].w[0] - 8u)));
    set32(c.r[10], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[10], c.r[3].w[0] + c.r[10].w[0]);
    c.r[9].d[0] = c.r[9].d[0] & 127ull;
    st32((c.r[10].w[0]), c.r[11].w[0]);
    st32((c.r[28].w[0] - 24072u), c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[9], ld32((c.r[28].w[0] - 24072u)));
    set32(c.r[11], ld32((c.r[7].w[0] - 8u)));
    set32(c.r[10], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[10], c.r[3].w[0] + c.r[10].w[0]);
    c.r[9].d[0] = c.r[9].d[0] & 127ull;
    st32((c.r[10].w[0]), c.r[11].w[0]);
    st32((c.r[28].w[0] - 24072u), c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[9], ld32((c.r[28].w[0] - 24072u)));
    set32(c.r[11], ld32((c.r[7].w[0] - 8u)));
    set32(c.r[10], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[10], c.r[3].w[0] + c.r[10].w[0]);
    c.r[9].d[0] = c.r[9].d[0] & 127ull;
    st32((c.r[10].w[0]), c.r[11].w[0]);
    st32((c.r[28].w[0] - 24072u), c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[9], ld32((c.r[28].w[0] - 24072u)));
    set32(c.r[11], ld32((c.r[7].w[0] - 8u)));
    set32(c.r[10], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[10], c.r[3].w[0] + c.r[10].w[0]);
    c.r[9].d[0] = c.r[9].d[0] & 127ull;
    st32((c.r[10].w[0]), c.r[11].w[0]);
    c.budget -= 75;
    { const bool t = c.r[8].d[0] != 0ull; st32((c.r[28].w[0] - 24072u), c.r[9].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00213B90u | kUnwind; return; } goto L_00213B90; } }
    c.budget -= 1;
L_00213CC0:
    c.r[1].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00213D08; } }
    c.r[9].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[9], c.r[9].w[0] - 27184u);
    c.budget -= 3;
L_00213CD8:
    set32(c.r[5], ld32((c.r[28].w[0] - 24072u)));
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[10], ld32((c.r[7].w[0] - 8u)));
    c.r[3].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[8], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[8], c.r[9].w[0] + c.r[8].w[0]);
    c.r[5].d[0] = c.r[5].d[0] & 127ull;
    st32((c.r[8].w[0]), c.r[10].w[0]);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 24072u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00213CD8u | kUnwind; return; } goto L_00213CD8; } }
L_00213D08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00213D10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.r[1].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00213D78; } }
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], c.r[4].w[0] - 26672u);
    c.budget -= 3;
L_00213D40:
    set32(c.r[3], ld32((c.r[28].w[0] - 24068u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24068u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 127ull;
    st32((c.r[28].w[0] - 24068u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00213D40u | kUnwind; return; } goto L_00213D40; } }
L_00213D78:
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_00213EA8; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 16912u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00210000u < 16384u) { entry = entries_0044[(t - 0x00210000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00213DA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00213DA8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00213DA8u) [[unlikely]] return; }
L_00213DA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00213EA8; } }
L_00213DB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00213DB8u); set32(c.r[4], ld32((c.r[29].w[0] + 32u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00213DB8u) [[unlikely]] return; }
L_00213DB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00213EA8; } }
L_00213DC0:
    set32(c.r[5], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00213DCCu); set32(c.r[4], ld32((c.r[29].w[0] + 32u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00213DCCu) [[unlikely]] return; }
L_00213DCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00213EA8; } }
    c.budget -= 1;
L_00213DD8:
    set32(c.r[5], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00213DE8u); set32(c.r[4], ld32((c.r[29].w[0] + 32u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00213DE8u) [[unlikely]] return; }
L_00213DE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00213EA8; } }
L_00213DF0:
    set32(c.r[5], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00213E04u); set32(c.r[4], ld32((c.r[29].w[0] + 32u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00213E04u) [[unlikely]] return; }
L_00213E04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00213EA8; } }
    c.budget -= 1;
L_00213E10:
    set32(c.r[5], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00213E28u); set32(c.r[4], ld32((c.r[29].w[0] + 32u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00213E28u) [[unlikely]] return; }
L_00213E28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00213EA8; } }
L_00213E30:
    set32(c.r[5], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00213E4Cu); set32(c.r[4], ld32((c.r[29].w[0] + 32u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00213E4Cu) [[unlikely]] return; }
L_00213E4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00213EA8; } }
    c.budget -= 1;
L_00213E58:
    set32(c.r[5], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[10], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00213E78u); set32(c.r[4], ld32((c.r[29].w[0] + 32u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00213E78u) [[unlikely]] return; }
L_00213E78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00213EA8; } }
L_00213E80:
    set32(c.r[5], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[10], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[11], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00213EA4u); set32(c.r[4], ld32((c.r[29].w[0] + 32u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00213EA4u) [[unlikely]] return; }
L_00213EA4:
    c.budget -= 1;
L_00213EA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00213EB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 80u, depth + 1u); else { c.pc = 0x00214A40u; return; } if (c.pc != 0x00213EB0u) [[unlikely]] return; }
L_00213EB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00213EC0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24076u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 24072u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { [[clang::musttail]] return unit_0045(c, 23u, depth); } }
    set32(c.r[20], c.r[29].w[0] + 132u);
    set32(c.r[19], c.r[29].w[0] + 136u);
    set32(c.r[18], c.r[29].w[0] + 140u);
    set32(c.r[17], c.r[29].w[0] + 144u);
    set32(c.r[16], c.r[29].w[0] + 148u);
    set32(c.r[21], c.r[29].w[0] + 152u);
    set32(c.r[22], c.r[29].w[0] + 156u);
    c.budget -= 7;
L_00213F10:
    set32(c.r[4], ld32((c.r[28].w[0] - 24076u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] - 27184u);
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[12], ld32((c.r[5].w[0])));
    c.r[4].d[0] = c.r[4].d[0] & 127ull;
    st32((c.r[28].w[0] - 24076u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24076u)));
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[7], ld32((c.r[5].w[0])));
    c.r[4].d[0] = c.r[4].d[0] & 127ull;
    c.r[1].d[0] = 0ll < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[28].w[0] - 24076u), c.r[4].w[0]);  if (t) { [[clang::musttail]] return unit_0045(c, 4u, depth); } }
    c.r[1].d[0] = c.r[7].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[5], c.r[7].w[0] - 8u);  if (t) { [[clang::musttail]] return unit_0045(c, 2u, depth); } }
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 2;
L_00213F70:
    set32(c.r[9], ld32((c.r[28].w[0] - 24076u)));
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.r[8].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[9], ld32((c.r[9].w[0])));
    st32((c.r[4].w[0]), c.r[9].w[0]);
    set32(c.r[9], ld32((c.r[28].w[0] - 24076u)));
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[9].d[0] = c.r[9].d[0] & 127ull;
    st32((c.r[28].w[0] - 24076u), c.r[9].w[0]);
    set32(c.r[9], ld32((c.r[28].w[0] - 24076u)));
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[9], ld32((c.r[9].w[0])));
    st32((c.r[4].w[0] + 4u), c.r[9].w[0]);
    set32(c.r[9], ld32((c.r[28].w[0] - 24076u)));
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[9].d[0] = c.r[9].d[0] & 127ull;
    st32((c.r[28].w[0] - 24076u), c.r[9].w[0]);
    set32(c.r[9], ld32((c.r[28].w[0] - 24076u)));
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[9], ld32((c.r[9].w[0])));
    st32((c.r[4].w[0] + 8u), c.r[9].w[0]);
    set32(c.r[9], ld32((c.r[28].w[0] - 24076u)));
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[9].d[0] = c.r[9].d[0] & 127ull;
    st32((c.r[28].w[0] - 24076u), c.r[9].w[0]);
    set32(c.r[9], ld32((c.r[28].w[0] - 24076u)));
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[9], ld32((c.r[9].w[0])));
    st32((c.r[4].w[0] + 12u), c.r[9].w[0]);
    set32(c.r[9], ld32((c.r[28].w[0] - 24076u)));
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 36;
    [[clang::musttail]] return unit_0045(c, 1u, depth);
}

}
