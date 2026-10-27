#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0061[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 10, 0, 0, 0,
    11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0,
    17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0,
    0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0,
    0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 63, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 67, 0, 0,
    0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 70, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0,
    0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78,
    0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0,
    0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 89, 0,
    90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0,
    0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0,
    110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0,
    0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0,
    0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 134, 0,
    135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143,
    0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0,
    152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0,
    0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0,
    0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0,
    0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0,
    0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0,
    210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 213, 0, 0, 0, 0, 0, 214, 0,
    0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 0,
    221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 238, 0, 0, 239, 0, 0, 0, 240, 0, 0, 241, 0, 242, 0, 243, 0, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 249, 0, 0, 250, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 255, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0,
    0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 265, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 270,
    0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 281, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 282, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0,
    0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0,
    0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 305, 0, 0, 0, 0, 0,
    306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 313, 0,
    0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0,
    322, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 329, 0, 0, 330, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0,
    0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0,
    337, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0, 341, 0, 0, 0, 0, 0,
    342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0,
    0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0,
    0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0,
    0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 365, 0, 0, 0, 366, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 0,
    0, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379,
    0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0,
    0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0,
    0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 394, 0, 0, 395,
    0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 399, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 403, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0,
    0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 409, 0, 0, 0, 410, 0, 0, 411, 0, 0, 412, 0, 0,
    0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 415, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 0, 421, 0,
    0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 424, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0061(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00284000;
    case 2u: goto L_00284004;
    case 3u: goto L_00284020;
    case 4u: goto L_00284030;
    case 5u: goto L_00284070;
    case 6u: goto L_00284098;
    case 7u: goto L_002840AC;
    case 8u: goto L_002840D8;
    case 9u: goto L_002840E0;
    case 10u: goto L_002840F0;
    case 11u: goto L_00284100;
    case 12u: goto L_00284130;
    case 13u: goto L_00284140;
    case 14u: goto L_00284150;
    case 15u: goto L_00284160;
    case 16u: goto L_00284170;
    case 17u: goto L_00284180;
    case 18u: goto L_00284198;
    case 19u: goto L_002841B0;
    case 20u: goto L_002841C8;
    case 21u: goto L_002841E0;
    case 22u: goto L_00284210;
    case 23u: goto L_00284240;
    case 24u: goto L_00284270;
    case 25u: goto L_00284288;
    case 26u: goto L_002842B8;
    case 27u: goto L_002842D0;
    case 28u: goto L_00284300;
    case 29u: goto L_00284318;
    case 30u: goto L_0028433C;
    case 31u: goto L_00284358;
    case 32u: goto L_00284378;
    case 33u: goto L_002843A0;
    case 34u: goto L_002843C0;
    case 35u: goto L_002843D8;
    case 36u: goto L_00284418;
    case 37u: goto L_00284420;
    case 38u: goto L_00284438;
    case 39u: goto L_00284440;
    case 40u: goto L_00284458;
    case 41u: goto L_002844A0;
    case 42u: goto L_002844BC;
    case 43u: goto L_002844E0;
    case 44u: goto L_0028451C;
    case 45u: goto L_00284594;
    case 46u: goto L_002845AC;
    case 47u: goto L_002845E8;
    case 48u: goto L_00284650;
    case 49u: goto L_002846A0;
    case 50u: goto L_002846B8;
    case 51u: goto L_00284720;
    case 52u: goto L_00284770;
    case 53u: goto L_00284788;
    case 54u: goto L_002847B0;
    case 55u: goto L_002847C0;
    case 56u: goto L_002847D0;
    case 57u: goto L_002847EC;
    case 58u: goto L_002847F4;
    case 59u: goto L_00284828;
    case 60u: goto L_0028485C;
    case 61u: goto L_002848A0;
    case 62u: goto L_002848B4;
    case 63u: goto L_002848B8;
    case 64u: goto L_002848C0;
    case 65u: goto L_002848D8;
    case 66u: goto L_002848EC;
    case 67u: goto L_002848F4;
    case 68u: goto L_00284918;
    case 69u: goto L_0028492C;
    case 70u: goto L_00284934;
    case 71u: goto L_00284940;
    case 72u: goto L_00284948;
    case 73u: goto L_00284970;
    case 74u: goto L_00284978;
    case 75u: goto L_00284998;
    case 76u: goto L_002849B0;
    case 77u: goto L_002849E8;
    case 78u: goto L_002849FC;
    case 79u: goto L_00284A04;
    case 80u: goto L_00284A14;
    case 81u: goto L_00284A28;
    case 82u: goto L_00284A44;
    case 83u: goto L_00284A4C;
    case 84u: goto L_00284A54;
    case 85u: goto L_00284A70;
    case 86u: goto L_00284A84;
    case 87u: goto L_00284AD8;
    case 88u: goto L_00284AF4;
    case 89u: goto L_00284AF8;
    case 90u: goto L_00284B00;
    case 91u: goto L_00284B28;
    case 92u: goto L_00284B38;
    case 93u: goto L_00284B50;
    case 94u: goto L_00284B68;
    case 95u: goto L_00284B98;
    case 96u: goto L_00284BA0;
    case 97u: goto L_00284BC0;
    case 98u: goto L_00284BE0;
    case 99u: goto L_00284BF8;
    case 100u: goto L_00284C10;
    case 101u: goto L_00284C54;
    case 102u: goto L_00284CB4;
    case 103u: goto L_00284CCC;
    case 104u: goto L_00284CE0;
    case 105u: goto L_00284CF4;
    case 106u: goto L_00284D44;
    case 107u: goto L_00284D5C;
    case 108u: goto L_00284D98;
    case 109u: goto L_00284DF0;
    case 110u: goto L_00284E00;
    case 111u: goto L_00284E34;
    case 112u: goto L_00284E48;
    case 113u: goto L_00284EA8;
    case 114u: goto L_00284F0C;
    case 115u: goto L_00284F1C;
    case 116u: goto L_00284F34;
    case 117u: goto L_00284F50;
    case 118u: goto L_00284F68;
    case 119u: goto L_00284F90;
    case 120u: goto L_00284F98;
    case 121u: goto L_00284FAC;
    case 122u: goto L_00285018;
    case 123u: goto L_00285028;
    case 124u: goto L_00285060;
    case 125u: goto L_00285078;
    case 126u: goto L_0028509C;
    case 127u: goto L_002850B0;
    case 128u: goto L_002850C4;
    case 129u: goto L_002850F8;
    case 130u: goto L_0028510C;
    case 131u: goto L_00285148;
    case 132u: goto L_00285158;
    case 133u: goto L_00285170;
    case 134u: goto L_00285178;
    case 135u: goto L_00285180;
    case 136u: goto L_00285190;
    case 137u: goto L_002851A8;
    case 138u: goto L_002851D0;
    case 139u: goto L_002851E4;
    case 140u: goto L_00285228;
    case 141u: goto L_0028523C;
    case 142u: goto L_00285258;
    case 143u: goto L_0028527C;
    case 144u: goto L_00285290;
    case 145u: goto L_002852A8;
    case 146u: goto L_002852B4;
    case 147u: goto L_002852E8;
    case 148u: goto L_00285318;
    case 149u: goto L_00285320;
    case 150u: goto L_00285368;
    case 151u: goto L_00285370;
    case 152u: goto L_00285380;
    case 153u: goto L_002853A8;
    case 154u: goto L_002853C0;
    case 155u: goto L_002853EC;
    case 156u: goto L_00285438;
    case 157u: goto L_00285448;
    case 158u: goto L_0028545C;
    case 159u: goto L_00285464;
    case 160u: goto L_0028548C;
    case 161u: goto L_002854B0;
    case 162u: goto L_002854C8;
    case 163u: goto L_002854F4;
    case 164u: goto L_00285510;
    case 165u: goto L_00285528;
    case 166u: goto L_00285568;
    case 167u: goto L_00285578;
    case 168u: goto L_00285590;
    case 169u: goto L_002855B8;
    case 170u: goto L_002855E0;
    case 171u: goto L_00285658;
    case 172u: goto L_00285670;
    case 173u: goto L_00285698;
    case 174u: goto L_002856B0;
    case 175u: goto L_002856B8;
    case 176u: goto L_002856C8;
    case 177u: goto L_002856D0;
    case 178u: goto L_002856E4;
    case 179u: goto L_002856F8;
    case 180u: goto L_00285738;
    case 181u: goto L_00285740;
    case 182u: goto L_00285748;
    case 183u: goto L_002857B0;
    case 184u: goto L_00285918;
    case 185u: goto L_00285964;
    case 186u: goto L_00285998;
    case 187u: goto L_002859F4;
    case 188u: goto L_00285A70;
    case 189u: goto L_00285A84;
    case 190u: goto L_00285AA0;
    case 191u: goto L_00285AC8;
    case 192u: goto L_00285AF4;
    case 193u: goto L_00285B08;
    case 194u: goto L_00285B18;
    case 195u: goto L_00285B28;
    case 196u: goto L_00285B3C;
    case 197u: goto L_00285B44;
    case 198u: goto L_00285BA8;
    case 199u: goto L_00285C04;
    case 200u: goto L_00285C0C;
    case 201u: goto L_00285C30;
    case 202u: goto L_00285C54;
    case 203u: goto L_00285C6C;
    case 204u: goto L_00285C88;
    case 205u: goto L_00285CA4;
    case 206u: goto L_00285CB0;
    case 207u: goto L_00285CCC;
    case 208u: goto L_00285CD8;
    case 209u: goto L_00285CF4;
    case 210u: goto L_00285D00;
    case 211u: goto L_00285D50;
    case 212u: goto L_00285D58;
    case 213u: goto L_00285D60;
    case 214u: goto L_00285D78;
    case 215u: goto L_00285D8C;
    case 216u: goto L_00285DA0;
    case 217u: goto L_00285DBC;
    case 218u: goto L_00285DC4;
    case 219u: goto L_00285DD8;
    case 220u: goto L_00285DE0;
    case 221u: goto L_00285E00;
    case 222u: goto L_00285E18;
    case 223u: goto L_00285E38;
    case 224u: goto L_00285E58;
    case 225u: goto L_00285E78;
    case 226u: goto L_00285EA4;
    case 227u: goto L_00285EB4;
    case 228u: goto L_00285ED8;
    case 229u: goto L_00285F00;
    case 230u: goto L_00285F14;
    case 231u: goto L_00285F38;
    case 232u: goto L_00285F50;
    case 233u: goto L_00285F88;
    case 234u: goto L_00285F9C;
    case 235u: goto L_00285FB8;
    case 236u: goto L_00285FC4;
    case 237u: goto L_00286040;
    case 238u: goto L_00286088;
    case 239u: goto L_00286094;
    case 240u: goto L_002860A4;
    case 241u: goto L_002860B0;
    case 242u: goto L_002860B8;
    case 243u: goto L_002860C0;
    case 244u: goto L_002860D8;
    case 245u: goto L_002860E0;
    case 246u: goto L_00286190;
    case 247u: goto L_002861A4;
    case 248u: goto L_002861B0;
    case 249u: goto L_002861BC;
    case 250u: goto L_002861C8;
    case 251u: goto L_002861D0;
    case 252u: goto L_00286200;
    case 253u: goto L_00286214;
    case 254u: goto L_00286230;
    case 255u: goto L_00286284;
    case 256u: goto L_00286290;
    case 257u: goto L_002862A4;
    case 258u: goto L_002862BC;
    case 259u: goto L_002862D8;
    case 260u: goto L_002862F0;
    case 261u: goto L_00286308;
    case 262u: goto L_00286358;
    case 263u: goto L_00286398;
    case 264u: goto L_002863B4;
    case 265u: goto L_002863C0;
    case 266u: goto L_002863CC;
    case 267u: goto L_00286420;
    case 268u: goto L_00286464;
    case 269u: goto L_00286470;
    case 270u: goto L_0028647C;
    case 271u: goto L_0028648C;
    case 272u: goto L_002864BC;
    case 273u: goto L_002864C8;
    case 274u: goto L_002864D4;
    case 275u: goto L_00286540;
    case 276u: goto L_00286558;
    case 277u: goto L_002865A8;
    case 278u: goto L_002865C4;
    case 279u: goto L_00286638;
    case 280u: goto L_002866E4;
    case 281u: goto L_002866EC;
    case 282u: goto L_00286784;
    case 283u: goto L_00286790;
    case 284u: goto L_0028679C;
    case 285u: goto L_00286850;
    case 286u: goto L_00286864;
    case 287u: goto L_002868A0;
    case 288u: goto L_002868B8;
    case 289u: goto L_002868F0;
    case 290u: goto L_00286908;
    case 291u: goto L_00286940;
    case 292u: goto L_00286958;
    case 293u: goto L_00286990;
    case 294u: goto L_002869A8;
    case 295u: goto L_002869E0;
    case 296u: goto L_002869F8;
    case 297u: goto L_00286A30;
    case 298u: goto L_00286A80;
    case 299u: goto L_00286AC0;
    case 300u: goto L_00286AD0;
    case 301u: goto L_00286AE8;
    case 302u: goto L_00286B04;
    case 303u: goto L_00286B28;
    case 304u: goto L_00286B60;
    case 305u: goto L_00286B68;
    case 306u: goto L_00286B80;
    case 307u: goto L_00286B98;
    case 308u: goto L_00286BB0;
    case 309u: goto L_00286BF8;
    case 310u: goto L_00286C48;
    case 311u: goto L_00286C58;
    case 312u: goto L_00286C68;
    case 313u: goto L_00286C78;
    case 314u: goto L_00286C88;
    case 315u: goto L_00286CA0;
    case 316u: goto L_00286CB0;
    case 317u: goto L_00286CE0;
    case 318u: goto L_00286D70;
    case 319u: goto L_00286DA0;
    case 320u: goto L_00286DB8;
    case 321u: goto L_00286DDC;
    case 322u: goto L_00286E00;
    case 323u: goto L_00286E20;
    case 324u: goto L_00286E48;
    case 325u: goto L_00286E68;
    case 326u: goto L_00286E98;
    case 327u: goto L_00286EB0;
    case 328u: goto L_00286ED8;
    case 329u: goto L_00286EE4;
    case 330u: goto L_00286EF0;
    case 331u: goto L_00286F50;
    case 332u: goto L_00286F70;
    case 333u: goto L_00286F94;
    case 334u: goto L_00286FC0;
    case 335u: goto L_00286FC8;
    case 336u: goto L_00286FE0;
    case 337u: goto L_00287000;
    case 338u: goto L_00287024;
    case 339u: goto L_00287058;
    case 340u: goto L_00287060;
    case 341u: goto L_00287068;
    case 342u: goto L_00287080;
    case 343u: goto L_00287094;
    case 344u: goto L_002870B0;
    case 345u: goto L_00287118;
    case 346u: goto L_00287158;
    case 347u: goto L_00287170;
    case 348u: goto L_00287188;
    case 349u: goto L_002871B8;
    case 350u: goto L_002871D0;
    case 351u: goto L_002871E8;
    case 352u: goto L_00287218;
    case 353u: goto L_00287230;
    case 354u: goto L_00287248;
    case 355u: goto L_00287274;
    case 356u: goto L_00287294;
    case 357u: goto L_002872B8;
    case 358u: goto L_002872C8;
    case 359u: goto L_002872F4;
    case 360u: goto L_0028735C;
    case 361u: goto L_00287378;
    case 362u: goto L_00287390;
    case 363u: goto L_002873A8;
    case 364u: goto L_002873D8;
    case 365u: goto L_002873E0;
    case 366u: goto L_002873F0;
    case 367u: goto L_00287438;
    case 368u: goto L_00287540;
    case 369u: goto L_00287580;
    case 370u: goto L_002876A8;
    case 371u: goto L_00287714;
    case 372u: goto L_00287740;
    case 373u: goto L_00287758;
    case 374u: goto L_00287770;
    case 375u: goto L_00287788;
    case 376u: goto L_002877A4;
    case 377u: goto L_002877D0;
    case 378u: goto L_002877E4;
    case 379u: goto L_002877FC;
    case 380u: goto L_00287814;
    case 381u: goto L_00287850;
    case 382u: goto L_002878B8;
    case 383u: goto L_002878E8;
    case 384u: goto L_002878F8;
    case 385u: goto L_00287914;
    case 386u: goto L_0028793C;
    case 387u: goto L_0028794C;
    case 388u: goto L_00287998;
    case 389u: goto L_002879B0;
    case 390u: goto L_002879F8;
    case 391u: goto L_00287A04;
    case 392u: goto L_00287CB8;
    case 393u: goto L_00287CE4;
    case 394u: goto L_00287CF0;
    case 395u: goto L_00287CFC;
    case 396u: goto L_00287D08;
    case 397u: goto L_00287D18;
    case 398u: goto L_00287D28;
    case 399u: goto L_00287D34;
    case 400u: goto L_00287D40;
    case 401u: goto L_00287D70;
    case 402u: goto L_00287DA4;
    case 403u: goto L_00287DB0;
    case 404u: goto L_00287DBC;
    case 405u: goto L_00287DEC;
    case 406u: goto L_00287E08;
    case 407u: goto L_00287E28;
    case 408u: goto L_00287E40;
    case 409u: goto L_00287E4C;
    case 410u: goto L_00287E5C;
    case 411u: goto L_00287E68;
    case 412u: goto L_00287E74;
    case 413u: goto L_00287E94;
    case 414u: goto L_00287EB0;
    case 415u: goto L_00287EC8;
    case 416u: goto L_00287ED0;
    case 417u: goto L_00287F00;
    case 418u: goto L_00287F30;
    case 419u: goto L_00287F58;
    case 420u: goto L_00287F68;
    case 421u: goto L_00287F78;
    case 422u: goto L_00287F90;
    case 423u: goto L_00287FB8;
    case 424u: goto L_00287FC0;
    case 425u: goto L_00287FD0;
    default: bad_entry(c, 0x00284000u); return;
    }
L_00284000:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00284004:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00283EF8u | kUnwind; return; } [[clang::musttail]] return unit_0060(c, 463u, depth); }
L_00284020:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00284030:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00284058; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00283F88u | kUnwind; return; } [[clang::musttail]] return unit_0060(c, 467u, depth); }
L_00284058:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00284068; } }
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00283630u | kUnwind; return; } [[clang::musttail]] return unit_0060(c, 400u, depth); }
L_00284068:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00284070:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 28600u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 15u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 1u);
    c.budget -= 10;
L_00284098:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_002840B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002840ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 4u, depth + 1u); else { c.pc = 0x00284030u; return; } if (c.pc != 0x002840ACu) [[unlikely]] return; }
L_002840AC:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_002840B0:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 160u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00284098u | kUnwind; return; } goto L_00284098; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002840D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 44u)));  c.pc = t; return; }
L_002840E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 52u), c.r[5].w[0]);  c.pc = t; return; }
L_002840F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 156u), c.r[5].w[0]);  c.pc = t; return; }
L_00284100:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BD18u | kUnwind; return; } [[clang::musttail]] return unit_005E(c, 241u, depth); }
L_00284130:
    st32((c.r[4].w[0] + 84u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 80u), c.r[5].w[0]);  c.pc = t; return; }
L_00284140:
    st32((c.r[4].w[0] + 76u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 72u), c.r[5].w[0]);  c.pc = t; return; }
L_00284150:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 60u), c.r[5].w[0]);  c.pc = t; return; }
L_00284160:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 64u), c.r[5].w[0]);  c.pc = t; return; }
L_00284170:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 68u), c.r[5].w[0]);  c.pc = t; return; }
L_00284180:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BB68u | kUnwind; return; } [[clang::musttail]] return unit_005E(c, 221u, depth); }
L_00284198:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BB70u | kUnwind; return; } [[clang::musttail]] return unit_005E(c, 222u, depth); }
L_002841B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BB78u | kUnwind; return; } [[clang::musttail]] return unit_005E(c, 223u, depth); }
L_002841C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BBB0u | kUnwind; return; } [[clang::musttail]] return unit_005E(c, 225u, depth); }
L_002841E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BC10u | kUnwind; return; } [[clang::musttail]] return unit_005E(c, 226u, depth); }
L_00284210:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BC20u | kUnwind; return; } [[clang::musttail]] return unit_005E(c, 227u, depth); }
L_00284240:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BC38u | kUnwind; return; } [[clang::musttail]] return unit_005E(c, 228u, depth); }
L_00284270:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BC40u | kUnwind; return; } [[clang::musttail]] return unit_005E(c, 229u, depth); }
L_00284288:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002842A8; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BC48u | kUnwind; return; } [[clang::musttail]] return unit_005E(c, 230u, depth); }
L_002842A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002842B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BC60u | kUnwind; return; } [[clang::musttail]] return unit_005E(c, 231u, depth); }
L_002842D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BC68u | kUnwind; return; } [[clang::musttail]] return unit_005E(c, 232u, depth); }
L_00284300:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284318u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_005E(c, 233u, depth + 1u); else { c.pc = 0x0027BC70u; return; } if (c.pc != 0x00284318u) [[unlikely]] return; }
L_00284318:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00284348; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00284348; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028433Cu); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_005E(c, 234u, depth + 1u); else { c.pc = 0x0027BC78u; return; } if (c.pc != 0x0028433Cu) [[unlikely]] return; }
L_0028433C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0028434C; } }
    c.budget -= 1;
L_00284348:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0028434C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00284358:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284378u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_005E(c, 233u, depth + 1u); else { c.pc = 0x0027BC70u; return; } if (c.pc != 0x00284378u) [[unlikely]] return; }
L_00284378:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[2], 0u - 128u);  if (t) { goto L_002843A8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u - 128u);  goto L_002843A8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002843A0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 235u, depth + 1u); else { c.pc = 0x0027BC80u; return; } if (c.pc != 0x002843A0u) [[unlikely]] return; }
L_002843A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002843AC; } }
L_002843A8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002843AC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002843C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002843D8u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_005E(c, 233u, depth + 1u); else { c.pc = 0x0027BC70u; return; } if (c.pc != 0x002843D8u) [[unlikely]] return; }
L_002843D8:
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00284408; }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00284408; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BC90u | kUnwind; return; } [[clang::musttail]] return unit_005E(c, 236u, depth); }
L_00284408:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00284418:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 152u)));  c.pc = t; return; }
L_00284420:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BBA8u | kUnwind; return; } [[clang::musttail]] return unit_005E(c, 224u, depth); }
L_00284438:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 88u);  c.pc = t; return; }
L_00284440:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BC98u | kUnwind; return; } [[clang::musttail]] return unit_005E(c, 237u, depth); }
L_00284458:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BCD8u | kUnwind; return; } [[clang::musttail]] return unit_005E(c, 239u, depth); }
L_002844A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 31192u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002844BCu); set32(c.r[6], 0u + 3840u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002844BCu) [[unlikely]] return; }
L_002844BC:
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002844E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028451Cu); set32(c.r[21], 0u + 1u);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D318u; return; } if (c.pc != 0x0028451Cu) [[unlikely]] return; }
L_0028451C:
    set32(c.r[7], c.r[16].w[0] + 2047u);
    c.r[2].d[0] = c.r[16].sd[0] < 0ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[7].d[0];
    set32(c.r[7], 0u + 512u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 11));
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    set32(c.r[2], c.r[3].w[0] << 11);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    st32((c.r[19].w[0] + 8u), c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[19].w[0] + 12u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 44u), c.r[7].w[0]);
    st32((c.r[19].w[0] + 92u), c.r[6].w[0]);
    st32((c.r[19].w[0] + 48u), c.r[3].w[0]);
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[21].w[0]));
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st32((c.r[19].w[0] + 4u), c.r[20].w[0]);
    st32((c.r[19].w[0] + 16u), c.r[16].w[0]);
    st32((c.r[19].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 26;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[19].w[0] + 88u), 0u);  if (t) { goto L_002845BC; } }
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00284594u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00284594u) [[unlikely]] return; }
L_00284594:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002845ACu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002845ACu) [[unlikely]] return; }
L_002845AC:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[19].w[0] + 28u), c.r[16].w[0]);
    st32((c.r[19].w[0] + 64u), c.r[16].w[0]);
    st32((c.r[19].w[0] + 24u), c.r[16].w[0]);
    c.budget -= 4;
L_002845BC:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[21].w[0]));
    st8((c.r[19].w[0] + 68u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027D330u | kUnwind; return; } [[clang::musttail]] return unit_005F(c, 73u, depth); }
L_002845E8:
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[9], ld32((c.r[13].w[0] + 31164u)));
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[12].d[0] = c.r[4].d[0] + 0ull;
    c.r[11].d[0] = c.r[6].d[0] + 0ull;
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[9].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00284680; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[7], c.r[2].w[0] + 31160u);
    set32(c.r[4], c.r[4].w[0] + 31192u);
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], ld32((c.r[13].w[0] + 31164u)));  if (t) { goto L_00284684; } }
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_00284650:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[13].w[0] + 31164u)));  if (t) { goto L_00284684; } }
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00284650u | kUnwind; return; } goto L_00284650; }
L_00284680:
    set32(c.r[3], ld32((c.r[13].w[0] + 31164u)));
    c.budget -= 1;
L_00284684:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002846A4; } }
    c.r[5].d[0] = c.r[12].d[0] + 0ull;
    c.r[6].d[0] = c.r[10].d[0] + 0ull;
    c.r[7].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002846A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 43u, depth + 1u); else { c.pc = 0x002844E0u; return; } if (c.pc != 0x002846A0u) [[unlikely]] return; }
L_002846A0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002846A4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002846B8:
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[9], ld32((c.r[13].w[0] + 31172u)));
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[12].d[0] = c.r[4].d[0] + 0ull;
    c.r[11].d[0] = c.r[6].d[0] + 0ull;
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[9].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00284750; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[7], c.r[2].w[0] + 31168u);
    set32(c.r[4], c.r[4].w[0] + 31192u);
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], ld32((c.r[13].w[0] + 31172u)));  if (t) { goto L_00284754; } }
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_00284720:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[13].w[0] + 31172u)));  if (t) { goto L_00284754; } }
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00284720u | kUnwind; return; } goto L_00284720; }
L_00284750:
    set32(c.r[3], ld32((c.r[13].w[0] + 31172u)));
    c.budget -= 1;
L_00284754:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00284774; } }
    c.r[5].d[0] = c.r[12].d[0] + 0ull;
    c.r[6].d[0] = c.r[10].d[0] + 0ull;
    c.r[7].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284770u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 43u, depth + 1u); else { c.pc = 0x002844E0u; return; } if (c.pc != 0x00284770u) [[unlikely]] return; }
L_00284770:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00284774:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00284788:
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].sd[0] < 256ll ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002847B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002847B0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 47u, depth + 1u); else { c.pc = 0x002845E8u; return; } if (c.pc != 0x002847B0u) [[unlikely]] return; }
L_002847B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002847C4; } }
L_002847B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002847C0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 50u, depth + 1u); else { c.pc = 0x002846B8u; return; } if (c.pc != 0x002847C0u) [[unlikely]] return; }
L_002847C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002847C4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002847D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_00284818; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002847ECu);  if (depth < kMaxDepth) unit_0061(c, 87u, depth + 1u); else { c.pc = 0x00284AD8u; return; } if (c.pc != 0x002847ECu) [[unlikely]] return; }
L_002847EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002847F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 68u, depth + 1u); else { c.pc = 0x00284918u; return; } if (c.pc != 0x002847F4u) [[unlikely]] return; }
L_002847F4:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 96u);
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011AB50u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 201u, depth); }
L_00284818:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00284828:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028485Cu); c.r[20].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 203u, depth + 1u); else { c.pc = 0x00296868u; return; } if (c.pc != 0x0028485Cu) [[unlikely]] return; }
L_0028485C:
    set32(c.r[3], c.r[18].w[0] << 11);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 12u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[20].w[0]);
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 16;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_0065(c, 204u, depth); }
L_002848A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002848B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 59u, depth + 1u); else { c.pc = 0x00284828u; return; } if (c.pc != 0x002848B4u) [[unlikely]] return; }
L_002848B4:
    c.budget -= 1;
L_002848B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002848C0u);  if (depth < kMaxDepth) unit_0060(c, 135u, depth + 1u); else { c.pc = 0x00280E28u; return; } if (c.pc != 0x002848C0u) [[unlikely]] return; }
L_002848C0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 69u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002848B8u | kUnwind; return; } goto L_002848B8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002848D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002848ECu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 85u, depth + 1u); else { c.pc = 0x00284A70u; return; } if (c.pc != 0x002848ECu) [[unlikely]] return; }
L_002848EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002848F4u);  if (depth < kMaxDepth) unit_0065(c, 203u, depth + 1u); else { c.pc = 0x00296868u; return; } if (c.pc != 0x002848F4u) [[unlikely]] return; }
L_002848F4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 73u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { st8((c.r[16].w[0] + 70u), static_cast<std::uint8_t>(c.r[3].w[0]));  goto L_00284904; }
L_00284904:
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0065(c, 204u, depth); }
L_00284918:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028492Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 87u, depth + 1u); else { c.pc = 0x00284AD8u; return; } if (c.pc != 0x0028492Cu) [[unlikely]] return; }
L_0028492C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284934u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 65u, depth + 1u); else { c.pc = 0x002848D8u; return; } if (c.pc != 0x00284934u) [[unlikely]] return; }
L_00284934:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 73u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00284958; }
L_00284940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284948u);  if (depth < kMaxDepth) unit_0060(c, 135u, depth + 1u); else { c.pc = 0x00280E28u; return; } if (c.pc != 0x00284948u) [[unlikely]] return; }
L_00284948:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 73u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00284940u | kUnwind; return; } goto L_00284940; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00284958:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00284970:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));  c.pc = t; return; }
L_00284978:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    st32((c.r[4].w[0] + 88u), c.r[5].w[0]);
    c.r[5].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[5].d[0] != 0ull) { st32((c.r[4].w[0] + 88u), c.r[2].w[0]);  goto L_0028498C; }
L_0028498C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 88u)));  c.pc = t; return; }
L_00284998:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002849A8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 1;
L_002849A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002849B0:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    st32((c.r[4].w[0] + 52u), 0u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002849C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002849CC; } }
L_002849C8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002849CC:
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 71u), static_cast<std::uint8_t>(c.r[2].w[0]));  c.pc = t; return; }
L_002849E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002849FCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D318u; return; } if (c.pc != 0x002849FCu) [[unlikely]] return; }
L_002849FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284A04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 76u, depth + 1u); else { c.pc = 0x002849B0u; return; } if (c.pc != 0x00284A04u) [[unlikely]] return; }
L_00284A04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284A14u); st32((c.r[16].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005F(c, 73u, depth + 1u); else { c.pc = 0x0027D330u; return; } if (c.pc != 0x00284A14u) [[unlikely]] return; }
L_00284A14:
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00284A28:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284A44u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D318u; return; } if (c.pc != 0x00284A44u) [[unlikely]] return; }
L_00284A44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284A4Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 76u, depth + 1u); else { c.pc = 0x002849B0u; return; } if (c.pc != 0x00284A4Cu) [[unlikely]] return; }
L_00284A4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284A54u); st32((c.r[16].w[0] + 92u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_005F(c, 73u, depth + 1u); else { c.pc = 0x0027D330u; return; } if (c.pc != 0x00284A54u) [[unlikely]] return; }
L_00284A54:
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00284A70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284A84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 203u, depth + 1u); else { c.pc = 0x00296868u; return; } if (c.pc != 0x00284A84u) [[unlikely]] return; }
L_00284A84:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65280ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] | 512ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_00284AC0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 71u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00284AC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 71u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00284AC8; } }
    c.budget -= 1;
L_00284AC0:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00284AC8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0065(c, 204u, depth); }
L_00284AD8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284AF4u); set32(c.r[17], 0u + 1u);  if (depth < kMaxDepth) unit_0061(c, 85u, depth + 1u); else { c.pc = 0x00284A70u; return; } if (c.pc != 0x00284AF4u) [[unlikely]] return; }
L_00284AF4:
    c.budget -= 1;
L_00284AF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284B00u);  if (depth < kMaxDepth) unit_0060(c, 135u, depth + 1u); else { c.pc = 0x00280E28u; return; } if (c.pc != 0x00284B00u) [[unlikely]] return; }
L_00284B00:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00284AF8u | kUnwind; return; } goto L_00284AF8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00284AF8u | kUnwind; return; } goto L_00284AF8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00284B28:
    st32((c.r[4].w[0] + 60u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 56u), c.r[5].w[0]);  c.pc = t; return; }
L_00284B38:
    c.budget -= 2;
    if (c.r[5].sd[0] < 0) { set32(c.r[2], ld32((c.r[4].w[0] + 20u)));  goto L_00284B48; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 48u), c.r[5].w[0]);  c.pc = t; return; }
L_00284B48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 48u), c.r[2].w[0]);  c.pc = t; return; }
L_00284B50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 31184u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_00284B68:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    set32(c.r[17], 0u + 1u);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284B98u); set32(c.r[20], ld32((c.r[19].w[0] + 4u)));  if (depth < kMaxDepth) unit_0062(c, 273u, depth + 1u); else { c.pc = 0x0028A3E0u; return; } if (c.pc != 0x00284B98u) [[unlikely]] return; }
L_00284B98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284BA0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 203u, depth + 1u); else { c.pc = 0x00296868u; return; } if (c.pc != 0x00284BA0u) [[unlikely]] return; }
L_00284BA0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 2u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[17].d[0]) { st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(c.r[17].w[0]));  goto L_00284CE8; }
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[17].d[0]) { set32(c.r[2], 0u + 3u);  goto L_00284CA0; }
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284BC0u); set32(c.r[18], c.r[19].w[0] + 36u);  if (depth < kMaxDepth) unit_0065(c, 204u, depth + 1u); else { c.pc = 0x00296880u; return; } if (c.pc != 0x00284BC0u) [[unlikely]] return; }
L_00284BC0:
    set32(c.r[16], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[17], c.r[29].w[0] + 16u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] << 11);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284BE0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 129u, depth + 1u); else { c.pc = 0x00295978u; return; } if (c.pc != 0x00284BE0u) [[unlikely]] return; }
L_00284BE0:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00284BF8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00284BF8u) [[unlikely]] return; }
L_00284BF8:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00284C10u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00284C10u) [[unlikely]] return; }
L_00284C10:
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[19].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[18].w[0]), 0u);
    st32((c.r[19].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 40u), 0u);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[16], ld32((c.r[19].w[0] + 20u)));  if (t) { goto L_00284C54; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 88u)));  goto L_00284C58; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00284C54u); set32(c.r[4], ld32((c.r[19].w[0] + 60u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00284C54u) [[unlikely]] return; }
L_00284C54:
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    c.budget -= 1;
L_00284C58:
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_00284C94; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 92u)));
    set32(c.r[2], c.r[2].w[0] >> 11);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(0u));  goto L_00284E88; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65534ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(0u));  goto L_00284E88; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_00284C94:
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00284E88; } }
L_00284CA0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00284CD8; } }
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284CB4u); set32(c.r[16], c.r[19].w[0] + 36u);  if (depth < kMaxDepth) unit_0065(c, 204u, depth + 1u); else { c.pc = 0x00296880u; return; } if (c.pc != 0x00284CB4u) [[unlikely]] return; }
L_00284CB4:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00284CCCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00284CCCu) [[unlikely]] return; }
L_00284CCC:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 40u), 0u);  if (t) { goto L_00284E54; } }
L_00284CD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284CE0u);  if (depth < kMaxDepth) unit_0065(c, 204u, depth + 1u); else { c.pc = 0x00296880u; return; } if (c.pc != 0x00284CE0u) [[unlikely]] return; }
L_00284CE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00284E8C; } }
L_00284CE8:
    st32((c.r[19].w[0] + 36u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284CF4u); st32((c.r[19].w[0] + 40u), 0u);  if (depth < kMaxDepth) unit_0065(c, 204u, depth + 1u); else { c.pc = 0x00296880u; return; } if (c.pc != 0x00284CF4u) [[unlikely]] return; }
L_00284CF4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[17].d[0]) { st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));  goto L_00284E88; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[17].d[0]) { st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));  goto L_00284E88; }
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_00284D28; } }
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 32u), 0u);  if (t) { goto L_00284E88; } }
L_00284D28:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00284D3C; } }
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 36u)));  goto L_00284D50; }
L_00284D3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284D44u); st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0061(c, 93u, depth + 1u); else { c.pc = 0x00284B50u; return; } if (c.pc != 0x00284D44u) [[unlikely]] return; }
L_00284D44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00284E8C; } }
    c.budget -= 1;
L_00284D50:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00284D5Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00284D5Cu) [[unlikely]] return; }
L_00284D5C:
    set32(c.r[3], ld32((c.r[19].w[0] + 64u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0])));  goto L_00284D80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00284E88; } }
    c.budget -= 1;
L_00284D80:
    set32(c.r[7], c.r[29].w[0] + 16u);
    set32(c.r[6], ld32((c.r[19].w[0] + 24u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00284D98u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00284D98u) [[unlikely]] return; }
L_00284D98:
    set32(c.r[4], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[5], c.r[2].w[0] + 2047u);
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] - c.r[7].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));
    c.r[5].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    if (c.r[5].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[16], ld32((c.r[19].w[0] + 44u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[4].d[0];
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284DF0u); if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[3].d[0];  if (depth < kMaxDepth) unit_0062(c, 256u, depth + 1u); else { c.pc = 0x0028A1F0u; return; } if (c.pc != 0x00284DF0u) [[unlikely]] return; }
L_00284DF0:
    set32(c.r[6], ld32((c.r[29].w[0] + 16u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284E00u); set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  if (depth < kMaxDepth) unit_0062(c, 260u, depth + 1u); else { c.pc = 0x0028A258u; return; } if (c.pc != 0x00284E00u) [[unlikely]] return; }
L_00284E00:
    set32(c.r[4], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[19].w[0] + 40u), c.r[4].w[0]);
    st32((c.r[19].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] > 0; st32((c.r[19].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_00284E88; } }
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[16], c.r[19].w[0] + 36u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00284E34u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00284E34u) [[unlikely]] return; }
L_00284E34:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[19].w[0] + 40u), 0u);
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284E48u); set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  if (depth < kMaxDepth) unit_0062(c, 273u, depth + 1u); else { c.pc = 0x0028A3E0u; return; } if (c.pc != 0x00284E48u) [[unlikely]] return; }
L_00284E48:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00284E8C; } }
L_00284E54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 31180u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00284E8C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = ld8((c.r[19].w[0] + 3u));  if (t) { goto L_00284E80; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00284E8C; } }
L_00284E80:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00284E88:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00284E8C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00284EA8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));  goto L_0028503C; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 72u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 70u)));  goto L_00284EF0; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 71u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00284EE8; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00284EE8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 70u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00284EF0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00284F14; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st8((c.r[16].w[0] + 70u), static_cast<std::uint8_t>(0u));  goto L_00284F10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284F0Cu); st32((c.r[16].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_0062(c, 250u, depth + 1u); else { c.pc = 0x0028A110u; return; } if (c.pc != 0x00284F0Cu) [[unlikely]] return; }
L_00284F0C:
    st8((c.r[16].w[0] + 70u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00284F10:
    st8((c.r[16].w[0] + 73u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00284F14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284F1Cu);  if (depth < kMaxDepth) unit_0065(c, 203u, depth + 1u); else { c.pc = 0x00296868u; return; } if (c.pc != 0x00284F1Cu) [[unlikely]] return; }
L_00284F1C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 69u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00285020; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284F34u); st8((c.r[16].w[0] + 73u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0065(c, 204u, depth + 1u); else { c.pc = 0x00296880u; return; } if (c.pc != 0x00284F34u) [[unlikely]] return; }
L_00284F34:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 71u)));  goto L_0028502C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284F50u); set32(c.r[5], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0062(c, 231u, depth + 1u); else { c.pc = 0x00289DC0u; return; } if (c.pc != 0x00284F50u) [[unlikely]] return; }
L_00284F50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00284F80; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284F68u); set32(c.r[4], c.r[4].w[0] + 25440u);  if (depth < kMaxDepth) unit_005F(c, 114u, depth + 1u); else { c.pc = 0x0027EF60u; return; } if (c.pc != 0x00284F68u) [[unlikely]] return; }
L_00284F68:
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 73u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00285060; } }
    c.budget -= 1;
L_00284F80:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284F90u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 256u, depth + 1u); else { c.pc = 0x0028A1F0u; return; } if (c.pc != 0x00284F90u) [[unlikely]] return; }
L_00284F90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284F98u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0062(c, 252u, depth + 1u); else { c.pc = 0x0028A188u; return; } if (c.pc != 0x00284F98u) [[unlikely]] return; }
L_00284F98:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00284FACu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 256u, depth + 1u); else { c.pc = 0x0028A1F0u; return; } if (c.pc != 0x00284FACu) [[unlikely]] return; }
L_00284FAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] | 63488ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[17].w[0] << 11);  if (t) { goto L_00284FD0; } }
    st32((c.r[16].w[0] + 16u), c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[17].w[0]);  if (t) { goto L_0028500C; } }
    c.budget -= 1;
L_00284FD0:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  goto L_00284FEC; }
    st32((c.r[16].w[0] + 12u), c.r[17].w[0]);
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
L_00284FEC:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00285010; } }
    set32(c.r[2], c.r[17].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 11);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 4;
L_0028500C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00285010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285018u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 74u, depth + 1u); else { c.pc = 0x00284978u; return; } if (c.pc != 0x00285018u) [[unlikely]] return; }
L_00285018:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00285028; } }
L_00285020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285028u);  if (depth < kMaxDepth) unit_0065(c, 204u, depth + 1u); else { c.pc = 0x00296880u; return; } if (c.pc != 0x00285028u) [[unlikely]] return; }
L_00285028:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 71u)));
    c.budget -= 1;
L_0028502C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { st8((c.r[16].w[0] + 71u), static_cast<std::uint8_t>(0u));  goto L_00285038; }
L_00285038:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 1;
L_0028503C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00285064; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 73u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00285064; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285060u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 94u, depth + 1u); else { c.pc = 0x00284B68u; return; } if (c.pc != 0x00285060u) [[unlikely]] return; }
L_00285060:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00285064:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00285078:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028509Cu); set32(c.r[4], c.r[19].w[0] + 31176u);  if (depth < kMaxDepth) unit_0065(c, 273u, depth + 1u); else { c.pc = 0x00297328u; return; } if (c.pc != 0x0028509Cu) [[unlikely]] return; }
L_0028509C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);  if (t) { goto L_002850D8; } }
    set32(c.r[18], 0u + 1u);
    set32(c.r[16], c.r[2].w[0] + 31192u);
    set32(c.r[17], 0u + 39u);
    c.budget -= 3;
L_002850B0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_002850C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002850C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 113u, depth + 1u); else { c.pc = 0x00284EA8u; return; } if (c.pc != 0x002850C4u) [[unlikely]] return; }
L_002850C4:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_002850C8:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 96u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002850B0u | kUnwind; return; } goto L_002850B0; } }
    set32(c.r[2], c.r[19].w[0] + 31176u);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 2;
L_002850D8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002850F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028510Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 75u, depth + 1u); else { c.pc = 0x00284998u; return; } if (c.pc != 0x0028510Cu) [[unlikely]] return; }
L_0028510C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00285148:
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 24u), c.r[6].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 28u), c.r[5].w[0]);  c.pc = t; return; }
L_00285158:
    st32((c.r[4].w[0] + 44u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00285170:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 16u)));  c.pc = t; return; }
L_00285178:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 20u)));  c.pc = t; return; }
L_00285180:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 68u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_00285190:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002851A8u); set32(c.r[4], ld32((c.r[4].w[0] + 8u)));  if (depth < kMaxDepth) unit_0062(c, 273u, depth + 1u); else { c.pc = 0x0028A3E0u; return; } if (c.pc != 0x002851A8u) [[unlikely]] return; }
L_002851A8:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002851D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002851E4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 277u, depth + 1u); else { c.pc = 0x0028A448u; return; } if (c.pc != 0x002851E4u) [[unlikely]] return; }
L_002851E4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    set32(c.r[6], c.r[5].w[0] + 2047u);
    c.r[4].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[6].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 11));
    set32(c.r[4], c.r[3].w[0] << 11);
    set32(c.r[6], c.r[3].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] - c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = c.r[5].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_00285218; } }
    st32((c.r[16].w[0]), c.r[6].w[0]);
    c.budget -= 1;
L_00285218:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00285228:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028523Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 277u, depth + 1u); else { c.pc = 0x0028A448u; return; } if (c.pc != 0x0028523Cu) [[unlikely]] return; }
L_0028523C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00285258:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028527Cu); st32((c.r[18].w[0] + 4u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D318u; return; } if (c.pc != 0x0028527Cu) [[unlikely]] return; }
L_0028527C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00285290u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00285290u) [[unlikely]] return; }
L_00285290:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002852A8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002852A8u) [[unlikely]] return; }
L_002852A8:
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002852B4u); st32((c.r[18].w[0] + 64u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_005F(c, 73u, depth + 1u); else { c.pc = 0x0027D330u; return; } if (c.pc != 0x002852B4u) [[unlikely]] return; }
L_002852B4:
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002852E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00284978u | kUnwind; return; } goto L_00284978; }
L_00285318:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));  c.pc = t; return; }
L_00285320:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00285394; }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00285394; }
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[3].w[0] + 31176u);
    set32(c.r[18], 0u + 1u);
    c.budget -= 6;
L_00285368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285370u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 273u, depth + 1u); else { c.pc = 0x00297328u; return; } if (c.pc != 0x00285370u) [[unlikely]] return; }
L_00285370:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[18].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00285384; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285380u);  if (depth < kMaxDepth) unit_0061(c, 113u, depth + 1u); else { c.pc = 0x00284EA8u; return; } if (c.pc != 0x00285380u) [[unlikely]] return; }
L_00285380:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_00285384:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 69u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00285368u | kUnwind; return; } goto L_00285368; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00285394:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002853A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027EF08u | kUnwind; return; } [[clang::musttail]] return unit_005F(c, 111u, depth); }
L_002853C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], c.r[2].w[0] - 30504u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002853ECu); set32(c.r[6], 0u + 96u);  if (depth < kMaxDepth) unit_0006(c, 189u, depth + 1u); else { c.pc = 0x0011A900u; return; } if (c.pc != 0x002853ECu) [[unlikely]] return; }
L_002853EC:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] - 30488u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] - 30490u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], 0u + 232u);
    set32(c.r[8], c.r[8].w[0] - 30492u);
    set32(c.r[7], c.r[7].w[0] - 30491u);
    set32(c.r[2], c.r[2].w[0] - 30489u);
    c.r[9].d[0] = ld8((c.r[8].w[0]));
    c.r[10].d[0] = ld8((c.r[7].w[0]));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[8].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[16], c.r[16].w[0] + 25488u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285438u); c.r[7].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_0006(c, 189u, depth + 1u); else { c.pc = 0x0011A900u; return; } if (c.pc != 0x00285438u) [[unlikely]] return; }
L_00285438:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00280000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285448u); set32(c.r[4], c.r[4].w[0] + 21416u);  if (depth < kMaxDepth) unit_0062(c, 358u, depth + 1u); else { c.pc = 0x0028AF10u; return; } if (c.pc != 0x00285448u) [[unlikely]] return; }
L_00285448:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00290000u);
    set32(c.r[5], c.r[5].w[0] - 9640u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028545Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 194u, depth + 1u); else { c.pc = 0x00289888u; return; } if (c.pc != 0x0028545Cu) [[unlikely]] return; }
L_0028545C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285464u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 216u, depth + 1u); else { c.pc = 0x00289BC0u; return; } if (c.pc != 0x00285464u) [[unlikely]] return; }
L_00285464:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002854A8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028548Cu); set32(c.r[7], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0063(c, 378u, depth + 1u); else { c.pc = 0x0028F280u; return; } if (c.pc != 0x0028548Cu) [[unlikely]] return; }
L_0028548C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_0063(c, 379u, depth); }
L_002854A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002854B0u);  if (depth < kMaxDepth) unit_0063(c, 378u, depth + 1u); else { c.pc = 0x0028F280u; return; } if (c.pc != 0x002854B0u) [[unlikely]] return; }
L_002854B0:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_0063(c, 379u, depth); }
L_002854C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_00285500; } }
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002854F4u); set32(c.r[6], ld32((c.r[2].w[0] + 12u)));  if (depth < kMaxDepth) unit_0063(c, 357u, depth + 1u); else { c.pc = 0x0028EF40u; return; } if (c.pc != 0x002854F4u) [[unlikely]] return; }
L_002854F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00285510; } }
    c.budget -= 1;
L_00285500:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285510u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0063(c, 357u, depth + 1u); else { c.pc = 0x0028EF40u; return; } if (c.pc != 0x00285510u) [[unlikely]] return; }
L_00285510:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00285528:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_00285570; } }
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 4u)));
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285568u); set32(c.r[6], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_0063(c, 369u, depth + 1u); else { c.pc = 0x0028F0F0u; return; } if (c.pc != 0x00285568u) [[unlikely]] return; }
L_00285568:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00285578; } }
L_00285570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285578u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0063(c, 357u, depth + 1u); else { c.pc = 0x0028EF40u; return; } if (c.pc != 0x00285578u) [[unlikely]] return; }
L_00285578:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00285590:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_002855D0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002855B8u); set32(c.r[7], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0063(c, 378u, depth + 1u); else { c.pc = 0x0028F280u; return; } if (c.pc != 0x002855B8u) [[unlikely]] return; }
L_002855B8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0063(c, 379u, depth); }
L_002855D0:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002855E0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0063(c, 378u, depth + 1u); else { c.pc = 0x0028F280u; return; } if (c.pc != 0x002855E0u) [[unlikely]] return; }
L_002855E0:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0063(c, 379u, depth); }
L_00285658:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027EF08u | kUnwind; return; } [[clang::musttail]] return unit_005F(c, 111u, depth); }
L_00285670:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00280000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285698u); set32(c.r[4], c.r[2].w[0] + 22104u);  if (depth < kMaxDepth) unit_0062(c, 358u, depth + 1u); else { c.pc = 0x0028AF10u; return; } if (c.pc != 0x00285698u) [[unlikely]] return; }
L_00285698:
    set32(c.r[16], c.r[16].w[0] + 25496u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00290000u);
    set32(c.r[5], c.r[5].w[0] - 3088u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002856B0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0062(c, 194u, depth + 1u); else { c.pc = 0x00289888u; return; } if (c.pc != 0x002856B0u) [[unlikely]] return; }
L_002856B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002856B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 216u, depth + 1u); else { c.pc = 0x00289BC0u; return; } if (c.pc != 0x002856B8u) [[unlikely]] return; }
L_002856B8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00285730; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002856C8u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0064(c, 134u, depth + 1u); else { c.pc = 0x00290E78u; return; } if (c.pc != 0x002856C8u) [[unlikely]] return; }
L_002856C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002856D0u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0064(c, 135u, depth + 1u); else { c.pc = 0x00290EA8u; return; } if (c.pc != 0x002856D0u) [[unlikely]] return; }
L_002856D0:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_002856F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002856E4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0063(c, 384u, depth + 1u); else { c.pc = 0x0028F390u; return; } if (c.pc != 0x002856E4u) [[unlikely]] return; }
L_002856E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  if (t) { goto L_002856FC; } }
    c.budget -= 1;
L_002856F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002856F8u);  if (depth < kMaxDepth) unit_0063(c, 384u, depth + 1u); else { c.pc = 0x0028F390u; return; } if (c.pc != 0x002856F8u) [[unlikely]] return; }
L_002856F8:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_002856FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00285718; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_0063(c, 385u, depth); }
L_00285718:
    set32(c.r[4], 0u + 1u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_0063(c, 385u, depth); }
L_00285730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285738u);  if (depth < kMaxDepth) unit_0064(c, 134u, depth + 1u); else { c.pc = 0x00290E78u; return; } if (c.pc != 0x00285738u) [[unlikely]] return; }
L_00285738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285740u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 135u, depth + 1u); else { c.pc = 0x00290EA8u; return; } if (c.pc != 0x00285740u) [[unlikely]] return; }
L_00285740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285748u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0063(c, 384u, depth + 1u); else { c.pc = 0x0028F390u; return; } if (c.pc != 0x00285748u) [[unlikely]] return; }
L_00285748:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_0063(c, 385u, depth); }
L_002857B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0064(c, 132u, depth); }
L_00285918:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[5].w[0] + 63u);
    set32(c.r[3], 0u - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[2], c.r[16].w[0] - c.r[5].w[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    set32(c.r[18], c.r[6].w[0] - c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = c.r[4].sd[0] < 0; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_00285958; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  goto L_0028595C; }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0; c.r[6].sd[0] = static_cast<std::int32_t>(0x00550000u);  if (t) { goto L_00285970; } }
L_00285958:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 1;
L_0028595C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285964u); set32(c.r[4], c.r[4].w[0] + 25592u);  if (depth < kMaxDepth) unit_005F(c, 111u, depth + 1u); else { c.pc = 0x0027EF08u; return; } if (c.pc != 0x00285964u) [[unlikely]] return; }
L_00285964:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00285C10; } }
    c.budget -= 1;
L_00285970:
    set32(c.r[19], 0u + 1u);
    set32(c.r[5], c.r[6].w[0] - 5592u);
    c.r[2].d[0] = c.r[4].d[0] ^ 4ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    if (c.r[2].d[0] != 0) c.r[19].d[0] = c.r[4].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002859BC; } }
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 3;
L_00285998:
    c.r[2].d[0] = c.r[7].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 196u);  if (t) { goto L_002859BC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00285998u | kUnwind; return; } goto L_00285998; }
L_002859BC:
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00285C10; } }
    set32(c.r[2], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[6].w[0] - 5592u);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[6], 0u + 196u);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002859F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002859F4u) [[unlikely]] return; }
L_002859F4:
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[2], c.r[19].w[0] << 6);
    set32(c.r[10], 0u + 36u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[8], 0u + 8192u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[9], 0u + 8288u);
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    st32((c.r[17].w[0] + 44u), c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    st32((c.r[17].w[0] + 48u), c.r[8].w[0]);
    set32(c.r[5], c.r[18].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[5].w[0] - 292u);
    set32(c.r[5], c.r[5].w[0] + 1755u);
    c.r[7].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    if (c.r[7].d[0] != 0) c.r[3].d[0] = c.r[5].d[0];
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 11));
    st32((c.r[17].w[0] + 52u), c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] << 11);
    st32((c.r[17].w[0] + 40u), c.r[10].w[0]);
    set32(c.r[7], c.r[3].w[0] + c.r[10].w[0]);
    st32((c.r[17].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[6], 0u + 36u);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285A70u); c.r[5].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 61u, depth + 1u); else { c.pc = 0x00294A40u; return; } if (c.pc != 0x00285A70u) [[unlikely]] return; }
L_00285A70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_00285B20; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285A84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 53u, depth + 1u); else { c.pc = 0x00284788u; return; } if (c.pc != 0x00285A84u) [[unlikely]] return; }
L_00285A84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00285B20; } }
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00285AE0; } }
    set32(c.r[18], c.r[17].w[0] + 24u);
    set32(c.r[6], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
L_00285AA0:
    set32(c.r[5], ld32((c.r[17].w[0] + 48u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[6], c.r[6].w[0] - c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] << 1);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285AC8u); set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_0065(c, 61u, depth + 1u); else { c.pc = 0x00294A40u; return; } if (c.pc != 0x00285AC8u) [[unlikely]] return; }
L_00285AC8:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { goto L_00285B20; } }
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], ld32((c.r[17].w[0] + 52u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00285AA0u | kUnwind; return; } goto L_00285AA0; }
L_00285AE0:
    set32(c.r[16], c.r[17].w[0] + 24u);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285AF4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 376u, depth + 1u); else { c.pc = 0x00283330u; return; } if (c.pc != 0x00285AF4u) [[unlikely]] return; }
L_00285AF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00285B20; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285B08u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 352u, depth + 1u); else { c.pc = 0x00282FB0u; return; } if (c.pc != 0x00285B08u) [[unlikely]] return; }
L_00285B08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00285B20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285B18u); set32(c.r[4], ld32((c.r[17].w[0] + 16u)));  if (depth < kMaxDepth) unit_0064(c, 140u, depth + 1u); else { c.pc = 0x00291040u; return; } if (c.pc != 0x00285B18u) [[unlikely]] return; }
L_00285B18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 148u), c.r[2].w[0]);  if (t) { goto L_00285B30; } }
L_00285B20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285B28u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 210u, depth + 1u); else { c.pc = 0x00285D00u; return; } if (c.pc != 0x00285B28u) [[unlikely]] return; }
L_00285B28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00285C10; } }
L_00285B30:
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285B3Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 151u, depth + 1u); else { c.pc = 0x00291198u; return; } if (c.pc != 0x00285B3Cu) [[unlikely]] return; }
L_00285B3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285B44u);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D318u; return; } if (c.pc != 0x00285B44u) [[unlikely]] return; }
L_00285B44:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F590000u);
    c.r[1].d[0] = c.r[1].d[0] | 39321ull;
    c.f[1] = c.r[1].w[0];
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[4], c.r[2].w[0] + 2047u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[5], ld32((c.r[6].w[0] - 30448u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));
    st16((c.r[17].w[0] + 64u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[17].w[0] + 60u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    st32((c.r[17].w[0] + 56u), c.r[5].w[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    c.budget -= 22;
    { const bool t = c.r[19].sd[0] <= 0; st16((c.r[17].w[0] + 62u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00285BC4; } }
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], 0u - 128u);
    set32(c.r[2], c.r[17].w[0] + 66u);
    c.budget -= 3;
L_00285BA8:
    set32(c.r[16], c.r[16].w[0] - 1u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00285BA8u | kUnwind; return; } goto L_00285BA8; } }
L_00285BC4:
    set32(c.r[16], 0u + 1u);
    st16((c.r[17].w[0] + 70u), static_cast<std::uint16_t>(0u));
    st8((c.r[17].w[0] + 108u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 84u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 88u), 0u);
    st32((c.r[17].w[0] + 92u), 0u);
    st16((c.r[17].w[0] + 96u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 100u), 0u);
    st16((c.r[17].w[0] + 104u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 106u), static_cast<std::uint16_t>(0u));
    st8((c.r[17].w[0] + 109u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[17].w[0] + 114u), static_cast<std::uint8_t>(0u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285C04u); st32((c.r[17].w[0] + 136u), 0u);  if (depth < kMaxDepth) unit_0061(c, 368u, depth + 1u); else { c.pc = 0x00287540u; return; } if (c.pc != 0x00285C04u) [[unlikely]] return; }
L_00285C04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285C0Cu); st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_005F(c, 73u, depth + 1u); else { c.pc = 0x0027D330u; return; } if (c.pc != 0x00285C0Cu) [[unlikely]] return; }
L_00285C0C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00285C10:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00285C30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], c.r[5].w[0] - 1024u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 1024u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285C54u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0061(c, 184u, depth + 1u); else { c.pc = 0x00285918u; return; } if (c.pc != 0x00285C54u) [[unlikely]] return; }
L_00285C54:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00285C70; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285C6Cu); set32(c.r[6], 0u + 1024u);  if (depth < kMaxDepth) unit_0064(c, 285u, depth + 1u); else { c.pc = 0x00292828u; return; } if (c.pc != 0x00285C6Cu) [[unlikely]] return; }
L_00285C6C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00285C70:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00285C88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[2].w[0] - 30444u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00285CA4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00285CA4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00285CA4u) [[unlikely]] return; }
L_00285CA4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00285CB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[2].w[0] - 30440u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00285CCC; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00285CCCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00285CCCu) [[unlikely]] return; }
L_00285CCC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00285CD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[2].w[0] - 30432u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00285CF4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00285CF4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00285CF4u) [[unlikely]] return; }
L_00285CF4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00285D00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.budget -= 8;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_00285D48; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 25632u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027EF08u | kUnwind; return; } [[clang::musttail]] return unit_005F(c, 111u, depth); }
L_00285D48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285D50u);  if (depth < kMaxDepth) unit_0061(c, 204u, depth + 1u); else { c.pc = 0x00285C88u; return; } if (c.pc != 0x00285D50u) [[unlikely]] return; }
L_00285D50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285D58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 206u, depth + 1u); else { c.pc = 0x00285CB0u; return; } if (c.pc != 0x00285D58u) [[unlikely]] return; }
L_00285D58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285D60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 208u, depth + 1u); else { c.pc = 0x00285CD8u; return; } if (c.pc != 0x00285D60u) [[unlikely]] return; }
L_00285D60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  goto L_00285D7C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285D78u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 254u, depth + 1u); else { c.pc = 0x00286230u; return; } if (c.pc != 0x00285D78u) [[unlikely]] return; }
L_00285D78:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_00285D7C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_00285D90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285D8Cu); st32((c.r[17].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0060(c, 353u, depth + 1u); else { c.pc = 0x00282FC8u; return; } if (c.pc != 0x00285D8Cu) [[unlikely]] return; }
L_00285D8C:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00285D90:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], ld32((c.r[17].w[0] + 8u)));  goto L_00285DA4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285DA0u); st32((c.r[17].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_0060(c, 385u, depth + 1u); else { c.pc = 0x002834A8u; return; } if (c.pc != 0x00285DA0u) [[unlikely]] return; }
L_00285DA0:
    set32(c.r[16], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_00285DA4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00285DC4; } }
    st32((c.r[17].w[0] + 8u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285DBCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 91u, depth + 1u); else { c.pc = 0x00284B28u; return; } if (c.pc != 0x00285DBCu) [[unlikely]] return; }
L_00285DBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285DC4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 56u, depth + 1u); else { c.pc = 0x002847D0u; return; } if (c.pc != 0x00285DC4u) [[unlikely]] return; }
L_00285DC4:
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00285DD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285DD8u); st32((c.r[17].w[0] + 148u), 0u);  if (depth < kMaxDepth) unit_0064(c, 149u, depth + 1u); else { c.pc = 0x00291148u; return; } if (c.pc != 0x00285DD8u) [[unlikely]] return; }
L_00285DD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285DE0u);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D318u; return; } if (c.pc != 0x00285DE0u) [[unlikely]] return; }
L_00285DE0:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));  goto L_00285E04; }
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[17].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00285E00u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00285E00u) [[unlikely]] return; }
L_00285E00:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 1;
L_00285E04:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00285E90; } }
    set32(c.r[18], c.r[17].w[0] + 128u);
    set32(c.r[16], c.r[17].w[0] + 120u);
    c.budget -= 3;
L_00285E18:
    set32(c.r[3], ld32((c.r[16].w[0] - 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00285E38; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[16].w[0] - 96u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00285E38u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00285E38u) [[unlikely]] return; }
L_00285E38:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0])));  goto L_00285E5C; }
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00285E58u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00285E58u) [[unlikely]] return; }
L_00285E58:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_00285E5C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));  goto L_00285E7C; }
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[18].w[0]), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00285E78u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00285E78u) [[unlikely]] return; }
L_00285E78:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 1;
L_00285E7C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00285E18u | kUnwind; return; } goto L_00285E18; } }
L_00285E90:
    set32(c.r[4], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00285EA8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285EA4u); st32((c.r[17].w[0] + 116u), 0u);  if (depth < kMaxDepth) unit_005E(c, 77u, depth + 1u); else { c.pc = 0x002795C0u; return; } if (c.pc != 0x00285EA4u) [[unlikely]] return; }
L_00285EA4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00285EA8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285EB4u); set32(c.r[6], 0u + 196u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00285EB4u) [[unlikely]] return; }
L_00285EB4:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027D330u | kUnwind; return; } [[clang::musttail]] return unit_005F(c, 73u, depth); }
L_00285ED8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] - 5592u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 15u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 1u);
    c.budget -= 10;
L_00285F00:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_00285F18; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285F14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 210u, depth + 1u); else { c.pc = 0x00285D00u; return; } if (c.pc != 0x00285F14u) [[unlikely]] return; }
L_00285F14:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_00285F18:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 196u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00285F00u | kUnwind; return; } goto L_00285F00; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00285F38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00285ED8u | kUnwind; return; } goto L_00285ED8; }
L_00285F50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] <= 0; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00285FAC; } }
    set32(c.r[17], c.r[16].w[0] + 24u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
L_00285F88:
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00285F9Cu); set32(c.r[18], c.r[18].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00285F9Cu) [[unlikely]] return; }
L_00285F9C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00285F88u | kUnwind; return; } goto L_00285F88; }
L_00285FAC:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285FB8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 390u, depth + 1u); else { c.pc = 0x00283510u; return; } if (c.pc != 0x00285FB8u) [[unlikely]] return; }
L_00285FB8:
    st32((c.r[16].w[0] + 20u), c.r[19].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00285FC4u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0060(c, 396u, depth + 1u); else { c.pc = 0x002835D0u; return; } if (c.pc != 0x00285FC4u) [[unlikely]] return; }
L_00285FC4:
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[4], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 144u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st32((c.r[16].w[0] + 140u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 156u), 0u);
    st32((c.r[16].w[0] + 164u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[2], ld32((c.r[3].w[0] - 5596u)));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[16].w[0] + 160u), c.r[2].w[0]);  if (t) { goto L_00286020; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00279618u | kUnwind; return; } [[clang::musttail]] return unit_005E(c, 80u, depth); }
L_00286020:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00286040:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 62u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 60u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] << 11);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286088u); set32(c.r[6], c.r[6].w[0] << 11);  if (depth < kMaxDepth) unit_0061(c, 131u, depth + 1u); else { c.pc = 0x00285148u; return; } if (c.pc != 0x00286088u) [[unlikely]] return; }
L_00286088:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286094u); set32(c.r[5], 0u + 25u);  if (depth < kMaxDepth) unit_0061(c, 92u, depth + 1u); else { c.pc = 0x00284B38u; return; } if (c.pc != 0x00286094u) [[unlikely]] return; }
L_00286094:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002860A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 91u, depth + 1u); else { c.pc = 0x00284B28u; return; } if (c.pc != 0x002860A4u) [[unlikely]] return; }
L_002860A4:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002860B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 74u, depth + 1u); else { c.pc = 0x00284978u; return; } if (c.pc != 0x002860B0u) [[unlikely]] return; }
L_002860B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002860B8u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0061(c, 85u, depth + 1u); else { c.pc = 0x00284A70u; return; } if (c.pc != 0x002860B8u) [[unlikely]] return; }
L_002860B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002860C0u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0061(c, 65u, depth + 1u); else { c.pc = 0x002848D8u; return; } if (c.pc != 0x002860C0u) [[unlikely]] return; }
L_002860C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002860D8u); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 59u, depth + 1u); else { c.pc = 0x00284828u; return; } if (c.pc != 0x002860D8u) [[unlikely]] return; }
L_002860D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002860E0u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0061(c, 77u, depth + 1u); else { c.pc = 0x002849E8u; return; } if (c.pc != 0x002860E0u) [[unlikely]] return; }
L_002860E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00285F50u | kUnwind; return; } goto L_00285F50; }
L_00286190:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002861A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D318u; return; } if (c.pc != 0x002861A4u) [[unlikely]] return; }
L_002861A4:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002861B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0060(c, 356u, depth + 1u); else { c.pc = 0x00283030u; return; } if (c.pc != 0x002861B0u) [[unlikely]] return; }
L_002861B0:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002861BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0060(c, 357u, depth + 1u); else { c.pc = 0x00283048u; return; } if (c.pc != 0x002861BCu) [[unlikely]] return; }
L_002861BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002861C8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0064(c, 414u, depth + 1u); else { c.pc = 0x00293D78u; return; } if (c.pc != 0x002861C8u) [[unlikely]] return; }
L_002861C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002861D0u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0060(c, 398u, depth + 1u); else { c.pc = 0x00283600u; return; } if (c.pc != 0x002861D0u) [[unlikely]] return; }
L_002861D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  goto L_00286204; }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  goto L_00286204; }
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[16].w[0] + 20u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00286200u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00286200u) [[unlikely]] return; }
L_00286200:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 1;
L_00286204:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st8((c.r[16].w[0] + 172u), static_cast<std::uint8_t>(0u));  goto L_00286218; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286214u);  if (depth < kMaxDepth) unit_005E(c, 94u, depth + 1u); else { c.pc = 0x002797B8u; return; } if (c.pc != 0x00286214u) [[unlikely]] return; }
L_00286214:
    st8((c.r[16].w[0] + 172u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00286218:
    st32((c.r[16].w[0] + 20u), 0u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027D330u | kUnwind; return; } [[clang::musttail]] return unit_005F(c, 73u, depth); }
L_00286230:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_00286268; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 25712u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027EF08u | kUnwind; return; } [[clang::musttail]] return unit_005F(c, 111u, depth); }
L_00286268:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[17], c.r[2].w[0] - 30436u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  goto L_00286294; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286284u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0060(c, 398u, depth + 1u); else { c.pc = 0x00283600u; return; } if (c.pc != 0x00286284u) [[unlikely]] return; }
L_00286284:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00286290u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00286290u) [[unlikely]] return; }
L_00286290:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_00286294:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));  goto L_002862A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002862A4u);  if (depth < kMaxDepth) unit_0061(c, 65u, depth + 1u); else { c.pc = 0x002848D8u; return; } if (c.pc != 0x002862A4u) [[unlikely]] return; }
L_002862A4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 1;
L_002862A8:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002862DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002862BCu); set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  if (depth < kMaxDepth) unit_0064(c, 161u, depth + 1u); else { c.pc = 0x00291408u; return; } if (c.pc != 0x002862BCu) [[unlikely]] return; }
L_002862BC:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002862D8; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002862D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002862D8u) [[unlikely]] return; }
L_002862D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002862DC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00286190u | kUnwind; return; } goto L_00286190; }
L_002862F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00286310; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286308u); set32(c.r[4], c.r[4].w[0] + 25752u);  if (depth < kMaxDepth) unit_005F(c, 111u, depth + 1u); else { c.pc = 0x0027EF08u; return; } if (c.pc != 0x00286308u) [[unlikely]] return; }
L_00286308:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00286314; } }
L_00286310:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 1;
L_00286314:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00286358:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[3], c.r[2].w[0] << 24);
    set32(c.r[2], c.r[2].w[0] - 3u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 24));  if (t) { goto L_002863A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286398u); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_0060(c, 358u, depth + 1u); else { c.pc = 0x00283060u; return; } if (c.pc != 0x00286398u) [[unlikely]] return; }
L_00286398:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 136u)));  if (t) { goto L_002863FC; } }
L_002863A0:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002863F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002863B4u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0061(c, 22u, depth + 1u); else { c.pc = 0x00284210u; return; } if (c.pc != 0x002863B4u) [[unlikely]] return; }
L_002863B4:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002863C0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0061(c, 18u, depth + 1u); else { c.pc = 0x00284198u; return; } if (c.pc != 0x002863C0u) [[unlikely]] return; }
L_002863C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002863CCu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0061(c, 20u, depth + 1u); else { c.pc = 0x002841C8u; return; } if (c.pc != 0x002863CCu) [[unlikely]] return; }
L_002863CC:
    set32(c.r[3], 0u + 16u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x002863D8u);  goto L_002863DC; }
L_002863DC:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_002863F8; } }
L_002863F0:
    st32((c.r[17].w[0]), 0u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_002863F8:
    set32(c.r[3], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 1;
L_002863FC:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00286420:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 1u));
    set32(c.r[3], c.r[2].w[0] << 24);
    set32(c.r[2], c.r[2].w[0] - 3u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 24));  if (t) { goto L_002864A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286464u); set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_0061(c, 18u, depth + 1u); else { c.pc = 0x00284198u; return; } if (c.pc != 0x00286464u) [[unlikely]] return; }
L_00286464:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286470u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0061(c, 8u, depth + 1u); else { c.pc = 0x002840D8u; return; } if (c.pc != 0x00286470u) [[unlikely]] return; }
L_00286470:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028647Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 359u, depth + 1u); else { c.pc = 0x00283078u; return; } if (c.pc != 0x0028647Cu) [[unlikely]] return; }
L_0028647C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028648Cu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 322u, depth + 1u); else { c.pc = 0x00286E00u; return; } if (c.pc != 0x0028648Cu) [[unlikely]] return; }
L_0028648C:
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] - c.r[17].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[16].w[0]);  if (t) { goto L_00286510; } }
    c.budget -= 1;
L_002864A8:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_00286508; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002864BCu); set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_0061(c, 22u, depth + 1u); else { c.pc = 0x00284210u; return; } if (c.pc != 0x002864BCu) [[unlikely]] return; }
L_002864BC:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002864C8u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0061(c, 18u, depth + 1u); else { c.pc = 0x00284198u; return; } if (c.pc != 0x002864C8u) [[unlikely]] return; }
L_002864C8:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002864D4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0061(c, 20u, depth + 1u); else { c.pc = 0x002841C8u; return; } if (c.pc != 0x002864D4u) [[unlikely]] return; }
L_002864D4:
    set32(c.r[3], 0u + 16u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x002864E0u);  goto L_002864E4; }
L_002864E4:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_00286510; } }
    c.budget -= 1;
L_00286508:
    st32((c.r[19].w[0]), 0u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00286510:
    set32(c.r[3], ld32((c.r[18].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00286540:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] - 30428u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_00286558:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    c.budget -= 13;
    { const bool t = c.r[18].d[0] == 0ull; st64((c.r[29].w[0] + 72u), c.r[31].d[0]);  if (t) { goto L_0028659C; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  goto L_002865A0; }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_002865B0; } }
L_0028659C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 1;
L_002865A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002865A8u); set32(c.r[4], c.r[4].w[0] + 25792u);  if (depth < kMaxDepth) unit_005F(c, 111u, depth + 1u); else { c.pc = 0x0027EF08u; return; } if (c.pc != 0x002865A8u) [[unlikely]] return; }
L_002865A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00286828; } }
L_002865B0:
    set32(c.r[2], ld32((c.r[16].w[0] - 30456u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_002865D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002865C4u);  if (depth < kMaxDepth) unit_0061(c, 267u, depth + 1u); else { c.pc = 0x00286420u; return; } if (c.pc != 0x002865C4u) [[unlikely]] return; }
L_002865C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00286828; } }
    c.budget -= 1;
L_002865D0:
    st32((c.r[17].w[0] - 30380u), 0u);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1u));
    set32(c.r[2], c.r[3].w[0] - 3u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] << 24);  if (t) { goto L_00286768; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 114u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 156u)));  goto L_00286620; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 160u)));
    set32(c.r[3], ld32((c.r[2].w[0] - 5596u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 156u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 11;
L_00286620:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 4u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286638u); c.r[22].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (depth < kMaxDepth) unit_0061(c, 267u, depth + 1u); else { c.pc = 0x00286420u; return; } if (c.pc != 0x00286638u) [[unlikely]] return; }
L_00286638:
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[20], c.r[22].w[0] - 30384u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[20].w[0])));
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[3] = c.r[6].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[5] = c.r[1].w[0];
    c.f[2] = c.r[7].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[4] = c.r[1].w[0];
    fpu_div(c, 0u, c.f[0], c.f[3]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[1] = fp::mul(c.f[0], c.f[5]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    c.budget -= 27;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] - 30380u), c.f[1]);  if (t) { goto L_002866B8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC2700000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], ld32((c.r[18].w[0] + 136u)));  goto L_00286810; }
L_002866B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] - 30424u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[16], c.r[16].w[0] - 30456u);  if (t) { goto L_002866F8; } }
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[16].w[0])));
    set32(c.r[6], c.r[29].w[0] + 4u);
    st32((c.r[16].w[0]), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002866E4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 276u, depth + 1u); else { c.pc = 0x00286558u; return; } if (c.pc != 0x002866E4u) [[unlikely]] return; }
L_002866E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002866ECu); st32((c.r[16].w[0]), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0061(c, 275u, depth + 1u); else { c.pc = 0x00286540u; return; } if (c.pc != 0x002866ECu) [[unlikely]] return; }
L_002866EC:
    set32(c.r[7], ld32((c.r[20].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
L_002866F8:
    c.f[1] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = c.r[1].w[0];
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = c.r[7].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    c.budget -= 17;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[18].w[0] + 156u), c.r[3].w[0]);  goto L_00286754; }
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[18].w[0] + 156u), c.r[3].w[0]);
    c.budget -= 6;
L_00286754:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 5596u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 160u), c.r[2].w[0]);  if (t) { goto L_0028680C; } }
    c.budget -= 1;
L_00286768:
    set32(c.r[3], 0u + 5u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[19].w[0]), 0u);  goto L_00286808; }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286784u); c.r[22].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (depth < kMaxDepth) unit_0061(c, 22u, depth + 1u); else { c.pc = 0x00284210u; return; } if (c.pc != 0x00286784u) [[unlikely]] return; }
L_00286784:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286790u); st32((c.r[29].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0061(c, 18u, depth + 1u); else { c.pc = 0x00284198u; return; } if (c.pc != 0x00286790u) [[unlikely]] return; }
L_00286790:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028679Cu); st32((c.r[29].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0061(c, 20u, depth + 1u); else { c.pc = 0x002841C8u; return; } if (c.pc != 0x0028679Cu) [[unlikely]] return; }
L_0028679C:
    set32(c.r[3], 0u + 16u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x002867A8u);  goto L_002867AC; }
L_002867AC:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.f[2] = ld32((c.r[29].w[0] + 4u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = ld32((c.r[22].w[0] - 30384u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0]), c.r[5].w[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 156u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[3].w[0]);  if (t) { goto L_0028680C; } }
    c.budget -= 1;
L_00286808:
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 1;
L_0028680C:
    set32(c.r[2], ld32((c.r[18].w[0] + 136u)));
    c.budget -= 1;
L_00286810:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[22].w[0] - 30384u)));
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
L_00286828:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00286850:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286864u); set32(c.r[6], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_0061(c, 276u, depth + 1u); else { c.pc = 0x00286558u; return; } if (c.pc != 0x00286864u) [[unlikely]] return; }
L_00286864:
    c.f[1] = ld32((c.r[29].w[0]));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[1].w[0];
    c.f[2] = ld32((c.r[29].w[0] + 4u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[0]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002868A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002868C0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002868B8u); set32(c.r[4], c.r[4].w[0] + 25832u);  if (depth < kMaxDepth) unit_005F(c, 111u, depth + 1u); else { c.pc = 0x0027EF08u; return; } if (c.pc != 0x002868B8u) [[unlikely]] return; }
L_002868B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002868E0; } }
L_002868C0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002868E0; }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00284210u | kUnwind; return; } goto L_00284210; }
L_002868E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002868F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00286910; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286908u); set32(c.r[4], c.r[4].w[0] + 25880u);  if (depth < kMaxDepth) unit_005F(c, 111u, depth + 1u); else { c.pc = 0x0027EF08u; return; } if (c.pc != 0x00286908u) [[unlikely]] return; }
L_00286908:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00286930; } }
L_00286910:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00286930; }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00284198u | kUnwind; return; } goto L_00284198; }
L_00286930:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00286940:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00286960; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286958u); set32(c.r[4], c.r[4].w[0] + 25928u);  if (depth < kMaxDepth) unit_005F(c, 111u, depth + 1u); else { c.pc = 0x0027EF08u; return; } if (c.pc != 0x00286958u) [[unlikely]] return; }
L_00286958:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00286980; } }
L_00286960:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00286980; }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002841B0u | kUnwind; return; } goto L_002841B0; }
L_00286980:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00286990:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002869B0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002869A8u); set32(c.r[4], c.r[4].w[0] + 25976u);  if (depth < kMaxDepth) unit_005F(c, 111u, depth + 1u); else { c.pc = 0x0027EF08u; return; } if (c.pc != 0x002869A8u) [[unlikely]] return; }
L_002869A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002869D0; } }
L_002869B0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002869D0; }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00284418u | kUnwind; return; } goto L_00284418; }
L_002869D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002869E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00286A00; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002869F8u); set32(c.r[4], c.r[4].w[0] + 26024u);  if (depth < kMaxDepth) unit_005F(c, 111u, depth + 1u); else { c.pc = 0x0027EF08u; return; } if (c.pc != 0x002869F8u) [[unlikely]] return; }
L_002869F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00286A20; } }
L_00286A00:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00286A20; }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00284420u | kUnwind; return; } goto L_00284420; }
L_00286A20:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00286A30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_00286A78; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 26072u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027EF08u | kUnwind; return; } [[clang::musttail]] return unit_005F(c, 111u, depth); }
L_00286A78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286A80u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0061(c, 31u, depth + 1u); else { c.pc = 0x00284358u; return; } if (c.pc != 0x00286A80u) [[unlikely]] return; }
L_00286A80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[3], 0u - 128u);
    set32(c.r[7], c.r[17].w[0] << 1);
    c.r[3].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    set32(c.r[7], c.r[7].w[0] + c.r[16].w[0]);
    if (c.r[3].d[0] == 0) c.r[2].d[0] = 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    st16((c.r[7].w[0] + 66u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 26120u);  if (t) { goto L_00286AC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286AC0u); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_0060(c, 365u, depth + 1u); else { c.pc = 0x00283158u; return; } if (c.pc != 0x00286AC0u) [[unlikely]] return; }
L_00286AC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00286AD4; } }
L_00286AC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286AD0u);  if (depth < kMaxDepth) unit_005F(c, 111u, depth + 1u); else { c.pc = 0x0027EF08u; return; } if (c.pc != 0x00286AD0u) [[unlikely]] return; }
L_00286AD0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00286AD4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00286AE8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], c.r[5].w[0] << 1);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00286B10; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286B04u); set32(c.r[4], c.r[4].w[0] + 26168u);  if (depth < kMaxDepth) unit_005F(c, 111u, depth + 1u); else { c.pc = 0x0027EF08u; return; } if (c.pc != 0x00286B04u) [[unlikely]] return; }
L_00286B04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00286B18; } }
    c.budget -= 1;
L_00286B10:
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 66u)));
    c.budget -= 2;
L_00286B18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00286B28:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_00286B58; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 26216u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027EF08u | kUnwind; return; } [[clang::musttail]] return unit_005F(c, 111u, depth); }
L_00286B58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286B60u); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_0060(c, 366u, depth + 1u); else { c.pc = 0x00283170u; return; } if (c.pc != 0x00286B60u) [[unlikely]] return; }
L_00286B60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286B68u); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_0060(c, 368u, depth + 1u); else { c.pc = 0x002831E8u; return; } if (c.pc != 0x00286B68u) [[unlikely]] return; }
L_00286B68:
    st16((c.r[16].w[0] + 70u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00286B80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00286BA0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286B98u); set32(c.r[4], c.r[4].w[0] + 26264u);  if (depth < kMaxDepth) unit_005F(c, 111u, depth + 1u); else { c.pc = 0x0027EF08u; return; } if (c.pc != 0x00286B98u) [[unlikely]] return; }
L_00286B98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00286BA4; } }
L_00286BA0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 70u)));
    c.budget -= 1;
L_00286BA4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00286BB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_00286BE8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 26312u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027EF08u | kUnwind; return; } [[clang::musttail]] return unit_005F(c, 111u, depth); }
L_00286BE8:
    st16((c.r[17].w[0] + 64u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286BF8u); set32(c.r[16], ld32((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_0061(c, 28u, depth + 1u); else { c.pc = 0x00284300u; return; } if (c.pc != 0x00286BF8u) [[unlikely]] return; }
L_00286BF8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 64u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00283140u | kUnwind; return; } [[clang::musttail]] return unit_0060(c, 364u, depth); }
L_00286C48:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286C58u); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  if (depth < kMaxDepth) unit_0061(c, 28u, depth + 1u); else { c.pc = 0x00284300u; return; } if (c.pc != 0x00286C58u) [[unlikely]] return; }
L_00286C58:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00286C68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286C78u); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  if (depth < kMaxDepth) unit_0061(c, 31u, depth + 1u); else { c.pc = 0x00284358u; return; } if (c.pc != 0x00286C78u) [[unlikely]] return; }
L_00286C78:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00286C88:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002843C0u | kUnwind; return; } goto L_002843C0; }
L_00286CA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] - 30448u), c.r[4].w[0]);  c.pc = t; return; }
L_00286CB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00286CD0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 26408u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027EF08u | kUnwind; return; } [[clang::musttail]] return unit_005F(c, 111u, depth); }
L_00286CD0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[4].w[0] + 56u), c.r[5].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00286CE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != 0ull; c.r[8].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00286D08; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 26456u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027EF08u | kUnwind; return; } [[clang::musttail]] return unit_005F(c, 111u, depth); }
L_00286D08:
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 60u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[0] = fp::mul(c.f[12], c.f[0]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    set32(c.r[4], c.r[3].w[0] + 31u);
    c.r[2].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[4].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    mmi::mult(c, 0, c.r[3].w[0], c.r[8].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[2].w[0] + 2047u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[4].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 11));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[3].d[0];
    st16((c.r[7].w[0] + 62u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00286D70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00286D90; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 26504u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027EF08u | kUnwind; return; } [[clang::musttail]] return unit_005F(c, 111u, depth); }
L_00286D90:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st16((c.r[4].w[0] + 62u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00286DA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00286DC0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286DB8u); set32(c.r[4], c.r[4].w[0] + 26552u);  if (depth < kMaxDepth) unit_005F(c, 111u, depth + 1u); else { c.pc = 0x0027EF08u; return; } if (c.pc != 0x00286DB8u) [[unlikely]] return; }
L_00286DB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00286DF4; } }
L_00286DC0:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00286DF0; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00286DDCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00286DDCu) [[unlikely]] return; }
L_00286DDC:
    set32(c.r[4], c.r[2].w[0] + 2047u);
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));  if (t) { goto L_00286DF4; } }
L_00286DF0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00286DF4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00286E00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00286E14; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[2], c.r[5].w[0] << 2);  if (t) { goto L_00286E28; } }
L_00286E14:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286E20u); set32(c.r[4], c.r[4].w[0] + 26600u);  if (depth < kMaxDepth) unit_005F(c, 111u, depth + 1u); else { c.pc = 0x0027EF08u; return; } if (c.pc != 0x00286E20u) [[unlikely]] return; }
L_00286E20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00286E5C; } }
L_00286E28:
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00286E58; } }
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00286E48u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00286E48u) [[unlikely]] return; }
L_00286E48:
    set32(c.r[3], c.r[2].w[0] >> 31);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_00286E5C; } }
L_00286E58:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00286E5C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00286E68:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 32u), c.f[20]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.f[20] = 0u;
    c.budget -= 9;
    { const bool t = c.r[18].d[0] != 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_00286EA8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286E98u); set32(c.r[4], c.r[4].w[0] + 26648u);  if (depth < kMaxDepth) unit_005F(c, 111u, depth + 1u); else { c.pc = 0x0027EF08u; return; } if (c.pc != 0x00286E98u) [[unlikely]] return; }
L_00286E98:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00286F34; } }
L_00286EA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286EB0u);  if (depth < kMaxDepth) unit_0061(c, 260u, depth + 1u); else { c.pc = 0x002862F0u; return; } if (c.pc != 0x00286EB0u) [[unlikely]] return; }
L_00286EB0:
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.f[0] = c.f[20];  if (t) { goto L_00286F30; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00286F30; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00286ED8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00286ED8u) [[unlikely]] return; }
L_00286ED8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286EE4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 291u, depth + 1u); else { c.pc = 0x00286940u; return; } if (c.pc != 0x00286EE4u) [[unlikely]] return; }
L_00286EE4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286EF0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 289u, depth + 1u); else { c.pc = 0x002868F0u; return; } if (c.pc != 0x00286EF0u) [[unlikely]] return; }
L_00286EF0:
    set32(c.r[3], c.r[17].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[3], c.r[3].w[0] << 1);
    mmi::div(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x00286F0Cu);  goto L_00286F10; }
L_00286F10:
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[16].w[0] << 5);
    c.f[0] = c.r[16].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 20u, c.f[0], c.f[1]);
    c.f[0] = c.f[20];
    c.budget -= 8;
L_00286F30:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00286F34:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00286F50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_00286F78; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286F70u); set32(c.r[4], c.r[4].w[0] + 26704u);  if (depth < kMaxDepth) unit_005F(c, 111u, depth + 1u); else { c.pc = 0x0027EF08u; return; } if (c.pc != 0x00286F70u) [[unlikely]] return; }
L_00286F70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00286FAC; } }
L_00286F78:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00286FA8; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00286F94u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00286F94u) [[unlikely]] return; }
L_00286F94:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 62u)));
    set32(c.r[3], c.r[3].w[0] << 11);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_00286FAC; } }
L_00286FA8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00286FAC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00286FC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 109u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_00286FC8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00286FE8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00286FE0u); set32(c.r[4], c.r[4].w[0] + 26752u);  if (depth < kMaxDepth) unit_005F(c, 111u, depth + 1u); else { c.pc = 0x0027EF08u; return; } if (c.pc != 0x00286FE0u) [[unlikely]] return; }
L_00286FE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00286FF4; } }
L_00286FE8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 5ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_00286FF4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00287000:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287024u); set32(c.r[17], c.r[19].w[0] - 30452u);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D318u; return; } if (c.pc != 0x00287024u) [[unlikely]] return; }
L_00287024:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00287048; } }
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027D330u | kUnwind; return; } [[clang::musttail]] return unit_005F(c, 73u, depth); }
L_00287048:
    set32(c.r[2], 0u + 1u);
    set32(c.r[18], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287058u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005F(c, 73u, depth + 1u); else { c.pc = 0x0027D330u; return; } if (c.pc != 0x00287058u) [[unlikely]] return; }
L_00287058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287060u);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D318u; return; } if (c.pc != 0x00287060u) [[unlikely]] return; }
L_00287060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287068u);  if (depth < kMaxDepth) unit_0061(c, 5u, depth + 1u); else { c.pc = 0x00284070u; return; } if (c.pc != 0x00287068u) [[unlikely]] return; }
L_00287068:
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[16], c.r[3].w[0] - 5592u);
    set32(c.r[17], 0u + 15u);
    c.budget -= 6;
L_00287080:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_00287098; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287094u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 151u, depth + 1u); else { c.pc = 0x002890B8u; return; } if (c.pc != 0x00287094u) [[unlikely]] return; }
L_00287094:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_00287098:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 196u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00287080u | kUnwind; return; } goto L_00287080; } }
    set32(c.r[16], c.r[19].w[0] - 30452u);
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002870B0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0060(c, 361u, depth + 1u); else { c.pc = 0x002830E0u; return; } if (c.pc != 0x002870B0u) [[unlikely]] return; }
L_002870B0:
    st32((c.r[16].w[0]), 0u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027D330u | kUnwind; return; } [[clang::musttail]] return unit_005F(c, 73u, depth); }
L_00287118:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00287138; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 26848u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027EF08u | kUnwind; return; } [[clang::musttail]] return unit_005F(c, 111u, depth); }
L_00287138:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st16((c.r[4].w[0] + 106u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 96u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 100u), 0u);
    st16((c.r[4].w[0] + 104u), static_cast<std::uint16_t>(0u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00287158:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00287178; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287170u); set32(c.r[4], c.r[4].w[0] + 26896u);  if (depth < kMaxDepth) unit_005F(c, 111u, depth + 1u); else { c.pc = 0x0027EF08u; return; } if (c.pc != 0x00287170u) [[unlikely]] return; }
L_00287170:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0028717C; } }
L_00287178:
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 1;
L_0028717C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00287188:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002871A8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 26944u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027EF08u | kUnwind; return; } [[clang::musttail]] return unit_005F(c, 111u, depth); }
L_002871A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st8((c.r[4].w[0] + 108u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002871B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002871D8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002871D0u); set32(c.r[4], c.r[4].w[0] + 26992u);  if (depth < kMaxDepth) unit_005F(c, 111u, depth + 1u); else { c.pc = 0x0027EF08u; return; } if (c.pc != 0x002871D0u) [[unlikely]] return; }
L_002871D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002871DC; } }
L_002871D8:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 1;
L_002871DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002871E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00287208; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 27040u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027EF08u | kUnwind; return; } [[clang::musttail]] return unit_005F(c, 111u, depth); }
L_00287208:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st8((c.r[4].w[0] + 112u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00287218:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00287238; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287230u); set32(c.r[4], c.r[4].w[0] + 27096u);  if (depth < kMaxDepth) unit_005F(c, 111u, depth + 1u); else { c.pc = 0x0027EF08u; return; } if (c.pc != 0x00287230u) [[unlikely]] return; }
L_00287230:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0028723C; } }
L_00287238:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 113u)));
    c.budget -= 1;
L_0028723C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00287248:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] != 0ull; st64((c.r[29].w[0] + 40u), c.r[31].d[0]);  if (t) { goto L_00287280; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287274u); set32(c.r[4], c.r[4].w[0] + 27152u);  if (depth < kMaxDepth) unit_005F(c, 111u, depth + 1u); else { c.pc = 0x0027EF08u; return; } if (c.pc != 0x00287274u) [[unlikely]] return; }
L_00287274:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00287360; } }
    c.budget -= 1;
L_00287280:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 114u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));  if (t) { goto L_0028735C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287294u);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D318u; return; } if (c.pc != 0x00287294u) [[unlikely]] return; }
L_00287294:
    set32(c.r[2], c.r[17].w[0] - 3u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[18].w[0] + 114u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (t) { goto L_00287354; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[4], ld32((c.r[18].w[0] + 12u)));  if (t) { goto L_002872C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002872B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0060(c, 357u, depth + 1u); else { c.pc = 0x00283048u; return; } if (c.pc != 0x002872B8u) [[unlikely]] return; }
L_002872B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_002872D8; } }
L_002872C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002872C8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 357u, depth + 1u); else { c.pc = 0x00283048u; return; } if (c.pc != 0x002872C8u) [[unlikely]] return; }
L_002872C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 5596u)));
    st32((c.r[18].w[0] + 160u), c.r[3].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 4;
L_002872D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 30456u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[16].w[0])));
    set32(c.r[6], c.r[29].w[0] + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002872F4u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_0061(c, 276u, depth + 1u); else { c.pc = 0x00286558u; return; } if (c.pc != 0x002872F4u) [[unlikely]] return; }
L_002872F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.f[0] = ld32((c.r[29].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = c.r[1].w[0];
    c.f[2] = ld32((c.r[29].w[0] + 4u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = ld32((c.r[2].w[0] - 30384u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0]), c.r[17].w[0]);  if (t) { goto L_00287350; } }
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 5;
L_00287350:
    st32((c.r[18].w[0] + 156u), c.r[3].w[0]);
    c.budget -= 1;
L_00287354:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028735Cu);  if (depth < kMaxDepth) unit_005F(c, 73u, depth + 1u); else { c.pc = 0x0027D330u; return; } if (c.pc != 0x0028735Cu) [[unlikely]] return; }
L_0028735C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00287360:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00287378:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00287398; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287390u); set32(c.r[4], c.r[4].w[0] + 27192u);  if (depth < kMaxDepth) unit_005F(c, 111u, depth + 1u); else { c.pc = 0x0027EF08u; return; } if (c.pc != 0x00287390u) [[unlikely]] return; }
L_00287390:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028739C; } }
L_00287398:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 114u)));
    c.budget -= 1;
L_0028739C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002873A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00283250u | kUnwind; return; } [[clang::musttail]] return unit_0060(c, 370u, depth); }
L_002873D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002873E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002873F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002835A0u | kUnwind; return; } [[clang::musttail]] return unit_0060(c, 394u, depth); }
L_00287438:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027EEE0u | kUnwind; return; } [[clang::musttail]] return unit_005F(c, 110u, depth); }
L_00287540:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st8((c.r[4].w[0] + 152u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00287568; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002840F0u | kUnwind; return; } goto L_002840F0; }
L_00287568:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00287580:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00284130u | kUnwind; return; } goto L_00284130; }
L_002876A8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], c.r[6].w[0] + 31u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[2].d[0] = c.r[6].sd[0] < 0ll ? 1ull : 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[3].d[0];
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 5));
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[3].w[0] << 1);
    set32(c.r[20], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 21;
    { const bool t = c.r[20].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00287828; } }
    mmi::mult(c, 0, c.r[6].w[0], c.r[16].w[0]);
    c.r[19].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00287714u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00287714u) [[unlikely]] return; }
L_00287714:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x00287718u);  goto L_0028771C; }
L_0028771C:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0])));
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[21].d[0] = c.lo.d[0];
    c.r[17].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287740u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00287740u) [[unlikely]] return; }
L_00287740:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[18], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287758u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 129u, depth + 1u); else { c.pc = 0x00295978u; return; } if (c.pc != 0x00287758u) [[unlikely]] return; }
L_00287758:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00287770u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00287770u) [[unlikely]] return; }
L_00287770:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00287788u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00287788u) [[unlikely]] return; }
L_00287788:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[19].w[0] - c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002877A4u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002877A4u) [[unlikely]] return; }
L_002877A4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x002877A8u);  goto L_002877AC; }
L_002877AC:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0])));
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[21].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002877D0u); set32(c.r[17], c.r[17].w[0] + c.r[21].w[0]);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002877D0u) [[unlikely]] return; }
L_002877D0:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002877E4u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 129u, depth + 1u); else { c.pc = 0x00295978u; return; } if (c.pc != 0x002877E4u) [[unlikely]] return; }
L_002877E4:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002877FCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002877FCu) [[unlikely]] return; }
L_002877FC:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00287814u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00287814u) [[unlikely]] return; }
L_00287814:
    mmi::div(c, 0, c.r[17].w[0], c.r[16].w[0]);
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x0028781Cu);  goto L_00287820; }
L_00287820:
    c.r[17].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[17].w[0] << 5);
    c.budget -= 2;
L_00287828:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00287850:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027DE10u | kUnwind; return; } [[clang::musttail]] return unit_005F(c, 91u, depth); }
L_002878B8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 56u), c.r[31].d[0]);  if (t) { goto L_002878F0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002878E8u); set32(c.r[4], c.r[4].w[0] + 27336u);  if (depth < kMaxDepth) unit_005F(c, 111u, depth + 1u); else { c.pc = 0x0027EF08u; return; } if (c.pc != 0x002878E8u) [[unlikely]] return; }
L_002878E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0028799C; } }
L_002878F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002878F8u);  if (depth < kMaxDepth) unit_0061(c, 254u, depth + 1u); else { c.pc = 0x00286230u; return; } if (c.pc != 0x002878F8u) [[unlikely]] return; }
L_002878F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 176u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 16u);
    set32(c.r[8], c.r[29].w[0] + 20u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287914u); set32(c.r[9], c.r[29].w[0] + 24u);  if (depth < kMaxDepth) unit_0060(c, 124u, depth + 1u); else { c.pc = 0x00280C20u; return; } if (c.pc != 0x00287914u) [[unlikely]] return; }
L_00287914:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0028799C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], ld32((c.r[29].w[0] + 16u)));  goto L_00287960; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028793Cu); set32(c.r[7], 0u + 16u);  if (depth < kMaxDepth) unit_005F(c, 122u, depth + 1u); else { c.pc = 0x0027F0D8u; return; } if (c.pc != 0x0028793Cu) [[unlikely]] return; }
L_0028793C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[4], c.r[4].w[0] + 27384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028794Cu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 114u, depth + 1u); else { c.pc = 0x0027EF60u; return; } if (c.pc != 0x0028794Cu) [[unlikely]] return; }
L_0028794C:
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], 0u + 6u);
    st16((c.r[16].w[0] + 96u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00287998; } }
L_00287960:
    set32(c.r[2], 0u + 1u);
    set32(c.r[6], ld32((c.r[29].w[0] + 20u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[16].w[0] + 176u)));
    st32((c.r[16].w[0] + 184u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 180u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 188u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 192u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287998u); st8((c.r[16].w[0] + 172u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0061(c, 368u, depth + 1u); else { c.pc = 0x00287540u; return; } if (c.pc != 0x00287998u) [[unlikely]] return; }
L_00287998:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0028799C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002879B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_002879D4; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002879F0; } }
L_002879D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 27424u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027EF08u | kUnwind; return; } [[clang::musttail]] return unit_005F(c, 111u, depth); }
L_002879F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002879F8u);  if (depth < kMaxDepth) unit_0061(c, 254u, depth + 1u); else { c.pc = 0x00286230u; return; } if (c.pc != 0x002879F8u) [[unlikely]] return; }
L_002879F8:
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287A04u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00287A04u) [[unlikely]] return; }
L_00287A04:
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    set32(c.r[6], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[16].w[0] + 180u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 192u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 172u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 184u), 0u);
    st32((c.r[16].w[0] + 188u), 0u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 18;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00287540u | kUnwind; return; } goto L_00287540; }
L_00287CB8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287CE4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 24u, depth + 1u); else { c.pc = 0x00284270u; return; } if (c.pc != 0x00287CE4u) [[unlikely]] return; }
L_00287CE4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287CF0u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 25u, depth + 1u); else { c.pc = 0x00284288u; return; } if (c.pc != 0x00287CF0u) [[unlikely]] return; }
L_00287CF0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287CFCu); c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 26u, depth + 1u); else { c.pc = 0x002842B8u; return; } if (c.pc != 0x00287CFCu) [[unlikely]] return; }
L_00287CFC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287D08u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 39u, depth + 1u); else { c.pc = 0x00284440u; return; } if (c.pc != 0x00287D08u) [[unlikely]] return; }
L_00287D08:
    set32(c.r[16], c.r[16].w[0] - c.r[19].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287D18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 15u, depth + 1u); else { c.pc = 0x00284160u; return; } if (c.pc != 0x00287D18u) [[unlikely]] return; }
L_00287D18:
    st32((c.r[18].w[0] + 144u), c.r[16].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287D28u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 14u, depth + 1u); else { c.pc = 0x00284150u; return; } if (c.pc != 0x00287D28u) [[unlikely]] return; }
L_00287D28:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287D34u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 16u, depth + 1u); else { c.pc = 0x00284170u; return; } if (c.pc != 0x00287D34u) [[unlikely]] return; }
L_00287D34:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287D40u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 9u, depth + 1u); else { c.pc = 0x002840E0u; return; } if (c.pc != 0x00287D40u) [[unlikely]] return; }
L_00287D40:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], c.r[5].w[0] + 32112u);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00284140u | kUnwind; return; } goto L_00284140; }
L_00287D70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287DA4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 24u, depth + 1u); else { c.pc = 0x00284270u; return; } if (c.pc != 0x00287DA4u) [[unlikely]] return; }
L_00287DA4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287DB0u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 25u, depth + 1u); else { c.pc = 0x00284288u; return; } if (c.pc != 0x00287DB0u) [[unlikely]] return; }
L_00287DB0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287DBCu); c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 26u, depth + 1u); else { c.pc = 0x002842B8u; return; } if (c.pc != 0x00287DBCu) [[unlikely]] return; }
L_00287DBC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_00287DF8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_00287DFC; }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287DECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0061(c, 14u, depth + 1u); else { c.pc = 0x00284150u; return; } if (c.pc != 0x00287DECu) [[unlikely]] return; }
L_00287DEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00287EE0; } }
    c.budget -= 1;
L_00287DF8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00287DFC:
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00287E08u); set32(c.r[6], ld32((c.r[17].w[0] + 80u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00287E08u) [[unlikely]] return; }
L_00287E08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 27664u);  if (t) { goto L_00287E28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287E28u);  if (depth < kMaxDepth) unit_005F(c, 111u, depth + 1u); else { c.pc = 0x0027EF08u; return; } if (c.pc != 0x00287E28u) [[unlikely]] return; }
L_00287E28:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00287E40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00287E40u) [[unlikely]] return; }
L_00287E40:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287E4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 15u, depth + 1u); else { c.pc = 0x00284160u; return; } if (c.pc != 0x00287E4Cu) [[unlikely]] return; }
L_00287E4C:
    set32(c.r[5], c.r[20].w[0] - c.r[19].w[0]);
    st32((c.r[17].w[0] + 144u), c.r[5].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287E5Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 14u, depth + 1u); else { c.pc = 0x00284150u; return; } if (c.pc != 0x00287E5Cu) [[unlikely]] return; }
L_00287E5C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287E68u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 16u, depth + 1u); else { c.pc = 0x00284170u; return; } if (c.pc != 0x00287E68u) [[unlikely]] return; }
L_00287E68:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287E74u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 9u, depth + 1u); else { c.pc = 0x002840E0u; return; } if (c.pc != 0x00287E74u) [[unlikely]] return; }
L_00287E74:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00287EC8; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00287E94u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00287E94u) [[unlikely]] return; }
L_00287E94:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00287EB0u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00287EB0u) [[unlikely]] return; }
L_00287EB0:
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00287EC8u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00287EC8u) [[unlikely]] return; }
L_00287EC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287ED0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 40u, depth + 1u); else { c.pc = 0x00284458u; return; } if (c.pc != 0x00287ED0u) [[unlikely]] return; }
L_00287ED0:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
L_00287EE0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00287F00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (t) { goto L_00287F78; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_00287F7C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287F30u);  if (depth < kMaxDepth) unit_0061(c, 25u, depth + 1u); else { c.pc = 0x00284288u; return; } if (c.pc != 0x00287F30u) [[unlikely]] return; }
L_00287F30:
    set32(c.r[5], 0u - 1u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[6].w[0] + 2047u);
    c.r[3].d[0] = c.r[6].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[6].d[0] = c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 108u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00287F70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287F58u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0061(c, 14u, depth + 1u); else { c.pc = 0x00284150u; return; } if (c.pc != 0x00287F58u) [[unlikely]] return; }
L_00287F58:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287F68u); c.r[5].d[0] = c.r[5].d[0] | 65535ull;  if (depth < kMaxDepth) unit_0061(c, 92u, depth + 1u); else { c.pc = 0x00284B38u; return; } if (c.pc != 0x00287F68u) [[unlikely]] return; }
L_00287F68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00287F7C; } }
L_00287F70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287F78u); set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 11));  if (depth < kMaxDepth) unit_0061(c, 74u, depth + 1u); else { c.pc = 0x00284978u; return; } if (c.pc != 0x00287F78u) [[unlikely]] return; }
L_00287F78:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00287F7C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00287F90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287FB8u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0061(c, 19u, depth + 1u); else { c.pc = 0x002841B0u; return; } if (c.pc != 0x00287FB8u) [[unlikely]] return; }
L_00287FB8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[18].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 2;
L_00287FC0:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00287FD0u); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_0061(c, 31u, depth + 1u); else { c.pc = 0x00284358u; return; } if (c.pc != 0x00287FD0u) [[unlikely]] return; }
L_00287FD0:
    c.r[3].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00287FC0u | kUnwind; return; } goto L_00287FC0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 66u)));  if (t) { [[clang::musttail]] return unit_0062(c, 8u, depth); } }
    set32(c.r[4], 0u - 128u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[4].d[0]; c.r[3].d[0] = ld16((c.r[16].w[0] + 66u));  if (t) { [[clang::musttail]] return unit_0062(c, 4u, depth); } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (t) { [[clang::musttail]] return unit_0062(c, 5u, depth); } }
    [[clang::musttail]] return unit_0062(c, 2u, depth);
}

}
