#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0091[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0,
    7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0,
    15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 32, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 37, 0, 38, 0, 39, 0,
    0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    43, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 49, 0, 50, 0, 51, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0,
    0, 55, 0, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0,
    0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76,
    0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0,
    0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0,
    0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0,
    0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0,
    0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0,
    129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133,
    0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137,
    0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0,
    142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0,
    0, 148, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 156,
    0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0,
    172, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178,
    0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184,
    0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0,
    195, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0,
    0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0,
    0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221,
    0, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 228,
    0, 229, 0, 230, 0, 231, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0,
    0, 235, 0, 236, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 242,
    0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0,
    249, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 255, 0, 0, 256,
    0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 262, 0, 0, 263, 0, 0, 0,
    0, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0, 266, 0, 0, 267, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270,
    0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 278, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0,
    0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0,
    0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0,
    295, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0,
    305, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    311, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    318, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0,
    0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0,
    0, 0, 0, 0, 333, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 347, 0, 348, 0,
    0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0,
    0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0,
    0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0,
    0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0,
    379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 387, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0,
    0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0,
    393, 0, 394, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    396, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0,
    0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 401, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0,
    0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0,
    0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0,
    422, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0,
    0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0091(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00344000;
    case 2u: goto L_00344028;
    case 3u: goto L_00344040;
    case 4u: goto L_0034404C;
    case 5u: goto L_00344060;
    case 6u: goto L_00344070;
    case 7u: goto L_00344080;
    case 8u: goto L_00344098;
    case 9u: goto L_003440C0;
    case 10u: goto L_003440C8;
    case 11u: goto L_003440D4;
    case 12u: goto L_00344148;
    case 13u: goto L_0034416C;
    case 14u: goto L_00344174;
    case 15u: goto L_00344180;
    case 16u: goto L_003441AC;
    case 17u: goto L_003441D0;
    case 18u: goto L_003441F0;
    case 19u: goto L_00344220;
    case 20u: goto L_003442A0;
    case 21u: goto L_003442A8;
    case 22u: goto L_00344304;
    case 23u: goto L_0034431C;
    case 24u: goto L_0034433C;
    case 25u: goto L_00344348;
    case 26u: goto L_00344354;
    case 27u: goto L_0034438C;
    case 28u: goto L_003443B8;
    case 29u: goto L_003443F0;
    case 30u: goto L_00344458;
    case 31u: goto L_00344460;
    case 32u: goto L_00344470;
    case 33u: goto L_003444A4;
    case 34u: goto L_003445B8;
    case 35u: goto L_003445D4;
    case 36u: goto L_003445E0;
    case 37u: goto L_003445E8;
    case 38u: goto L_003445F0;
    case 39u: goto L_003445F8;
    case 40u: goto L_00344608;
    case 41u: goto L_00344624;
    case 42u: goto L_0034463C;
    case 43u: goto L_00344680;
    case 44u: goto L_00344690;
    case 45u: goto L_003446A0;
    case 46u: goto L_003446B0;
    case 47u: goto L_0034470C;
    case 48u: goto L_00344714;
    case 49u: goto L_00344728;
    case 50u: goto L_00344730;
    case 51u: goto L_00344738;
    case 52u: goto L_0034474C;
    case 53u: goto L_00344754;
    case 54u: goto L_0034476C;
    case 55u: goto L_00344784;
    case 56u: goto L_00344794;
    case 57u: goto L_003447A0;
    case 58u: goto L_003447AC;
    case 59u: goto L_003447C0;
    case 60u: goto L_003447E8;
    case 61u: goto L_003447F8;
    case 62u: goto L_00344820;
    case 63u: goto L_00344840;
    case 64u: goto L_00344858;
    case 65u: goto L_00344868;
    case 66u: goto L_00344884;
    case 67u: goto L_003448A0;
    case 68u: goto L_003448B8;
    case 69u: goto L_003448C8;
    case 70u: goto L_003448E4;
    case 71u: goto L_003448F4;
    case 72u: goto L_00344910;
    case 73u: goto L_00344A18;
    case 74u: goto L_00344A40;
    case 75u: goto L_00344A50;
    case 76u: goto L_00344A7C;
    case 77u: goto L_00344A90;
    case 78u: goto L_00344AB0;
    case 79u: goto L_00344ACC;
    case 80u: goto L_00344AF4;
    case 81u: goto L_00344B04;
    case 82u: goto L_00344B1C;
    case 83u: goto L_00344B68;
    case 84u: goto L_00344BB0;
    case 85u: goto L_00344C10;
    case 86u: goto L_00344DD8;
    case 87u: goto L_00344E50;
    case 88u: goto L_00344E70;
    case 89u: goto L_00344EB0;
    case 90u: goto L_00344EC0;
    case 91u: goto L_00344EEC;
    case 92u: goto L_00344F24;
    case 93u: goto L_00344F38;
    case 94u: goto L_00344F50;
    case 95u: goto L_00344F70;
    case 96u: goto L_00344F90;
    case 97u: goto L_00344FA0;
    case 98u: goto L_00345020;
    case 99u: goto L_00345050;
    case 100u: goto L_003450B0;
    case 101u: goto L_00345128;
    case 102u: goto L_00345150;
    case 103u: goto L_00345170;
    case 104u: goto L_00345194;
    case 105u: goto L_003451B8;
    case 106u: goto L_003451DC;
    case 107u: goto L_00345210;
    case 108u: goto L_00345220;
    case 109u: goto L_00345250;
    case 110u: goto L_00345288;
    case 111u: goto L_003452E0;
    case 112u: goto L_00345320;
    case 113u: goto L_00345368;
    case 114u: goto L_00345388;
    case 115u: goto L_003453B8;
    case 116u: goto L_003453D0;
    case 117u: goto L_003453F0;
    case 118u: goto L_003454B4;
    case 119u: goto L_003454D0;
    case 120u: goto L_0034551C;
    case 121u: goto L_00345524;
    case 122u: goto L_00345540;
    case 123u: goto L_0034555C;
    case 124u: goto L_00345574;
    case 125u: goto L_003455B0;
    case 126u: goto L_003455CC;
    case 127u: goto L_003455DC;
    case 128u: goto L_003455E8;
    case 129u: goto L_00345600;
    case 130u: goto L_0034563C;
    case 131u: goto L_00345650;
    case 132u: goto L_00345660;
    case 133u: goto L_0034567C;
    case 134u: goto L_00345694;
    case 135u: goto L_003456D0;
    case 136u: goto L_003456EC;
    case 137u: goto L_003456FC;
    case 138u: goto L_00345708;
    case 139u: goto L_00345720;
    case 140u: goto L_0034575C;
    case 141u: goto L_00345770;
    case 142u: goto L_00345780;
    case 143u: goto L_00345794;
    case 144u: goto L_003457B0;
    case 145u: goto L_003457C0;
    case 146u: goto L_003457E0;
    case 147u: goto L_003457F8;
    case 148u: goto L_00345804;
    case 149u: goto L_00345810;
    case 150u: goto L_00345820;
    case 151u: goto L_00345830;
    case 152u: goto L_0034583C;
    case 153u: goto L_00345850;
    case 154u: goto L_00345860;
    case 155u: goto L_00345870;
    case 156u: goto L_0034587C;
    case 157u: goto L_00345890;
    case 158u: goto L_003458A0;
    case 159u: goto L_003458AC;
    case 160u: goto L_003458C0;
    case 161u: goto L_003458D0;
    case 162u: goto L_003458F0;
    case 163u: goto L_00345920;
    case 164u: goto L_00345960;
    case 165u: goto L_00345990;
    case 166u: goto L_003459B0;
    case 167u: goto L_003459D0;
    case 168u: goto L_00345A20;
    case 169u: goto L_00345A40;
    case 170u: goto L_00345A5C;
    case 171u: goto L_00345A74;
    case 172u: goto L_00345A80;
    case 173u: goto L_00345A90;
    case 174u: goto L_00345AA0;
    case 175u: goto L_00345ABC;
    case 176u: goto L_00345AC8;
    case 177u: goto L_00345AE0;
    case 178u: goto L_00345AFC;
    case 179u: goto L_00345B08;
    case 180u: goto L_00345B20;
    case 181u: goto L_00345B3C;
    case 182u: goto L_00345B48;
    case 183u: goto L_00345B60;
    case 184u: goto L_00345B7C;
    case 185u: goto L_00345B88;
    case 186u: goto L_00345BA0;
    case 187u: goto L_00345BC4;
    case 188u: goto L_00345BD0;
    case 189u: goto L_00345BDC;
    case 190u: goto L_00345BF0;
    case 191u: goto L_00345C18;
    case 192u: goto L_00345CF0;
    case 193u: goto L_00345D18;
    case 194u: goto L_00345D64;
    case 195u: goto L_00345D80;
    case 196u: goto L_00345D90;
    case 197u: goto L_00345DA0;
    case 198u: goto L_00345DC0;
    case 199u: goto L_00345DF0;
    case 200u: goto L_00345E30;
    case 201u: goto L_00345E70;
    case 202u: goto L_00345E9C;
    case 203u: goto L_00345ED0;
    case 204u: goto L_00345F18;
    case 205u: goto L_00345F30;
    case 206u: goto L_00345F3C;
    case 207u: goto L_00345F4C;
    case 208u: goto L_00345F70;
    case 209u: goto L_00345FB8;
    case 210u: goto L_00345FD0;
    case 211u: goto L_00345FDC;
    case 212u: goto L_00345FEC;
    case 213u: goto L_00346010;
    case 214u: goto L_00346030;
    case 215u: goto L_00346040;
    case 216u: goto L_00346080;
    case 217u: goto L_003460F0;
    case 218u: goto L_0034610C;
    case 219u: goto L_00346124;
    case 220u: goto L_00346160;
    case 221u: goto L_0034617C;
    case 222u: goto L_0034618C;
    case 223u: goto L_00346198;
    case 224u: goto L_003461B0;
    case 225u: goto L_003461C0;
    case 226u: goto L_003461DC;
    case 227u: goto L_003461F4;
    case 228u: goto L_003461FC;
    case 229u: goto L_00346204;
    case 230u: goto L_0034620C;
    case 231u: goto L_00346214;
    case 232u: goto L_0034621C;
    case 233u: goto L_00346224;
    case 234u: goto L_00346260;
    case 235u: goto L_00346284;
    case 236u: goto L_0034628C;
    case 237u: goto L_003462A0;
    case 238u: goto L_003462AC;
    case 239u: goto L_003462B8;
    case 240u: goto L_003462D0;
    case 241u: goto L_003462F4;
    case 242u: goto L_003462FC;
    case 243u: goto L_00346310;
    case 244u: goto L_0034631C;
    case 245u: goto L_00346328;
    case 246u: goto L_00346340;
    case 247u: goto L_00346364;
    case 248u: goto L_0034636C;
    case 249u: goto L_00346380;
    case 250u: goto L_0034638C;
    case 251u: goto L_00346398;
    case 252u: goto L_003463B0;
    case 253u: goto L_003463D4;
    case 254u: goto L_003463DC;
    case 255u: goto L_003463F0;
    case 256u: goto L_003463FC;
    case 257u: goto L_00346408;
    case 258u: goto L_00346420;
    case 259u: goto L_00346438;
    case 260u: goto L_0034644C;
    case 261u: goto L_00346458;
    case 262u: goto L_00346464;
    case 263u: goto L_00346470;
    case 264u: goto L_00346494;
    case 265u: goto L_0034649C;
    case 266u: goto L_003464B0;
    case 267u: goto L_003464BC;
    case 268u: goto L_003464C8;
    case 269u: goto L_003464E0;
    case 270u: goto L_003464FC;
    case 271u: goto L_0034650C;
    case 272u: goto L_00346518;
    case 273u: goto L_00346530;
    case 274u: goto L_00346540;
    case 275u: goto L_00346580;
    case 276u: goto L_003465C8;
    case 277u: goto L_003465E0;
    case 278u: goto L_003465E8;
    case 279u: goto L_00346618;
    case 280u: goto L_00346630;
    case 281u: goto L_00346638;
    case 282u: goto L_00346668;
    case 283u: goto L_00346684;
    case 284u: goto L_00346690;
    case 285u: goto L_003466B0;
    case 286u: goto L_003466C0;
    case 287u: goto L_00346720;
    case 288u: goto L_00346780;
    case 289u: goto L_003467F0;
    case 290u: goto L_00346850;
    case 291u: goto L_0034686C;
    case 292u: goto L_00346884;
    case 293u: goto L_003468C0;
    case 294u: goto L_003468E0;
    case 295u: goto L_00346900;
    case 296u: goto L_00346908;
    case 297u: goto L_00346920;
    case 298u: goto L_00346944;
    case 299u: goto L_0034695C;
    case 300u: goto L_003469A0;
    case 301u: goto L_003469C0;
    case 302u: goto L_00346A18;
    case 303u: goto L_00346A34;
    case 304u: goto L_00346A70;
    case 305u: goto L_00346A80;
    case 306u: goto L_00346AA4;
    case 307u: goto L_00346ABC;
    case 308u: goto L_00346B00;
    case 309u: goto L_00346B48;
    case 310u: goto L_00346BD8;
    case 311u: goto L_00346C00;
    case 312u: goto L_00346C24;
    case 313u: goto L_00346CB0;
    case 314u: goto L_00346CC0;
    case 315u: goto L_00346CE4;
    case 316u: goto L_00346CFC;
    case 317u: goto L_00346D40;
    case 318u: goto L_00346D80;
    case 319u: goto L_00346DA0;
    case 320u: goto L_00346E10;
    case 321u: goto L_00346E20;
    case 322u: goto L_00346E44;
    case 323u: goto L_00346E5C;
    case 324u: goto L_00346EA0;
    case 325u: goto L_00346EC0;
    case 326u: goto L_00346F18;
    case 327u: goto L_00346F50;
    case 328u: goto L_00346F60;
    case 329u: goto L_00346F84;
    case 330u: goto L_00346F9C;
    case 331u: goto L_00346FAC;
    case 332u: goto L_00346FF0;
    case 333u: goto L_00347010;
    case 334u: goto L_00347018;
    case 335u: goto L_00347030;
    case 336u: goto L_0034704C;
    case 337u: goto L_00347064;
    case 338u: goto L_003470A0;
    case 339u: goto L_003470C0;
    case 340u: goto L_003470C8;
    case 341u: goto L_003470E0;
    case 342u: goto L_00347140;
    case 343u: goto L_0034715C;
    case 344u: goto L_00347174;
    case 345u: goto L_003471B0;
    case 346u: goto L_003471D0;
    case 347u: goto L_003471F0;
    case 348u: goto L_003471F8;
    case 349u: goto L_00347210;
    case 350u: goto L_00347234;
    case 351u: goto L_0034724C;
    case 352u: goto L_00347290;
    case 353u: goto L_003472B0;
    case 354u: goto L_00347308;
    case 355u: goto L_00347324;
    case 356u: goto L_00347360;
    case 357u: goto L_00347370;
    case 358u: goto L_00347394;
    case 359u: goto L_003473AC;
    case 360u: goto L_003473F0;
    case 361u: goto L_00347438;
    case 362u: goto L_003474C8;
    case 363u: goto L_003474F0;
    case 364u: goto L_00347514;
    case 365u: goto L_003475A0;
    case 366u: goto L_003475B0;
    case 367u: goto L_003475D4;
    case 368u: goto L_003475EC;
    case 369u: goto L_00347630;
    case 370u: goto L_00347670;
    case 371u: goto L_00347690;
    case 372u: goto L_00347700;
    case 373u: goto L_00347710;
    case 374u: goto L_00347734;
    case 375u: goto L_0034774C;
    case 376u: goto L_00347790;
    case 377u: goto L_003477CC;
    case 378u: goto L_003477E0;
    case 379u: goto L_00347800;
    case 380u: goto L_00347858;
    case 381u: goto L_00347890;
    case 382u: goto L_003478A0;
    case 383u: goto L_003478C4;
    case 384u: goto L_003478DC;
    case 385u: goto L_003478EC;
    case 386u: goto L_00347930;
    case 387u: goto L_00347950;
    case 388u: goto L_00347958;
    case 389u: goto L_00347970;
    case 390u: goto L_0034798C;
    case 391u: goto L_003479A4;
    case 392u: goto L_003479E0;
    case 393u: goto L_00347A00;
    case 394u: goto L_00347A08;
    case 395u: goto L_00347A20;
    case 396u: goto L_00347A80;
    case 397u: goto L_00347A9C;
    case 398u: goto L_00347AB4;
    case 399u: goto L_00347AF0;
    case 400u: goto L_00347B10;
    case 401u: goto L_00347B30;
    case 402u: goto L_00347B38;
    case 403u: goto L_00347B50;
    case 404u: goto L_00347B74;
    case 405u: goto L_00347B8C;
    case 406u: goto L_00347BD0;
    case 407u: goto L_00347C10;
    case 408u: goto L_00347C34;
    case 409u: goto L_00347CC0;
    case 410u: goto L_00347CD0;
    case 411u: goto L_00347CF4;
    case 412u: goto L_00347D0C;
    case 413u: goto L_00347D50;
    case 414u: goto L_00347D90;
    case 415u: goto L_00347DB0;
    case 416u: goto L_00347E20;
    case 417u: goto L_00347E30;
    case 418u: goto L_00347E54;
    case 419u: goto L_00347E6C;
    case 420u: goto L_00347EB0;
    case 421u: goto L_00347EEC;
    case 422u: goto L_00347F00;
    case 423u: goto L_00347F20;
    case 424u: goto L_00347F78;
    case 425u: goto L_00347F94;
    case 426u: goto L_00347FD0;
    case 427u: goto L_00347FE0;
    default: bad_entry(c, 0x00344000u); return;
    }
L_00344000:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[3], 0u + 100u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_00344020; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00344020:
    set32(c.r[22], c.r[2].w[0] + 326u);
    c.budget -= 2;
L_00344028:
    st16((c.r[21].w[0] + 12u), static_cast<std::uint16_t>(c.r[22].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[4], 0u + 20u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344040u); st16((c.r[21].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0044(c, 348u, depth + 1u); else { c.pc = 0x00213090u; return; } if (c.pc != 0x00344040u) [[unlikely]] return; }
L_00344040:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034404Cu); c.r[4].d[0] = c.r[2].d[0] | 32896ull;  if (depth < kMaxDepth) unit_0044(c, 349u, depth + 1u); else { c.pc = 0x002130B0u; return; } if (c.pc != 0x0034404Cu) [[unlikely]] return; }
L_0034404C:
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[30], c.r[29].w[0] + 324u);  if (t) { goto L_003443B8; } }
    c.budget -= 1;
L_00344060:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[19], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344070u); set32(c.r[18], 0u + 80u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00344070u) [[unlikely]] return; }
L_00344070:
    set32(c.r[17], c.r[29].w[0] + 224u);
    set32(c.r[5], 0u + 37u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344080u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 113u, depth + 1u); else { c.pc = 0x0011D9B0u; return; } if (c.pc != 0x00344080u) [[unlikely]] return; }
L_00344080:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00344360; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], c.r[22].w[0] - c.r[2].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 4;
L_00344098:
    c.r[4].d[0] = c.r[18].d[0] << 48;
    c.r[5].d[0] = c.r[22].d[0] << 48;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] + 5272u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003440C0u); st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x003440C0u) [[unlikely]] return; }
L_003440C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003440C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x003440C8u) [[unlikely]] return; }
L_003440C8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003440D4u); set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x003440D4u) [[unlikely]] return; }
L_003440D4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[16].w[0] + 2u);
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u + 121u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[18], c.r[18].w[0] + c.r[3].w[0]);  if (t) { goto L_00344230; } }
    set32(c.r[2], 0u + 114u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 110u);  if (t) { goto L_003441F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003441D8; } }
    set32(c.r[2], 0u + 115u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 97u);  if (t) { goto L_003441B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00344198; } }
    set32(c.r[2], 0u + 50u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 49u);  if (t) { goto L_00344138; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00344138; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00344348; } }
L_00344138:
    st8((c.r[29].w[0] + 312u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], c.r[29].w[0] + 313u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00344148:
    c.r[4].d[0] = c.r[18].d[0] << 48;
    c.r[5].d[0] = c.r[22].d[0] << 48;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], c.r[7].w[0] + 5272u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034416Cu); set32(c.r[8], c.r[29].w[0] + 312u);  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x0034416Cu) [[unlikely]] return; }
L_0034416C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344174u); set32(c.r[4], c.r[29].w[0] + 312u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00344174u) [[unlikely]] return; }
L_00344174:
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344180u); set32(c.r[4], c.r[29].w[0] + 312u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00344180u) [[unlikely]] return; }
L_00344180:
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);  if (t) { goto L_00344348; } }
    c.budget -= 1;
L_00344198:
    set32(c.r[6], ld32((c.r[20].w[0] + 40u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[29].w[0] + 312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003441ACu); set32(c.r[5], c.r[5].w[0] + 5288u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x003441ACu) [[unlikely]] return; }
L_003441AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00344148u | kUnwind; return; } goto L_00344148; } }
    c.budget -= 1;
L_003441B8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 44u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[29].w[0] + 312u);
    set32(c.r[5], c.r[5].w[0] + 5288u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003441D0u); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x003441D0u) [[unlikely]] return; }
L_003441D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00344148u | kUnwind; return; } goto L_00344148; } }
L_003441D8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 52u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[29].w[0] + 312u);
    set32(c.r[5], c.r[5].w[0] + 5288u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003441F0u); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x003441F0u) [[unlikely]] return; }
L_003441F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00344148u | kUnwind; return; } goto L_00344148; } }
L_003441F8:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 2u));
    c.r[1].d[0] = c.r[2].sd[0] < 40ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] << 48;  if (t) { goto L_00344348; } }
    c.r[5].d[0] = c.r[22].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344220u); c.r[7].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 449u, depth + 1u); else { c.pc = 0x00343DF0u; return; } if (c.pc != 0x00344220u) [[unlikely]] return; }
L_00344220:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 10u);  if (t) { goto L_00344348; } }
    c.budget -= 1;
L_00344230:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] << 2);  if (t) { goto L_00344348; } }
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[5], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st32((c.r[5].w[0] + 328u), 0u);
    set32(c.r[4], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[3], 0u + 36u);
    set32(c.r[2], 0u + 11u);
    st32((c.r[4].w[0] + 328u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    st32((c.r[5].w[0] + 320u), c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = c.r[23].d[0] == c.r[3].d[0]; st32((c.r[4].w[0] + 320u), c.r[22].w[0]);  if (t) { goto L_00344290; } }
    set32(c.r[2], 0u + 22u);
    c.budget -= 3;
    { const bool t = c.r[23].d[0] == c.r[2].d[0];  if (t) { goto L_00344290; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[2], c.r[2].w[0] + 8u);
    st32((c.r[29].w[0] + 320u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[30].w[0])));
    set32(c.r[2], c.r[2].w[0] + 8u);
    st32((c.r[30].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_00344290:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[16], ld32((c.r[1].w[0] + 17700u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003442A0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x003442A0u) [[unlikely]] return; }
L_003442A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003442A8u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x003442A8u) [[unlikely]] return; }
L_003442A8:
    c.f[1] = ld32((c.r[21].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003442E0; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] << 24);  if (t) { goto L_003442FC; } }
L_003442E0:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[3].w[0] << 24);
    c.budget -= 7;
L_003442FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344304u);  if (depth < kMaxDepth) unit_0044(c, 349u, depth + 1u); else { c.pc = 0x002130B0u; return; } if (c.pc != 0x00344304u) [[unlikely]] return; }
L_00344304:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 320u)));
    c.r[4].d[0] = c.r[18].d[0] << 48;
    set32(c.r[6], ld32((c.r[29].w[0] + 328u)));
    set32(c.r[7], ld32((c.r[16].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034431Cu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x0034431Cu) [[unlikely]] return; }
L_0034431C:
    set32(c.r[2], c.r[18].w[0] + 80u);
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[30].w[0])));
    set32(c.r[2], c.r[29].w[0] + 332u);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034433Cu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x0034433Cu) [[unlikely]] return; }
L_0034433C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344348u); c.r[4].d[0] = c.r[2].d[0] | 32896ull;  if (depth < kMaxDepth) unit_0044(c, 349u, depth + 1u); else { c.pc = 0x002130B0u; return; } if (c.pc != 0x00344348u) [[unlikely]] return; }
L_00344348:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344354u); set32(c.r[5], 0u + 37u);  if (depth < kMaxDepth) unit_0007(c, 113u, depth + 1u); else { c.pc = 0x0011D9B0u; return; } if (c.pc != 0x00344354u) [[unlikely]] return; }
L_00344354:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00344098u | kUnwind; return; } goto L_00344098; } }
    c.budget -= 1;
L_00344360:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] << 48;  if (t) { goto L_00344390; } }
    c.r[5].d[0] = c.r[22].d[0] << 48;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034438Cu); set32(c.r[7], c.r[7].w[0] + 5272u);  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x0034438Cu) [[unlikely]] return; }
L_0034438C:
    c.budget -= 1;
L_00344390:
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[22], c.r[22].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00344060u | kUnwind; return; } goto L_00344060; } }
    c.budget -= 1;
L_003443B8:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_003443F0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[4].d[0] = c.r[3].d[0] << 56;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (t) { goto L_00344650; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; c.r[16].d[0] = c.r[4].d[0] << 56;  if (t) { goto L_00344650; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + 17696u);
    set32(c.r[4], c.r[16].w[0] << 2);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00344490; } }
L_00344458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344460u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00344460u) [[unlikely]] return; }
L_00344460:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344470u); set32(c.r[5], c.r[5].w[0] + 5296u);  if (depth < kMaxDepth) unit_0007(c, 149u, depth + 1u); else { c.pc = 0x0011E4D0u; return; } if (c.pc != 0x00344470u) [[unlikely]] return; }
L_00344470:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00344490; } }
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[3], c.r[18].w[0] + 1u);
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[18].d[0] = c.r[3].d[0] << 56;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull; c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00344458u | kUnwind; return; } goto L_00344458; } }
L_00344490:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00344650; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003444A4u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x003444A4u) [[unlikely]] return; }
L_003444A4:
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + 100u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[17], c.r[29].w[0] + 184u);  if (t) { goto L_003444C8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003444E4; } }
L_003444C8:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_003444E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    set32(c.r[2], c.r[4].w[0] + 190u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[4], c.r[29].w[0] + 188u);
    st32((c.r[29].w[0] + 184u), c.f[1]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[29].w[0] + 184u), c.f[0]);  if (t) { goto L_00344510; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0034452C; } }
L_00344510:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_0034452C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.r[3].d[0] = c.r[18].d[0] << 56;
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], 0u + 224u);
    st32((c.r[4].w[0]), c.f[2]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[4].w[0]), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 14u)));
    c.f[1] = c.r[2].w[0];
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 12u)));
    set32(c.r[2], 0u + 36u);
    c.f[2] = c.r[4].w[0];
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = c.r[5].w[0];
    c.f[21] = fp::cvt_s_w(c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 27;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.f[21] = fp::sub(c.f[21], c.f[0]);  if (t) { goto L_003445B0; } }
    set32(c.r[2], 0u + 22u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);  if (t) { goto L_003445B0; } }
    c.f[0] = c.r[2].w[0];
    c.f[21] = fp::sub(c.f[21], c.f[0]);
    c.budget -= 3;
L_003445B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003445B8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x003445B8u) [[unlikely]] return; }
L_003445B8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 6u)));
    c.f[14] = 0u;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.f[12] = ld32((c.r[2].w[0] + 184u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003445D4u); c.f[13] = c.f[21];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003445D4u) [[unlikely]] return; }
L_003445D4:
    set32(c.r[4], c.r[19].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003445E0u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_00AC(c, 67u, depth + 1u); else { c.pc = 0x003B0B80u; return; } if (c.pc != 0x003445E0u) [[unlikely]] return; }
L_003445E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003445E8u); set32(c.r[4], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_00AC(c, 58u, depth + 1u); else { c.pc = 0x003B07A0u; return; } if (c.pc != 0x003445E8u) [[unlikely]] return; }
L_003445E8:
    c.f[20] = c.f[0];
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003445F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003445F8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x003445F8u) [[unlikely]] return; }
L_003445F8:
    c.f[12] = ld32((c.r[17].w[0]));
    c.f[14] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344608u); c.f[13] = c.f[21];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00344608u) [[unlikely]] return; }
L_00344608:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[16].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);  if (t) { goto L_00344628; } }
    set32(c.r[5], 0u + 12u);
    set32(c.r[4], c.r[4].w[0] - 18784u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344624u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00344624u) [[unlikely]] return; }
L_00344624:
    c.budget -= 1;
L_00344628:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[4], c.r[4].w[0] - 18544u);
    set32(c.r[5], 0u + 12u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034463Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x0034463Cu) [[unlikely]] return; }
L_0034463C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003445F0u | kUnwind; return; } goto L_003445F0; } }
    c.budget -= 1;
L_00344650:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00344680:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00344690:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003446A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003446B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6208u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[17], c.r[4].w[0] + 304u);  if (t) { goto L_00344778; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00344760; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_00344740; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00344720; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00344700; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00344788; } }
L_00344700:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034470Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0090(c, 443u, depth + 1u); else { c.pc = 0x00343D10u; return; } if (c.pc != 0x0034470Cu) [[unlikely]] return; }
L_0034470C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344714u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 43u, depth + 1u); else { c.pc = 0x00344680u; return; } if (c.pc != 0x00344714u) [[unlikely]] return; }
L_00344714:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00344788; } }
    c.budget -= 1;
L_00344720:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344728u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 443u, depth + 1u); else { c.pc = 0x00343D10u; return; } if (c.pc != 0x00344728u) [[unlikely]] return; }
L_00344728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344730u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 43u, depth + 1u); else { c.pc = 0x00344680u; return; } if (c.pc != 0x00344730u) [[unlikely]] return; }
L_00344730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344738u);  if (depth < kMaxDepth) unit_0091(c, 44u, depth + 1u); else { c.pc = 0x00344690u; return; } if (c.pc != 0x00344738u) [[unlikely]] return; }
L_00344738:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00344788; } }
L_00344740:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034474Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0090(c, 443u, depth + 1u); else { c.pc = 0x00343D10u; return; } if (c.pc != 0x0034474Cu) [[unlikely]] return; }
L_0034474C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344754u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 45u, depth + 1u); else { c.pc = 0x003446A0u; return; } if (c.pc != 0x00344754u) [[unlikely]] return; }
L_00344754:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00344788; } }
    c.budget -= 1;
L_00344760:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034476Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0090(c, 443u, depth + 1u); else { c.pc = 0x00343D10u; return; } if (c.pc != 0x0034476Cu) [[unlikely]] return; }
L_0034476C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00344788; } }
    c.budget -= 1;
L_00344778:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344784u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0090(c, 443u, depth + 1u); else { c.pc = 0x00343D10u; return; } if (c.pc != 0x00344784u) [[unlikely]] return; }
L_00344784:
    c.budget -= 1;
L_00344788:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344794u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 447u, depth + 1u); else { c.pc = 0x00343DB0u; return; } if (c.pc != 0x00344794u) [[unlikely]] return; }
L_00344794:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003447A0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 453u, depth + 1u); else { c.pc = 0x00343EB0u; return; } if (c.pc != 0x003447A0u) [[unlikely]] return; }
L_003447A0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003447ACu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 29u, depth + 1u); else { c.pc = 0x003443F0u; return; } if (c.pc != 0x003447ACu) [[unlikely]] return; }
L_003447AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003447C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 45u)));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00344810; } }
    c.budget -= 1;
L_003447E8:
    set32(c.r[4], 0u + 3u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003447F8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 171u, depth + 1u); else { c.pc = 0x00231B40u; return; } if (c.pc != 0x003447F8u) [[unlikely]] return; }
L_003447F8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 45u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003447E8u | kUnwind; return; } goto L_003447E8; } }
    c.budget -= 1;
L_00344810:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344820u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004C(c, 171u, depth + 1u); else { c.pc = 0x00231B40u; return; } if (c.pc != 0x00344820u) [[unlikely]] return; }
L_00344820:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00344840:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_00344858:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344868u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 171u, depth + 1u); else { c.pc = 0x00231B40u; return; } if (c.pc != 0x00344868u) [[unlikely]] return; }
L_00344868:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00344858u | kUnwind; return; } goto L_00344858; } }
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344884u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004C(c, 171u, depth + 1u); else { c.pc = 0x00231B40u; return; } if (c.pc != 0x00344884u) [[unlikely]] return; }
L_00344884:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003448A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_003448B8:
    set32(c.r[4], 0u + 11u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003448C8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 171u, depth + 1u); else { c.pc = 0x00231B40u; return; } if (c.pc != 0x003448C8u) [[unlikely]] return; }
L_003448C8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003448B8u | kUnwind; return; } goto L_003448B8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003448E4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 171u, depth + 1u); else { c.pc = 0x00231B40u; return; } if (c.pc != 0x003448E4u) [[unlikely]] return; }
L_003448E4:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], 0u + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003448F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004C(c, 171u, depth + 1u); else { c.pc = 0x00231B40u; return; } if (c.pc != 0x003448F4u) [[unlikely]] return; }
L_003448F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00344910:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[1].d[0] = 0ull | 45680ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[4].w[0] + 28u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 19u)));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[2], c.r[18].w[0] + c.r[1].w[0]);  if (t) { goto L_00344988; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 44u)));
    c.r[1].d[0] = c.r[1].d[0] | 45712ull;
    set32(c.r[6], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[6].w[0] - c.r[3].w[0]);  if (t) { goto L_00344998; } }
L_00344988:
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 45712ull;
    set32(c.r[17], c.r[3].w[0] + c.r[1].w[0]);
    c.budget -= 4;
L_00344998:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[3], 0u + 21u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 20u);  if (t) { goto L_00344B80; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[6], 0u + 10u);  if (t) { goto L_00344B78; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[6].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_00344B70; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00344B68; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00344B58; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00344A98; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00344A48; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003449F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00344B88; } }
L_003449F0:
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00344A08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_00344B88; } }
    c.budget -= 1;
L_00344A08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], c.r[2].w[0] + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344A18u); set32(c.r[4], c.r[4].w[0] + 9296u);  if (depth < kMaxDepth) unit_0007(c, 138u, depth + 1u); else { c.pc = 0x0011E108u; return; } if (c.pc != 0x00344A18u) [[unlikely]] return; }
L_00344A18:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00344A30; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00344B88; } }
    c.budget -= 1;
L_00344A30:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344A40u); st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0049(c, 23u, depth + 1u); else { c.pc = 0x00224260u; return; } if (c.pc != 0x00344A40u) [[unlikely]] return; }
L_00344A40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00344B88; } }
L_00344A48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344A50u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x00344A50u) [[unlikely]] return; }
L_00344A50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00344B88; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344A7Cu); st16((c.r[19].w[0] + 8u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00344A7Cu) [[unlikely]] return; }
L_00344A7C:
    c.r[1].d[0] = 0ull | 45712ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + c.r[1].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344A90u); c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00344A90u) [[unlikely]] return; }
L_00344A90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00344B88; } }
L_00344A98:
    set32(c.r[7], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[4], c.r[19].w[0] + 4u);
    set32(c.r[5], c.r[19].w[0] + 8u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344AB0u); c.r[8].sd[0] = static_cast<std::int32_t>(0x00010000u);  call(c, 0x01D1DB30u, depth + 1u); if (c.pc != 0x00344AB0u) [[unlikely]] return; }
L_00344AB0:
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00344B38; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 5304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344ACCu); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0007(c, 138u, depth + 1u); else { c.pc = 0x0011E108u; return; } if (c.pc != 0x00344ACCu) [[unlikely]] return; }
L_00344ACC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00344AE0; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00344B88; } }
L_00344AE0:
    c.r[1].d[0] = 0ull | 45712ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00E60000u);
    set32(c.r[5], c.r[18].w[0] + c.r[1].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344AF4u); c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00344AF4u) [[unlikely]] return; }
L_00344AF4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00E50000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344B04u); c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00344B04u) [[unlikely]] return; }
L_00344B04:
    c.r[1].d[0] = 0ull | 45680ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00900000u);
    set32(c.r[5], c.r[18].w[0] + c.r[1].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1760u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344B1Cu); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00344B1Cu) [[unlikely]] return; }
L_00344B1C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 8u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00344B88; } }
    c.budget -= 1;
L_00344B38:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00344B88; } }
    set32(c.r[2], 0u + 20u);
    st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 8u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00344B88; } }
    c.budget -= 1;
L_00344B58:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344B68u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007F(c, 170u, depth + 1u); else { c.pc = 0x002FEDB0u; return; } if (c.pc != 0x00344B68u) [[unlikely]] return; }
L_00344B68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 2u);  if (t) { goto L_00344B88; } }
L_00344B70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_00344B88; } }
L_00344B78:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00344B80:
    set32(c.r[16], 0u - 1u);
    c.budget -= 2;
L_00344B88:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00344BB0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00344BE8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00344BF0; } }
L_00344BE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00344E20; } }
L_00344BF0:
    c.r[1].d[0] = 0ll < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00344E18; } }
    c.r[1].d[0] = c.r[7].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[18], c.r[7].w[0] - 8u);  if (t) { goto L_00344DC8; } }
    c.r[17].d[0] = c.r[6].d[0] & 255ull;
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00344C10:
    set32(c.r[3], ld32((c.r[28].w[0] - 27776u)));
    c.r[9].d[0] = c.r[20].d[0] & 7ull;
    c.r[23].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[21], c.r[8].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[20].w[0] + 1u);
    c.r[24].d[0] = c.r[2].d[0] & 7ull;
    set32(c.r[15], c.r[20].w[0] + 6u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 8u);
    set32(c.r[14], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[2], c.r[20].w[0] + 2u);
    c.r[22].d[0] = ld8((c.r[3].w[0]));
    c.r[13].d[0] = c.r[2].d[0] & 7ull;
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + c.r[23].w[0]);
    set32(c.r[12], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[20].w[0] + 3u);
    c.r[11].d[0] = c.r[2].d[0] & 7ull;
    c.r[22].d[0] = c.r[23].d[0] ^ c.r[22].d[0];
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    c.r[23].d[0] = c.r[15].d[0] & 7ull;
    c.r[21].d[0] = c.r[22].d[0] ^ c.r[21].d[0];
    set32(c.r[15], c.r[16].w[0] + c.r[15].w[0]);
    set32(c.r[2], c.r[20].w[0] + 4u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[21].w[0]));
    set32(c.r[15], c.r[8].w[0] + c.r[15].w[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[15]);
    set32(c.r[22], c.r[20].w[0] + 7u);
    c.r[25].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[21].d[0] = c.r[22].d[0] & 7ull;
    set32(c.r[15], ld32((c.r[28].w[0] - 27776u)));
    set32(c.r[10], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    c.r[9].d[0] = c.r[2].d[0] & 7ull;
    set32(c.r[2], c.r[20].w[0] + 5u);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    c.r[30].d[0] = c.r[2].d[0] & 7ull;
    set32(c.r[20], c.r[20].w[0] + 8u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[21]);
    set32(c.r[5], c.r[5].w[0] + 2u);
    set32(c.r[15], c.r[15].w[0] + c.r[24].w[0]);
    set32(c.r[21], c.r[16].w[0] + c.r[22].w[0]);
    c.r[15].d[0] = ld8((c.r[15].w[0]));
    set32(c.r[22], c.r[8].w[0] + c.r[21].w[0]);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + c.r[25].w[0]);
    c.r[21].d[0] = c.r[20].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.r[15].d[0] = c.r[25].d[0] ^ c.r[15].d[0];
    c.r[14].d[0] = c.r[15].d[0] ^ c.r[14].d[0];
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[14].w[0]));
    set32(c.r[15], ld32((c.r[28].w[0] - 27776u)));
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.r[14].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[13], c.r[15].w[0] + c.r[13].w[0]);
    c.r[13].d[0] = ld8((c.r[13].w[0]));
    set32(c.r[19], c.r[19].w[0] + c.r[14].w[0]);
    c.r[13].d[0] = c.r[14].d[0] ^ c.r[13].d[0];
    c.r[12].d[0] = c.r[13].d[0] ^ c.r[12].d[0];
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[12], ld32((c.r[28].w[0] - 27776u)));
    c.r[13].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[11], c.r[12].w[0] + c.r[11].w[0]);
    c.r[11].d[0] = ld8((c.r[11].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    set32(c.r[19], c.r[19].w[0] + c.r[13].w[0]);
    c.r[11].d[0] = c.r[13].d[0] ^ c.r[11].d[0];
    c.r[10].d[0] = c.r[11].d[0] ^ c.r[10].d[0];
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[10], ld32((c.r[28].w[0] - 27776u)));
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.r[11].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    c.r[9].d[0] = ld8((c.r[9].w[0]));
    set32(c.r[19], c.r[19].w[0] + c.r[11].w[0]);
    c.r[9].d[0] = c.r[11].d[0] ^ c.r[9].d[0];
    c.r[3].d[0] = c.r[9].d[0] ^ c.r[3].d[0];
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 27776u)));
    c.r[9].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] + c.r[30].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    set32(c.r[19], c.r[19].w[0] + c.r[9].w[0]);
    c.r[3].d[0] = c.r[9].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 27776u)));
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[19], c.r[19].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 27776u)));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);
    c.r[9].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[19], c.r[19].w[0] + c.r[9].w[0]);
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.r[2].d[0] = c.r[9].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[22].d[0];
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 110;
    { const bool t = c.r[21].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00344C10u | kUnwind; return; } goto L_00344C10; } }
L_00344DC8:
    c.r[1].d[0] = c.r[20].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[6].d[0] & 255ull;  if (t) { goto L_00344E18; } }
    set32(c.r[11], c.r[2].w[0] + c.r[20].w[0]);
    c.budget -= 1;
L_00344DD8:
    set32(c.r[6], ld32((c.r[28].w[0] - 27776u)));
    c.r[9].d[0] = c.r[20].d[0] & 7ull;
    c.r[10].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[3], c.r[8].w[0] + c.r[11].w[0]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    set32(c.r[11], c.r[11].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[19], c.r[19].w[0] + c.r[10].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[6].d[0] = c.r[10].d[0] ^ c.r[6].d[0];
    c.r[3].d[0] = c.r[6].d[0] ^ c.r[3].d[0];
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00344DD8u | kUnwind; return; } goto L_00344DD8; } }
L_00344E18:
    c.r[2].d[0] = c.r[19].d[0] & 32767ull;
    c.budget -= 2;
L_00344E20:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00344E50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 16336u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[5].w[0]);  c.pc = t; return; }
L_00344E70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st8((c.r[29].w[0] + 25u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], 0u + 1u);
    st8((c.r[29].w[0] + 24u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], c.r[3].w[0] + 16336u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00344EB0; } }
    c.r[4].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00344EB0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00344EB0u) [[unlikely]] return; }
L_00344EB0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00344EC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 16u);
    c.r[5].d[0] = ld16((c.r[1].w[0] + 20594u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00344EF8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00344EF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344EECu);  if (depth < kMaxDepth) unit_0091(c, 88u, depth + 1u); else { c.pc = 0x00344E70u; return; } if (c.pc != 0x00344EECu) [[unlikely]] return; }
L_00344EEC:
    c.budget -= 1;
L_00344EF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00344F38; } }
L_00344EF8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_00344F38; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00344F18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 24u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00344F28; } }
L_00344F18:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344F24u); st8((c.r[29].w[0] + 24u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0091(c, 169u, depth + 1u); else { c.pc = 0x00345A40u; return; } if (c.pc != 0x00344F24u) [[unlikely]] return; }
L_00344F24:
    c.budget -= 1;
L_00344F28:
    c.r[4].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00344F38u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 98u, depth + 1u); else { c.pc = 0x00345020u; return; } if (c.pc != 0x00344F38u) [[unlikely]] return; }
L_00344F38:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00344F50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 16536u);
    c.budget -= 5;
    { set32(c.r[6], 0u + 3584u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011AB50u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 201u, depth); }
L_00344F70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 20120u);
    c.budget -= 5;
    { set32(c.r[6], 0u + 440u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011AB50u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 201u, depth); }
L_00344F90:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] + 16512u);
    c.budget -= 4;
L_00344FA0:
    c.r[3].d[0] = ld8((c.r[7].w[0] + 28u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[2].w[0] << 3);  if (t) { goto L_00344FF8; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[9], c.r[3].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + 16540u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16548u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[7], c.r[7].w[0] + 16541u);
    set32(c.r[4], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 16536u);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[5].w[0]);  if (t) { goto L_00345010; } }
L_00344FF8:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[2].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00344FA0u | kUnwind; return; } goto L_00344FA0; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_00345010:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00345020:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 40u), c.r[4].d[0]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003450D0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[4].d[0] = ld16((c.r[1].w[0] + 20596u));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 16512u);
    c.budget -= 5;
L_00345050:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003450B8; } }
    c.r[2].d[0] = ld16((c.r[6].w[0] + 32u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[16].w[0] << 3);  if (t) { goto L_003450B8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 16540u);
    set32(c.r[3], c.r[3].w[0] + 16541u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 16548u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003450B0; } }
    c.r[4].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003450B0u); set32(c.r[5], c.r[29].w[0] + 40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003450B0u) [[unlikely]] return; }
L_003450B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00345138; } }
L_003450B8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00345050u | kUnwind; return; } goto L_00345050; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00345130; } }
L_003450D0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[16].w[0] << 3);  if (t) { goto L_00345130; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 16540u);
    set32(c.r[3], c.r[3].w[0] + 16541u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 16548u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00345128; } }
    c.r[4].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00345128u); set32(c.r[5], c.r[29].w[0] + 40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00345128u) [[unlikely]] return; }
L_00345128:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00345138; } }
L_00345130:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_00345138:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00345150:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[16], c.r[16].w[0] + 16512u);
    c.budget -= 8;
L_00345170:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 28u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00345198; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00345198; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00345194u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00345194u) [[unlikely]] return; }
L_00345194:
    c.budget -= 1;
L_00345198:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00345170u | kUnwind; return; } goto L_00345170; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] + 16512u);
    c.budget -= 4;
L_003451B8:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 3616u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003451E0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 3608u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003451E0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003451DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003451DCu) [[unlikely]] return; }
L_003451DC:
    c.budget -= 1;
L_003451E0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 40u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003451B8u | kUnwind; return; } goto L_003451B8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00345210:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 16512u);
    c.budget -= 4;
L_00345220:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 28u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00345230; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_00345230:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00345220u | kUnwind; return; } goto L_00345220; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00345250:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = c.r[4].d[0] & 65535ull;
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    c.r[12].d[0] = 0ull + 0ull;
    set32(c.r[11], c.r[11].w[0] + 18880u);
    set32(c.r[10], c.r[10].w[0] + 19120u);
    set32(c.r[9], c.r[9].w[0] + 19360u);
    set32(c.r[8], c.r[8].w[0] + 19600u);
    set32(c.r[3], 0u + 8u);
    c.budget -= 14;
L_00345288:
    c.r[5].d[0] = ld8((c.r[11].w[0]));
    c.r[4].d[0] = ld8((c.r[10].w[0]));
    c.r[2].d[0] = ld8((c.r[9].w[0]));
    set32(c.r[5], c.r[5].w[0] << 8);
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_003452E8; } }
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_003452E8; } }
    c.r[2].d[0] = ld8((c.r[8].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_003452E8; } }
    set32(c.r[3], c.r[12].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 19840u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00345308; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003452E0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003452E0u) [[unlikely]] return; }
L_003452E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00345310; } }
L_003452E8:
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.r[2].d[0] = c.r[12].sd[0] < 232ll ? 1ull : 0ull;
    set32(c.r[11], c.r[11].w[0] + 1u);
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00345288u | kUnwind; return; } goto L_00345288; } }
    c.budget -= 1;
L_00345308:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00345310:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00345320:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] + 16512u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00345348; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003453D8; } }
L_00345348:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 20664u));
    c.r[16].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st16((c.r[1].w[0] + 20664u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
L_00345368:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 10160u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[5], c.r[5].w[0] + 6832u);
    set32(c.r[6], c.r[6].w[0] + 6064u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345388u); set32(c.r[7], 0u + 768u);  if (depth < kMaxDepth) unit_0085(c, 42u, depth + 1u); else { c.pc = 0x003144E0u; return; } if (c.pc != 0x00345388u) [[unlikely]] return; }
L_00345388:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 20588u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 20588u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003453B8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003453B8; } }
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003453B8u); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_0091(c, 117u, depth + 1u); else { c.pc = 0x003453F0u; return; } if (c.pc != 0x003453B8u) [[unlikely]] return; }
L_003453B8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00345368u | kUnwind; return; } goto L_00345368; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003453D0u);  if (depth < kMaxDepth) unit_0091(c, 102u, depth + 1u); else { c.pc = 0x00345150u; return; } if (c.pc != 0x003453D0u) [[unlikely]] return; }
L_003453D0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_003453D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003453F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = ld8((c.r[1].w[0] + 6833u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 6834u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[2].w[0] << 8);
    c.r[9].d[0] = ld8((c.r[1].w[0] + 6835u));
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[9].d[0];
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 6840u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 6838u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[8].d[0] = ld8((c.r[1].w[0] + 6839u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st16((c.r[1].w[0] + 20594u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 6836u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[7].d[0] = ld8((c.r[1].w[0] + 6837u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] + 20600u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st16((c.r[1].w[0] + 20592u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    st16((c.r[1].w[0] + 20596u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], c.r[2].w[0] << 8);
    c.r[5].d[0] = ld16((c.r[1].w[0] + 20596u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[8].d[0];
    c.r[2].d[0] = ld8((c.r[1].w[0] + 6832u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    st16((c.r[1].w[0] + 20598u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 20598u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st16((c.r[1].w[0] + 20596u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[2].d[0] & 15ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[7].d[0];
    c.budget -= 49;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003454B4u); st16((c.r[1].w[0] + 20598u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0091(c, 109u, depth + 1u); else { c.pc = 0x00345250u; return; } if (c.pc != 0x003454B4u) [[unlikely]] return; }
L_003454B4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003454D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[1].w[0] + 16512u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] + 16516u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 16520u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 16524u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st16((c.r[1].w[0] + 16528u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st16((c.r[1].w[0] + 16530u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 16532u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034551Cu); st8((c.r[1].w[0] + 25113u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0091(c, 94u, depth + 1u); else { c.pc = 0x00344F50u; return; } if (c.pc != 0x0034551Cu) [[unlikely]] return; }
L_0034551C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345524u);  if (depth < kMaxDepth) unit_0091(c, 95u, depth + 1u); else { c.pc = 0x00344F70u; return; } if (c.pc != 0x00345524u) [[unlikely]] return; }
L_00345524:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00345540:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034555Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x0034555Cu) [[unlikely]] return; }
L_0034555C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00345598; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345574u);  if (depth < kMaxDepth) unit_0091(c, 125u, depth + 1u); else { c.pc = 0x003455B0u; return; } if (c.pc != 0x00345574u) [[unlikely]] return; }
L_00345574:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00345598; } }
L_00345598:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003455B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003455CCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x003455CCu) [[unlikely]] return; }
L_003455CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003455DCu); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x003455DCu) [[unlikely]] return; }
L_003455DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003455E8u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x003455E8u) [[unlikely]] return; }
L_003455E8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00345600:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = ld16((c.r[1].w[0] + 20594u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_00345650; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00345630; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 24u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00345640; } }
L_00345630:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034563Cu); st8((c.r[29].w[0] + 24u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0091(c, 169u, depth + 1u); else { c.pc = 0x00345A40u; return; } if (c.pc != 0x0034563Cu) [[unlikely]] return; }
L_0034563C:
    c.budget -= 1;
L_00345640:
    c.r[4].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345650u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 98u, depth + 1u); else { c.pc = 0x00345020u; return; } if (c.pc != 0x00345650u) [[unlikely]] return; }
L_00345650:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00345660:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034567Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x0034567Cu) [[unlikely]] return; }
L_0034567C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_003456B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345694u);  if (depth < kMaxDepth) unit_0091(c, 135u, depth + 1u); else { c.pc = 0x003456D0u; return; } if (c.pc != 0x00345694u) [[unlikely]] return; }
L_00345694:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003456B8; } }
L_003456B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003456D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003456ECu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x003456ECu) [[unlikely]] return; }
L_003456EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003456FCu); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x003456FCu) [[unlikely]] return; }
L_003456FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345708u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x00345708u) [[unlikely]] return; }
L_00345708:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00345720:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = ld16((c.r[1].w[0] + 20594u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_00345770; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00345750; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 24u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00345760; } }
L_00345750:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034575Cu); st8((c.r[29].w[0] + 24u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0091(c, 169u, depth + 1u); else { c.pc = 0x00345A40u; return; } if (c.pc != 0x0034575Cu) [[unlikely]] return; }
L_0034575C:
    c.budget -= 1;
L_00345760:
    c.r[4].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345770u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 98u, depth + 1u); else { c.pc = 0x00345020u; return; } if (c.pc != 0x00345770u) [[unlikely]] return; }
L_00345770:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00345780:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345794u); set32(c.r[5], c.r[5].w[0] - 6744u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00345794u) [[unlikely]] return; }
L_00345794:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003457B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003457C0u);  if (depth < kMaxDepth) unit_0091(c, 146u, depth + 1u); else { c.pc = 0x003457E0u; return; } if (c.pc != 0x003457C0u) [[unlikely]] return; }
L_003457C0:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st16((c.r[1].w[0] + 16528u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003457E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003457F8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x003457F8u) [[unlikely]] return; }
L_003457F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345804u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x00345804u) [[unlikely]] return; }
L_00345804:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345810u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x00345810u) [[unlikely]] return; }
L_00345810:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00345820:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345830u);  if (depth < kMaxDepth) unit_0091(c, 169u, depth + 1u); else { c.pc = 0x00345A40u; return; } if (c.pc != 0x00345830u) [[unlikely]] return; }
L_00345830:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034583Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 88u, depth + 1u); else { c.pc = 0x00344E70u; return; } if (c.pc != 0x0034583Cu) [[unlikely]] return; }
L_0034583C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00345850:
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[5].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00344E70u | kUnwind; return; } goto L_00344E70; }
L_00345860:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345870u);  if (depth < kMaxDepth) unit_0091(c, 169u, depth + 1u); else { c.pc = 0x00345A40u; return; } if (c.pc != 0x00345870u) [[unlikely]] return; }
L_00345870:
    set32(c.r[4], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034587Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 88u, depth + 1u); else { c.pc = 0x00344E70u; return; } if (c.pc != 0x0034587Cu) [[unlikely]] return; }
L_0034587C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00345890:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003458A0u);  if (depth < kMaxDepth) unit_0091(c, 169u, depth + 1u); else { c.pc = 0x00345A40u; return; } if (c.pc != 0x003458A0u) [[unlikely]] return; }
L_003458A0:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003458ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 88u, depth + 1u); else { c.pc = 0x00344E70u; return; } if (c.pc != 0x003458ACu) [[unlikely]] return; }
L_003458AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003458C0:
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003458D0:
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[2], c.r[5].w[0] + 2u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003458F0:
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[2], c.r[5].w[0] + 4u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 3u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00345920:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[5], c.r[16].w[0] + 2u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345960u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00345960u) [[unlikely]] return; }
L_00345960:
    c.r[2].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 2u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00345990:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003459B0u); c.r[6].d[0] = c.r[6].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x003459B0u) [[unlikely]] return; }
L_003459B0:
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003459D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[6].w[0]));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[6].w[0] + 1u));
    set32(c.r[5], c.r[5].w[0] << 8);
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00345A10; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00345A10:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_00345A20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345A20u); set32(c.r[5], c.r[16].w[0] + 2u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00345A20u) [[unlikely]] return; }
L_00345A20:
    set32(c.r[2], c.r[17].w[0] + 2u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00345A40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 6744u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345A5Cu); set32(c.r[6], 0u + 768u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00345A5Cu) [[unlikely]] return; }
L_00345A5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] - 6744u);
    set32(c.r[5], 0u + 768u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345A74u); set32(c.r[6], c.r[6].w[0] + 6064u);  if (depth < kMaxDepth) unit_0091(c, 167u, depth + 1u); else { c.pc = 0x003459D0u; return; } if (c.pc != 0x00345A74u) [[unlikely]] return; }
L_00345A74:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00345A80:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { set32(c.r[5], c.r[5].w[0] + 6064u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003458C0u | kUnwind; return; } goto L_003458C0; }
L_00345A90:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { set32(c.r[5], c.r[5].w[0] + 6064u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003458D0u | kUnwind; return; } goto L_003458D0; }
L_00345AA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345ABCu); set32(c.r[5], c.r[5].w[0] + 6064u);  if (depth < kMaxDepth) unit_0091(c, 160u, depth + 1u); else { c.pc = 0x003458C0u; return; } if (c.pc != 0x00345ABCu) [[unlikely]] return; }
L_00345ABC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345AC8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 163u, depth + 1u); else { c.pc = 0x00345920u; return; } if (c.pc != 0x00345AC8u) [[unlikely]] return; }
L_00345AC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00345AE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345AFCu); set32(c.r[5], c.r[5].w[0] + 6064u);  if (depth < kMaxDepth) unit_0091(c, 160u, depth + 1u); else { c.pc = 0x003458C0u; return; } if (c.pc != 0x00345AFCu) [[unlikely]] return; }
L_00345AFC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345B08u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 160u, depth + 1u); else { c.pc = 0x003458C0u; return; } if (c.pc != 0x00345B08u) [[unlikely]] return; }
L_00345B08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00345B20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345B3Cu); set32(c.r[5], c.r[5].w[0] + 6064u);  if (depth < kMaxDepth) unit_0091(c, 161u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x00345B3Cu) [[unlikely]] return; }
L_00345B3C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345B48u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 160u, depth + 1u); else { c.pc = 0x003458C0u; return; } if (c.pc != 0x00345B48u) [[unlikely]] return; }
L_00345B48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00345B60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345B7Cu); set32(c.r[5], c.r[5].w[0] + 6064u);  if (depth < kMaxDepth) unit_0091(c, 161u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x00345B7Cu) [[unlikely]] return; }
L_00345B7C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345B88u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 161u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x00345B88u) [[unlikely]] return; }
L_00345B88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00345BA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345BC4u); set32(c.r[5], c.r[5].w[0] + 6064u);  if (depth < kMaxDepth) unit_0091(c, 160u, depth + 1u); else { c.pc = 0x003458C0u; return; } if (c.pc != 0x00345BC4u) [[unlikely]] return; }
L_00345BC4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345BD0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 160u, depth + 1u); else { c.pc = 0x003458C0u; return; } if (c.pc != 0x00345BD0u) [[unlikely]] return; }
L_00345BD0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345BDCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 163u, depth + 1u); else { c.pc = 0x00345920u; return; } if (c.pc != 0x00345BDCu) [[unlikely]] return; }
L_00345BDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00345BF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 768u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345C18u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00345C18u) [[unlikely]] return; }
L_00345C18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[4].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + 18880u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[6].d[0] = ld8((c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 19120u);
    set32(c.r[5], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 19600u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], 0u + 129u);
    c.r[5].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 5u));
    c.budget -= 24;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00345C98; } }
    c.r[3].d[0] = ld8((c.r[1].w[0] + 6838u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 6839u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 6858u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 6859u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00345CB8; } }
L_00345C98:
    c.r[2].d[0] = ld16((c.r[28].w[0] - 22544u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[28].w[0] - 22544u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[28].w[0] - 22544u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[28].w[0] - 22544u));
    st8((c.r[16].w[0] + 11u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_00345CB8:
    set32(c.r[2], 0u + 255u);
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 15u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld16((c.r[28].w[0] - 22544u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00345CF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 768u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345D18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00345D18u) [[unlikely]] return; }
L_00345D18:
    c.r[5].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[3], 0u + 130u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 8));
    set32(c.r[2], 0u + 255u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], 0u + 2u);
    st8((c.r[17].w[0] + 7u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], c.r[17].w[0] + 10u);
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], c.r[5].w[0] + 6838u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 15u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345D64u); st8((c.r[17].w[0] + 12u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00345D64u) [[unlikely]] return; }
L_00345D64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00345D80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_00345D90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_00345DA0:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 2u));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 2u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00345DC0:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 2u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 16u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00345DF0:
    c.r[6].d[0] = c.r[5].d[0] & 65535ull;
    c.r[5].d[0] = ld16((c.r[4].w[0] + 2u));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 8));
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    st8((c.r[5].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 17u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00345E30:
    c.r[8].d[0] = ld16((c.r[4].w[0] + 2u));
    set32(c.r[7], c.r[5].w[0] >> 24);
    set32(c.r[6], c.r[5].w[0] >> 16);
    set32(c.r[3], c.r[5].w[0] >> 8);
    set32(c.r[8], c.r[4].w[0] + c.r[8].w[0]);
    st8((c.r[8].w[0] + 16u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[8].w[0] + 17u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[8].w[0] + 18u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[8].w[0] + 19u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + 4u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00345E70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[4].w[0] + 2u));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345E9Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00345E9Cu) [[unlikely]] return; }
L_00345E9C:
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00345ED0:
    set32(c.r[29], c.r[29].w[0] - 336u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[6].d[0] & 65535ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 10u));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[4].w[0] + 11u));
    c.r[8].d[0] = ld16((c.r[1].w[0] + 20584u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345F18u); c.r[6].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0091(c, 84u, depth + 1u); else { c.pc = 0x00344BB0u; return; } if (c.pc != 0x00345F18u) [[unlikely]] return; }
L_00345F18:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345F30u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x00345F30u) [[unlikely]] return; }
L_00345F30:
    c.r[5].d[0] = c.r[18].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345F3Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x00345F3Cu) [[unlikely]] return; }
L_00345F3C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345F4Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0091(c, 201u, depth + 1u); else { c.pc = 0x00345E70u; return; } if (c.pc != 0x00345F4Cu) [[unlikely]] return; }
L_00345F4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_00345F70:
    set32(c.r[29], c.r[29].w[0] - 336u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[6].d[0] & 65535ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 10u));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[4].w[0] + 11u));
    c.r[8].d[0] = ld16((c.r[1].w[0] + 20584u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345FB8u); c.r[6].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0091(c, 84u, depth + 1u); else { c.pc = 0x00344BB0u; return; } if (c.pc != 0x00345FB8u) [[unlikely]] return; }
L_00345FB8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345FD0u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x00345FD0u) [[unlikely]] return; }
L_00345FD0:
    c.r[5].d[0] = c.r[18].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345FDCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x00345FDCu) [[unlikely]] return; }
L_00345FDC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00345FECu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0091(c, 201u, depth + 1u); else { c.pc = 0x00345E70u; return; } if (c.pc != 0x00345FECu) [[unlikely]] return; }
L_00345FEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_00346010:
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[5], c.r[4].w[0] + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 10160u)));
    set32(c.r[2], c.r[2].w[0] + 12u);
    c.r[6].d[0] = c.r[2].d[0] << 48;
    c.budget -= 8;
    { c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00310150u | kUnwind; return; } [[clang::musttail]] return unit_0084(c, 54u, depth); }
L_00346030:
    set32(c.r[29], c.r[29].w[0] - 464u);
    set32(c.r[6], 0u + 232u);
    set32(c.r[7], c.r[29].w[0]);
    c.budget -= 4;
L_00346040:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 2u);
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[6].sd[0] > 0; set32(c.r[7], c.r[7].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00346040u | kUnwind; return; } goto L_00346040; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 20488u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_003460D8; } }
    set32(c.r[7], c.r[29].w[0]);
    set32(c.r[6], c.r[6].w[0] + 24138u);
    set32(c.r[4], 0u + 232u);
    c.budget -= 4;
L_00346080:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] + 2u);
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00346080u | kUnwind; return; } goto L_00346080; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[1].w[0] + 20484u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] + 20488u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00340000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], c.r[2].w[0] + 25984u);
    st32((c.r[1].w[0] + 20480u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 20489u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003460E0; } }
    c.budget -= 1;
L_003460D8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_003460E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 464u);  c.pc = t; return; }
L_003460F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034610Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x0034610Cu) [[unlikely]] return; }
L_0034610C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00346148; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346124u);  if (depth < kMaxDepth) unit_0091(c, 220u, depth + 1u); else { c.pc = 0x00346160u; return; } if (c.pc != 0x00346124u) [[unlikely]] return; }
L_00346124:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00346148; } }
L_00346148:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00346160:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    set32(c.r[5], 0u + 181u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034617Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034617Cu) [[unlikely]] return; }
L_0034617C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034618Cu); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034618Cu) [[unlikely]] return; }
L_0034618C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346198u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x00346198u) [[unlikely]] return; }
L_00346198:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003461B0:
    c.budget -= 2;
    { c.r[4].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00344EC0u | kUnwind; return; } goto L_00344EC0; }
L_003461C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003461DCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x003461DCu) [[unlikely]] return; }
L_003461DC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00346248; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003461F4u);  if (depth < kMaxDepth) unit_0091(c, 234u, depth + 1u); else { c.pc = 0x00346260u; return; } if (c.pc != 0x003461F4u) [[unlikely]] return; }
L_003461F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003461FCu);  if (depth < kMaxDepth) unit_0091(c, 240u, depth + 1u); else { c.pc = 0x003462D0u; return; } if (c.pc != 0x003461FCu) [[unlikely]] return; }
L_003461FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346204u);  if (depth < kMaxDepth) unit_0091(c, 246u, depth + 1u); else { c.pc = 0x00346340u; return; } if (c.pc != 0x00346204u) [[unlikely]] return; }
L_00346204:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034620Cu);  if (depth < kMaxDepth) unit_0091(c, 252u, depth + 1u); else { c.pc = 0x003463B0u; return; } if (c.pc != 0x0034620Cu) [[unlikely]] return; }
L_0034620C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346214u);  if (depth < kMaxDepth) unit_0091(c, 258u, depth + 1u); else { c.pc = 0x00346420u; return; } if (c.pc != 0x00346214u) [[unlikely]] return; }
L_00346214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034621Cu);  if (depth < kMaxDepth) unit_0091(c, 263u, depth + 1u); else { c.pc = 0x00346470u; return; } if (c.pc != 0x0034621Cu) [[unlikely]] return; }
L_0034621C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346224u);  if (depth < kMaxDepth) unit_0091(c, 269u, depth + 1u); else { c.pc = 0x003464E0u; return; } if (c.pc != 0x00346224u) [[unlikely]] return; }
L_00346224:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00346248; } }
L_00346248:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00346260:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 183u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346284u); set32(c.r[16], c.r[16].w[0] + 24138u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x00346284u) [[unlikely]] return; }
L_00346284:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034628Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0034628Cu) [[unlikely]] return; }
L_0034628C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003462A0u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 208u, depth + 1u); else { c.pc = 0x00345F70u; return; } if (c.pc != 0x003462A0u) [[unlikely]] return; }
L_003462A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003462ACu); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x003462ACu) [[unlikely]] return; }
L_003462AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003462B8u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x003462B8u) [[unlikely]] return; }
L_003462B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003462D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 184u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003462F4u); set32(c.r[16], c.r[16].w[0] + 24138u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x003462F4u) [[unlikely]] return; }
L_003462F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003462FCu); set32(c.r[4], c.r[16].w[0] + 65u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x003462FCu) [[unlikely]] return; }
L_003462FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[5], c.r[16].w[0] + 65u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346310u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 208u, depth + 1u); else { c.pc = 0x00345F70u; return; } if (c.pc != 0x00346310u) [[unlikely]] return; }
L_00346310:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034631Cu); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034631Cu) [[unlikely]] return; }
L_0034631C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346328u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x00346328u) [[unlikely]] return; }
L_00346328:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00346340:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 185u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346364u); set32(c.r[16], c.r[16].w[0] + 24138u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x00346364u) [[unlikely]] return; }
L_00346364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034636Cu); set32(c.r[4], c.r[16].w[0] + 76u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0034636Cu) [[unlikely]] return; }
L_0034636C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[5], c.r[16].w[0] + 76u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346380u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 208u, depth + 1u); else { c.pc = 0x00345F70u; return; } if (c.pc != 0x00346380u) [[unlikely]] return; }
L_00346380:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034638Cu); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034638Cu) [[unlikely]] return; }
L_0034638C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346398u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x00346398u) [[unlikely]] return; }
L_00346398:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003463B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 186u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003463D4u); set32(c.r[16], c.r[16].w[0] + 24138u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x003463D4u) [[unlikely]] return; }
L_003463D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003463DCu); set32(c.r[4], c.r[16].w[0] + 205u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x003463DCu) [[unlikely]] return; }
L_003463DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[5], c.r[16].w[0] + 205u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003463F0u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 208u, depth + 1u); else { c.pc = 0x00345F70u; return; } if (c.pc != 0x003463F0u) [[unlikely]] return; }
L_003463F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003463FCu); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x003463FCu) [[unlikely]] return; }
L_003463FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346408u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x00346408u) [[unlikely]] return; }
L_00346408:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00346420:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346438u); set32(c.r[5], 0u + 187u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x00346438u) [[unlikely]] return; }
L_00346438:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 24472u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034644Cu); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 198u, depth + 1u); else { c.pc = 0x00345DC0u; return; } if (c.pc != 0x0034644Cu) [[unlikely]] return; }
L_0034644C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346458u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x00346458u) [[unlikely]] return; }
L_00346458:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346464u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x00346464u) [[unlikely]] return; }
L_00346464:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00346470:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 188u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346494u); set32(c.r[16], c.r[16].w[0] + 24138u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x00346494u) [[unlikely]] return; }
L_00346494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034649Cu); set32(c.r[4], c.r[16].w[0] + 335u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0034649Cu) [[unlikely]] return; }
L_0034649C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[5], c.r[16].w[0] + 335u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003464B0u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 208u, depth + 1u); else { c.pc = 0x00345F70u; return; } if (c.pc != 0x003464B0u) [[unlikely]] return; }
L_003464B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003464BCu); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x003464BCu) [[unlikely]] return; }
L_003464BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003464C8u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x003464C8u) [[unlikely]] return; }
L_003464C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003464E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    set32(c.r[5], 0u + 189u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003464FCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x003464FCu) [[unlikely]] return; }
L_003464FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034650Cu); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034650Cu) [[unlikely]] return; }
L_0034650C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346518u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x00346518u) [[unlikely]] return; }
L_00346518:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00346530:
    c.budget -= 2;
    { c.r[4].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00344EC0u | kUnwind; return; } goto L_00344EC0; }
L_00346540:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0] + 8u), c.r[4].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00346560; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 20490u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00346570; } }
L_00346560:
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] + 20490u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00346570:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00346580:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 20480u);
    c.r[4].d[0] = ld8((c.r[3].w[0] + 8u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003466B0; } }
    c.r[6].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_003466B0; } }
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 5344u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00344000u < 16384u) { entry = entries_0091[(t - 0x00344000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003465C8:
    set32(c.r[2], c.r[6].w[0] + 1u);
    st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00340000u);
    set32(c.r[4], c.r[4].w[0] + 25920u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003465E0u); st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0091(c, 217u, depth + 1u); else { c.pc = 0x003460F0u; return; } if (c.pc != 0x003465E0u) [[unlikely]] return; }
L_003465E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003466B0; } }
L_003465E8:
    c.r[5].d[0] = ld8((c.r[3].w[0] + 10u));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; set32(c.r[4], c.r[6].w[0] + 1u);  if (t) { goto L_00346600; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003466B0; } }
L_00346600:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; set32(c.r[4], 0u + 5u);  if (t) { goto L_003466B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003466B0; } }
    c.budget -= 1;
L_00346618:
    set32(c.r[2], c.r[6].w[0] + 1u);
    st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00340000u);
    set32(c.r[4], c.r[4].w[0] + 25920u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346630u); st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0091(c, 225u, depth + 1u); else { c.pc = 0x003461C0u; return; } if (c.pc != 0x00346630u) [[unlikely]] return; }
L_00346630:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003466B0; } }
L_00346638:
    c.r[5].d[0] = ld8((c.r[3].w[0] + 10u));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; set32(c.r[4], c.r[6].w[0] + 1u);  if (t) { goto L_00346650; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003466B0; } }
L_00346650:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; set32(c.r[4], 0u + 5u);  if (t) { goto L_003466B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003466B0; } }
    c.budget -= 1;
L_00346668:
    st8((c.r[29].w[0] + 24u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[4].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00346684u); set32(c.r[5], c.r[29].w[0] + 24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00346684u) [[unlikely]] return; }
L_00346684:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003466B0; } }
    c.budget -= 1;
L_00346690:
    set32(c.r[2], 0u - 1u);
    st8((c.r[29].w[0] + 24u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[4].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003466B0u); set32(c.r[5], c.r[29].w[0] + 24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003466B0u) [[unlikely]] return; }
L_003466B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003466C0:
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00346708; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003466F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003466E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00346710; } }
L_003466E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 32136u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00346710; } }
    c.budget -= 1;
L_003466F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 32135u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00346710; } }
    c.budget -= 1;
L_00346708:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    st8((c.r[1].w[0] - 32134u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 2;
L_00346710:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00346720:
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00346768; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00346758; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00346748; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00346770; } }
L_00346748:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 32126u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00346770; } }
    c.budget -= 1;
L_00346758:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 32125u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00346770; } }
    c.budget -= 1;
L_00346768:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    st8((c.r[1].w[0] - 32124u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00346770:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00346780:
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003467D8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003467C0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003467A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003467E8; } }
L_003467A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 32136u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 32126u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003467E8; } }
    c.budget -= 1;
L_003467C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 32135u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 32125u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003467E8; } }
    c.budget -= 1;
L_003467D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 32134u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    st8((c.r[1].w[0] - 32124u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003467E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003467F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 20208u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_00346840; } }
    c.r[2].d[0] = c.r[5].d[0] & 15ull;
    st32((c.r[1].w[0] + 20204u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 20232u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] + 20208u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], c.r[2].w[0] - 24640u);
    st32((c.r[1].w[0] + 20200u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 20209u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00346848; } }
    c.budget -= 1;
L_00346840:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_00346848:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00346850:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034686Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x0034686Cu) [[unlikely]] return; }
L_0034686C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003468A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346884u);  if (depth < kMaxDepth) unit_0092(c, 378u, depth + 1u); else { c.pc = 0x0034B800u; return; } if (c.pc != 0x00346884u) [[unlikely]] return; }
L_00346884:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003468A8; } }
L_003468A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003468C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld16((c.r[1].w[0] - 32132u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003468E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00CA0000u);  if (t) { goto L_00346900; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346900u); set32(c.r[4], c.r[4].w[0] - 32132u);  if (depth < kMaxDepth) unit_0093(c, 23u, depth + 1u); else { c.pc = 0x0034C200u; return; } if (c.pc != 0x00346900u) [[unlikely]] return; }
L_00346900:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346908u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x00346908u) [[unlikely]] return; }
L_00346908:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00346920:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346944u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x00346944u) [[unlikely]] return; }
L_00346944:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00346980; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034695Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0092(c, 384u, depth + 1u); else { c.pc = 0x0034B8B0u; return; } if (c.pc != 0x0034695Cu) [[unlikely]] return; }
L_0034695C:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00346980; } }
L_00346980:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003469A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 94u);  if (t) { goto L_00346A68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003469C0u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0093(c, 24u, depth + 1u); else { c.pc = 0x0034C210u; return; } if (c.pc != 0x003469C0u) [[unlikely]] return; }
L_003469C0:
    c.r[8].d[0] = ld16((c.r[29].w[0] + 94u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[6], c.r[6].w[0] - 32468u);
    set32(c.r[2], c.r[2].w[0] + 16512u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[4], c.r[8].w[0] - 1u);
    set32(c.r[7], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[7].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346A18u); set32(c.r[4], c.r[2].w[0] + 16937u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00346A18u) [[unlikely]] return; }
L_00346A18:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 94u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[4], c.r[4].w[0] - 10263u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346A34u); st16((c.r[1].w[0] - 10292u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00346A34u) [[unlikely]] return; }
L_00346A34:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 94u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[2], c.r[2].w[0] - 32444u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 13;
L_00346A68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346A70u); set32(c.r[4], 0u + 14u);  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x00346A70u) [[unlikely]] return; }
L_00346A70:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00346A80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346AA4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x00346AA4u) [[unlikely]] return; }
L_00346AA4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00346AE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346ABCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0092(c, 391u, depth + 1u); else { c.pc = 0x0034B980u; return; } if (c.pc != 0x00346ABCu) [[unlikely]] return; }
L_00346ABC:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00346AE0; } }
L_00346AE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00346B00:
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00346BF8; } }
    c.r[1].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[10], c.r[2].w[0] - 8u);  if (t) { goto L_00346BA0; } }
    c.r[8].d[0] = c.r[4].d[0] & 65535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 16512u);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 5);
    set32(c.r[8], c.r[5].w[0] + c.r[7].w[0]);
    c.budget -= 11;
L_00346B48:
    c.r[7].d[0] = ld16((c.r[8].w[0] + 16558u));
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.r[5].d[0] = c.r[3].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[8].w[0] + 16560u));
    st16((c.r[9].w[0] + 2u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[8].w[0] + 16562u));
    st16((c.r[9].w[0] + 4u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[8].w[0] + 16564u));
    st16((c.r[9].w[0] + 6u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[8].w[0] + 16566u));
    st16((c.r[9].w[0] + 8u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[8].w[0] + 16568u));
    st16((c.r[9].w[0] + 10u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[8].w[0] + 16570u));
    st16((c.r[9].w[0] + 12u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[8].w[0] + 16572u));
    st16((c.r[9].w[0] + 14u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[8], c.r[8].w[0] + 16u);
    c.budget -= 21;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00346B48u | kUnwind; return; } goto L_00346B48; } }
    c.budget -= 1;
L_00346BA0:
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_00346BF8; } }
    set32(c.r[8], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + 16512u);
    set32(c.r[5], c.r[5].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[7], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
L_00346BD8:
    c.r[5].d[0] = ld16((c.r[7].w[0] + 16558u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[4].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00346BD8u | kUnwind; return; } goto L_00346BD8; } }
    c.budget -= 1;
L_00346BF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00346C00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_00346CA8; } }
    set32(c.r[5], c.r[29].w[0] + 30u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346C24u); set32(c.r[6], c.r[29].w[0] + 24u);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C250u; return; } if (c.pc != 0x00346C24u) [[unlikely]] return; }
L_00346C24:
    c.r[7].d[0] = ld16((c.r[29].w[0] + 30u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[5], c.r[5].w[0] - 32468u);
    set32(c.r[4], c.r[4].w[0] - 32466u);
    set32(c.r[3], c.r[3].w[0] - 32464u);
    set32(c.r[2], c.r[2].w[0] - 32444u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[8], c.r[6].w[0] << 5);
    set32(c.r[6], c.r[5].w[0] + c.r[8].w[0]);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[5], c.r[4].w[0] + c.r[8].w[0]);
    c.r[6].d[0] = ld16((c.r[29].w[0] + 24u));
    set32(c.r[4], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[8].w[0]);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[2].d[0] = ld16((c.r[29].w[0] + 26u));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[1].w[0] - 10292u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    st16((c.r[1].w[0] - 10290u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    st16((c.r[1].w[0] - 10288u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 33;
L_00346CA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346CB0u); set32(c.r[4], 0u + 15u);  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x00346CB0u) [[unlikely]] return; }
L_00346CB0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00346CC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346CE4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x00346CE4u) [[unlikely]] return; }
L_00346CE4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00346D20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346CFCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0092(c, 398u, depth + 1u); else { c.pc = 0x0034BA50u; return; } if (c.pc != 0x00346CFCu) [[unlikely]] return; }
L_00346CFC:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00346D20; } }
L_00346D20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00346D40:
    c.r[6].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 32448u);
    set32(c.r[4], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00346D80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 28u);  if (t) { goto L_00346E08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346DA0u); set32(c.r[5], c.r[29].w[0] + 31u);  if (depth < kMaxDepth) unit_0093(c, 31u, depth + 1u); else { c.pc = 0x0034C2D0u; return; } if (c.pc != 0x00346DA0u) [[unlikely]] return; }
L_00346DA0:
    c.r[6].d[0] = ld16((c.r[29].w[0] + 28u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[4], c.r[4].w[0] - 32468u);
    set32(c.r[3], c.r[3].w[0] - 32448u);
    set32(c.r[2], c.r[2].w[0] - 32444u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[7], c.r[5].w[0] << 5);
    set32(c.r[5], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[7].w[0]);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[3], c.r[2].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 31u));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[1].w[0] - 10292u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    st8((c.r[1].w[0] - 10272u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 26;
L_00346E08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346E10u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x00346E10u) [[unlikely]] return; }
L_00346E10:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00346E20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346E44u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x00346E44u) [[unlikely]] return; }
L_00346E44:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00346E80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346E5Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0092(c, 405u, depth + 1u); else { c.pc = 0x0034BB20u; return; } if (c.pc != 0x00346E5Cu) [[unlikely]] return; }
L_00346E5C:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00346E80; } }
L_00346E80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00346EA0:
    set32(c.r[29], c.r[29].w[0] - 288u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 286u);  if (t) { goto L_00346F48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346EC0u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0093(c, 34u, depth + 1u); else { c.pc = 0x0034C310u; return; } if (c.pc != 0x00346EC0u) [[unlikely]] return; }
L_00346EC0:
    c.r[8].d[0] = ld16((c.r[29].w[0] + 286u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[6], c.r[6].w[0] - 32468u);
    set32(c.r[2], c.r[2].w[0] + 16512u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[4], c.r[8].w[0] - 1u);
    set32(c.r[7], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[7].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346F18u); set32(c.r[4], c.r[2].w[0] + 17002u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00346F18u) [[unlikely]] return; }
L_00346F18:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 286u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[2], c.r[2].w[0] - 32444u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 12;
L_00346F48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346F50u); set32(c.r[4], 0u + 17u);  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x00346F50u) [[unlikely]] return; }
L_00346F50:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_00346F60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346F84u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x00346F84u) [[unlikely]] return; }
L_00346F84:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00346FD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346F9Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0092(c, 412u, depth + 1u); else { c.pc = 0x0034BBF0u; return; } if (c.pc != 0x00346F9Cu) [[unlikely]] return; }
L_00346F9C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00346FACu); c.r[6].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0091(c, 286u, depth + 1u); else { c.pc = 0x003466C0u; return; } if (c.pc != 0x00346FACu) [[unlikely]] return; }
L_00346FAC:
    set32(c.r[2], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));  if (t) { goto L_00346FD0; } }
L_00346FD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00346FF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00347010; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347010u);  if (depth < kMaxDepth) unit_0091(c, 288u, depth + 1u); else { c.pc = 0x00346780u; return; } if (c.pc != 0x00347010u) [[unlikely]] return; }
L_00347010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347018u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x00347018u) [[unlikely]] return; }
L_00347018:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00347030:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034704Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x0034704Cu) [[unlikely]] return; }
L_0034704C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00347088; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347064u);  if (depth < kMaxDepth) unit_0092(c, 426u, depth + 1u); else { c.pc = 0x0034BD50u; return; } if (c.pc != 0x00347064u) [[unlikely]] return; }
L_00347064:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00347088; } }
L_00347088:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003470A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003470C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003470C0u);  if (depth < kMaxDepth) unit_0091(c, 287u, depth + 1u); else { c.pc = 0x00346720u; return; } if (c.pc != 0x003470C0u) [[unlikely]] return; }
L_003470C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003470C8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x003470C8u) [[unlikely]] return; }
L_003470C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003470E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 20248u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_00347130; } }
    c.r[2].d[0] = c.r[5].d[0] & 15ull;
    st32((c.r[1].w[0] + 20244u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 20272u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] + 20248u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], c.r[2].w[0] - 23584u);
    st32((c.r[1].w[0] + 20240u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 20249u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00347138; } }
    c.budget -= 1;
L_00347130:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_00347138:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00347140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034715Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x0034715Cu) [[unlikely]] return; }
L_0034715C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_00347198; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347174u);  if (depth < kMaxDepth) unit_0092(c, 378u, depth + 1u); else { c.pc = 0x0034B800u; return; } if (c.pc != 0x00347174u) [[unlikely]] return; }
L_00347174:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00347198; } }
L_00347198:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003471B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld16((c.r[1].w[0] - 32130u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003471D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00CA0000u);  if (t) { goto L_003471F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003471F0u); set32(c.r[4], c.r[4].w[0] - 32130u);  if (depth < kMaxDepth) unit_0093(c, 23u, depth + 1u); else { c.pc = 0x0034C200u; return; } if (c.pc != 0x003471F0u) [[unlikely]] return; }
L_003471F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003471F8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x003471F8u) [[unlikely]] return; }
L_003471F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00347210:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347234u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x00347234u) [[unlikely]] return; }
L_00347234:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00347270; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034724Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0092(c, 384u, depth + 1u); else { c.pc = 0x0034B8B0u; return; } if (c.pc != 0x0034724Cu) [[unlikely]] return; }
L_0034724C:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00347270; } }
L_00347270:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00347290:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 94u);  if (t) { goto L_00347358; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003472B0u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0093(c, 24u, depth + 1u); else { c.pc = 0x0034C210u; return; } if (c.pc != 0x003472B0u) [[unlikely]] return; }
L_003472B0:
    c.r[8].d[0] = ld16((c.r[29].w[0] + 94u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[6], c.r[6].w[0] - 31764u);
    set32(c.r[2], c.r[2].w[0] + 16512u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[4], c.r[8].w[0] - 1u);
    set32(c.r[7], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[7].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347308u); set32(c.r[4], c.r[2].w[0] + 17641u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00347308u) [[unlikely]] return; }
L_00347308:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 94u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[4], c.r[4].w[0] - 10263u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347324u); st16((c.r[1].w[0] - 10292u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00347324u) [[unlikely]] return; }
L_00347324:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 94u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[2], c.r[2].w[0] - 31740u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 13;
L_00347358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347360u); set32(c.r[4], 0u + 19u);  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x00347360u) [[unlikely]] return; }
L_00347360:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00347370:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347394u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x00347394u) [[unlikely]] return; }
L_00347394:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003473D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003473ACu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0092(c, 391u, depth + 1u); else { c.pc = 0x0034B980u; return; } if (c.pc != 0x003473ACu) [[unlikely]] return; }
L_003473AC:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003473D0; } }
L_003473D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003473F0:
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003474E8; } }
    c.r[1].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[10], c.r[2].w[0] - 8u);  if (t) { goto L_00347490; } }
    c.r[8].d[0] = c.r[4].d[0] & 65535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 16512u);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 5);
    set32(c.r[8], c.r[5].w[0] + c.r[7].w[0]);
    c.budget -= 11;
L_00347438:
    c.r[7].d[0] = ld16((c.r[8].w[0] + 17262u));
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.r[5].d[0] = c.r[3].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[8].w[0] + 17264u));
    st16((c.r[9].w[0] + 2u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[8].w[0] + 17266u));
    st16((c.r[9].w[0] + 4u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[8].w[0] + 17268u));
    st16((c.r[9].w[0] + 6u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[8].w[0] + 17270u));
    st16((c.r[9].w[0] + 8u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[8].w[0] + 17272u));
    st16((c.r[9].w[0] + 10u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[8].w[0] + 17274u));
    st16((c.r[9].w[0] + 12u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[8].w[0] + 17276u));
    st16((c.r[9].w[0] + 14u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[8], c.r[8].w[0] + 16u);
    c.budget -= 21;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00347438u | kUnwind; return; } goto L_00347438; } }
    c.budget -= 1;
L_00347490:
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_003474E8; } }
    set32(c.r[8], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + 16512u);
    set32(c.r[5], c.r[5].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[7], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
L_003474C8:
    c.r[5].d[0] = ld16((c.r[7].w[0] + 17262u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[4].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003474C8u | kUnwind; return; } goto L_003474C8; } }
    c.budget -= 1;
L_003474E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003474F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_00347598; } }
    set32(c.r[5], c.r[29].w[0] + 30u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347514u); set32(c.r[6], c.r[29].w[0] + 24u);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C250u; return; } if (c.pc != 0x00347514u) [[unlikely]] return; }
L_00347514:
    c.r[7].d[0] = ld16((c.r[29].w[0] + 30u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[5], c.r[5].w[0] - 31764u);
    set32(c.r[4], c.r[4].w[0] - 31762u);
    set32(c.r[3], c.r[3].w[0] - 31760u);
    set32(c.r[2], c.r[2].w[0] - 31740u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[8], c.r[6].w[0] << 5);
    set32(c.r[6], c.r[5].w[0] + c.r[8].w[0]);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[5], c.r[4].w[0] + c.r[8].w[0]);
    c.r[6].d[0] = ld16((c.r[29].w[0] + 24u));
    set32(c.r[4], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[8].w[0]);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[2].d[0] = ld16((c.r[29].w[0] + 26u));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[1].w[0] - 10292u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    st16((c.r[1].w[0] - 10290u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    st16((c.r[1].w[0] - 10288u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 33;
L_00347598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003475A0u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x003475A0u) [[unlikely]] return; }
L_003475A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003475B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003475D4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x003475D4u) [[unlikely]] return; }
L_003475D4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00347610; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003475ECu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0092(c, 398u, depth + 1u); else { c.pc = 0x0034BA50u; return; } if (c.pc != 0x003475ECu) [[unlikely]] return; }
L_003475EC:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00347610; } }
L_00347610:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00347630:
    c.r[6].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 31744u);
    set32(c.r[4], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00347670:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 28u);  if (t) { goto L_003476F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347690u); set32(c.r[5], c.r[29].w[0] + 31u);  if (depth < kMaxDepth) unit_0093(c, 31u, depth + 1u); else { c.pc = 0x0034C2D0u; return; } if (c.pc != 0x00347690u) [[unlikely]] return; }
L_00347690:
    c.r[6].d[0] = ld16((c.r[29].w[0] + 28u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[4], c.r[4].w[0] - 31764u);
    set32(c.r[3], c.r[3].w[0] - 31744u);
    set32(c.r[2], c.r[2].w[0] - 31740u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[7], c.r[5].w[0] << 5);
    set32(c.r[5], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[7].w[0]);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[3], c.r[2].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 31u));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[1].w[0] - 10292u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    st8((c.r[1].w[0] - 10272u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 26;
L_003476F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347700u); set32(c.r[4], 0u + 21u);  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x00347700u) [[unlikely]] return; }
L_00347700:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00347710:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347734u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x00347734u) [[unlikely]] return; }
L_00347734:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00347770; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034774Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0092(c, 405u, depth + 1u); else { c.pc = 0x0034BB20u; return; } if (c.pc != 0x0034774Cu) [[unlikely]] return; }
L_0034774C:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00347770; } }
L_00347770:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00347790:
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], c.r[2].w[0] - 1u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[6].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + 16512u);
    set32(c.r[3], c.r[3].w[0] << 1);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003477CCu); set32(c.r[5], c.r[2].w[0] + 17706u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x003477CCu) [[unlikely]] return; }
L_003477CC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003477E0:
    set32(c.r[29], c.r[29].w[0] - 288u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 286u);  if (t) { goto L_00347888; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347800u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0093(c, 34u, depth + 1u); else { c.pc = 0x0034C310u; return; } if (c.pc != 0x00347800u) [[unlikely]] return; }
L_00347800:
    c.r[8].d[0] = ld16((c.r[29].w[0] + 286u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[6], c.r[6].w[0] - 31764u);
    set32(c.r[2], c.r[2].w[0] + 16512u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[4], c.r[8].w[0] - 1u);
    set32(c.r[7], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[7].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347858u); set32(c.r[4], c.r[2].w[0] + 17706u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00347858u) [[unlikely]] return; }
L_00347858:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 286u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[2], c.r[2].w[0] - 31740u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 12;
L_00347888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347890u); set32(c.r[4], 0u + 22u);  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x00347890u) [[unlikely]] return; }
L_00347890:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_003478A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003478C4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x003478C4u) [[unlikely]] return; }
L_003478C4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_00347910; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003478DCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0092(c, 412u, depth + 1u); else { c.pc = 0x0034BBF0u; return; } if (c.pc != 0x003478DCu) [[unlikely]] return; }
L_003478DC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003478ECu); c.r[6].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0091(c, 286u, depth + 1u); else { c.pc = 0x003466C0u; return; } if (c.pc != 0x003478ECu) [[unlikely]] return; }
L_003478EC:
    set32(c.r[2], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));  if (t) { goto L_00347910; } }
L_00347910:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00347930:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00347950; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347950u);  if (depth < kMaxDepth) unit_0091(c, 288u, depth + 1u); else { c.pc = 0x00346780u; return; } if (c.pc != 0x00347950u) [[unlikely]] return; }
L_00347950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347958u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x00347958u) [[unlikely]] return; }
L_00347958:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00347970:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034798Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x0034798Cu) [[unlikely]] return; }
L_0034798C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_003479C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003479A4u);  if (depth < kMaxDepth) unit_0092(c, 426u, depth + 1u); else { c.pc = 0x0034BD50u; return; } if (c.pc != 0x003479A4u) [[unlikely]] return; }
L_003479A4:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003479C8; } }
L_003479C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003479E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00347A00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347A00u);  if (depth < kMaxDepth) unit_0091(c, 287u, depth + 1u); else { c.pc = 0x00346720u; return; } if (c.pc != 0x00347A00u) [[unlikely]] return; }
L_00347A00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347A08u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x00347A08u) [[unlikely]] return; }
L_00347A08:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00347A20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 20288u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_00347A70; } }
    c.r[2].d[0] = c.r[5].d[0] & 127ull;
    st32((c.r[1].w[0] + 20284u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 20312u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] + 20288u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], c.r[2].w[0] - 22528u);
    st32((c.r[1].w[0] + 20280u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 20289u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00347A78; } }
    c.budget -= 1;
L_00347A70:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_00347A78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00347A80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347A9Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x00347A9Cu) [[unlikely]] return; }
L_00347A9C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_00347AD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347AB4u);  if (depth < kMaxDepth) unit_0092(c, 378u, depth + 1u); else { c.pc = 0x0034B800u; return; } if (c.pc != 0x00347AB4u) [[unlikely]] return; }
L_00347AB4:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00347AD8; } }
L_00347AD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00347AF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld16((c.r[1].w[0] - 32128u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00347B10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00CA0000u);  if (t) { goto L_00347B30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347B30u); set32(c.r[4], c.r[4].w[0] - 32128u);  if (depth < kMaxDepth) unit_0093(c, 23u, depth + 1u); else { c.pc = 0x0034C200u; return; } if (c.pc != 0x00347B30u) [[unlikely]] return; }
L_00347B30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347B38u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x00347B38u) [[unlikely]] return; }
L_00347B38:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00347B50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347B74u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x00347B74u) [[unlikely]] return; }
L_00347B74:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00347BB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347B8Cu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0092(c, 391u, depth + 1u); else { c.pc = 0x0034B980u; return; } if (c.pc != 0x00347B8Cu) [[unlikely]] return; }
L_00347B8C:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00347BB0; } }
L_00347BB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00347BD0:
    c.r[6].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 21202u);
    set32(c.r[4], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00347C10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_00347CB8; } }
    set32(c.r[5], c.r[29].w[0] + 30u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347C34u); set32(c.r[6], c.r[29].w[0] + 24u);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C250u; return; } if (c.pc != 0x00347C34u) [[unlikely]] return; }
L_00347C34:
    c.r[7].d[0] = ld16((c.r[29].w[0] + 30u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[5], c.r[5].w[0] - 21204u);
    set32(c.r[4], c.r[4].w[0] - 21202u);
    set32(c.r[3], c.r[3].w[0] - 21200u);
    set32(c.r[2], c.r[2].w[0] - 21180u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[8], c.r[6].w[0] << 5);
    set32(c.r[6], c.r[5].w[0] + c.r[8].w[0]);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[5], c.r[4].w[0] + c.r[8].w[0]);
    c.r[6].d[0] = ld16((c.r[29].w[0] + 24u));
    set32(c.r[4], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[8].w[0]);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[2].d[0] = ld16((c.r[29].w[0] + 26u));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[1].w[0] - 10292u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    st16((c.r[1].w[0] - 10290u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    st16((c.r[1].w[0] - 10288u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 33;
L_00347CB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347CC0u); set32(c.r[4], 0u + 25u);  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x00347CC0u) [[unlikely]] return; }
L_00347CC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00347CD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347CF4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x00347CF4u) [[unlikely]] return; }
L_00347CF4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00347D30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347D0Cu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0092(c, 398u, depth + 1u); else { c.pc = 0x0034BA50u; return; } if (c.pc != 0x00347D0Cu) [[unlikely]] return; }
L_00347D0C:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00347D30; } }
L_00347D30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00347D50:
    c.r[6].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 21184u);
    set32(c.r[4], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00347D90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 28u);  if (t) { goto L_00347E18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347DB0u); set32(c.r[5], c.r[29].w[0] + 31u);  if (depth < kMaxDepth) unit_0093(c, 31u, depth + 1u); else { c.pc = 0x0034C2D0u; return; } if (c.pc != 0x00347DB0u) [[unlikely]] return; }
L_00347DB0:
    c.r[6].d[0] = ld16((c.r[29].w[0] + 28u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[4], c.r[4].w[0] - 21204u);
    set32(c.r[3], c.r[3].w[0] - 21184u);
    set32(c.r[2], c.r[2].w[0] - 21180u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[7], c.r[5].w[0] << 5);
    set32(c.r[5], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[7].w[0]);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[3], c.r[2].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 31u));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[1].w[0] - 10292u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    st8((c.r[1].w[0] - 10272u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 26;
L_00347E18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347E20u); set32(c.r[4], 0u + 26u);  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x00347E20u) [[unlikely]] return; }
L_00347E20:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00347E30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347E54u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x00347E54u) [[unlikely]] return; }
L_00347E54:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00347E90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347E6Cu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0092(c, 384u, depth + 1u); else { c.pc = 0x0034B8B0u; return; } if (c.pc != 0x00347E6Cu) [[unlikely]] return; }
L_00347E6C:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00347E90; } }
L_00347E90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00347EB0:
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], c.r[2].w[0] - 1u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[6].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + 16512u);
    set32(c.r[3], c.r[3].w[0] << 1);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347EECu); set32(c.r[5], c.r[2].w[0] + 28201u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00347EECu) [[unlikely]] return; }
L_00347EEC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00347F00:
    set32(c.r[29], c.r[29].w[0] - 288u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 286u);  if (t) { goto L_00347FC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347F20u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0093(c, 24u, depth + 1u); else { c.pc = 0x0034C210u; return; } if (c.pc != 0x00347F20u) [[unlikely]] return; }
L_00347F20:
    c.r[8].d[0] = ld16((c.r[29].w[0] + 286u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[6], c.r[6].w[0] - 21204u);
    set32(c.r[2], c.r[2].w[0] + 16512u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[4], c.r[8].w[0] - 1u);
    set32(c.r[7], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[7].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347F78u); set32(c.r[4], c.r[2].w[0] + 28201u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00347F78u) [[unlikely]] return; }
L_00347F78:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 286u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[4], c.r[4].w[0] - 10263u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347F94u); st16((c.r[1].w[0] - 10292u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00347F94u) [[unlikely]] return; }
L_00347F94:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 286u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[2], c.r[2].w[0] - 21180u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 13;
L_00347FC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00347FD0u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x00347FD0u) [[unlikely]] return; }
L_00347FD0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_00347FE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348004u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x00348004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0092(c, 2u, depth);
}

}
