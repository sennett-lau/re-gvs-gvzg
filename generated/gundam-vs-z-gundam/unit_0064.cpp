#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0064[4096] = {
    1, 2, 3, 4, 5, 6, 7, 0, 8, 0, 9, 0, 0, 10, 11, 12, 0, 0, 13, 14, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0,
    0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0,
    23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 26, 0, 0, 0, 27, 0, 28, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0,
    31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0,
    0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41,
    0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 58, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    67, 0, 0, 68, 0, 69, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0,
    76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 81, 0, 82, 0, 83, 0, 0, 0,
    84, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 93, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 98, 0, 99, 0,
    100, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0,
    0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0,
    143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0,
    0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0,
    0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0,
    0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0,
    0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0,
    0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0,
    0, 200, 0, 0, 0, 0, 201, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 206, 0,
    0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211,
    0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 223, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0,
    0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 242, 0, 243, 0, 0, 0, 0,
    244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0,
    0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 261, 0, 0, 0, 0,
    262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0,
    0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282,
    0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 286, 0, 287, 0, 0, 0, 288, 0, 289, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294,
    0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 299, 0, 300, 0, 0, 301, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0,
    0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0,
    309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0,
    0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 315, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0,
    0, 0, 0, 0, 0, 319, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 323, 324, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 335, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 346,
    0, 347, 0, 348, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 353, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 356, 357, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0,
    0, 0, 0, 361, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0,
    367, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    373, 0, 0, 0, 0, 374, 0, 0, 375, 0, 376, 0, 377, 0, 378, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382,
    0, 0, 0, 0, 383, 0, 384, 0, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0,
    391, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0,
    0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0,
    401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0,
    404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 413, 0, 0, 0, 0, 0, 0, 0, 414, 0,
    415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0,
    0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 422, 0, 423, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0,
    0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0064(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00290000;
    case 2u: goto L_00290004;
    case 3u: goto L_00290008;
    case 4u: goto L_0029000C;
    case 5u: goto L_00290010;
    case 6u: goto L_00290014;
    case 7u: goto L_00290018;
    case 8u: goto L_00290020;
    case 9u: goto L_00290028;
    case 10u: goto L_00290034;
    case 11u: goto L_00290038;
    case 12u: goto L_0029003C;
    case 13u: goto L_00290048;
    case 14u: goto L_0029004C;
    case 15u: goto L_00290054;
    case 16u: goto L_00290070;
    case 17u: goto L_00290078;
    case 18u: goto L_0029008C;
    case 19u: goto L_00290094;
    case 20u: goto L_002900C8;
    case 21u: goto L_002900E0;
    case 22u: goto L_002900F8;
    case 23u: goto L_00290100;
    case 24u: goto L_0029011C;
    case 25u: goto L_00290128;
    case 26u: goto L_00290130;
    case 27u: goto L_00290140;
    case 28u: goto L_00290148;
    case 29u: goto L_00290150;
    case 30u: goto L_00290160;
    case 31u: goto L_00290180;
    case 32u: goto L_002901F8;
    case 33u: goto L_00290208;
    case 34u: goto L_00290218;
    case 35u: goto L_00290228;
    case 36u: goto L_00290248;
    case 37u: goto L_0029025C;
    case 38u: goto L_00290280;
    case 39u: goto L_002902B8;
    case 40u: goto L_002902D8;
    case 41u: goto L_002902FC;
    case 42u: goto L_00290310;
    case 43u: goto L_00290334;
    case 44u: goto L_00290348;
    case 45u: goto L_00290350;
    case 46u: goto L_00290370;
    case 47u: goto L_00290378;
    case 48u: goto L_002903BC;
    case 49u: goto L_002903C8;
    case 50u: goto L_002903D0;
    case 51u: goto L_002903E8;
    case 52u: goto L_00290428;
    case 53u: goto L_00290440;
    case 54u: goto L_00290464;
    case 55u: goto L_00290470;
    case 56u: goto L_00290498;
    case 57u: goto L_002904B8;
    case 58u: goto L_002904BC;
    case 59u: goto L_002904C8;
    case 60u: goto L_002904D0;
    case 61u: goto L_002904E8;
    case 62u: goto L_002904FC;
    case 63u: goto L_00290530;
    case 64u: goto L_00290598;
    case 65u: goto L_00290638;
    case 66u: goto L_002906D0;
    case 67u: goto L_00290700;
    case 68u: goto L_0029070C;
    case 69u: goto L_00290714;
    case 70u: goto L_00290720;
    case 71u: goto L_0029072C;
    case 72u: goto L_00290740;
    case 73u: goto L_00290750;
    case 74u: goto L_0029075C;
    case 75u: goto L_00290770;
    case 76u: goto L_00290780;
    case 77u: goto L_00290790;
    case 78u: goto L_002907B0;
    case 79u: goto L_002907C4;
    case 80u: goto L_002907D0;
    case 81u: goto L_002907E0;
    case 82u: goto L_002907E8;
    case 83u: goto L_002907F0;
    case 84u: goto L_00290800;
    case 85u: goto L_00290808;
    case 86u: goto L_00290810;
    case 87u: goto L_00290830;
    case 88u: goto L_00290880;
    case 89u: goto L_002908A0;
    case 90u: goto L_002908CC;
    case 91u: goto L_002908E0;
    case 92u: goto L_002908EC;
    case 93u: goto L_002908F8;
    case 94u: goto L_00290920;
    case 95u: goto L_00290934;
    case 96u: goto L_00290960;
    case 97u: goto L_00290968;
    case 98u: goto L_00290970;
    case 99u: goto L_00290978;
    case 100u: goto L_00290980;
    case 101u: goto L_00290990;
    case 102u: goto L_00290998;
    case 103u: goto L_002909C4;
    case 104u: goto L_002909E8;
    case 105u: goto L_00290A20;
    case 106u: goto L_00290A80;
    case 107u: goto L_00290AAC;
    case 108u: goto L_00290AC0;
    case 109u: goto L_00290AC8;
    case 110u: goto L_00290AD4;
    case 111u: goto L_00290AF0;
    case 112u: goto L_00290B10;
    case 113u: goto L_00290B48;
    case 114u: goto L_00290B50;
    case 115u: goto L_00290B88;
    case 116u: goto L_00290BD0;
    case 117u: goto L_00290BF8;
    case 118u: goto L_00290C50;
    case 119u: goto L_00290C78;
    case 120u: goto L_00290CC8;
    case 121u: goto L_00290D0C;
    case 122u: goto L_00290D24;
    case 123u: goto L_00290D2C;
    case 124u: goto L_00290D58;
    case 125u: goto L_00290D88;
    case 126u: goto L_00290D9C;
    case 127u: goto L_00290DA8;
    case 128u: goto L_00290DD0;
    case 129u: goto L_00290DE0;
    case 130u: goto L_00290E14;
    case 131u: goto L_00290E20;
    case 132u: goto L_00290E50;
    case 133u: goto L_00290E60;
    case 134u: goto L_00290E78;
    case 135u: goto L_00290EA8;
    case 136u: goto L_00290F38;
    case 137u: goto L_00290FB4;
    case 138u: goto L_00290FE0;
    case 139u: goto L_00291004;
    case 140u: goto L_00291040;
    case 141u: goto L_00291068;
    case 142u: goto L_00291078;
    case 143u: goto L_00291080;
    case 144u: goto L_00291098;
    case 145u: goto L_002910B8;
    case 146u: goto L_002910D0;
    case 147u: goto L_00291100;
    case 148u: goto L_0029112C;
    case 149u: goto L_00291148;
    case 150u: goto L_00291164;
    case 151u: goto L_00291198;
    case 152u: goto L_002911A0;
    case 153u: goto L_002911C8;
    case 154u: goto L_00291210;
    case 155u: goto L_0029123C;
    case 156u: goto L_002912A8;
    case 157u: goto L_002912B8;
    case 158u: goto L_00291360;
    case 159u: goto L_002913A0;
    case 160u: goto L_002913E4;
    case 161u: goto L_00291408;
    case 162u: goto L_0029142C;
    case 163u: goto L_00291468;
    case 164u: goto L_00291478;
    case 165u: goto L_00291490;
    case 166u: goto L_002914D0;
    case 167u: goto L_002914F8;
    case 168u: goto L_0029150C;
    case 169u: goto L_00291530;
    case 170u: goto L_00291548;
    case 171u: goto L_00291560;
    case 172u: goto L_00291578;
    case 173u: goto L_00291590;
    case 174u: goto L_002915B0;
    case 175u: goto L_002915DC;
    case 176u: goto L_00291620;
    case 177u: goto L_00291638;
    case 178u: goto L_00291658;
    case 179u: goto L_00291694;
    case 180u: goto L_002916B8;
    case 181u: goto L_002916D0;
    case 182u: goto L_002916F0;
    case 183u: goto L_0029172C;
    case 184u: goto L_00291750;
    case 185u: goto L_00291768;
    case 186u: goto L_00291788;
    case 187u: goto L_002917C4;
    case 188u: goto L_002917E8;
    case 189u: goto L_00291850;
    case 190u: goto L_00291868;
    case 191u: goto L_002918C0;
    case 192u: goto L_002918E8;
    case 193u: goto L_002918F8;
    case 194u: goto L_00291928;
    case 195u: goto L_00291938;
    case 196u: goto L_00291948;
    case 197u: goto L_00291960;
    case 198u: goto L_00291988;
    case 199u: goto L_002919E8;
    case 200u: goto L_00291A04;
    case 201u: goto L_00291A18;
    case 202u: goto L_00291A20;
    case 203u: goto L_00291A28;
    case 204u: goto L_00291A48;
    case 205u: goto L_00291A70;
    case 206u: goto L_00291A78;
    case 207u: goto L_00291A84;
    case 208u: goto L_00291A98;
    case 209u: goto L_00291AA8;
    case 210u: goto L_00291AE8;
    case 211u: goto L_00291AFC;
    case 212u: goto L_00291B18;
    case 213u: goto L_00291B20;
    case 214u: goto L_00291B68;
    case 215u: goto L_00291BA0;
    case 216u: goto L_00291BA8;
    case 217u: goto L_00291BB4;
    case 218u: goto L_00291BC8;
    case 219u: goto L_00291C28;
    case 220u: goto L_00291C34;
    case 221u: goto L_00291C54;
    case 222u: goto L_00291C60;
    case 223u: goto L_00291C68;
    case 224u: goto L_00291C90;
    case 225u: goto L_00291CE4;
    case 226u: goto L_00291D10;
    case 227u: goto L_00291D40;
    case 228u: goto L_00291DF0;
    case 229u: goto L_00291E20;
    case 230u: goto L_00291E48;
    case 231u: goto L_00291EAC;
    case 232u: goto L_00291ECC;
    case 233u: goto L_00291F18;
    case 234u: goto L_00291F30;
    case 235u: goto L_00291F48;
    case 236u: goto L_00291F64;
    case 237u: goto L_00291F70;
    case 238u: goto L_00291F88;
    case 239u: goto L_00291FA0;
    case 240u: goto L_00291FC4;
    case 241u: goto L_00291FD0;
    case 242u: goto L_00291FE4;
    case 243u: goto L_00291FEC;
    case 244u: goto L_00292000;
    case 245u: goto L_0029201C;
    case 246u: goto L_00292040;
    case 247u: goto L_00292054;
    case 248u: goto L_0029205C;
    case 249u: goto L_00292070;
    case 250u: goto L_00292088;
    case 251u: goto L_002920A4;
    case 252u: goto L_002920B0;
    case 253u: goto L_002920B8;
    case 254u: goto L_002920D0;
    case 255u: goto L_00292108;
    case 256u: goto L_00292160;
    case 257u: goto L_0029218C;
    case 258u: goto L_002921B0;
    case 259u: goto L_002921D0;
    case 260u: goto L_002921E4;
    case 261u: goto L_002921EC;
    case 262u: goto L_00292200;
    case 263u: goto L_00292220;
    case 264u: goto L_00292234;
    case 265u: goto L_0029223C;
    case 266u: goto L_00292250;
    case 267u: goto L_00292260;
    case 268u: goto L_00292290;
    case 269u: goto L_002922C0;
    case 270u: goto L_002922D4;
    case 271u: goto L_002922F0;
    case 272u: goto L_00292460;
    case 273u: goto L_0029248C;
    case 274u: goto L_002924A0;
    case 275u: goto L_002924C0;
    case 276u: goto L_00292520;
    case 277u: goto L_00292660;
    case 278u: goto L_00292684;
    case 279u: goto L_00292694;
    case 280u: goto L_002926B0;
    case 281u: goto L_00292760;
    case 282u: goto L_0029277C;
    case 283u: goto L_00292788;
    case 284u: goto L_002927A0;
    case 285u: goto L_00292828;
    case 286u: goto L_00292888;
    case 287u: goto L_00292890;
    case 288u: goto L_002928A0;
    case 289u: goto L_002928A8;
    case 290u: goto L_002928B4;
    case 291u: goto L_002928C0;
    case 292u: goto L_002928FC;
    case 293u: goto L_00292960;
    case 294u: goto L_0029297C;
    case 295u: goto L_00292988;
    case 296u: goto L_00292A10;
    case 297u: goto L_00292A30;
    case 298u: goto L_00292A5C;
    case 299u: goto L_00292A64;
    case 300u: goto L_00292A6C;
    case 301u: goto L_00292A78;
    case 302u: goto L_00292AA0;
    case 303u: goto L_00292AB8;
    case 304u: goto L_00292AF0;
    case 305u: goto L_00292B08;
    case 306u: goto L_00292B20;
    case 307u: goto L_00292BE0;
    case 308u: goto L_00292C64;
    case 309u: goto L_00292C80;
    case 310u: goto L_00292CBC;
    case 311u: goto L_00292CF4;
    case 312u: goto L_00292D18;
    case 313u: goto L_00292D38;
    case 314u: goto L_00292D6C;
    case 315u: goto L_00292D9C;
    case 316u: goto L_00292DA0;
    case 317u: goto L_00292DD0;
    case 318u: goto L_00292DF8;
    case 319u: goto L_00292E14;
    case 320u: goto L_00292E18;
    case 321u: goto L_00292E54;
    case 322u: goto L_00292E64;
    case 323u: goto L_00292E74;
    case 324u: goto L_00292E78;
    case 325u: goto L_00292ED8;
    case 326u: goto L_00292F08;
    case 327u: goto L_00292F18;
    case 328u: goto L_00292F34;
    case 329u: goto L_00292F48;
    case 330u: goto L_00292F5C;
    case 331u: goto L_00292F98;
    case 332u: goto L_00292FB8;
    case 333u: goto L_00292FE8;
    case 334u: goto L_00293030;
    case 335u: goto L_00293038;
    case 336u: goto L_00293040;
    case 337u: goto L_00293070;
    case 338u: goto L_00293098;
    case 339u: goto L_002930E8;
    case 340u: goto L_00293128;
    case 341u: goto L_00293228;
    case 342u: goto L_002932D0;
    case 343u: goto L_00293328;
    case 344u: goto L_002933A0;
    case 345u: goto L_002933F4;
    case 346u: goto L_002933FC;
    case 347u: goto L_00293404;
    case 348u: goto L_0029340C;
    case 349u: goto L_00293414;
    case 350u: goto L_00293424;
    case 351u: goto L_0029344C;
    case 352u: goto L_00293464;
    case 353u: goto L_00293468;
    case 354u: goto L_002934A0;
    case 355u: goto L_002934D0;
    case 356u: goto L_002934E4;
    case 357u: goto L_002934E8;
    case 358u: goto L_00293524;
    case 359u: goto L_0029353C;
    case 360u: goto L_00293574;
    case 361u: goto L_0029358C;
    case 362u: goto L_00293590;
    case 363u: goto L_002935C0;
    case 364u: goto L_00293610;
    case 365u: goto L_00293650;
    case 366u: goto L_00293674;
    case 367u: goto L_00293680;
    case 368u: goto L_002936A0;
    case 369u: goto L_002936C0;
    case 370u: goto L_00293740;
    case 371u: goto L_00293774;
    case 372u: goto L_002937C0;
    case 373u: goto L_00293800;
    case 374u: goto L_00293814;
    case 375u: goto L_00293820;
    case 376u: goto L_00293828;
    case 377u: goto L_00293830;
    case 378u: goto L_00293838;
    case 379u: goto L_00293840;
    case 380u: goto L_00293870;
    case 381u: goto L_002938B8;
    case 382u: goto L_002938FC;
    case 383u: goto L_00293910;
    case 384u: goto L_00293918;
    case 385u: goto L_0029392C;
    case 386u: goto L_00293940;
    case 387u: goto L_00293954;
    case 388u: goto L_00293990;
    case 389u: goto L_002939C8;
    case 390u: goto L_002939DC;
    case 391u: goto L_00293A00;
    case 392u: goto L_00293A1C;
    case 393u: goto L_00293A38;
    case 394u: goto L_00293A50;
    case 395u: goto L_00293A64;
    case 396u: goto L_00293A88;
    case 397u: goto L_00293A9C;
    case 398u: goto L_00293AD0;
    case 399u: goto L_00293B28;
    case 400u: goto L_00293B68;
    case 401u: goto L_00293B80;
    case 402u: goto L_00293BC0;
    case 403u: goto L_00293BF0;
    case 404u: goto L_00293C00;
    case 405u: goto L_00293C34;
    case 406u: goto L_00293C48;
    case 407u: goto L_00293C58;
    case 408u: goto L_00293C88;
    case 409u: goto L_00293CD8;
    case 410u: goto L_00293D18;
    case 411u: goto L_00293D28;
    case 412u: goto L_00293D50;
    case 413u: goto L_00293D58;
    case 414u: goto L_00293D78;
    case 415u: goto L_00293D80;
    case 416u: goto L_00293DC0;
    case 417u: goto L_00293DD0;
    case 418u: goto L_00293DF0;
    case 419u: goto L_00293E10;
    case 420u: goto L_00293E30;
    case 421u: goto L_00293E48;
    case 422u: goto L_00293E98;
    case 423u: goto L_00293EA0;
    case 424u: goto L_00293EC0;
    case 425u: goto L_00293F10;
    case 426u: goto L_00293F30;
    case 427u: goto L_00293F4C;
    case 428u: goto L_00293F70;
    case 429u: goto L_00293F88;
    case 430u: goto L_00293FC4;
    case 431u: goto L_00293FD4;
    default: bad_entry(c, 0x00290000u); return;
    }
L_00290000:
    st32((c.r[16].w[0] + 40u), 0u);
    c.budget -= 1;
L_00290004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029000Cu); set32(c.r[4], c.r[21].w[0] - 31112u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0029000Cu) [[unlikely]] return; }
    goto L_0029000C;
L_00290008:
    set32(c.r[4], c.r[21].w[0] - 31112u);
    c.budget -= 1;
L_0029000C:
    st32((c.r[16].w[0] + 40u), 0u);
    c.budget -= 1;
L_00290010:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00290014:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00290018:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_00290020:
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_00290028:
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00290034:
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 1;
L_00290038:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 1;
L_0029003C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00290060; } }
L_00290048:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 1;
L_0029004C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290054u); set32(c.r[5], c.r[5].w[0] - 31232u);  if (depth < kMaxDepth) unit_0063(c, 391u, depth + 1u); else { c.pc = 0x0028F458u; return; } if (c.pc != 0x00290054u) [[unlikely]] return; }
L_00290054:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00290064; } }
    c.budget -= 1;
L_00290060:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 1;
L_00290064:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00290070:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 2048u);  c.pc = t; return; }
L_00290078:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002900A0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 1;
L_0029008C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290094u); set32(c.r[5], c.r[5].w[0] - 31232u);  if (depth < kMaxDepth) unit_0063(c, 391u, depth + 1u); else { c.pc = 0x0028F458u; return; } if (c.pc != 0x00290094u) [[unlikely]] return; }
L_00290094:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002900B8; } }
    c.budget -= 1;
L_002900A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002900B8; }
    set32(c.r[2], ld32((c.r[5].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] << 11);
    c.budget -= 2;
L_002900B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002900C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F7C0u | kUnwind; return; } [[clang::musttail]] return unit_0063(c, 424u, depth); }
L_002900E0:
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.r[5].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] << 11;
    c.r[3].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  c.pc = t; return; }
L_002900F8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 1;
L_002900FC:
    c.budget -= 1;
L_00290100:
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[6].d[0] = c.r[6].d[0] >> 32;
    c.r[5].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] << 11;
    c.r[3].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    c.budget -= 7;
L_0029011C:
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  c.pc = t; return; }
L_00290128:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 1;
    c.pc = 0x0029012Cu; [[clang::musttail]] return dispatch(c, 0u, depth);
L_00290130:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290140u);  if (depth < kMaxDepth) unit_0064(c, 20u, depth + 1u); else { c.pc = 0x002900C8u; return; } if (c.pc != 0x00290140u) [[unlikely]] return; }
L_00290140:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 2;
L_00290148:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00290150:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290160u);  if (depth < kMaxDepth) unit_0064(c, 20u, depth + 1u); else { c.pc = 0x002900C8u; return; } if (c.pc != 0x00290160u) [[unlikely]] return; }
L_00290160:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00290180:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00290238; } }
    set32(c.r[2], 0u + 203u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[5].sd[0] < 204ll ? 1ull : 0ull;  if (t) { goto L_00290220; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 205u);  if (t) { goto L_002901D0; } }
    set32(c.r[2], 0u + 201u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[5].sd[0] < 202ll ? 1ull : 0ull;  if (t) { goto L_00290200; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 200u);  if (t) { goto L_00290210; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_002901F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0029023C; } }
    c.budget -= 1;
L_002901D0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[5].sd[0] < 205ll ? 1ull : 0ull;  if (t) { goto L_00290220; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 299u);  if (t) { goto L_00290210; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00290230; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0029023C; } }
L_002901F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002901F8u);  if (depth < kMaxDepth) unit_0064(c, 21u, depth + 1u); else { c.pc = 0x002900E0u; return; } if (c.pc != 0x002901F8u) [[unlikely]] return; }
L_002901F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00290234; } }
L_00290200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290208u);  if (depth < kMaxDepth) unit_0064(c, 23u, depth + 1u); else { c.pc = 0x00290100u; return; } if (c.pc != 0x00290208u) [[unlikely]] return; }
L_00290208:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00290234; } }
L_00290210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290218u);  if (depth < kMaxDepth) unit_0064(c, 26u, depth + 1u); else { c.pc = 0x00290130u; return; } if (c.pc != 0x00290218u) [[unlikely]] return; }
L_00290218:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00290234; } }
L_00290220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290228u);  if (depth < kMaxDepth) unit_0064(c, 29u, depth + 1u); else { c.pc = 0x00290150u; return; } if (c.pc != 0x00290228u) [[unlikely]] return; }
L_00290228:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00290234; } }
L_00290230:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00290234:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_00290238:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0029023C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00290248:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029025Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0029025Cu) [[unlikely]] return; }
L_0029025C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 16u);
    c.r[3].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[6].d[0] = c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002902A4; } }
    set32(c.r[7], 0u + 58u);
    set32(c.r[2], c.r[16].w[0] + c.r[5].w[0]);
    c.budget -= 3;
L_00290280:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[7].d[0]; c.r[4].d[0] = c.r[5].d[0] < c.r[6].d[0] ? 1ull : 0ull;  if (t) { goto L_002902A8; } }
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] + c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00290280u | kUnwind; return; } goto L_00290280; } }
L_002902A4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002902A8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002902B8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 6u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002902D8u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002902D8u) [[unlikely]] return; }
L_002902D8:
    lwl(c.r[2], (c.r[16].w[0] + 3u));
    lwr(c.r[2], (c.r[16].w[0]));
    swl(c.r[2], (c.r[29].w[0] + 3u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], c.r[5].w[0] - 31080u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    swr(c.r[2], (c.r[29].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002902FCu); st8((c.r[29].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x002902FCu) [[unlikely]] return; }
L_002902FC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00290310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290334u); st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0064(c, 36u, depth + 1u); else { c.pc = 0x00290248u; return; } if (c.pc != 0x00290334u) [[unlikely]] return; }
L_00290334:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_00290348; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290348u); set32(c.r[5], c.r[5].w[0] - 20128u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00290348u) [[unlikely]] return; }
L_00290348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290350u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 39u, depth + 1u); else { c.pc = 0x002902B8u; return; } if (c.pc != 0x00290350u) [[unlikely]] return; }
L_00290350:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_002903C0; }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 20392u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290370u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x00290370u) [[unlikely]] return; }
L_00290370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290378u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00290378u) [[unlikely]] return; }
L_00290378:
    set32(c.r[4], 0u + 92u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] - 1u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 47u);  if (t) { goto L_002903BC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002903C0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002903C0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002903C0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_002903BC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002903BCu); set32(c.r[5], c.r[5].w[0] - 31072u);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x002903BCu) [[unlikely]] return; }
L_002903BC:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002903C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002903C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x002903C8u) [[unlikely]] return; }
L_002903C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002903D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x002903D0u) [[unlikely]] return; }
L_002903D0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0029040C; } }
    set32(c.r[8], 0u + 92u);
    set32(c.r[7], 0u + 47u);
    set32(c.r[4], c.r[17].w[0] + c.r[5].w[0]);
    c.budget -= 3;
L_002903E8:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[8].d[0]; c.r[3].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;  if (t) { goto L_002903FC; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 1;
L_002903FC:
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002903E8u | kUnwind; return; } goto L_002903E8; } }
L_0029040C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00290428:
    set32(c.r[4], c.r[4].w[0] << 24);
    set32(c.r[2], 0u + 47u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 24));
    c.r[3].d[0] = c.r[4].d[0] ^ 92ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];  c.pc = t; return; }
L_00290440:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], c.r[4].w[0] << 24);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[5].w[0] << 24);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 24));
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290464u); set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 24));  if (depth < kMaxDepth) unit_0064(c, 52u, depth + 1u); else { c.pc = 0x00290428u; return; } if (c.pc != 0x00290464u) [[unlikely]] return; }
L_00290464:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290470u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 52u, depth + 1u); else { c.pc = 0x00290428u; return; } if (c.pc != 0x00290470u) [[unlikely]] return; }
L_00290470:
    set32(c.r[3], 0u - 1u);
    c.r[16].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = 0ull + 0ull;
    if (c.r[16].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00290498:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002904BCu); c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x002904BCu) [[unlikely]] return; }
    goto L_002904BC;
L_002904B8:
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_002904BC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002904C8u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x002904C8u) [[unlikely]] return; }
L_002904C8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002904D8; } }
L_002904D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00290510; } }
L_002904D8:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0029050C; } }
    set32(c.r[3], c.r[18].w[0] + c.r[16].w[0]);
    c.budget -= 2;
L_002904E8:
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002904FCu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0064(c, 53u, depth + 1u); else { c.pc = 0x00290440u; return; } if (c.pc != 0x002904FCu) [[unlikely]] return; }
L_002904FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002904D0u | kUnwind; return; } goto L_002904D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[18].w[0] + c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002904E8u | kUnwind; return; } goto L_002904E8; } }
L_0029050C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00290510:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00290530:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[30].d[0]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00290670; } }
    set32(c.r[2], c.r[21].w[0] << 3);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[23], 0u + 10u);
    set32(c.r[22], 0u + 13u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 6;
L_00290598:
    set32(c.r[6], 0u + 92u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; c.r[3].d[0] = ld8((c.r[4].w[0]));  if (t) { goto L_002905B0; } }
    set32(c.r[2], 0u + 47u);
    set32(c.r[3], 0u + 47u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002905B0:
    set32(c.r[2], c.r[3].w[0] << 24);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[23].d[0]) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));  goto L_002905D4; }
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[22].d[0]) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));  goto L_002905D4; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[18].w[0] + 1u);  if (t) { goto L_00290658; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 1;
L_002905D4:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[23].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002905F0; }
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[22].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002905F0; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] - 1u);  if (t) { goto L_002905F8; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002905F0:
    set32(c.r[4], c.r[19].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[4].w[0] - 1u);
    c.budget -= 2;
L_002905F8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[23].d[0]; set32(c.r[17], c.r[18].w[0] - c.r[5].w[0]);  if (t) { goto L_0029060C; } }
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[22].d[0]) { mmi::mult(c, 0, c.r[30].w[0], c.r[20].w[0]); c.r[2].d[0] = c.lo.d[0];  goto L_00290614; }
L_0029060C:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    mmi::mult(c, 0, c.r[30].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 2;
L_00290614:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + c.r[5].w[0]);
    set32(c.r[16], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[16], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290638u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00290638u) [[unlikely]] return; }
L_00290638:
    set32(c.r[6], c.r[16].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] - 1u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));  goto L_00290648; }
L_00290648:
    set32(c.r[3], c.r[18].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] == c.r[21].d[0]; c.r[5].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00290670; } }
L_00290658:
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], c.r[19].w[0] + c.r[18].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00290598u | kUnwind; return; } goto L_00290598; }
L_00290670:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 20416u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[20].d[0] + 0ull;  goto L_0029069C; }
    st32((c.r[2].w[0] + 12u), c.r[30].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0])));
    st32((c.r[2].w[0] + 8u), c.r[21].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[20].w[0]);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
L_0029069C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002906D0:
    set32(c.r[29], c.r[29].w[0] - 304u);
    set32(c.r[6], 0u + 256u);
    st64((c.r[29].w[0] + 256u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 280u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 272u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 264u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 288u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290700u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00290700u) [[unlikely]] return; }
L_00290700:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029070Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 42u, depth + 1u); else { c.pc = 0x00290310u; return; } if (c.pc != 0x0029070Cu) [[unlikely]] return; }
L_0029070C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290714u); set32(c.r[4], 0u + 24576u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x00290714u) [[unlikely]] return; }
L_00290714:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290720u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 73u, depth + 1u); else { c.pc = 0x0028C9A8u; return; } if (c.pc != 0x00290720u) [[unlikely]] return; }
L_00290720:
    set32(c.r[4], 0u + 24577u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029072Cu); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0029072Cu) [[unlikely]] return; }
L_0029072C:
    set32(c.r[4], 0u + 24832u);
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] < 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00290814; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290740u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x00290740u) [[unlikely]] return; }
L_00290740:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290750u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0063(c, 61u, depth + 1u); else { c.pc = 0x0028C878u; return; } if (c.pc != 0x00290750u) [[unlikely]] return; }
L_00290750:
    set32(c.r[4], 0u + 24833u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029075Cu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0029075Cu) [[unlikely]] return; }
L_0029075C:
    set32(c.r[4], 0u + 25088u);
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] < 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00290814; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290770u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x00290770u) [[unlikely]] return; }
L_00290770:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290780u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0063(c, 61u, depth + 1u); else { c.pc = 0x0028C878u; return; } if (c.pc != 0x00290780u) [[unlikely]] return; }
L_00290780:
    c.r[16].d[0] = c.r[2].d[0] << 32;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290790u); set32(c.r[4], 0u + 25089u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x00290790u) [[unlikely]] return; }
L_00290790:
    set32(c.r[2], 0u + 4096u);
    c.r[3].d[0] = c.r[17].sd[0] < 4097ll ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[17].d[0] = c.r[2].d[0];
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].sd[0] < 0; set32(c.r[4], 0u + 25344u);  if (t) { goto L_00290814; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002907B0u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x002907B0u) [[unlikely]] return; }
L_002907B0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002907C4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 83u, depth + 1u); else { c.pc = 0x0028CA68u; return; } if (c.pc != 0x002907C4u) [[unlikely]] return; }
L_002907C4:
    set32(c.r[4], 0u + 25345u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002907D0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x002907D0u) [[unlikely]] return; }
L_002907D0:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[4], 0u + 25856u);  if (t) { goto L_002907F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002907E0u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x002907E0u) [[unlikely]] return; }
L_002907E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002907E8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 78u, depth + 1u); else { c.pc = 0x0028CA10u; return; } if (c.pc != 0x002907E8u) [[unlikely]] return; }
L_002907E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002907F0u); set32(c.r[4], 0u + 25857u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x002907F0u) [[unlikely]] return; }
L_002907F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00290814; } }
L_002907F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290800u); set32(c.r[4], 0u + 25600u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x00290800u) [[unlikely]] return; }
L_00290800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290808u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 78u, depth + 1u); else { c.pc = 0x0028CA10u; return; } if (c.pc != 0x00290808u) [[unlikely]] return; }
L_00290808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290810u); set32(c.r[4], 0u + 25601u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x00290810u) [[unlikely]] return; }
L_00290810:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00290814:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 256u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 264u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 272u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 280u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 288u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_00290830:
    set32(c.r[29], c.r[29].w[0] - 336u);
    set32(c.r[6], 0u + 256u);
    st64((c.r[29].w[0] + 288u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 296u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 280u), c.r[19].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 304u), c.r[22].d[0]);
    c.r[22].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 320u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 256u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 264u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 272u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 312u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 328u), c.r[31].d[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290880u); c.r[30].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00290880u) [[unlikely]] return; }
L_00290880:
    c.r[3].d[0] = c.r[20].sd[0] < 14ll ? 1ull : 0ull;
    set32(c.r[2], 0u + 13u);
    if (c.r[3].d[0] == 0) c.r[20].d[0] = c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[20].sd[0] <= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_002909A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[18].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[23], c.r[2].w[0] - 20416u);
    c.budget -= 3;
L_002908A0:
    set32(c.r[3], ld32((c.r[23].w[0] + 12u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[23].w[0] + 8u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[19].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002908CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 42u, depth + 1u); else { c.pc = 0x00290310u; return; } if (c.pc != 0x002908CCu) [[unlikely]] return; }
L_002908CC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 26112u);  if (t) { goto L_00290998; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002908E0u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x002908E0u) [[unlikely]] return; }
L_002908E0:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002908ECu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 73u, depth + 1u); else { c.pc = 0x0028C9A8u; return; } if (c.pc != 0x002908ECu) [[unlikely]] return; }
L_002908EC:
    set32(c.r[4], 0u + 26113u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002908F8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x002908F8u) [[unlikely]] return; }
L_002908F8:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00290928; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 20396u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[30], c.r[30].w[0] + 1u);  goto L_00290998; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290920u); set32(c.r[4], c.r[2].w[0] - 31064u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x00290920u) [[unlikely]] return; }
L_00290920:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[30], c.r[30].w[0] + 1u);  if (t) { goto L_00290998; } }
L_00290928:
    st32((c.r[18].w[0]), c.r[16].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290934u); set32(c.r[22], c.r[22].w[0] + 1u);  if (depth < kMaxDepth) unit_0063(c, 447u, depth + 1u); else { c.pc = 0x0028F9B8u; return; } if (c.pc != 0x00290934u) [[unlikely]] return; }
L_00290934:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[3].w[0] - 31024u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 20396u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00290960; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290960u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x00290960u) [[unlikely]] return; }
L_00290960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290968u); set32(c.r[4], 0u + 26624u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x00290968u) [[unlikely]] return; }
L_00290968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290970u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 78u, depth + 1u); else { c.pc = 0x0028CA10u; return; } if (c.pc != 0x00290970u) [[unlikely]] return; }
L_00290970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290978u); set32(c.r[4], 0u + 26625u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x00290978u) [[unlikely]] return; }
L_00290978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290980u); set32(c.r[4], 0u + 26368u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x00290980u) [[unlikely]] return; }
L_00290980:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 20400u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290990u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 73u, depth + 1u); else { c.pc = 0x0028C9A8u; return; } if (c.pc != 0x00290990u) [[unlikely]] return; }
L_00290990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290998u); set32(c.r[4], 0u + 26369u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x00290998u) [[unlikely]] return; }
L_00290998:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002908A0u | kUnwind; return; } goto L_002908A0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 1;
L_002909A8:
    set32(c.r[16], c.r[3].w[0] - 20396u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_002909C4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002909C4u); set32(c.r[4], c.r[4].w[0] - 30992u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x002909C4u) [[unlikely]] return; }
L_002909C4:
    c.budget -= 2;
    { const bool t = c.r[30].sd[0] <= 0; c.r[2].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_002909EC; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 10u);  if (t) { goto L_002909E8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002909E8u); set32(c.r[4], c.r[4].w[0] - 30968u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x002909E8u) [[unlikely]] return; }
L_002909E8:
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_002909EC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 256u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 264u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 272u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 280u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 288u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 296u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 304u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 312u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 320u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 328u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_00290A20:
    set32(c.r[29], c.r[29].w[0] - 336u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 312u), c.r[23].d[0]);
    c.r[23].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 256u), c.r[16].d[0]);
    set32(c.r[3], c.r[2].w[0] - 20416u);
    st64((c.r[29].w[0] + 264u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 272u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 280u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 288u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 296u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 304u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 320u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 328u), c.r[31].d[0]);
    set32(c.r[19], ld32((c.r[3].w[0])));
    c.budget -= 17;
    { const bool t = c.r[19].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00290B54; } }
    set32(c.r[20], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00290B28; } }
    c.r[22].d[0] = c.r[3].d[0] + 0ull;
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[21], 0u + 2u);
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
L_00290A80:
    set32(c.r[2], ld32((c.r[22].w[0] + 12u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[22].w[0] + 8u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[19].w[0] + c.r[16].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290AACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 42u, depth + 1u); else { c.pc = 0x00290310u; return; } if (c.pc != 0x00290AACu) [[unlikely]] return; }
L_00290AAC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 26880u);  if (t) { goto L_00290B10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290AC0u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x00290AC0u) [[unlikely]] return; }
L_00290AC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290AC8u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0063(c, 78u, depth + 1u); else { c.pc = 0x0028CA10u; return; } if (c.pc != 0x00290AC8u) [[unlikely]] return; }
L_00290AC8:
    set32(c.r[4], 0u + 26881u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290AD4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x00290AD4u) [[unlikely]] return; }
L_00290AD4:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[2], ld32((c.r[30].w[0] - 20396u)));  if (t) { goto L_00290AF8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[21].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00290B10; } }
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290AF0u); set32(c.r[4], c.r[2].w[0] - 30920u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x00290AF0u) [[unlikely]] return; }
L_00290AF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] < c.r[20].d[0] ? 1ull : 0ull;  if (t) { goto L_00290B14; } }
L_00290AF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[21].d[0]; set32(c.r[23], c.r[23].w[0] + 1u);  if (t) { goto L_00290B10; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290B10u); set32(c.r[4], c.r[3].w[0] - 30880u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x00290B10u) [[unlikely]] return; }
L_00290B10:
    c.r[2].d[0] = c.r[18].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00290B14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00290A80u | kUnwind; return; } goto L_00290A80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[30].w[0] - 20396u)));  if (t) { goto L_00290B30; } }
    c.budget -= 1;
L_00290B28:
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], ld32((c.r[30].w[0] - 20396u)));
    c.budget -= 2;
L_00290B30:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (t) { goto L_00290B48; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290B48u); set32(c.r[4], c.r[4].w[0] - 30848u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x00290B48u) [[unlikely]] return; }
L_00290B48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290B50u);  if (depth < kMaxDepth) unit_0064(c, 118u, depth + 1u); else { c.pc = 0x00290C50u; return; } if (c.pc != 0x00290B50u) [[unlikely]] return; }
L_00290B50:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00290B54:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 256u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 264u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 272u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 280u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 288u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 296u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 304u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 312u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 320u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 328u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_00290B88:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.budget -= 15;
    { const bool t = c.r[20].sd[0] <= 0; st64((c.r[29].w[0] + 56u), c.r[31].d[0]);  if (t) { goto L_00290C20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[21], c.r[2].w[0] - 20416u);
    c.budget -= 3;
L_00290BD0:
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290BF8u); set32(c.r[5], c.r[18].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_0064(c, 56u, depth + 1u); else { c.pc = 0x00290498u; return; } if (c.pc != 0x00290BF8u) [[unlikely]] return; }
L_00290BF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[16].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;  if (t) { goto L_00290C18; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00290C28; } }
    c.budget -= 1;
L_00290C18:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00290BD0u | kUnwind; return; } goto L_00290BD0; } }
L_00290C20:
    st32((c.r[19].w[0] + 4u), 0u);
    st32((c.r[19].w[0]), 0u);
    c.budget -= 2;
L_00290C28:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00290C50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 20416u);
    set32(c.r[6], 0u + 16u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011AB50u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 201u, depth); }
L_00290C78:
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], c.r[2].w[0] - 20416u);
    st32((c.r[3].w[0]), 0u);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00290CB8; } }
    set32(c.r[7], ld32((c.r[7].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00290B88u | kUnwind; return; } goto L_00290B88; }
L_00290CB8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00290CC8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00920000u);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    set32(c.r[20], c.r[2].w[0] - 640u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], 0u + 4096u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290D0Cu); c.r[18].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00290D0Cu) [[unlikely]] return; }
L_00290D0C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 20416u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00290D24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290D24u);  if (depth < kMaxDepth) unit_0064(c, 118u, depth + 1u); else { c.pc = 0x00290C50u; return; } if (c.pc != 0x00290D24u) [[unlikely]] return; }
L_00290D24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290D2Cu);  if (depth < kMaxDepth) unit_0064(c, 105u, depth + 1u); else { c.pc = 0x00290A20u; return; } if (c.pc != 0x00290D2Cu) [[unlikely]] return; }
L_00290D2C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00290E30; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_00290D60; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 20396u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00290E30; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290D58u); set32(c.r[4], c.r[4].w[0] - 30824u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x00290D58u) [[unlikely]] return; }
L_00290D58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00290E30; } }
L_00290D60:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00290D90; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 20396u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00290E30; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290D88u); set32(c.r[4], c.r[4].w[0] - 30776u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x00290D88u) [[unlikely]] return; }
L_00290D88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00290E30; } }
L_00290D90:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290D9Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00290D9Cu) [[unlikely]] return; }
L_00290D9C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290DA8u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 66u, depth + 1u); else { c.pc = 0x002906D0u; return; } if (c.pc != 0x00290DA8u) [[unlikely]] return; }
L_00290DA8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[18].w[0] + 9u);  goto L_00290DE8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 20396u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00290DD4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290DD0u); set32(c.r[4], c.r[4].w[0] - 30728u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x00290DD0u) [[unlikely]] return; }
L_00290DD0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 1;
L_00290DD4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290DE0u); set32(c.r[5], c.r[5].w[0] - 30688u);  if (depth < kMaxDepth) unit_0063(c, 391u, depth + 1u); else { c.pc = 0x0028F458u; return; } if (c.pc != 0x00290DE0u) [[unlikely]] return; }
L_00290DE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00290E30; } }
L_00290DE8:
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    mmi::divu(c, 0, c.r[17].w[0], c.r[16].w[0]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x00290DFCu);  goto L_00290E00; }
L_00290E00:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[17].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290E14u); set32(c.r[17], c.r[17].w[0] << 3);  if (depth < kMaxDepth) unit_0064(c, 63u, depth + 1u); else { c.pc = 0x00290530u; return; } if (c.pc != 0x00290E14u) [[unlikely]] return; }
L_00290E14:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290E20u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 87u, depth + 1u); else { c.pc = 0x00290830u; return; } if (c.pc != 0x00290E20u) [[unlikely]] return; }
L_00290E20:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x00290E24u);  goto L_00290E28; }
L_00290E28:
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_00290E30:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00290E50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00290E60u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 119u, depth + 1u); else { c.pc = 0x00290C78u; return; } if (c.pc != 0x00290E60u) [[unlikely]] return; }
L_00290E60:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00290E78:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00290E98; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_00290E9C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] - 20400u), c.r[4].w[0]);  c.pc = t; return; }
L_00290E98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 1;
L_00290E9C:
    c.r[2].d[0] = 0ull | 32769ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 20400u), c.r[2].w[0]);  c.pc = t; return; }
L_00290EA8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00290ED0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st8((c.r[2].w[0] - 20392u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00290ED0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[2], 0u + 47u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 92u);  if (t) { goto L_00290F10; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_00290F10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[8], c.r[2].w[0] - 31072u);
    set32(c.r[7], c.r[4].w[0] - 20392u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00290F1C; } }
    c.budget -= 1;
L_00290F10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st8((c.r[4].w[0] - 20392u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_00290F1C:
    set32(c.r[4], c.r[4].w[0] - 20392u);
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DC88u | kUnwind; return; } [[clang::musttail]] return unit_0007(c, 122u, depth); }
L_00290F38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00290F88; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[7], c.r[2].w[0] - 30640u);
    set32(c.r[6], c.r[3].w[0] - 20128u);
    lwl(c.r[4], (c.r[7].w[0] + 3u));
    lwr(c.r[4], (c.r[7].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 4u)));
    swl(c.r[4], (c.r[6].w[0] + 3u));
    swr(c.r[4], (c.r[6].w[0]));
    st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 5u)));
    st8((c.r[6].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00290F88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] - 20128u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DC88u | kUnwind; return; } [[clang::musttail]] return unit_0007(c, 122u, depth); }
L_00290FB4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] - 20400u)));  c.pc = t; return; }
L_00290FE0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[6].w[0] - 19776u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00291000; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00291038; } }
L_00291000:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00291004:
    set32(c.r[2], c.r[5].w[0] << 3);
    c.r[3].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);  if (t) { goto L_00291038; } }
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[4], c.r[6].w[0] - 19776u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00291004u | kUnwind; return; } goto L_00291004; }
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00291038:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[7].d[0] + 0ull;  c.pc = t; return; }
L_00291040:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[29].w[0] + 40u), c.r[31].d[0]);  if (t) { goto L_00291070; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00291068u); set32(c.r[4], c.r[4].w[0] - 30632u);  if (depth < kMaxDepth) unit_0064(c, 198u, depth + 1u); else { c.pc = 0x00291988u; return; } if (c.pc != 0x00291068u) [[unlikely]] return; }
L_00291068:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00291130; } }
L_00291070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00291078u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 194u, depth + 1u); else { c.pc = 0x00291928u; return; } if (c.pc != 0x00291078u) [[unlikely]] return; }
L_00291078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00291080u);  if (depth < kMaxDepth) unit_0064(c, 138u, depth + 1u); else { c.pc = 0x00290FE0u; return; } if (c.pc != 0x00291080u) [[unlikely]] return; }
L_00291080:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(0u));  goto L_002910A0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00291098u); set32(c.r[4], c.r[4].w[0] - 30584u);  if (depth < kMaxDepth) unit_0064(c, 198u, depth + 1u); else { c.pc = 0x00291988u; return; } if (c.pc != 0x00291098u) [[unlikely]] return; }
L_00291098:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00291124; } }
L_002910A0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[18].w[0] + 8u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002910B8u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002910B8u) [[unlikely]] return; }
L_002910B8:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002910D0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002910D0u) [[unlikely]] return; }
L_002910D0:
    set32(c.r[3], 0u + 10u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], 0u + 15u);
    set32(c.r[2], c.r[16].w[0] << 3);
    st32((c.r[18].w[0] + 24u), c.r[16].w[0]);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x002910ECu);  goto L_002910F0; }
L_002910F0:
    set32(c.r[3], c.r[18].w[0] + 560u);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 4;
L_00291100:
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[3].w[0]), 0u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], c.r[3].w[0] - 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00291100u | kUnwind; return; } goto L_00291100; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00291124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029112Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 196u, depth + 1u); else { c.pc = 0x00291948u; return; } if (c.pc != 0x0029112Cu) [[unlikely]] return; }
L_0029112C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00291130:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00291148:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_00291188; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00291164u);  if (depth < kMaxDepth) unit_0064(c, 161u, depth + 1u); else { c.pc = 0x00291408u; return; } if (c.pc != 0x00291164u) [[unlikely]] return; }
L_00291164:
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], 0u + 568u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011AB50u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 201u, depth); }
L_00291188:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00291198:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 40u), c.r[5].w[0]);  c.pc = t; return; }
L_002911A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[8].d[0] | 65535ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_002911C8; }
L_002911C8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.budget -= 15;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[29].w[0] + 56u), c.r[31].d[0]);  if (t) { goto L_00291218; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00291210u); set32(c.r[4], c.r[4].w[0] - 30536u);  if (depth < kMaxDepth) unit_0064(c, 198u, depth + 1u); else { c.pc = 0x00291988u; return; } if (c.pc != 0x00291210u) [[unlikely]] return; }
L_00291210:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00291338; } }
L_00291218:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.r[3].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00291338; } }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 28u)));  goto L_00291248; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029123Cu); set32(c.r[4], c.r[4].w[0] - 30496u);  if (depth < kMaxDepth) unit_0064(c, 198u, depth + 1u); else { c.pc = 0x00291988u; return; } if (c.pc != 0x0029123Cu) [[unlikely]] return; }
L_0029123C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00291338; } }
    c.budget -= 1;
L_00291248:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[8].d[0] = c.r[8].d[0] | 65535ull;
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[3].w[0] + 15u);
    set32(c.r[7], c.r[3].w[0] + 30u);
    c.r[5].d[0] = c.r[6].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[7].d[0];
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[16], c.r[3].w[0] + 56u);
    set32(c.r[2], c.r[6].w[0] - c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 56u)));
    c.r[8].d[0] = c.r[3].d[0] ^ c.r[8].d[0];
    set32(c.r[3], c.r[3].w[0] + 1u);
    if (c.r[8].d[0] != 0) c.r[19].d[0] = c.r[3].d[0];
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002912A8u); st32((c.r[16].w[0]), c.r[19].w[0]);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x002912A8u) [[unlikely]] return; }
L_002912A8:
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002912D8; } }
L_002912B8:
    set32(c.r[2], c.r[18].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[4].d[0] = c.r[5].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002912B8u | kUnwind; return; } goto L_002912B8; } }
L_002912D8:
    st32((c.r[16].w[0] + 16u), c.r[20].w[0]);
    set32(c.r[8], 0u + 1u);
    st32((c.r[16].w[0] + 20u), c.r[21].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 12u), c.r[22].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[4], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.r[5].d[0] = c.r[4].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 4);
    st32((c.r[17].w[0] + 36u), c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] - c.r[2].w[0]);
    c.budget -= 21;
    { const bool t = c.r[7].d[0] != c.r[8].d[0]; st32((c.r[17].w[0] + 28u), c.r[4].w[0]);  if (t) { goto L_00291334; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00291334:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00291338:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00291360:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00291380; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] - 30536u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00291988; }
L_00291380:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00291398; } }
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    c.budget -= 3;
L_00291398:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002913A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_002913D0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] - 30536u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00291988; }
L_002913D0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_002913E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002913E4u);  if (depth < kMaxDepth) unit_0064(c, 161u, depth + 1u); else { c.pc = 0x00291408u; return; } if (c.pc != 0x002913E4u) [[unlikely]] return; }
L_002913E4:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_002913E8:
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { set32(c.r[2], 0u + 1u);  goto L_002913F4; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002913F4:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00291408:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_00291438; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] - 30536u);
    c.budget -= 4;
L_0029142C:
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00291988; }
L_00291438:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00291480; }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0029146C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0] + 44u), 0u);  goto L_00291470; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00291468u);  if (depth < kMaxDepth) unit_0061(c, 87u, depth + 1u); else { c.pc = 0x00284AD8u; return; } if (c.pc != 0x00291468u) [[unlikely]] return; }
L_00291468:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0029146C:
    st32((c.r[16].w[0] + 44u), 0u);
    c.budget -= 1;
L_00291470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00291478u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 158u, depth + 1u); else { c.pc = 0x00291360u; return; } if (c.pc != 0x00291478u) [[unlikely]] return; }
L_00291478:
    st32((c.r[16].w[0] + 52u), 0u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_00291480:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00291490:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002914B0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] - 30536u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00291988; }
L_002914B0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[2].d[0]) { st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));  goto L_002914C0; }
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 1;
L_002914C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002914D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] - 19776u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 15u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 1u);
    c.budget -= 10;
L_002914F8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_00291510; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029150Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 230u, depth + 1u); else { c.pc = 0x00291E48u; return; } if (c.pc != 0x0029150Cu) [[unlikely]] return; }
L_0029150C:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_00291510:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 568u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002914F8u | kUnwind; return; } goto L_002914F8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00291530:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00291550; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00291548u); set32(c.r[4], c.r[4].w[0] - 30536u);  if (depth < kMaxDepth) unit_0064(c, 198u, depth + 1u); else { c.pc = 0x00291988u; return; } if (c.pc != 0x00291548u) [[unlikely]] return; }
L_00291548:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00291554; } }
L_00291550:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 1;
L_00291554:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00291560:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00291580; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00291578u); set32(c.r[4], c.r[4].w[0] - 30536u);  if (depth < kMaxDepth) unit_0064(c, 198u, depth + 1u); else { c.pc = 0x00291988u; return; } if (c.pc != 0x00291578u) [[unlikely]] return; }
L_00291578:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00291584; } }
L_00291580:
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 1;
L_00291584:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00291590:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; c.r[3].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002915B8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002915B0u); set32(c.r[4], c.r[4].w[0] - 30536u);  if (depth < kMaxDepth) unit_0064(c, 198u, depth + 1u); else { c.pc = 0x00291988u; return; } if (c.pc != 0x002915B0u) [[unlikely]] return; }
L_002915B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00291614; } }
L_002915B8:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] < 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_002915D4; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 36u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[6].w[0] + 32u)));  goto L_002915E8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 1;
L_002915D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002915DCu); set32(c.r[4], c.r[4].w[0] - 30456u);  if (depth < kMaxDepth) unit_0064(c, 198u, depth + 1u); else { c.pc = 0x00291988u; return; } if (c.pc != 0x002915DCu) [[unlikely]] return; }
L_002915DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00291614; } }
    c.budget -= 1;
L_002915E8:
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[5].w[0] + 15u);
    c.r[3].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[4], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 11;
L_00291614:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00291620:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00291640; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00291638u); set32(c.r[4], c.r[4].w[0] - 30536u);  if (depth < kMaxDepth) unit_0064(c, 198u, depth + 1u); else { c.pc = 0x00291988u; return; } if (c.pc != 0x00291638u) [[unlikely]] return; }
L_00291638:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002916A8; } }
L_00291640:
    set32(c.r[6], c.r[4].w[0] + 56u);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0029167C; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 2;
L_00291658:
    c.r[2].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[6].w[0] + 32u);  if (t) { goto L_0029167C; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[3], c.r[3].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00291658u | kUnwind; return; } goto L_00291658; }
L_0029167C:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], c.r[3].w[0] << 5);  goto L_002916A0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00291694u); set32(c.r[4], c.r[4].w[0] - 30424u);  if (depth < kMaxDepth) unit_0064(c, 198u, depth + 1u); else { c.pc = 0x00291988u; return; } if (c.pc != 0x00291694u) [[unlikely]] return; }
L_00291694:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002916A8; } }
    c.budget -= 1;
L_002916A0:
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    c.budget -= 2;
L_002916A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002916B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002916D8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002916D0u); set32(c.r[4], c.r[4].w[0] - 30536u);  if (depth < kMaxDepth) unit_0064(c, 198u, depth + 1u); else { c.pc = 0x00291988u; return; } if (c.pc != 0x002916D0u) [[unlikely]] return; }
L_002916D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00291740; } }
L_002916D8:
    set32(c.r[6], c.r[4].w[0] + 56u);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00291714; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 2;
L_002916F0:
    c.r[2].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[6].w[0] + 32u);  if (t) { goto L_00291714; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[3], c.r[3].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002916F0u | kUnwind; return; } goto L_002916F0; }
L_00291714:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], c.r[3].w[0] << 5);  goto L_00291738; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029172Cu); set32(c.r[4], c.r[4].w[0] - 30424u);  if (depth < kMaxDepth) unit_0064(c, 198u, depth + 1u); else { c.pc = 0x00291988u; return; } if (c.pc != 0x0029172Cu) [[unlikely]] return; }
L_0029172C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00291740; } }
    c.budget -= 1;
L_00291738:
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 2;
L_00291740:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00291750:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00291770; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00291768u); set32(c.r[4], c.r[4].w[0] - 30536u);  if (depth < kMaxDepth) unit_0064(c, 198u, depth + 1u); else { c.pc = 0x00291988u; return; } if (c.pc != 0x00291768u) [[unlikely]] return; }
L_00291768:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002917D8; } }
L_00291770:
    set32(c.r[6], c.r[4].w[0] + 56u);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002917AC; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 2;
L_00291788:
    c.r[2].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[6].w[0] + 32u);  if (t) { goto L_002917AC; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[3], c.r[3].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00291788u | kUnwind; return; } goto L_00291788; }
L_002917AC:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], c.r[3].w[0] << 5);  goto L_002917D0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002917C4u); set32(c.r[4], c.r[4].w[0] - 30424u);  if (depth < kMaxDepth) unit_0064(c, 198u, depth + 1u); else { c.pc = 0x00291988u; return; } if (c.pc != 0x002917C4u) [[unlikely]] return; }
L_002917C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002917D8; } }
    c.budget -= 1;
L_002917D0:
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 84u)));
    c.budget -= 2;
L_002917D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002917E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00291810; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] - 30536u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00291988; }
L_00291810:
    c.budget -= 2;
    if (c.r[3].sd[0] < 0) { c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  goto L_0029182C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00291840; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 1;
L_0029182C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] - 30384u);
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00291988; }
L_00291840:
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00291850:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00291870; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00291868u); set32(c.r[4], c.r[4].w[0] - 30536u);  if (depth < kMaxDepth) unit_0064(c, 198u, depth + 1u); else { c.pc = 0x00291988u; return; } if (c.pc != 0x00291868u) [[unlikely]] return; }
L_00291868:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00291874; } }
L_00291870:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 1;
L_00291874:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002918C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], ld32((c.r[2].w[0] - 20088u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002918E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20084u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002918E8u); set32(c.r[5], ld32((c.r[3].w[0] - 20080u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002918E8u) [[unlikely]] return; }
L_002918E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002918F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00291918; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] - 30536u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00291988; }
L_00291918:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00291928:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00291938u);  if (depth < kMaxDepth) unit_0065(c, 26u, depth + 1u); else { c.pc = 0x002943F0u; return; } if (c.pc != 0x00291938u) [[unlikely]] return; }
L_00291938:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00291948:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0065(c, 27u, depth); }
L_00291960:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_00291978; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[2].w[0] - 20072u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 20068u), 0u);  c.pc = t; return; }
L_00291978:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[2].w[0] - 20072u), c.r[4].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 20068u), c.r[5].w[0]);  c.pc = t; return; }
L_00291988:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[16], c.r[16].w[0] - 20064u);
    st64((c.r[29].w[0] + 56u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[6].d[0]);
    set32(c.r[6], c.r[29].w[0] + 56u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[11].d[0]);
    st32((c.r[29].w[0] + 24u), c.f[12]);
    st32((c.r[29].w[0] + 28u), c.f[13]);
    st32((c.r[29].w[0] + 32u), c.f[14]);
    st32((c.r[29].w[0] + 36u), c.f[15]);
    st32((c.r[29].w[0] + 40u), c.f[16]);
    st32((c.r[29].w[0] + 44u), c.f[17]);
    st32((c.r[29].w[0] + 48u), c.f[18]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002919E8u); st32((c.r[29].w[0] + 52u), c.f[19]);  if (depth < kMaxDepth) unit_0008(c, 321u, depth + 1u); else { c.pc = 0x00123268u; return; } if (c.pc != 0x002919E8u) [[unlikely]] return; }
L_002919E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 20072u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00291A04; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00291A04u); set32(c.r[4], ld32((c.r[2].w[0] - 20068u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00291A04u) [[unlikely]] return; }
L_00291A04:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00291A18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00291A20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00291A28:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] - 19808u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00291A48u); set32(c.r[3], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0064(c, 194u, depth + 1u); else { c.pc = 0x00291928u; return; } if (c.pc != 0x00291A48u) [[unlikely]] return; }
L_00291A48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[16], c.r[2].w[0] - 19784u);
    set32(c.r[4], c.r[4].w[0] - 19776u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], 0u + 9088u);  if (t) { goto L_00291A88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00291A70u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00291A70u) [[unlikely]] return; }
L_00291A70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00291A78u);  if (depth < kMaxDepth) unit_0064(c, 201u, depth + 1u); else { c.pc = 0x00291A18u; return; } if (c.pc != 0x00291A78u) [[unlikely]] return; }
L_00291A78:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00291A84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x00291960u; return; } if (c.pc != 0x00291A84u) [[unlikely]] return; }
L_00291A84:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00291A88:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00291A98u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0064(c, 196u, depth + 1u); else { c.pc = 0x00291948u; return; } if (c.pc != 0x00291A98u) [[unlikely]] return; }
L_00291A98:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00291AA8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[3].w[0] - 19784u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_00291B48; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[18], 0u + 1u);
    set32(c.r[16], c.r[19].w[0] - 19776u);
    set32(c.r[17], 0u + 15u);
    c.budget -= 4;
L_00291AE8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_00291B00; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00291AFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 149u, depth + 1u); else { c.pc = 0x00291148u; return; } if (c.pc != 0x00291AFCu) [[unlikely]] return; }
L_00291AFC:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_00291B00:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 568u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00291AE8u | kUnwind; return; } goto L_00291AE8; } }
    set32(c.r[4], c.r[19].w[0] - 19776u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00291B18u); set32(c.r[6], 0u + 9088u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00291B18u) [[unlikely]] return; }
L_00291B18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00291B20u);  if (depth < kMaxDepth) unit_0064(c, 202u, depth + 1u); else { c.pc = 0x00291A20u; return; } if (c.pc != 0x00291B20u) [[unlikely]] return; }
L_00291B20:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00291960u | kUnwind; return; } goto L_00291960; }
L_00291B48:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00291B68:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[17], c.r[2].w[0] + 56u);  if (t) { goto L_00291C78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00291BA0u); set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  if (depth < kMaxDepth) unit_0061(c, 85u, depth + 1u); else { c.pc = 0x00284A70u; return; } if (c.pc != 0x00291BA0u) [[unlikely]] return; }
L_00291BA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00291BA8u); set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  if (depth < kMaxDepth) unit_0061(c, 65u, depth + 1u); else { c.pc = 0x002848D8u; return; } if (c.pc != 0x00291BA8u) [[unlikely]] return; }
L_00291BA8:
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00291BB4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00291BB4u) [[unlikely]] return; }
L_00291BB4:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00291BE4; } }
    c.budget -= 1;
L_00291BC8:
    set32(c.r[2], c.r[18].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[4].d[0] = c.r[5].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00291BC8u | kUnwind; return; } goto L_00291BC8; } }
L_00291BE4:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00291C10; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] - 30296u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00291988u | kUnwind; return; } goto L_00291988; }
L_00291C10:
    set32(c.r[7], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[8], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00291C28u); set32(c.r[5], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0061(c, 59u, depth + 1u); else { c.pc = 0x00284828u; return; } if (c.pc != 0x00291C28u) [[unlikely]] return; }
L_00291C28:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00291C34u); set32(c.r[5], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_0061(c, 92u, depth + 1u); else { c.pc = 0x00284B38u; return; } if (c.pc != 0x00291C34u) [[unlikely]] return; }
L_00291C34:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 28u), 0u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00291C54u); set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_0061(c, 131u, depth + 1u); else { c.pc = 0x00285148u; return; } if (c.pc != 0x00291C54u) [[unlikely]] return; }
L_00291C54:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00291C60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 74u, depth + 1u); else { c.pc = 0x00284978u; return; } if (c.pc != 0x00291C60u) [[unlikely]] return; }
L_00291C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00291C68u); set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  if (depth < kMaxDepth) unit_0061(c, 77u, depth + 1u); else { c.pc = 0x002849E8u; return; } if (c.pc != 0x00291C68u) [[unlikely]] return; }
L_00291C68:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 4;
L_00291C78:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00291C90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00291CD0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] - 30232u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00291988u | kUnwind; return; } goto L_00291988; }
L_00291CD0:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00291CE4u); set32(c.r[17], c.r[2].w[0] + 56u);  if (depth < kMaxDepth) unit_0061(c, 73u, depth + 1u); else { c.pc = 0x00284970u; return; } if (c.pc != 0x00291CE4u) [[unlikely]] return; }
L_00291CE4:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_00291D00; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00291D2C; } }
L_00291D00:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_00291D18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00291D10u); set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  if (depth < kMaxDepth) unit_0061(c, 75u, depth + 1u); else { c.pc = 0x00284998u; return; } if (c.pc != 0x00291D10u) [[unlikely]] return; }
L_00291D10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_00291D2C; } }
L_00291D18:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00291D30; }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    st32((c.r[17].w[0] + 24u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 3;
L_00291D2C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00291D30:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00291D40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_00291E20; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[17], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; c.r[7].d[0] = ld8((c.r[16].w[0] + 3u));  if (t) { goto L_00291DB0; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[6].w[0] << 5);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 56u);
    set32(c.r[21], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[20], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[2].w[0] + 12u)));  if (t) { goto L_00291DB4; } }
L_00291DB0:
    set32(c.r[6], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 1;
L_00291DB4:
    set32(c.r[4], c.r[6].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.r[5].d[0] = c.r[4].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[6].d[0];
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] - c.r[2].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 13;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[16].w[0] + 32u), c.r[4].w[0]);  if (t) { goto L_00291DF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00291DF0u);  if (depth < kMaxDepth) unit_0064(c, 191u, depth + 1u); else { c.pc = 0x002918C0u; return; } if (c.pc != 0x00291DF0u) [[unlikely]] return; }
L_00291DF0:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 3u));
    c.budget -= 2;
L_00291DF8:
    set32(c.r[2], c.r[7].w[0] << 24);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[17].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00291E24; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00291E20u); c.r[8].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 153u, depth + 1u); else { c.pc = 0x002911C8u; return; } if (c.pc != 0x00291E20u) [[unlikely]] return; }
L_00291E20:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00291E24:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00291E48:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00291F00; } }
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00291F04; }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00291F04; }
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[17], c.r[16].w[0] + 16u);
    set32(c.r[2], c.r[5].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; set32(c.r[2], c.r[5].w[0] << 5);  if (t) { goto L_00291EB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00291EACu);  if (depth < kMaxDepth) unit_0064(c, 224u, depth + 1u); else { c.pc = 0x00291C90u; return; } if (c.pc != 0x00291EACu) [[unlikely]] return; }
L_00291EAC:
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[5].w[0] << 5);
    c.budget -= 2;
L_00291EB4:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[18].d[0]; set32(c.r[2], c.r[5].w[0] << 5);  if (t) { goto L_00291ED4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00291ECCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 227u, depth + 1u); else { c.pc = 0x00291D40u; return; } if (c.pc != 0x00291ECCu) [[unlikely]] return; }
L_00291ECC:
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[5].w[0] << 5);
    c.budget -= 2;
L_00291ED4:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00291F04; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00291B68u | kUnwind; return; } goto L_00291B68; }
L_00291F00:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00291F04:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00291F18:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0065(c, 203u, depth); }
L_00291F30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0065(c, 204u, depth); }
L_00291F48:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00291F64u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 233u, depth + 1u); else { c.pc = 0x00291F18u; return; } if (c.pc != 0x00291F64u) [[unlikely]] return; }
L_00291F64:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00291F70u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 238u, depth + 1u); else { c.pc = 0x00291F88u; return; } if (c.pc != 0x00291F70u) [[unlikely]] return; }
L_00291F70:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00291F30u | kUnwind; return; } goto L_00291F30; }
L_00291F88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[2].w[0] - 10636u), c.r[4].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 10632u), c.r[5].w[0]);  c.pc = t; return; }
L_00291FA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] - 10636u)));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00291FC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00291FC4u); set32(c.r[4], ld32((c.r[2].w[0] - 10632u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00291FC4u) [[unlikely]] return; }
L_00291FC4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00291FD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00291FE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 233u, depth + 1u); else { c.pc = 0x00291F18u; return; } if (c.pc != 0x00291FE4u) [[unlikely]] return; }
L_00291FE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00291FECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 244u, depth + 1u); else { c.pc = 0x00292000u; return; } if (c.pc != 0x00291FECu) [[unlikely]] return; }
L_00291FEC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00291F30u | kUnwind; return; } goto L_00291F30; }
L_00292000:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 10688u);
    set32(c.r[6], 0u + 360u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029201Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 189u, depth + 1u); else { c.pc = 0x0011A900u; return; } if (c.pc != 0x0029201Cu) [[unlikely]] return; }
L_0029201C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] - 10640u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00292040:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00292054u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 233u, depth + 1u); else { c.pc = 0x00291F18u; return; } if (c.pc != 0x00292054u) [[unlikely]] return; }
L_00292054:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029205Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 249u, depth + 1u); else { c.pc = 0x00292070u; return; } if (c.pc != 0x0029205Cu) [[unlikely]] return; }
L_0029205C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00291F30u | kUnwind; return; } goto L_00291F30; }
L_00292070:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] - 10640u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_00292088:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002920A4u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 233u, depth + 1u); else { c.pc = 0x00291F18u; return; } if (c.pc != 0x002920A4u) [[unlikely]] return; }
L_002920A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002920B0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 254u, depth + 1u); else { c.pc = 0x002920D0u; return; } if (c.pc != 0x002920B0u) [[unlikely]] return; }
L_002920B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002920B8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 234u, depth + 1u); else { c.pc = 0x00291F30u; return; } if (c.pc != 0x002920B8u) [[unlikely]] return; }
L_002920B8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002920D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[2].w[0] - 10688u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[6], 0u + 360u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00292108u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 189u, depth + 1u); else { c.pc = 0x0011A900u; return; } if (c.pc != 0x00292108u) [[unlikely]] return; }
L_00292108:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.r[2].d[0] = c.r[19].sd[0] < 1024ll ? 1ull : 0ull;  goto L_00292120; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - 29184u);  if (t) { goto L_002921A8; } }
    c.budget -= 1;
L_00292120:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] & 3ull;  goto L_00292138; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - 29144u);  if (t) { goto L_002921A8; } }
    c.budget -= 1;
L_00292138:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00292148; } }
    set32(c.r[2], c.r[18].w[0] - c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] + 4u);
    c.budget -= 2;
L_00292148:
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 44u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00292160u); set32(c.r[16], c.r[17].w[0] + 44u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00292160u) [[unlikely]] return; }
L_00292160:
    c.r[2].d[0] = c.r[16].d[0] & 3ull;
    st32((c.r[17].w[0]), c.r[18].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 4u), c.r[19].w[0]);  if (t) { goto L_00292178; } }
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] + 4u);
    c.budget -= 2;
L_00292178:
    set32(c.r[2], c.r[16].w[0] + 384u);
    st32((c.r[17].w[0] + 8u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029218Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 266u, depth + 1u); else { c.pc = 0x00292250u; return; } if (c.pc != 0x0029218Cu) [[unlikely]] return; }
L_0029218C:
    set32(c.r[3], c.r[16].w[0] + 768u);
    set32(c.r[2], c.r[18].w[0] + c.r[19].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002921B4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] - 29104u);
    c.budget -= 2;
L_002921A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002921B0u);  if (depth < kMaxDepth) unit_0064(c, 239u, depth + 1u); else { c.pc = 0x00291FA0u; return; } if (c.pc != 0x002921B0u) [[unlikely]] return; }
L_002921B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002921B4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002921D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002921E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 233u, depth + 1u); else { c.pc = 0x00291F18u; return; } if (c.pc != 0x002921E4u) [[unlikely]] return; }
L_002921E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002921ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 262u, depth + 1u); else { c.pc = 0x00292200u; return; } if (c.pc != 0x002921ECu) [[unlikely]] return; }
L_002921EC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00291F30u | kUnwind; return; } goto L_00291F30; }
L_00292200:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u + 44u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011AB50u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 201u, depth); }
L_00292220:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00292234u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 233u, depth + 1u); else { c.pc = 0x00291F18u; return; } if (c.pc != 0x00292234u) [[unlikely]] return; }
L_00292234:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029223Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 266u, depth + 1u); else { c.pc = 0x00292250u; return; } if (c.pc != 0x0029223Cu) [[unlikely]] return; }
L_0029223C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00291F30u | kUnwind; return; } goto L_00291F30; }
L_00292250:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[7], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 4;
L_00292260:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    c.r[3].d[0] = c.r[5].sd[0] < 96ll ? 1ull : 0ull;
    st32((c.r[2].w[0]), 0u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00292260u | kUnwind; return; } goto L_00292260; } }
    set32(c.r[2], 0u + 64u);
    st32((c.r[6].w[0] + 20u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0] + 24u), c.r[2].w[0]);  c.pc = t; return; }
L_00292290:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[5].w[0] << 16);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002922C0u); set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 16));  if (depth < kMaxDepth) unit_0064(c, 233u, depth + 1u); else { c.pc = 0x00291F18u; return; } if (c.pc != 0x002922C0u) [[unlikely]] return; }
L_002922C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002922D4u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 271u, depth + 1u); else { c.pc = 0x002922F0u; return; } if (c.pc != 0x002922D4u) [[unlikely]] return; }
L_002922D4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00291F30u | kUnwind; return; } goto L_00291F30; }
L_002922F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[24].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[13], c.r[13].w[0] - 30208u);
    set32(c.r[5], c.r[5].w[0] << 16);
    set32(c.r[3], ld32((c.r[24].w[0] + 28u)));
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    set32(c.r[2], ld32((c.r[24].w[0] + 32u)));
    set32(c.r[11], 0u - 3567u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[15], 0u - 2006u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[13].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[13].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[8], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[24].w[0] + 40u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[5].w[0], c.r[8].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    set32(c.r[8], ld32((c.r[24].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[10], ld32((c.r[24].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[13].w[0]);
    set32(c.r[12], ld32((c.r[24].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], 0u + 3567u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 12));
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 12));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[16], ld32((c.r[24].w[0] + 12u)));
    set32(c.r[14], c.r[10].w[0] << 2);
    c.r[10].d[0] = c.r[14].d[0] + 0ull;
    set32(c.r[14], c.r[14].w[0] + c.r[8].w[0]);
    set32(c.r[12], c.r[12].w[0] << 2);
    set32(c.r[8], 0u + 2006u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 12));
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 12));
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[11].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[3].w[0], c.r[8].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    mmi::mult(c, 1, c.r[9].w[0], c.r[15].w[0]);
    c.r[15].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[9].w[0], c.r[2].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    set32(c.r[13], c.r[10].w[0] + c.r[16].w[0]);
    c.r[10].d[0] = c.r[14].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[12].w[0])));
    set32(c.r[8], ld32((c.r[13].w[0])));
    set32(c.r[11], c.r[11].w[0] + c.r[15].w[0]);
    set32(c.r[12], ld32((c.r[10].w[0])));
    set32(c.r[11], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 12));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st32((c.r[14].w[0]), c.r[11].w[0]);
    set32(c.r[11], 0u + 32767u);
    mmi::mult(c, 1, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    set32(c.r[9], c.r[9].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[24].w[0] + 20u)));
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 12));
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 12));
    set32(c.r[10], 0u + 32767u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 12));
    st32((c.r[2].w[0]), c.r[9].w[0]);
    set32(c.r[2], 0u - 32768u);
    set32(c.r[4], c.r[4].w[0] + c.r[12].w[0]);
    set32(c.r[12], 0u - 32768u);
    set32(c.r[8], ld32((c.r[24].w[0] + 20u)));
    c.r[10].d[0] = c.r[10].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.r[11].d[0] = c.r[11].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[5].sd[0] < -32768ll ? 1ull : 0ull;
    c.r[13].d[0] = c.r[4].sd[0] < -32768ll ? 1ull : 0ull;
    set32(c.r[9], ld32((c.r[24].w[0] + 24u)));
    if (c.r[3].d[0] != 0) c.r[5].d[0] = c.r[2].d[0];
    set32(c.r[2], 0u + 32767u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    if (c.r[13].d[0] != 0) c.r[4].d[0] = c.r[12].d[0];
    c.r[10].d[0] = c.r[10].d[0] ^ 0ull;
    c.r[11].d[0] = c.r[11].d[0] ^ 0ull;
    set32(c.r[3], 0u + 32767u);
    if (c.r[10].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];
    if (c.r[11].d[0] != 0) c.r[5].d[0] = c.r[3].d[0];
    c.r[9].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[24].w[0] + 20u), c.r[8].w[0]);
    c.budget -= 88;
    { const bool t = c.r[9].d[0] != 0ull; st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_00292454; } }
    st32((c.r[24].w[0] + 20u), 0u);
    c.budget -= 1;
L_00292454:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00292460:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029248Cu); c.r[19].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 233u, depth + 1u); else { c.pc = 0x00291F18u; return; } if (c.pc != 0x0029248Cu) [[unlikely]] return; }
L_0029248C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002924A0u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 275u, depth + 1u); else { c.pc = 0x002924C0u; return; } if (c.pc != 0x002924A0u) [[unlikely]] return; }
L_002924A0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00291F30u | kUnwind; return; } goto L_00291F30; }
L_002924C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[15].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u - 32768u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    set32(c.r[19], 0u + 32767u);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    set32(c.r[23], 0u + 2006u);
    st64((c.r[29].w[0] + 64u), c.r[30].d[0]);
    set32(c.r[30], 0u + 3567u);
    set32(c.r[17], c.r[2].w[0] - 30208u);
    set32(c.r[25], ld32((c.r[15].w[0] + 12u)));
    set32(c.r[24], ld32((c.r[15].w[0] + 8u)));
    c.budget -= 24;
L_00292520:
    set32(c.r[3], ld32((c.r[15].w[0] + 28u)));
    set32(c.r[12], c.r[16].w[0] << 1);
    set32(c.r[2], ld32((c.r[15].w[0] + 32u)));
    set32(c.r[4], c.r[12].w[0] + c.r[22].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[14], 0u + 32767u);
    set32(c.r[2], ld32((c.r[15].w[0] + 40u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[5].w[0], c.r[6].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    set32(c.r[3], ld32((c.r[15].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[7], ld32((c.r[24].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 12));
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 12));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[6].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[4].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[1];
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[13], 0u + 32767u);
    set32(c.r[3], ld32((c.r[25].w[0])));
    set32(c.r[16], c.r[16].w[0] + 1u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 12));
    set32(c.r[2], 0u - 3567u);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 12));
    mmi::mult(c, 1, c.r[6].w[0], c.r[23].w[0]);
    c.r[11].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], 0u - 2006u);
    mmi::mult(c, 0, c.r[8].w[0], c.r[30].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[8].w[0], c.r[2].w[0]);
    c.r[8].d[0] = c.lo.d[1];
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 12));
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 12));
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[19].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.r[7].d[0] = c.r[4].sd[0] < -32768ll ? 1ull : 0ull;
    c.r[9].d[0] = c.r[5].sd[0] < -32768ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    if (c.r[7].d[0] != 0) c.r[4].d[0] = c.r[18].d[0];
    if (c.r[9].d[0] != 0) c.r[5].d[0] = c.r[18].d[0];
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[14].d[0];
    set32(c.r[2], c.r[12].w[0] + c.r[20].w[0]);
    if (c.r[3].d[0] != 0) c.r[5].d[0] = c.r[13].d[0];
    c.r[3].d[0] = c.r[16].sd[0] < 32ll ? 1ull : 0ull;
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 12));
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 12));
    set32(c.r[12], c.r[12].w[0] + c.r[21].w[0]);
    st32((c.r[24].w[0]), c.r[6].w[0]);
    st16((c.r[12].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[24], c.r[24].w[0] + 4u);
    st32((c.r[25].w[0]), c.r[10].w[0]);
    set32(c.r[25], c.r[25].w[0] + 4u);
    c.budget -= 68;
    { const bool t = c.r[3].d[0] != 0ull; st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00292520u | kUnwind; return; } goto L_00292520; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00292660:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00292684u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 233u, depth + 1u); else { c.pc = 0x00291F18u; return; } if (c.pc != 0x00292684u) [[unlikely]] return; }
L_00292684:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00292694u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 280u, depth + 1u); else { c.pc = 0x002926B0u; return; } if (c.pc != 0x00292694u) [[unlikely]] return; }
L_00292694:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00291F30u | kUnwind; return; } goto L_00291F30; }
L_002926B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002926D0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] - 29064u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00291FA0u | kUnwind; return; } goto L_00291FA0; }
L_002926D0:
    set32(c.r[3], c.r[5].w[0] + 127u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(255ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  goto L_002926FC; }
    c.r[2].d[0] = c.r[6].sd[0] < -127ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  goto L_002926FC; }
    c.r[2].d[0] = c.r[6].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[5].w[0] - 127u);  if (t) { goto L_00292710; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 1;
L_002926FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] - 29024u);
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00291FA0u | kUnwind; return; } goto L_00291FA0; }
L_00292710:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0029271C; } }
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 1;
L_0029271C:
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] >= 0; st32((c.r[4].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_0029272C; } }
    set32(c.r[2], 0u + 127u);
    set32(c.r[7], c.r[2].w[0] - c.r[5].w[0]);
    c.budget -= 2;
L_0029272C:
    set32(c.r[2], c.r[6].w[0] + 127u);
    set32(c.r[3], c.r[6].w[0] - 127u);
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[2], 0u - c.r[2].w[0]);  goto L_0029273C; }
L_0029273C:
    st32((c.r[4].w[0] + 32u), c.r[7].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; st32((c.r[4].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_00292750; } }
    set32(c.r[2], 0u + 127u);
    set32(c.r[3], c.r[2].w[0] - c.r[6].w[0]);
    c.budget -= 2;
L_00292750:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00292760:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029277Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 233u, depth + 1u); else { c.pc = 0x00291F18u; return; } if (c.pc != 0x0029277Cu) [[unlikely]] return; }
L_0029277C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00292788u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 284u, depth + 1u); else { c.pc = 0x002927A0u; return; } if (c.pc != 0x00292788u) [[unlikely]] return; }
L_00292788:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00291F30u | kUnwind; return; } goto L_00291F30; }
L_002927A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002927C8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] - 28976u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00291FA0u | kUnwind; return; } goto L_00291FA0; }
L_002927C8:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[3], 0u + 750u);  if (t) { goto L_002927E8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] - 28936u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00291FA0u | kUnwind; return; } goto L_00291FA0; }
L_002927E8:
    set32(c.r[5], 0u + 1u);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x002927F4u);  goto L_002927F8; }
L_002927F8:
    st32((c.r[7].w[0] + 16u), c.r[4].w[0]);
    set32(c.r[6], 0u + 96u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[2].sd[0] < 97ll ? 1ull : 0ull;
    c.r[4].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[6].d[0];
    st32((c.r[7].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00292828:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00292880; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] - 28888u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027EF08u | kUnwind; return; } [[clang::musttail]] return unit_005F(c, 111u, depth); }
L_00292880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00292888u);  if (depth < kMaxDepth) unit_0061(c, 254u, depth + 1u); else { c.pc = 0x00286230u; return; } if (c.pc != 0x00292888u) [[unlikely]] return; }
L_00292888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00292890u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 293u, depth + 1u); else { c.pc = 0x00292960u; return; } if (c.pc != 0x00292890u) [[unlikely]] return; }
L_00292890:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002928A0u); set32(c.r[4], c.r[4].w[0] + 11016u);  if (depth < kMaxDepth) unit_0064(c, 235u, depth + 1u); else { c.pc = 0x00291F48u; return; } if (c.pc != 0x002928A0u) [[unlikely]] return; }
L_002928A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002928A8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 241u, depth + 1u); else { c.pc = 0x00291FD0u; return; } if (c.pc != 0x002928A8u) [[unlikely]] return; }
L_002928A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002928B4u); set32(c.r[17], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_0060(c, 312u, depth + 1u); else { c.pc = 0x002826B0u; return; } if (c.pc != 0x002928B4u) [[unlikely]] return; }
L_002928B4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002928C0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 250u, depth + 1u); else { c.pc = 0x00292088u; return; } if (c.pc != 0x002928C0u) [[unlikely]] return; }
L_002928C0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002928F0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] - 28824u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027EF08u | kUnwind; return; } [[clang::musttail]] return unit_005F(c, 111u, depth); }
L_002928F0:
    set32(c.r[5], ld32((c.r[17].w[0] + 232u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002928FCu); set32(c.r[6], ld32((c.r[17].w[0] + 236u)));  if (depth < kMaxDepth) unit_0064(c, 277u, depth + 1u); else { c.pc = 0x00292660u; return; } if (c.pc != 0x002928FCu) [[unlikely]] return; }
L_002928FC:
    st32((c.r[17].w[0] + 228u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] + 10800u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] + 10936u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[4], c.r[4].w[0] + 10912u);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[5], c.r[5].w[0] + 10992u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st32((c.r[6].w[0] - 30432u), c.r[2].w[0]);
    st32((c.r[7].w[0] - 20764u), c.r[3].w[0]);
    st32((c.r[8].w[0] - 20760u), c.r[4].w[0]);
    st32((c.r[9].w[0] + 28592u), c.r[5].w[0]);
    c.budget -= 24;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002826C8u | kUnwind; return; } [[clang::musttail]] return unit_0060(c, 313u, depth); }
L_00292960:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[2].w[0] - 30432u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0029297C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0029297Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0029297Cu) [[unlikely]] return; }
L_0029297C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00292988:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_002929C8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] - 28768u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027EF08u | kUnwind; return; } [[clang::musttail]] return unit_005F(c, 111u, depth); }
L_002929C8:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 228u)));  if (t) { goto L_002929E8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00292A08; } }
L_002929E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] - 28720u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027EF08u | kUnwind; return; } [[clang::musttail]] return unit_005F(c, 111u, depth); }
L_00292A08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00292A10u);  if (depth < kMaxDepth) unit_0064(c, 277u, depth + 1u); else { c.pc = 0x00292660u; return; } if (c.pc != 0x00292A10u) [[unlikely]] return; }
L_00292A10:
    st32((c.r[16].w[0] + 236u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 232u), c.r[18].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00292A30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[17].w[0] + 228u)));
    c.budget -= 9;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00292A90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00292A5Cu);  if (depth < kMaxDepth) unit_0061(c, 254u, depth + 1u); else { c.pc = 0x00286230u; return; } if (c.pc != 0x00292A5Cu) [[unlikely]] return; }
L_00292A5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00292A64u);  if (depth < kMaxDepth) unit_0060(c, 312u, depth + 1u); else { c.pc = 0x002826B0u; return; } if (c.pc != 0x00292A64u) [[unlikely]] return; }
L_00292A64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00292A6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 259u, depth + 1u); else { c.pc = 0x002921D0u; return; } if (c.pc != 0x00292A6Cu) [[unlikely]] return; }
L_00292A6C:
    st32((c.r[17].w[0] + 228u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00292A78u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 246u, depth + 1u); else { c.pc = 0x00292040u; return; } if (c.pc != 0x00292A78u) [[unlikely]] return; }
L_00292A78:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002826C8u | kUnwind; return; } [[clang::musttail]] return unit_0060(c, 313u, depth); }
L_00292A90:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00292AA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 228u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00292220u | kUnwind; return; } goto L_00292220; }
L_00292AB8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], c.r[5].w[0] << 16);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    set32(c.r[4], ld32((c.r[4].w[0] + 228u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00292290u | kUnwind; return; } goto L_00292290; }
L_00292AF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 228u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00292760u | kUnwind; return; } goto L_00292760; }
L_00292B08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027EF08u | kUnwind; return; } [[clang::musttail]] return unit_005F(c, 111u, depth); }
L_00292B20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[10].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[10].sd[0] >= 0; c.r[11].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00292B50; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 28616u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00106508u | kUnwind; return; } [[clang::musttail]] return unit_0001(c, 350u, depth); }
L_00292B50:
    c.budget -= 2;
    { const bool t = c.r[11].sd[0] >= 0; set32(c.r[2], c.r[10].w[0] << 1);  if (t) { goto L_00292B70; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] - 28568u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00106508u | kUnwind; return; } [[clang::musttail]] return unit_0001(c, 350u, depth); }
L_00292B70:
    set32(c.r[9], c.r[2].w[0] + c.r[11].w[0]);
    set32(c.r[3], c.r[9].w[0] << 6);
    c.r[2].d[0] = c.r[9].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);  if (t) { goto L_00292BA0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], 0u + 32u);
    set32(c.r[4], c.r[4].w[0] - 28520u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00106508u | kUnwind; return; } [[clang::musttail]] return unit_0001(c, 350u, depth); }
L_00292BA0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[7], c.r[3].w[0] << 8);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] - 6576u), c.r[10].w[0]);
    st32((c.r[4].w[0] - 6572u), c.r[11].w[0]);
    st32((c.r[5].w[0] - 6612u), c.r[7].w[0]);
    st32((c.r[6].w[0] - 6608u), c.r[2].w[0]);
    st32((c.r[8].w[0] - 6616u), c.r[9].w[0]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00292BE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], ld32((c.r[2].w[0] - 6608u)));
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[30].d[0]);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; st64((c.r[29].w[0] + 72u), c.r[31].d[0]);  if (t) { goto L_00292C38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], 0u + 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st32((c.r[21].w[0] - 6616u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] - 6612u), c.r[2].w[0]);  if (t) { goto L_00292C3C; } }
L_00292C38:
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 1;
L_00292C3C:
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[16], c.r[19].w[0] - 6604u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_00292CE0; }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[17], c.r[18].w[0] - 6612u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00292C64u); set32(c.r[4], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0002(c, 419u, depth + 1u); else { c.pc = 0x0010B570u; return; } if (c.pc != 0x00292C64u) [[unlikely]] return; }
L_00292C64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00292CA0; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] - 28456u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00292C80u); set32(c.r[5], c.r[5].w[0] + 64u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x00292C80u) [[unlikely]] return; }
L_00292C80:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00292C80u | kUnwind; return; } goto L_00292C80; } }
    c.budget -= 1;
L_00292CA0:
    set32(c.r[16], c.r[19].w[0] - 6604u);
    set32(c.r[5], ld32((c.r[18].w[0] - 6612u)));
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] - 28384u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00292CBCu); set32(c.r[5], c.r[5].w[0] + 64u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x00292CBCu) [[unlikely]] return; }
L_00292CBC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[5], 0u - 64u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] + 64u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] - 6596u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] - 6600u), c.r[3].w[0]);
    c.budget -= 9;
L_00292CE0:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[20].w[0] - 6536u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00292CF4u); set32(c.r[6], 0u + 768u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00292CF4u) [[unlikely]] return; }
L_00292CF4:
    set32(c.r[17], ld32((c.r[16].w[0] - 6600u)));
    set32(c.r[2], ld32((c.r[21].w[0] - 6616u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00292EA8; } }
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[19].d[0] = 0ull + 0ull;
    c.r[30].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[20].w[0] - 6536u);
    c.budget -= 5;
L_00292D18:
    c.r[3].d[0] = c.r[17].d[0] & 63ull;
    set32(c.r[16], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 24u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00292D58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00292D38u); set32(c.r[4], c.r[2].w[0] - 28336u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x00292D38u) [[unlikely]] return; }
L_00292D38:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00292D38u | kUnwind; return; } goto L_00292D38; } }
    c.budget -= 1;
L_00292D58:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 256u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00292D6Cu); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_0065(c, 147u, depth + 1u); else { c.pc = 0x00295D30u; return; } if (c.pc != 0x00292D6Cu) [[unlikely]] return; }
L_00292D6C:
    set32(c.r[3], c.r[18].w[0] << 8);
    set32(c.r[5], c.r[22].w[0] - 5768u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[17].d[0] & 63ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[6], 0u + 256u);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00292DC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00292D9Cu); set32(c.r[4], c.r[2].w[0] - 28288u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x00292D9Cu) [[unlikely]] return; }
L_00292D9C:
    c.budget -= 1;
L_00292DA0:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00292DA0u | kUnwind; return; } goto L_00292DA0; } }
    c.budget -= 1;
L_00292DC0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00292DF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00292DD0u); set32(c.r[4], c.r[2].w[0] - 28232u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x00292DD0u) [[unlikely]] return; }
L_00292DD0:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00292DD0u | kUnwind; return; } goto L_00292DD0; } }
    c.budget -= 1;
L_00292DF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00292DF8u);  if (depth < kMaxDepth) unit_0065(c, 100u, depth + 1u); else { c.pc = 0x00295258u; return; } if (c.pc != 0x00292DF8u) [[unlikely]] return; }
L_00292DF8:
    set32(c.r[3], 0u + 16384u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[16].w[0] + 16u);  if (t) { goto L_00292E38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00292E14u); set32(c.r[4], c.r[30].w[0] - 28184u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x00292E14u) [[unlikely]] return; }
L_00292E14:
    c.budget -= 1;
L_00292E18:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00292E18u | kUnwind; return; } goto L_00292E18; } }
    c.budget -= 1;
L_00292E38:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[16].w[0] + 16u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00292E54u); set32(c.r[17], c.r[17].w[0] + 16384u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00292E54u) [[unlikely]] return; }
L_00292E54:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00292E64u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0065(c, 191u, depth + 1u); else { c.pc = 0x00296628u; return; } if (c.pc != 0x00292E64u) [[unlikely]] return; }
L_00292E64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00292E98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00292E74u); set32(c.r[4], c.r[23].w[0] - 28128u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x00292E74u) [[unlikely]] return; }
L_00292E74:
    c.budget -= 1;
L_00292E78:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00292E78u | kUnwind; return; } goto L_00292E78; } }
    c.budget -= 1;
L_00292E98:
    set32(c.r[2], ld32((c.r[21].w[0] - 6616u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[20].w[0] - 6536u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00292D18u | kUnwind; return; } goto L_00292D18; } }
L_00292EA8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00292ED8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[18].w[0] - 6616u)));
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] <= 0; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_00292F70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[16], c.r[2].w[0] - 6536u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
L_00292F08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00292F18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00292F18u);  if (depth < kMaxDepth) unit_0065(c, 149u, depth + 1u); else { c.pc = 0x00295D88u; return; } if (c.pc != 0x00292F18u) [[unlikely]] return; }
L_00292F18:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00292F34; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00292F34u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00292F34u) [[unlikely]] return; }
L_00292F34:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00292F4C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00292F48u);  if (depth < kMaxDepth) unit_0065(c, 196u, depth + 1u); else { c.pc = 0x00296720u; return; } if (c.pc != 0x00292F48u) [[unlikely]] return; }
L_00292F48:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00292F4C:
    set32(c.r[16], c.r[16].w[0] + 24u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00292F5Cu); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00292F5Cu) [[unlikely]] return; }
L_00292F5C:
    set32(c.r[3], ld32((c.r[18].w[0] - 6616u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00292F08u | kUnwind; return; } goto L_00292F08; }
L_00292F70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[17], c.r[2].w[0] - 6596u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00292FA4; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[16], c.r[16].w[0] - 6604u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00292F98u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0002(c, 423u, depth + 1u); else { c.pc = 0x0010B6D8u; return; } if (c.pc != 0x00292F98u) [[unlikely]] return; }
L_00292F98:
    st32((c.r[16].w[0]), 0u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_00292FA4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00292FB8:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[8].w[0] - 6616u)));
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] <= 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0029300C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[2].w[0] - 6536u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0029300C; } }
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_00292FE8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 24u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 24u);  if (t) { goto L_0029300C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00292FE8u | kUnwind; return; } goto L_00292FE8; } }
L_0029300C:
    set32(c.r[3], ld32((c.r[8].w[0] - 6616u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00293024; } }
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00293024:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00293030:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00293038:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[5], ld32((c.r[5].w[0])));  goto L_00293060; }
L_00293040:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00293040u | kUnwind; return; } goto L_00293040; } }
    c.budget -= 1;
L_00293060:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_0029308C; } }
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 2;
L_00293070:
    c.budget -= 7;
    if (c.r[5].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00293070u | kUnwind; return; } goto L_00293070; }
L_0029308C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00293098:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[24], c.r[18].w[0] + 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 1u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    set32(c.r[19], c.r[4].w[0] - 10616u);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    set32(c.r[20], c.r[3].w[0] - 6564u);
    set32(c.r[7], c.r[2].w[0] + 2680u);
    c.r[10].d[0] = 0ull + 0ull;
    c.r[25].d[0] = 0ull + 0ull;
    set32(c.r[16], 0u + 2u);
    c.r[6].d[0] = c.r[24].d[0] + 0ull;
    c.budget -= 20;
L_002930E8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[17].d[0]) { set32(c.r[25], c.r[25].w[0] + 1u);  goto L_00293374; }
    set32(c.r[8], 0u + 128u);
    c.budget -= 3;
    { const bool t = c.r[10].d[0] == c.r[8].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_00293380; } }
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[3].w[0] - 6560u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 11u);  if (t) { goto L_0029312C; } }
    st32((c.r[6].w[0] + 4u), 0u);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[6].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.budget -= 5;
L_00293128:
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 1;
L_0029312C:
    c.budget -= 2;
    if (c.r[10].d[0] == c.r[8].d[0]) { st32((c.r[18].w[0]), c.r[10].w[0]);  goto L_00293384; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 95u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 94u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 8u);  if (t) { goto L_00293168; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 95u)));
    st32((c.r[6].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.r[2].d[0] = ld8((c.r[7].w[0] + 95u));
    st8((c.r[7].w[0] + 94u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
L_00293168:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == c.r[8].d[0]; set32(c.r[2], 0u + 256u);  if (t) { goto L_00293380; } }
    c.r[3].d[0] = ld16((c.r[7].w[0] + 48u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002931A0; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));
    st32((c.r[6].w[0] + 4u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 48u)));
    st32((c.r[6].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.r[2].d[0] = ld8((c.r[7].w[0] + 48u));
    st8((c.r[7].w[0] + 49u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
L_002931A0:
    c.budget -= 2;
    if (c.r[10].d[0] == c.r[8].d[0]) { st32((c.r[18].w[0]), c.r[10].w[0]);  goto L_00293384; }
    set32(c.r[3], ld32((c.r[7].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 88u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 10u);  if (t) { goto L_002931D8; } }
    st32((c.r[6].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[3], ld32((c.r[7].w[0] + 84u)));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[7].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.budget -= 8;
L_002931D8:
    c.budget -= 2;
    if (c.r[10].d[0] == c.r[8].d[0]) { st32((c.r[18].w[0]), c.r[10].w[0]);  goto L_00293384; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 50u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 51u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_00293214; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 50u)));
    st32((c.r[6].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.r[2].d[0] = ld8((c.r[7].w[0] + 50u));
    st8((c.r[7].w[0] + 51u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
L_00293214:
    c.budget -= 2;
    if (c.r[10].d[0] == c.r[8].d[0]) { st32((c.r[18].w[0]), c.r[10].w[0]);  goto L_00293384; }
    set32(c.r[3], ld32((c.r[7].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_0029324C; } }
    goto L_0029322C;
L_00293228:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_0029322C:
    st32((c.r[6].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[3], ld32((c.r[7].w[0] + 52u)));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[7].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.budget -= 8;
L_0029324C:
    c.budget -= 2;
    if (c.r[10].d[0] == c.r[8].d[0]) { st32((c.r[18].w[0]), c.r[10].w[0]);  goto L_00293384; }
    set32(c.r[3], ld32((c.r[7].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 64u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { goto L_00293294; } }
    set32(c.r[5], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[2], c.r[19].w[0] - c.r[2].w[0]);
    set32(c.r[4], 0u + 5u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[6].w[0] + 8u), 0u);
    st32((c.r[6].w[0] + 12u), c.r[3].w[0]);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[7].w[0] + 60u)));
    st32((c.r[6].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    st32((c.r[7].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 12;
L_00293294:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == c.r[8].d[0]; set32(c.r[2], 0u + 127u);  if (t) { goto L_00293380; } }
    c.budget -= 2;
    if (c.r[10].d[0] == c.r[2].d[0]) { st32((c.r[18].w[0]), c.r[10].w[0]);  goto L_00293384; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 50u)));
    c.r[12].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[9].d[0] = ld8((c.r[7].w[0] + 50u));  if (t) { goto L_0029332C; } }
    set32(c.r[2], c.r[10].w[0] << 4);
    set32(c.r[14], c.r[7].w[0] + 4u);
    set32(c.r[4], c.r[2].w[0] + c.r[24].w[0]);
    set32(c.r[13], c.r[7].w[0] + 12u);
    set32(c.r[15], 0u + 9u);
    set32(c.r[11], 0u + 64u);
    set32(c.r[5], c.r[14].w[0] + c.r[11].w[0]);
    c.budget -= 7;
L_002932D0:
    set32(c.r[8], c.r[13].w[0] + c.r[11].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[11], c.r[11].w[0] + 4u);  if (t) { goto L_00293314; } }
    st32((c.r[4].w[0] + 8u), c.r[12].w[0]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[15].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[8].w[0]), c.r[2].w[0]);
    c.r[9].d[0] = ld8((c.r[7].w[0] + 50u));
    c.budget -= 12;
L_00293314:
    set32(c.r[2], c.r[9].w[0] << 24);
    set32(c.r[12], c.r[12].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.r[2].d[0] = c.r[12].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[14].w[0] + c.r[11].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002932D0u | kUnwind; return; } goto L_002932D0; } }
    goto L_0029332C;
L_00293328:
    set32(c.r[5], c.r[14].w[0] + c.r[11].w[0]);
    c.budget -= 1;
L_0029332C:
    set32(c.r[4], 0u + 128u);
    c.budget -= 3;
    if (c.r[10].d[0] == c.r[4].d[0]) { st32((c.r[18].w[0]), c.r[10].w[0]);  goto L_00293384; }
    c.r[2].d[0] = ld16((c.r[7].w[0] + 48u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_00293368; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));
    st32((c.r[6].w[0] + 4u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 48u)));
    st32((c.r[6].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.r[2].d[0] = ld8((c.r[7].w[0] + 48u));
    st8((c.r[7].w[0] + 49u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
L_00293368:
    c.budget -= 2;
    if (c.r[10].d[0] == c.r[4].d[0]) { st32((c.r[18].w[0]), c.r[10].w[0]);  goto L_00293384; }
    set32(c.r[25], c.r[25].w[0] + 1u);
    c.budget -= 1;
L_00293374:
    c.r[2].d[0] = c.r[25].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 100u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002930E8u | kUnwind; return; } goto L_002930E8; } }
L_00293380:
    st32((c.r[18].w[0]), c.r[10].w[0]);
    c.budget -= 1;
L_00293384:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002933A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] - 10624u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[23].w[0] - 6556u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 17;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[23].w[0] - 6556u);  goto L_00293614; }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002933F4u); set32(c.r[16], c.r[16].w[0] + 4288u);  if (depth < kMaxDepth) unit_0065(c, 156u, depth + 1u); else { c.pc = 0x00296020u; return; } if (c.pc != 0x002933F4u) [[unlikely]] return; }
L_002933F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002933FCu); set32(c.r[17], c.r[19].w[0] - 6548u);  if (depth < kMaxDepth) unit_0065(c, 176u, depth + 1u); else { c.pc = 0x00296418u; return; } if (c.pc != 0x002933FCu) [[unlikely]] return; }
L_002933FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00293404u); c.r[20].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (depth < kMaxDepth) unit_0063(c, 171u, depth + 1u); else { c.pc = 0x0028D788u; return; } if (c.pc != 0x00293404u) [[unlikely]] return; }
L_00293404:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029340Cu); c.r[18].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (depth < kMaxDepth) unit_0064(c, 367u, depth + 1u); else { c.pc = 0x00293680u; return; } if (c.pc != 0x0029340Cu) [[unlikely]] return; }
L_0029340C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00293414u);  if (depth < kMaxDepth) unit_0064(c, 307u, depth + 1u); else { c.pc = 0x00292BE0u; return; } if (c.pc != 0x00293414u) [[unlikely]] return; }
L_00293414:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00293424u); set32(c.r[6], 0u + 2256u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00293424u) [[unlikely]] return; }
L_00293424:
    set32(c.r[4], 0u + 2176u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[16], c.r[16].w[0] + 64u);
    set32(c.r[2], 0u - 64u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    st32((c.r[20].w[0] + 4284u), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[18].w[0] - 6552u), c.r[16].w[0]);  if (t) { goto L_00293488; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029344Cu); set32(c.r[4], 0u + 2256u);  if (depth < kMaxDepth) unit_0002(c, 419u, depth + 1u); else { c.pc = 0x0010B570u; return; } if (c.pc != 0x0029344Cu) [[unlikely]] return; }
L_0029344C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00293488; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], 0u + 2256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00293464u); set32(c.r[4], c.r[4].w[0] - 28072u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x00293464u) [[unlikely]] return; }
L_00293464:
    c.budget -= 1;
L_00293468:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00293468u | kUnwind; return; } goto L_00293468; } }
    c.budget -= 1;
L_00293488:
    set32(c.r[16], c.r[19].w[0] - 6548u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[6], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[22].w[0] - 28384u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002934A0u); set32(c.r[5], 0u + 2256u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x002934A0u) [[unlikely]] return; }
L_002934A0:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], 0u - 64u);
    set32(c.r[5], ld32((c.r[18].w[0] - 6552u)));
    set32(c.r[2], c.r[2].w[0] + 64u);
    set32(c.r[7], ld32((c.r[20].w[0] + 4284u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[4], 0u + 1u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002934D0u); st32((c.r[8].w[0] - 6544u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0063(c, 151u, depth + 1u); else { c.pc = 0x0028D408u; return; } if (c.pc != 0x002934D0u) [[unlikely]] return; }
L_002934D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 4280u), c.r[2].w[0]);  if (t) { goto L_00293508; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002934E4u); set32(c.r[4], c.r[4].w[0] - 28000u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x002934E4u) [[unlikely]] return; }
L_002934E4:
    c.budget -= 1;
L_002934E8:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002934E8u | kUnwind; return; } goto L_002934E8; } }
    c.budget -= 1;
L_00293508:
    set32(c.r[16], c.r[16].w[0] + 4280u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00290000u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], c.r[5].w[0] + 12344u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00293524u); c.r[17].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (depth < kMaxDepth) unit_0063(c, 162u, depth + 1u); else { c.pc = 0x0028D608u; return; } if (c.pc != 0x00293524u) [[unlikely]] return; }
L_00293524:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00290000u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], c.r[5].w[0] + 12440u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029353Cu); set32(c.r[20], c.r[17].w[0] - 6588u);  if (depth < kMaxDepth) unit_0063(c, 163u, depth + 1u); else { c.pc = 0x0028D618u; return; } if (c.pc != 0x0029353Cu) [[unlikely]] return; }
L_0029353C:
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_002935C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 6616u)));
    set32(c.r[16], c.r[21].w[0] - 6592u);
    c.r[18].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 10);
    st32((c.r[19].w[0] - 6580u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 64u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00293574u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 419u, depth + 1u); else { c.pc = 0x0010B570u; return; } if (c.pc != 0x00293574u) [[unlikely]] return; }
L_00293574:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[20].w[0]), c.r[2].w[0]);  if (t) { goto L_002935B0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029358Cu); set32(c.r[4], c.r[4].w[0] - 27960u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0029358Cu) [[unlikely]] return; }
L_0029358C:
    c.budget -= 1;
L_00293590:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00293590u | kUnwind; return; } goto L_00293590; } }
    c.budget -= 1;
L_002935B0:
    set32(c.r[5], ld32((c.r[18].w[0] - 6592u)));
    set32(c.r[4], c.r[22].w[0] - 28384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002935C0u); set32(c.r[6], ld32((c.r[17].w[0] - 6588u)));  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x002935C0u) [[unlikely]] return; }
L_002935C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] - 6588u)));  if (t) { goto L_002935D0; } }
L_002935C8:
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[17].w[0] - 6588u)));
    c.budget -= 2;
L_002935D0:
    set32(c.r[3], 0u - 64u);
    set32(c.r[5], ld32((c.r[19].w[0] - 6580u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] + 63u);
    set32(c.r[4], 0u + 10u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[3], ld32((c.r[21].w[0] - 6592u)));
    st32((c.r[29].w[0]), c.r[5].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 3u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[9].w[0] - 6584u), c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00293610u); st32((c.r[29].w[0] + 8u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0063(c, 180u, depth + 1u); else { c.pc = 0x0028D8F0u; return; } if (c.pc != 0x00293610u) [[unlikely]] return; }
L_00293610:
    set32(c.r[3], c.r[23].w[0] - 6556u);
    c.budget -= 1;
L_00293614:
    c.r[23].d[0] = ld64((c.r[29].w[0] + 72u));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00293650:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    set32(c.r[4], 0u + 11u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00293674u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0063(c, 180u, depth + 1u); else { c.pc = 0x0028D8F0u; return; } if (c.pc != 0x00293674u) [[unlikely]] return; }
L_00293674:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00293680:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 12u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002936A0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0063(c, 180u, depth + 1u); else { c.pc = 0x0028D8F0u; return; } if (c.pc != 0x002936A0u) [[unlikely]] return; }
L_002936A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[3].w[0] - 6564u), 0u);
    st32((c.r[2].w[0] - 6560u), 0u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002936C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 13u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028D8F0u | kUnwind; return; } [[clang::musttail]] return unit_0063(c, 180u, depth); }
L_00293740:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] - 6568u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_00293778; } }
    set32(c.r[4], 0u + 15u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00293774u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0063(c, 180u, depth + 1u); else { c.pc = 0x0028D8F0u; return; } if (c.pc != 0x00293774u) [[unlikely]] return; }
L_00293774:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_00293778:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002937C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[3].w[0] - 6556u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_00293858; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[16], c.r[16].w[0] - 6588u);
    set32(c.r[17], c.r[17].w[0] + 4280u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00293800u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0002(c, 423u, depth + 1u); else { c.pc = 0x0010B6D8u; return; } if (c.pc != 0x00293800u) [[unlikely]] return; }
L_00293800:
    st32((c.r[16].w[0]), 0u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00293814u); set32(c.r[16], c.r[16].w[0] - 6548u);  if (depth < kMaxDepth) unit_0063(c, 158u, depth + 1u); else { c.pc = 0x0028D5A0u; return; } if (c.pc != 0x00293814u) [[unlikely]] return; }
L_00293814:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00293820u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0002(c, 423u, depth + 1u); else { c.pc = 0x0010B6D8u; return; } if (c.pc != 0x00293820u) [[unlikely]] return; }
L_00293820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00293828u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_0064(c, 325u, depth + 1u); else { c.pc = 0x00292ED8u; return; } if (c.pc != 0x00293828u) [[unlikely]] return; }
L_00293828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00293830u);  if (depth < kMaxDepth) unit_0064(c, 369u, depth + 1u); else { c.pc = 0x002936C0u; return; } if (c.pc != 0x00293830u) [[unlikely]] return; }
L_00293830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00293838u);  if (depth < kMaxDepth) unit_0063(c, 177u, depth + 1u); else { c.pc = 0x0028D878u; return; } if (c.pc != 0x00293838u) [[unlikely]] return; }
L_00293838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00293840u);  if (depth < kMaxDepth) unit_0065(c, 188u, depth + 1u); else { c.pc = 0x002965B0u; return; } if (c.pc != 0x00293840u) [[unlikely]] return; }
L_00293840:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_0065(c, 158u, depth); }
L_00293858:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00293870:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    set32(c.r[19], c.r[2].w[0] + 2680u);
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002938DC; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[3].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_002938B8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 100u);
    c.r[2].d[0] = c.r[17].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 100u);  if (t) { goto L_002938DC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[3].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002938B8u | kUnwind; return; } goto L_002938B8; } }
L_002938DC:
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00293B98; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 100u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002938FCu); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002938FCu) [[unlikely]] return; }
L_002938FC:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; st32((c.r[19].w[0] + 4u), c.r[18].w[0]);  if (t) { goto L_00293978; } }
    set32(c.r[20], c.r[19].w[0] + 8u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
L_00293910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00293918u);  if (depth < kMaxDepth) unit_0064(c, 332u, depth + 1u); else { c.pc = 0x00292FB8u; return; } if (c.pc != 0x00293918u) [[unlikely]] return; }
L_00293918:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { goto L_00293968; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0029392Cu); set32(c.r[4], c.r[22].w[0] - 27896u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0029392Cu) [[unlikely]] return; }
L_0029392C:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00293B98; } }
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
L_00293940:
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00293954; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00293954u);  if (depth < kMaxDepth) unit_0064(c, 334u, depth + 1u); else { c.pc = 0x00293030u; return; } if (c.pc != 0x00293954u) [[unlikely]] return; }
L_00293954:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00293940u | kUnwind; return; } goto L_00293940; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00293B98; } }
L_00293968:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00293910u | kUnwind; return; } goto L_00293910; } }
L_00293978:
    st32((c.r[29].w[0]), c.r[18].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] <= 0; st32((c.r[29].w[0] + 4u), 0u);  if (t) { goto L_002939B0; } }
    set32(c.r[6], c.r[29].w[0] + 8u);
    set32(c.r[5], c.r[19].w[0] + 8u);
    c.budget -= 2;
L_00293990:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00293990u | kUnwind; return; } goto L_00293990; } }
L_002939B0:
    set32(c.r[4], 0u + 8u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002939C8u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0063(c, 180u, depth + 1u); else { c.pc = 0x0028D8F0u; return; } if (c.pc != 0x002939C8u) [[unlikely]] return; }
L_002939C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_002939E8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002939DCu); set32(c.r[4], c.r[4].w[0] - 27856u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x002939DCu) [[unlikely]] return; }
L_002939DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00293B98; } }
    c.budget -= 1;
L_002939E8:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00293AC0; } }
    set32(c.r[20], c.r[19].w[0] + 8u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[16], c.r[19].w[0] + 16u);
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 4;
L_00293A00:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00293A1Cu); set32(c.r[5], ld32((c.r[6].w[0] + 8u)));  if (depth < kMaxDepth) unit_0063(c, 116u, depth + 1u); else { c.pc = 0x0028CF48u; return; } if (c.pc != 0x00293A1Cu) [[unlikely]] return; }
L_00293A1C:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { goto L_00293AB8; } }
    set32(c.r[4], c.r[22].w[0] - 27816u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00293A38u); c.r[21].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x00293A38u) [[unlikely]] return; }
L_00293A38:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00293B98; } }
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[16], c.r[19].w[0] + 16u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
L_00293A50:
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00293A64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00293A64u);  if (depth < kMaxDepth) unit_0063(c, 122u, depth + 1u); else { c.pc = 0x0028D038u; return; } if (c.pc != 0x00293A64u) [[unlikely]] return; }
L_00293A64:
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 9u);  if (t) { goto L_00293A88; } }
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00293A88u); st32((c.r[29].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0063(c, 180u, depth + 1u); else { c.pc = 0x0028D8F0u; return; } if (c.pc != 0x00293A88u) [[unlikely]] return; }
L_00293A88:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { goto L_00293A9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00293A9Cu);  if (depth < kMaxDepth) unit_0064(c, 334u, depth + 1u); else { c.pc = 0x00293030u; return; } if (c.pc != 0x00293A9Cu) [[unlikely]] return; }
L_00293A9C:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00293A50u | kUnwind; return; } goto L_00293A50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00293B98; } }
    c.budget -= 1;
L_00293AB8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00293A00u | kUnwind; return; } goto L_00293A00; } }
L_00293AC0:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00293AEC; } }
    set32(c.r[5], c.r[19].w[0] + 24u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 2;
L_00293AD0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00293AD0u | kUnwind; return; } goto L_00293AD0; } }
L_00293AEC:
    st8((c.r[19].w[0] + 48u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 49u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 50u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[19].w[0] + 51u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st32((c.r[19].w[0] + 60u), 0u);
    st32((c.r[19].w[0] + 64u), 0u);
    st32((c.r[19].w[0] + 84u), 0u);
    st32((c.r[19].w[0] + 88u), 0u);
    st8((c.r[19].w[0] + 95u), static_cast<std::uint8_t>(0u));
    c.budget -= 11;
    { const bool t = c.r[18].sd[0] <= 0; st8((c.r[19].w[0] + 94u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00293B44; } }
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[19].w[0] + 4u);
    set32(c.r[5], c.r[19].w[0] + 12u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
L_00293B28:
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[17], c.r[17].w[0] - 1u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] != 0ull; st32((c.r[3].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00293B28u | kUnwind; return; } goto L_00293B28; } }
L_00293B44:
    set32(c.r[17], 0u + 1u);
    st8((c.r[19].w[0] + 92u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 93u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[19].w[0] + 36u), 0u);
    set32(c.r[4], ld32((c.r[21].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00293B68u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00293B68u) [[unlikely]] return; }
L_00293B68:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00293B80u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00293B80u) [[unlikely]] return; }
L_00293B80:
    set32(c.r[3], 0u + 16384u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 40u), c.r[16].w[0]);
    st32((c.r[19].w[0] + 44u), c.r[3].w[0]);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 6;
L_00293B98:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00293BC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00293C14; } }
    set32(c.r[16], c.r[17].w[0] + 16u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
L_00293BF0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { goto L_00293C04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00293C00u);  if (depth < kMaxDepth) unit_0063(c, 122u, depth + 1u); else { c.pc = 0x0028D038u; return; } if (c.pc != 0x00293C00u) [[unlikely]] return; }
L_00293C00:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00293C04:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00293BF0u | kUnwind; return; } goto L_00293BF0; }
L_00293C14:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[4], 0u + 9u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00293C34u); st32((c.r[29].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0063(c, 180u, depth + 1u); else { c.pc = 0x0028D8F0u; return; } if (c.pc != 0x00293C34u) [[unlikely]] return; }
L_00293C34:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00293C6C; } }
    set32(c.r[16], c.r[17].w[0] + 8u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_00293C48:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { goto L_00293C5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00293C58u);  if (depth < kMaxDepth) unit_0064(c, 334u, depth + 1u); else { c.pc = 0x00293030u; return; } if (c.pc != 0x00293C58u) [[unlikely]] return; }
L_00293C58:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00293C5C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00293C48u | kUnwind; return; } goto L_00293C48; }
L_00293C6C:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00293C88:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 27776u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00106508u | kUnwind; return; } [[clang::musttail]] return unit_0001(c, 350u, depth); }
L_00293CD8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st8((c.r[17].w[0] + 92u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 50u)));  if (t) { goto L_00293D34; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00293D38; } }
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[19], 0u + 1u);
    set32(c.r[16], c.r[17].w[0] + 16u);
    c.budget -= 3;
L_00293D18:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00293D28u); set32(c.r[18], c.r[18].w[0] - 1u);  if (depth < kMaxDepth) unit_0063(c, 125u, depth + 1u); else { c.pc = 0x0028D070u; return; } if (c.pc != 0x00293D28u) [[unlikely]] return; }
L_00293D28:
    st8((c.r[17].w[0] + 93u), static_cast<std::uint8_t>(c.r[19].w[0]));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull; st8((c.r[17].w[0] + 92u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00293D18u | kUnwind; return; } goto L_00293D18; } }
L_00293D34:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00293D38:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00293D50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 48u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_00293D58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] - 6564u), c.r[4].w[0]);  c.pc = t; return; }
L_00293D78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 95u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_00293D80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 27744u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00106508u | kUnwind; return; } [[clang::musttail]] return unit_0001(c, 350u, depth); }
L_00293DC0:
    c.r[2].d[0] = 0ull | 48000ull;
    st32((c.r[5].w[0]), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_00293DD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00293DF0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00293DF0u) [[unlikely]] return; }
L_00293DF0:
    set32(c.r[3], 0u + 16384u);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[3].w[0] >> 31);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00293E10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00293E30u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00293E30u) [[unlikely]] return; }
L_00293E30:
    set32(c.r[3], c.r[2].w[0] >> 31);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00293E48:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 92u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00293FE8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 50u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld8((c.r[17].w[0] + 50u));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00293EE8; } }
    set32(c.r[20], 0u + 1u);
    set32(c.r[16], c.r[17].w[0] + 8u);
    c.budget -= 3;
L_00293E98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00293EA0u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0063(c, 112u, depth + 1u); else { c.pc = 0x0028CE60u; return; } if (c.pc != 0x00293EA0u) [[unlikely]] return; }
L_00293EA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[20].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00293ED0; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00293EC0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00293EC0u) [[unlikely]] return; }
L_00293EC0:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[4], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    if (c.r[2].d[0] == 0) c.r[18].d[0] = c.r[4].d[0];
    c.budget -= 4;
L_00293ED0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 50u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = ld8((c.r[17].w[0] + 50u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00293E98u | kUnwind; return; } goto L_00293E98; } }
L_00293EE8:
    set32(c.r[2], c.r[3].w[0] << 24);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00293FE8; } }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00293FE8; } }
    set32(c.r[18], c.r[17].w[0] + 16u);
    set32(c.r[16], c.r[17].w[0] + 8u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
L_00293F10:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00293F30u); c.r[6].d[0] = c.r[6].d[0] | 65535ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00293F30u) [[unlikely]] return; }
L_00293F30:
    set32(c.r[7], ld32((c.r[16].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00293F4Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00293F4Cu) [[unlikely]] return; }
L_00293F4C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00293F70u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00293F70u) [[unlikely]] return; }
L_00293F70:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_00293FA8; } }
    c.budget -= 1;
L_00293F88:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00293F88u | kUnwind; return; } goto L_00293F88; } }
    c.budget -= 1;
L_00293FA8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00293FC4u); set32(c.r[19], c.r[19].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00293FC4u) [[unlikely]] return; }
L_00293FC4:
    st8((c.r[17].w[0] + 95u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00293FD4u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0063(c, 124u, depth + 1u); else { c.pc = 0x0028D060u; return; } if (c.pc != 0x00293FD4u) [[unlikely]] return; }
L_00293FD4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 50u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00293F10u | kUnwind; return; } goto L_00293F10; }
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00293FE8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
}

}
