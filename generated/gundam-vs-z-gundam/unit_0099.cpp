#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0099[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0,
    5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0,
    0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0,
    0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0,
    19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0,
    29, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0,
    0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 59, 0, 0, 60, 0, 0, 61, 0, 0, 62, 0, 0, 63, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 0, 67, 0, 0, 68, 0, 0, 0,
    0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0,
    0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0,
    78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0,
    0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 87, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0,
    0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0,
    0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0,
    0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0,
    0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 117, 0, 0,
    0, 118, 0, 119, 0, 120, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0,
    0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0,
    133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0,
    0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0,
    0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0,
    151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0,
    0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0,
    0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0,
    0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0,
    0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0,
    181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0,
    0, 0, 186, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0,
    0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0,
    0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0,
    202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 0,
    0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0,
    0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0,
    217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0, 0,
    0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0,
    0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0,
    232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0,
    0, 0, 237, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0,
    0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0,
    251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0,
    255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 262,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0,
    265, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 275, 0,
    0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0,
    0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 290, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0,
    293, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0,
    0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0,
    306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310,
    0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 315, 0, 0, 0,
    0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0,
    321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 325,
    0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0,
    0, 0, 330, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 334, 0, 335, 0,
    0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0,
    340, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0,
    0, 0, 0, 0, 346, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0,
    0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0,
    357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 361,
    0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 366, 0, 0, 0,
    0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0,
    372, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376,
    0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0,
    0, 0, 381, 0, 382, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 385, 0, 386, 0,
    0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 389, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0,
    391, 0, 392, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 395, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0,
    0, 0, 0, 0, 397, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 401, 0,
    0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 405, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0099(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00364000;
    case 2u: goto L_00364020;
    case 3u: goto L_00364090;
    case 4u: goto L_003640E0;
    case 5u: goto L_00364100;
    case 6u: goto L_00364180;
    case 7u: goto L_003641A0;
    case 8u: goto L_003641C0;
    case 9u: goto L_003641F0;
    case 10u: goto L_00364210;
    case 11u: goto L_00364230;
    case 12u: goto L_00364250;
    case 13u: goto L_00364270;
    case 14u: goto L_00364290;
    case 15u: goto L_003642B0;
    case 16u: goto L_003642D8;
    case 17u: goto L_00364328;
    case 18u: goto L_00364378;
    case 19u: goto L_00364380;
    case 20u: goto L_003643A8;
    case 21u: goto L_00364400;
    case 22u: goto L_00364460;
    case 23u: goto L_00364488;
    case 24u: goto L_003644E0;
    case 25u: goto L_00364540;
    case 26u: goto L_00364550;
    case 27u: goto L_00364560;
    case 28u: goto L_003645F0;
    case 29u: goto L_00364600;
    case 30u: goto L_00364608;
    case 31u: goto L_00364620;
    case 32u: goto L_00364630;
    case 33u: goto L_00364664;
    case 34u: goto L_00364694;
    case 35u: goto L_003646A0;
    case 36u: goto L_003646A8;
    case 37u: goto L_003646C0;
    case 38u: goto L_003646E0;
    case 39u: goto L_00364704;
    case 40u: goto L_00364720;
    case 41u: goto L_00364740;
    case 42u: goto L_00364760;
    case 43u: goto L_00364778;
    case 44u: goto L_003647A0;
    case 45u: goto L_003647F0;
    case 46u: goto L_00364820;
    case 47u: goto L_00364880;
    case 48u: goto L_003648B0;
    case 49u: goto L_003648E0;
    case 50u: goto L_00364910;
    case 51u: goto L_00364970;
    case 52u: goto L_003649B0;
    case 53u: goto L_003649F0;
    case 54u: goto L_00364A20;
    case 55u: goto L_00364A50;
    case 56u: goto L_00364A80;
    case 57u: goto L_00364AB0;
    case 58u: goto L_00364B10;
    case 59u: goto L_00364B84;
    case 60u: goto L_00364B90;
    case 61u: goto L_00364B9C;
    case 62u: goto L_00364BA8;
    case 63u: goto L_00364BB4;
    case 64u: goto L_00364BC0;
    case 65u: goto L_00364BCC;
    case 66u: goto L_00364BD8;
    case 67u: goto L_00364BE4;
    case 68u: goto L_00364BF0;
    case 69u: goto L_00364C0C;
    case 70u: goto L_00364C2C;
    case 71u: goto L_00364C4C;
    case 72u: goto L_00364C6C;
    case 73u: goto L_00364C8C;
    case 74u: goto L_00364CAC;
    case 75u: goto L_00364CBC;
    case 76u: goto L_00364CD8;
    case 77u: goto L_00364CE4;
    case 78u: goto L_00364D00;
    case 79u: goto L_00364D1C;
    case 80u: goto L_00364D3C;
    case 81u: goto L_00364D60;
    case 82u: goto L_00364D70;
    case 83u: goto L_00364D90;
    case 84u: goto L_00364DC0;
    case 85u: goto L_00364DD0;
    case 86u: goto L_00364DE0;
    case 87u: goto L_00364E0C;
    case 88u: goto L_00364E14;
    case 89u: goto L_00364E20;
    case 90u: goto L_00364E3C;
    case 91u: goto L_00364E5C;
    case 92u: goto L_00364E6C;
    case 93u: goto L_00364E88;
    case 94u: goto L_00364E94;
    case 95u: goto L_00364EB0;
    case 96u: goto L_00364EBC;
    case 97u: goto L_00364ED8;
    case 98u: goto L_00364EF4;
    case 99u: goto L_00364F18;
    case 100u: goto L_00364F38;
    case 101u: goto L_00364F58;
    case 102u: goto L_00364F78;
    case 103u: goto L_00364F84;
    case 104u: goto L_00364FA4;
    case 105u: goto L_00364FB4;
    case 106u: goto L_00364FD4;
    case 107u: goto L_00364FF8;
    case 108u: goto L_00365018;
    case 109u: goto L_00365038;
    case 110u: goto L_00365048;
    case 111u: goto L_00365068;
    case 112u: goto L_00365098;
    case 113u: goto L_003650A8;
    case 114u: goto L_003650B8;
    case 115u: goto L_003650E4;
    case 116u: goto L_003650EC;
    case 117u: goto L_003650F4;
    case 118u: goto L_00365104;
    case 119u: goto L_0036510C;
    case 120u: goto L_00365114;
    case 121u: goto L_0036511C;
    case 122u: goto L_00365128;
    case 123u: goto L_00365134;
    case 124u: goto L_00365140;
    case 125u: goto L_0036514C;
    case 126u: goto L_00365158;
    case 127u: goto L_00365170;
    case 128u: goto L_00365190;
    case 129u: goto L_003652B0;
    case 130u: goto L_003652C4;
    case 131u: goto L_003652D8;
    case 132u: goto L_003652EC;
    case 133u: goto L_00365300;
    case 134u: goto L_00365314;
    case 135u: goto L_00365328;
    case 136u: goto L_0036533C;
    case 137u: goto L_00365350;
    case 138u: goto L_00365364;
    case 139u: goto L_00365378;
    case 140u: goto L_0036538C;
    case 141u: goto L_003653A0;
    case 142u: goto L_003653B4;
    case 143u: goto L_003653C8;
    case 144u: goto L_003653D8;
    case 145u: goto L_003653EC;
    case 146u: goto L_00365478;
    case 147u: goto L_00365494;
    case 148u: goto L_003654B8;
    case 149u: goto L_003654C0;
    case 150u: goto L_003654DC;
    case 151u: goto L_00365500;
    case 152u: goto L_00365520;
    case 153u: goto L_0036553C;
    case 154u: goto L_00365560;
    case 155u: goto L_00365568;
    case 156u: goto L_00365584;
    case 157u: goto L_003655A8;
    case 158u: goto L_003655B0;
    case 159u: goto L_003655CC;
    case 160u: goto L_003655F0;
    case 161u: goto L_003655F8;
    case 162u: goto L_00365614;
    case 163u: goto L_00365638;
    case 164u: goto L_00365640;
    case 165u: goto L_0036565C;
    case 166u: goto L_00365680;
    case 167u: goto L_003656A0;
    case 168u: goto L_003656BC;
    case 169u: goto L_003656E0;
    case 170u: goto L_003656E8;
    case 171u: goto L_00365704;
    case 172u: goto L_00365728;
    case 173u: goto L_00365748;
    case 174u: goto L_00365750;
    case 175u: goto L_0036576C;
    case 176u: goto L_00365790;
    case 177u: goto L_003657B0;
    case 178u: goto L_003657B8;
    case 179u: goto L_003657D4;
    case 180u: goto L_003657F8;
    case 181u: goto L_00365800;
    case 182u: goto L_0036581C;
    case 183u: goto L_00365840;
    case 184u: goto L_00365848;
    case 185u: goto L_00365864;
    case 186u: goto L_00365888;
    case 187u: goto L_00365890;
    case 188u: goto L_003658AC;
    case 189u: goto L_003658D0;
    case 190u: goto L_003658D8;
    case 191u: goto L_003658F4;
    case 192u: goto L_00365918;
    case 193u: goto L_00365938;
    case 194u: goto L_00365948;
    case 195u: goto L_00365958;
    case 196u: goto L_0036596C;
    case 197u: goto L_003659F8;
    case 198u: goto L_00365A14;
    case 199u: goto L_00365A38;
    case 200u: goto L_00365A40;
    case 201u: goto L_00365A5C;
    case 202u: goto L_00365A80;
    case 203u: goto L_00365AA0;
    case 204u: goto L_00365ABC;
    case 205u: goto L_00365AE0;
    case 206u: goto L_00365AE8;
    case 207u: goto L_00365B04;
    case 208u: goto L_00365B28;
    case 209u: goto L_00365B30;
    case 210u: goto L_00365B4C;
    case 211u: goto L_00365B70;
    case 212u: goto L_00365B78;
    case 213u: goto L_00365B94;
    case 214u: goto L_00365BB8;
    case 215u: goto L_00365BC0;
    case 216u: goto L_00365BDC;
    case 217u: goto L_00365C00;
    case 218u: goto L_00365C20;
    case 219u: goto L_00365C3C;
    case 220u: goto L_00365C60;
    case 221u: goto L_00365C68;
    case 222u: goto L_00365C84;
    case 223u: goto L_00365CA8;
    case 224u: goto L_00365CC8;
    case 225u: goto L_00365CD0;
    case 226u: goto L_00365CEC;
    case 227u: goto L_00365D10;
    case 228u: goto L_00365D30;
    case 229u: goto L_00365D38;
    case 230u: goto L_00365D54;
    case 231u: goto L_00365D78;
    case 232u: goto L_00365D80;
    case 233u: goto L_00365D9C;
    case 234u: goto L_00365DC0;
    case 235u: goto L_00365DC8;
    case 236u: goto L_00365DE4;
    case 237u: goto L_00365E08;
    case 238u: goto L_00365E10;
    case 239u: goto L_00365E2C;
    case 240u: goto L_00365E50;
    case 241u: goto L_00365E58;
    case 242u: goto L_00365E74;
    case 243u: goto L_00365E98;
    case 244u: goto L_00365EB8;
    case 245u: goto L_00365EC8;
    case 246u: goto L_00365ED8;
    case 247u: goto L_00365EEC;
    case 248u: goto L_00366144;
    case 249u: goto L_00366160;
    case 250u: goto L_00366170;
    case 251u: goto L_00366180;
    case 252u: goto L_00366194;
    case 253u: goto L_003663E0;
    case 254u: goto L_003663F0;
    case 255u: goto L_00366400;
    case 256u: goto L_00366414;
    case 257u: goto L_003664A0;
    case 258u: goto L_003664B0;
    case 259u: goto L_003664C4;
    case 260u: goto L_003664E0;
    case 261u: goto L_003664F4;
    case 262u: goto L_003664FC;
    case 263u: goto L_00366578;
    case 264u: goto L_0036666C;
    case 265u: goto L_00366680;
    case 266u: goto L_00366690;
    case 267u: goto L_003666A0;
    case 268u: goto L_003666B4;
    case 269u: goto L_00366714;
    case 270u: goto L_0036671C;
    case 271u: goto L_00366730;
    case 272u: goto L_00366744;
    case 273u: goto L_003667D8;
    case 274u: goto L_003667E8;
    case 275u: goto L_003667F8;
    case 276u: goto L_00366808;
    case 277u: goto L_0036681C;
    case 278u: goto L_00366848;
    case 279u: goto L_00366880;
    case 280u: goto L_00366920;
    case 281u: goto L_00366990;
    case 282u: goto L_00366A38;
    case 283u: goto L_00366A48;
    case 284u: goto L_00366B08;
    case 285u: goto L_00366B48;
    case 286u: goto L_00366BF0;
    case 287u: goto L_00366C10;
    case 288u: goto L_00366C20;
    case 289u: goto L_00366C34;
    case 290u: goto L_00366C3C;
    case 291u: goto L_00366C44;
    case 292u: goto L_00366EEC;
    case 293u: goto L_00366F00;
    case 294u: goto L_00366F10;
    case 295u: goto L_00366F24;
    case 296u: goto L_00366F38;
    case 297u: goto L_00366F4C;
    case 298u: goto L_00366F60;
    case 299u: goto L_00366F74;
    case 300u: goto L_00366F88;
    case 301u: goto L_00366F98;
    case 302u: goto L_00366FAC;
    case 303u: goto L_00367038;
    case 304u: goto L_00367054;
    case 305u: goto L_00367078;
    case 306u: goto L_00367080;
    case 307u: goto L_0036709C;
    case 308u: goto L_003670C0;
    case 309u: goto L_003670E0;
    case 310u: goto L_003670FC;
    case 311u: goto L_00367120;
    case 312u: goto L_00367128;
    case 313u: goto L_00367144;
    case 314u: goto L_00367168;
    case 315u: goto L_00367170;
    case 316u: goto L_0036718C;
    case 317u: goto L_003671B0;
    case 318u: goto L_003671B8;
    case 319u: goto L_003671D4;
    case 320u: goto L_003671F8;
    case 321u: goto L_00367200;
    case 322u: goto L_0036721C;
    case 323u: goto L_00367240;
    case 324u: goto L_00367260;
    case 325u: goto L_0036727C;
    case 326u: goto L_003672A0;
    case 327u: goto L_003672A8;
    case 328u: goto L_003672C4;
    case 329u: goto L_003672E8;
    case 330u: goto L_00367308;
    case 331u: goto L_00367310;
    case 332u: goto L_0036732C;
    case 333u: goto L_00367350;
    case 334u: goto L_00367370;
    case 335u: goto L_00367378;
    case 336u: goto L_00367394;
    case 337u: goto L_003673B8;
    case 338u: goto L_003673C0;
    case 339u: goto L_003673DC;
    case 340u: goto L_00367400;
    case 341u: goto L_00367408;
    case 342u: goto L_00367424;
    case 343u: goto L_00367448;
    case 344u: goto L_00367450;
    case 345u: goto L_0036746C;
    case 346u: goto L_00367490;
    case 347u: goto L_00367498;
    case 348u: goto L_003674B4;
    case 349u: goto L_003674D8;
    case 350u: goto L_003674F8;
    case 351u: goto L_00367508;
    case 352u: goto L_00367518;
    case 353u: goto L_0036752C;
    case 354u: goto L_003675B8;
    case 355u: goto L_003675D4;
    case 356u: goto L_003675F8;
    case 357u: goto L_00367600;
    case 358u: goto L_0036761C;
    case 359u: goto L_00367640;
    case 360u: goto L_00367660;
    case 361u: goto L_0036767C;
    case 362u: goto L_003676A0;
    case 363u: goto L_003676A8;
    case 364u: goto L_003676C4;
    case 365u: goto L_003676E8;
    case 366u: goto L_003676F0;
    case 367u: goto L_0036770C;
    case 368u: goto L_00367730;
    case 369u: goto L_00367738;
    case 370u: goto L_00367754;
    case 371u: goto L_00367778;
    case 372u: goto L_00367780;
    case 373u: goto L_0036779C;
    case 374u: goto L_003677C0;
    case 375u: goto L_003677E0;
    case 376u: goto L_003677FC;
    case 377u: goto L_00367820;
    case 378u: goto L_00367828;
    case 379u: goto L_00367844;
    case 380u: goto L_00367868;
    case 381u: goto L_00367888;
    case 382u: goto L_00367890;
    case 383u: goto L_003678AC;
    case 384u: goto L_003678D0;
    case 385u: goto L_003678F0;
    case 386u: goto L_003678F8;
    case 387u: goto L_00367914;
    case 388u: goto L_00367938;
    case 389u: goto L_00367940;
    case 390u: goto L_0036795C;
    case 391u: goto L_00367980;
    case 392u: goto L_00367988;
    case 393u: goto L_003679A4;
    case 394u: goto L_003679C8;
    case 395u: goto L_003679D0;
    case 396u: goto L_003679EC;
    case 397u: goto L_00367A10;
    case 398u: goto L_00367A18;
    case 399u: goto L_00367A34;
    case 400u: goto L_00367A58;
    case 401u: goto L_00367A78;
    case 402u: goto L_00367A88;
    case 403u: goto L_00367A98;
    case 404u: goto L_00367AAC;
    case 405u: goto L_00367D04;
    case 406u: goto L_00367D20;
    case 407u: goto L_00367D30;
    case 408u: goto L_00367D40;
    case 409u: goto L_00367D54;
    case 410u: goto L_00367FA0;
    case 411u: goto L_00367FB0;
    default: bad_entry(c, 0x00364000u); return;
    }
L_00364000:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 5004u)));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 5004u), c.r[3].w[0]);  c.pc = t; return; }
L_00364020:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    st8((c.r[1].w[0] + 5014u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00080000u);
    st8((c.r[1].w[0] + 5015u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);
    st8((c.r[1].w[0] + 5002u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5003u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[6], ld32((c.r[1].w[0] + 5004u)));
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st32((c.r[1].w[0] + 5004u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 5004u)));
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st32((c.r[1].w[0] + 5004u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 5004u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 5004u), c.r[3].w[0]);  c.pc = t; return; }
L_00364090:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5016u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5017u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5018u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5019u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5020u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5021u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 5004u)));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 5004u), c.r[3].w[0]);  c.pc = t; return; }
L_003640E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 5004u)));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 5004u), c.r[3].w[0]);  c.pc = t; return; }
L_00364100:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    st8((c.r[1].w[0] + 5016u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5017u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5018u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5019u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5020u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5021u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 5004u)));
    c.r[4].d[0] = c.r[4].d[0] | 16384ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st32((c.r[1].w[0] + 5004u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 5004u)));
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st32((c.r[1].w[0] + 5004u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 5004u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 29;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 5004u), c.r[3].w[0]);  c.pc = t; return; }
L_00364180:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x04000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 5004u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 5004u), c.r[3].w[0]);  c.pc = t; return; }
L_003641A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 5004u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 5004u), c.r[3].w[0]);  c.pc = t; return; }
L_003641C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 5004u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st32((c.r[1].w[0] + 5004u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 5004u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 5004u), c.r[3].w[0]);  c.pc = t; return; }
L_003641F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 5004u)));
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 5004u), c.r[3].w[0]);  c.pc = t; return; }
L_00364210:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 5004u)));
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 5004u), c.r[3].w[0]);  c.pc = t; return; }
L_00364230:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 5004u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 5004u), c.r[3].w[0]);  c.pc = t; return; }
L_00364250:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 5004u)));
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 5004u), c.r[3].w[0]);  c.pc = t; return; }
L_00364270:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 5004u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 5004u), c.r[3].w[0]);  c.pc = t; return; }
L_00364290:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 5004u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 5004u), c.r[3].w[0]);  c.pc = t; return; }
L_003642B0:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(160ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00364378; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 8128u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00364000u < 16384u) { entry = entries_0099[(t - 0x00364000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003642D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5011u)));
    c.r[1].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00364378; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[5], c.r[5].w[0] + 5040u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + 5048u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5011u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5011u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5011u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00364378; } }
L_00364328:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5010u)));
    c.r[1].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00364378; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[5], c.r[5].w[0] + 5024u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + 5032u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5010u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5010u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5010u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 15;
L_00364378:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00364380:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00364450; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 8768u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00364000u < 16384u) { entry = entries_0099[(t - 0x00364000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003643A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5010u)));
    c.r[1].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00364450; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], c.r[3].w[0] + 5024u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5010u)));
    set32(c.r[3], c.r[3].w[0] + 5032u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5010u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5010u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00364450; } }
    c.budget -= 1;
L_00364400:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5011u)));
    c.r[1].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00364450; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], c.r[3].w[0] + 5040u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5011u)));
    set32(c.r[3], c.r[3].w[0] + 5048u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5011u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5011u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 15;
L_00364450:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00364460:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00364530; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 8832u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00364000u < 16384u) { entry = entries_0099[(t - 0x00364000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00364488:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5011u)));
    c.r[1].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00364530; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], c.r[3].w[0] + 5040u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5011u)));
    set32(c.r[3], c.r[3].w[0] + 5048u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5011u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5011u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00364530; } }
    c.budget -= 1;
L_003644E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5010u)));
    c.r[1].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00364530; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], c.r[3].w[0] + 5024u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5010u)));
    set32(c.r[3], c.r[3].w[0] + 5032u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5010u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5010u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 15;
L_00364530:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00364540:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00214260u | kUnwind; return; } [[clang::musttail]] return unit_0045(c, 24u, depth); }
L_00364550:
    c.r[6].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003645E0; } }
    c.budget -= 1;
L_00364560:
    c.r[7].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[7].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[7].sd[0] < 160ll ? 1ull : 0ull;  if (t) { goto L_00364578; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00364590; } }
L_00364578:
    c.r[3].d[0] = c.r[7].sd[0] < 224ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[7].sd[0] < 256ll ? 1ull : 0ull;  if (t) { goto L_003645A8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003645A8; } }
    c.budget -= 1;
L_00364590:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { goto L_003645D0; } }
L_003645A8:
    set32(c.r[3], ld32((c.r[28].w[0] - 27752u)));
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 1u));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 10;
L_003645D0:
    c.r[6].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00364560u | kUnwind; return; } goto L_00364560; } }
    c.budget -= 1;
L_003645E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_003645F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364600u);  if (depth < kMaxDepth) unit_008B(c, 87u, depth + 1u); else { c.pc = 0x0032C7C0u; return; } if (c.pc != 0x00364600u) [[unlikely]] return; }
L_00364600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364608u);  if (depth < kMaxDepth) unit_00A2(c, 326u, depth + 1u); else { c.pc = 0x0038AD10u; return; } if (c.pc != 0x00364608u) [[unlikely]] return; }
L_00364608:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00364620:
    c.budget -= 2;
    { c.r[4].d[0] = 0ull + 0ull;  [[clang::musttail]] return unit_00A2(c, 336u, depth); }
L_00364630:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] << 48;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364664u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (depth < kMaxDepth) unit_00A2(c, 337u, depth + 1u); else { c.pc = 0x0038AE50u; return; } if (c.pc != 0x00364664u) [[unlikely]] return; }
L_00364664:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 24816u);
    c.r[6].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 24820u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364694u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 323u, depth + 1u); else { c.pc = 0x003374D0u; return; } if (c.pc != 0x00364694u) [[unlikely]] return; }
L_00364694:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003646A0u); set32(c.r[4], c.r[4].w[0] + 9536u);  if (depth < kMaxDepth) unit_00A2(c, 338u, depth + 1u); else { c.pc = 0x0038AE70u; return; } if (c.pc != 0x003646A0u) [[unlikely]] return; }
L_003646A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003646A8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00A2(c, 336u, depth + 1u); else { c.pc = 0x0038AE10u; return; } if (c.pc != 0x003646A8u) [[unlikely]] return; }
L_003646A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003646C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F70000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] | 57344ull;
    c.budget -= 5;
    { set32(c.r[6], 0u + 7148u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011AB50u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 201u, depth); }
L_003646E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22508u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00364730; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00364718; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364704u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x00364704u) [[unlikely]] return; }
L_00364704:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00364730; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 22508u), 0u);  if (t) { goto L_00364730; } }
    c.budget -= 1;
L_00364718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364720u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x00364720u) [[unlikely]] return; }
L_00364720:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00364730; } }
    st32((c.r[28].w[0] - 22508u), 0u);
    c.budget -= 2;
L_00364730:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00364740:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[17], c.r[17].w[0] + 24864u);
    set32(c.r[16], 0u + 1u);
    c.budget -= 8;
L_00364760:
    set32(c.r[6], ld32((c.r[17].w[0])));
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364778u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 43u, depth + 1u); else { c.pc = 0x003A85D0u; return; } if (c.pc != 0x00364778u) [[unlikely]] return; }
L_00364778:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00364760u | kUnwind; return; } goto L_00364760; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003647A0:
    c.r[3].d[0] = c.r[4].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003647BC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[1].w[0] + 5013u));  if (t) { goto L_003647C4; } }
L_003647BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 5015u));
    c.budget -= 2;
L_003647C4:
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00364AE8; } }
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 9152u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0];  c.pc = t; if (t - 0x00364000u < 16384u) { entry = entries_0099[(t - 0x00364000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003647F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[6].d[0] = ld8((c.r[1].w[0] + 5001u));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00364808; } }
    set32(c.r[4], 0u + 66u);
    c.budget -= 2;
L_00364808:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00364AE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 110u);  if (t) { goto L_00364AE8; } }
    c.budget -= 1;
L_00364820:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00364838; } }
    set32(c.r[4], 0u - 88u);
    c.budget -= 2;
L_00364838:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00364848; } }
    set32(c.r[4], 0u - 52u);
    c.budget -= 1;
L_00364848:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00364858; } }
    set32(c.r[4], 0u - 16u);
    c.budget -= 1;
L_00364858:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00364868; } }
    set32(c.r[4], 0u + 20u);
    c.budget -= 1;
L_00364868:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00364AE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 56u);  if (t) { goto L_00364AE8; } }
    c.budget -= 1;
L_00364880:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00364898; } }
    set32(c.r[4], 0u - 88u);
    c.budget -= 2;
L_00364898:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00364AE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 16u);  if (t) { goto L_00364AE8; } }
    c.budget -= 1;
L_003648B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_003648C8; } }
    set32(c.r[4], 0u + 110u);
    c.budget -= 2;
L_003648C8:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00364AE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 154u);  if (t) { goto L_00364AE8; } }
    c.budget -= 1;
L_003648E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_003648F8; } }
    set32(c.r[4], 0u + 66u);
    c.budget -= 2;
L_003648F8:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00364AE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 110u);  if (t) { goto L_00364AE8; } }
    c.budget -= 1;
L_00364910:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00364928; } }
    set32(c.r[4], 0u - 88u);
    c.budget -= 2;
L_00364928:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00364938; } }
    set32(c.r[4], 0u - 52u);
    c.budget -= 1;
L_00364938:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00364948; } }
    set32(c.r[4], 0u - 16u);
    c.budget -= 1;
L_00364948:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00364958; } }
    set32(c.r[4], 0u + 20u);
    c.budget -= 1;
L_00364958:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00364AE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 56u);  if (t) { goto L_00364AE8; } }
    c.budget -= 1;
L_00364970:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00364988; } }
    set32(c.r[4], 0u + 66u);
    c.budget -= 2;
L_00364988:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00364998; } }
    set32(c.r[4], 0u + 110u);
    c.budget -= 1;
L_00364998:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00364AE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 154u);  if (t) { goto L_00364AE8; } }
    c.budget -= 1;
L_003649B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_003649C8; } }
    set32(c.r[4], 0u + 66u);
    c.budget -= 2;
L_003649C8:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_003649D8; } }
    set32(c.r[4], 0u + 110u);
    c.budget -= 1;
L_003649D8:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00364AE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 154u);  if (t) { goto L_00364AE8; } }
    c.budget -= 1;
L_003649F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00364A08; } }
    set32(c.r[4], 0u + 110u);
    c.budget -= 2;
L_00364A08:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00364AE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 154u);  if (t) { goto L_00364AE8; } }
    c.budget -= 1;
L_00364A20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00364A38; } }
    set32(c.r[4], 0u + 66u);
    c.budget -= 2;
L_00364A38:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00364AE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 110u);  if (t) { goto L_00364AE8; } }
    c.budget -= 1;
L_00364A50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00364A68; } }
    set32(c.r[4], 0u - 66u);
    c.budget -= 2;
L_00364A68:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00364AE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 22u);  if (t) { goto L_00364AE8; } }
    c.budget -= 1;
L_00364A80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00364A98; } }
    set32(c.r[4], 0u + 66u);
    c.budget -= 2;
L_00364A98:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00364AE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 110u);  if (t) { goto L_00364AE8; } }
    c.budget -= 1;
L_00364AB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00364AC8; } }
    set32(c.r[4], 0u + 22u);
    c.budget -= 2;
L_00364AC8:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00364AD8; } }
    set32(c.r[4], 0u + 66u);
    c.budget -= 1;
L_00364AD8:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00364AE8; } }
    set32(c.r[4], 0u + 110u);
    c.budget -= 1;
L_00364AE8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00364AF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 5056u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_00364B00; } }
L_00364AF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 5058u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 2;
L_00364B00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00364B10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5002u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5002u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00364B78; } }
    st8((c.r[1].w[0] + 5002u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5003u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5003u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00364B78; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5003u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_00364B78:
    set32(c.r[4], 0u + 14u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364B84u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x00364B84u) [[unlikely]] return; }
L_00364B84:
    set32(c.r[4], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364B90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x00364B90u) [[unlikely]] return; }
L_00364B90:
    set32(c.r[4], 0u + 98u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364B9Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x00364B9Cu) [[unlikely]] return; }
L_00364B9C:
    set32(c.r[4], 0u + 13u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364BA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x00364BA8u) [[unlikely]] return; }
L_00364BA8:
    set32(c.r[4], 0u + 95u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364BB4u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x00364BB4u) [[unlikely]] return; }
L_00364BB4:
    set32(c.r[4], 0u + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364BC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x00364BC0u) [[unlikely]] return; }
L_00364BC0:
    set32(c.r[4], 0u + 94u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364BCCu); set32(c.r[5], 0u + 50u);  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x00364BCCu) [[unlikely]] return; }
L_00364BCC:
    set32(c.r[4], 0u + 99u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364BD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x00364BD8u) [[unlikely]] return; }
L_00364BD8:
    set32(c.r[4], 0u + 108u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364BE4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x00364BE4u) [[unlikely]] return; }
L_00364BE4:
    set32(c.r[4], 0u + 109u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364BF0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x00364BF0u) [[unlikely]] return; }
L_00364BF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 5004u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00364C10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364C0Cu);  if (depth < kMaxDepth) unit_0099(c, 128u, depth + 1u); else { c.pc = 0x00365190u; return; } if (c.pc != 0x00364C0Cu) [[unlikely]] return; }
L_00364C0C:
    c.budget -= 1;
L_00364C10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 5004u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_00364C30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364C2Cu);  if (depth < kMaxDepth) unit_0099(c, 128u, depth + 1u); else { c.pc = 0x00365190u; return; } if (c.pc != 0x00364C2Cu) [[unlikely]] return; }
L_00364C2C:
    c.budget -= 1;
L_00364C30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 5004u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 4u);  if (t) { goto L_00364C50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364C4Cu);  if (depth < kMaxDepth) unit_0099(c, 128u, depth + 1u); else { c.pc = 0x00365190u; return; } if (c.pc != 0x00364C4Cu) [[unlikely]] return; }
L_00364C4C:
    c.budget -= 1;
L_00364C50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 5004u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 8u);  if (t) { goto L_00364C70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364C6Cu);  if (depth < kMaxDepth) unit_0099(c, 128u, depth + 1u); else { c.pc = 0x00365190u; return; } if (c.pc != 0x00364C6Cu) [[unlikely]] return; }
L_00364C6C:
    c.budget -= 1;
L_00364C70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 5004u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 16u);  if (t) { goto L_00364C90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364C8Cu);  if (depth < kMaxDepth) unit_0099(c, 128u, depth + 1u); else { c.pc = 0x00365190u; return; } if (c.pc != 0x00364C8Cu) [[unlikely]] return; }
L_00364C8C:
    c.budget -= 1;
L_00364C90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 5004u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_00364CB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364CACu);  if (depth < kMaxDepth) unit_0099(c, 128u, depth + 1u); else { c.pc = 0x00365190u; return; } if (c.pc != 0x00364CACu) [[unlikely]] return; }
L_00364CAC:
    c.budget -= 1;
L_00364CB0:
    set32(c.r[4], 0u + 99u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364CBCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x00364CBCu) [[unlikely]] return; }
L_00364CBC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 5004u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_00364CD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364CD8u);  if (depth < kMaxDepth) unit_0099(c, 128u, depth + 1u); else { c.pc = 0x00365190u; return; } if (c.pc != 0x00364CD8u) [[unlikely]] return; }
L_00364CD8:
    set32(c.r[4], 0u + 99u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364CE4u); c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x00364CE4u) [[unlikely]] return; }
L_00364CE4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 5004u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 128u);  if (t) { goto L_00364D00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364D00u);  if (depth < kMaxDepth) unit_0099(c, 128u, depth + 1u); else { c.pc = 0x00365190u; return; } if (c.pc != 0x00364D00u) [[unlikely]] return; }
L_00364D00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 5004u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 256u);  if (t) { goto L_00364D20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364D1Cu);  if (depth < kMaxDepth) unit_0099(c, 128u, depth + 1u); else { c.pc = 0x00365190u; return; } if (c.pc != 0x00364D1Cu) [[unlikely]] return; }
L_00364D1C:
    c.budget -= 1;
L_00364D20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 5004u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 512u);  if (t) { goto L_00364D40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364D3Cu);  if (depth < kMaxDepth) unit_0099(c, 128u, depth + 1u); else { c.pc = 0x00365190u; return; } if (c.pc != 0x00364D3Cu) [[unlikely]] return; }
L_00364D3C:
    c.budget -= 1;
L_00364D40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 5004u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00364D60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364D60u);  if (depth < kMaxDepth) unit_0099(c, 128u, depth + 1u); else { c.pc = 0x00365190u; return; } if (c.pc != 0x00364D60u) [[unlikely]] return; }
L_00364D60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44480000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364D70u);  if (depth < kMaxDepth) unit_00AA(c, 47u, depth + 1u); else { c.pc = 0x003A8740u; return; } if (c.pc != 0x00364D70u) [[unlikely]] return; }
L_00364D70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5010u)));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00364DF8; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[17], c.r[17].w[0] + 4960u);
    c.budget -= 3;
L_00364D90:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 72u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00364DD8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00364DC8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00364DB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00364DE0; } }
L_00364DB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364DC0u); c.r[4].d[0] = ld8((c.r[17].w[0] + 64u));  if (depth < kMaxDepth) unit_009A(c, 34u, depth + 1u); else { c.pc = 0x00368500u; return; } if (c.pc != 0x00364DC0u) [[unlikely]] return; }
L_00364DC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00364DE0; } }
L_00364DC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364DD0u); c.r[4].d[0] = ld8((c.r[17].w[0] + 64u));  if (depth < kMaxDepth) unit_009A(c, 40u, depth + 1u); else { c.pc = 0x003686F0u; return; } if (c.pc != 0x00364DD0u) [[unlikely]] return; }
L_00364DD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00364DE0; } }
L_00364DD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364DE0u); c.r[4].d[0] = ld8((c.r[17].w[0] + 64u));  if (depth < kMaxDepth) unit_0098(c, 561u, depth + 1u); else { c.pc = 0x00363A50u; return; } if (c.pc != 0x00364DE0u) [[unlikely]] return; }
L_00364DE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5010u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00364D90u | kUnwind; return; } goto L_00364D90; } }
L_00364DF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], 0u + 108u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364E0Cu); st8((c.r[1].w[0] + 5010u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x00364E0Cu) [[unlikely]] return; }
L_00364E0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364E14u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_00AA(c, 67u, depth + 1u); else { c.pc = 0x003A8B70u; return; } if (c.pc != 0x00364E14u) [[unlikely]] return; }
L_00364E14:
    set32(c.r[4], 0u + 108u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364E20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x00364E20u) [[unlikely]] return; }
L_00364E20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 5004u)));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1024u);  if (t) { goto L_00364E40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364E3Cu);  if (depth < kMaxDepth) unit_0099(c, 128u, depth + 1u); else { c.pc = 0x00365190u; return; } if (c.pc != 0x00364E3Cu) [[unlikely]] return; }
L_00364E3C:
    c.budget -= 1;
L_00364E40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 5004u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 2048u);  if (t) { goto L_00364E60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364E5Cu);  if (depth < kMaxDepth) unit_0099(c, 128u, depth + 1u); else { c.pc = 0x00365190u; return; } if (c.pc != 0x00364E5Cu) [[unlikely]] return; }
L_00364E5C:
    c.budget -= 1;
L_00364E60:
    set32(c.r[4], 0u + 99u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364E6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x00364E6Cu) [[unlikely]] return; }
L_00364E6C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 5004u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 4096u);  if (t) { goto L_00364E88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364E88u);  if (depth < kMaxDepth) unit_0099(c, 128u, depth + 1u); else { c.pc = 0x00365190u; return; } if (c.pc != 0x00364E88u) [[unlikely]] return; }
L_00364E88:
    set32(c.r[4], 0u + 99u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364E94u); c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x00364E94u) [[unlikely]] return; }
L_00364E94:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 5004u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 8192u);  if (t) { goto L_00364EB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364EB0u);  if (depth < kMaxDepth) unit_0099(c, 128u, depth + 1u); else { c.pc = 0x00365190u; return; } if (c.pc != 0x00364EB0u) [[unlikely]] return; }
L_00364EB0:
    set32(c.r[4], 0u + 99u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364EBCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x00364EBCu) [[unlikely]] return; }
L_00364EBC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 5004u)));
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 16384u);  if (t) { goto L_00364ED8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364ED8u);  if (depth < kMaxDepth) unit_0099(c, 128u, depth + 1u); else { c.pc = 0x00365190u; return; } if (c.pc != 0x00364ED8u) [[unlikely]] return; }
L_00364ED8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 5004u)));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull | 32768ull;  if (t) { goto L_00364EF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364EF4u);  if (depth < kMaxDepth) unit_0099(c, 128u, depth + 1u); else { c.pc = 0x00365190u; return; } if (c.pc != 0x00364EF4u) [[unlikely]] return; }
L_00364EF4:
    c.budget -= 1;
L_00364EF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 5004u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00364F18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364F18u);  if (depth < kMaxDepth) unit_0099(c, 128u, depth + 1u); else { c.pc = 0x00365190u; return; } if (c.pc != 0x00364F18u) [[unlikely]] return; }
L_00364F18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 5004u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x04000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00364F38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364F38u);  if (depth < kMaxDepth) unit_0099(c, 128u, depth + 1u); else { c.pc = 0x00365190u; return; } if (c.pc != 0x00364F38u) [[unlikely]] return; }
L_00364F38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 5004u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00364F58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364F58u);  if (depth < kMaxDepth) unit_0099(c, 128u, depth + 1u); else { c.pc = 0x00365190u; return; } if (c.pc != 0x00364F58u) [[unlikely]] return; }
L_00364F58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 5004u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00364F78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364F78u);  if (depth < kMaxDepth) unit_0099(c, 128u, depth + 1u); else { c.pc = 0x00365190u; return; } if (c.pc != 0x00364F78u) [[unlikely]] return; }
L_00364F78:
    set32(c.r[4], 0u + 99u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364F84u); c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x00364F84u) [[unlikely]] return; }
L_00364F84:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 5004u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00364FA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364FA4u);  if (depth < kMaxDepth) unit_0099(c, 128u, depth + 1u); else { c.pc = 0x00365190u; return; } if (c.pc != 0x00364FA4u) [[unlikely]] return; }
L_00364FA4:
    c.budget -= 1;
L_00364FA8:
    set32(c.r[4], 0u + 99u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364FB4u); c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x00364FB4u) [[unlikely]] return; }
L_00364FB4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 5004u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00364FD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364FD4u);  if (depth < kMaxDepth) unit_0099(c, 128u, depth + 1u); else { c.pc = 0x00365190u; return; } if (c.pc != 0x00364FD4u) [[unlikely]] return; }
L_00364FD4:
    c.budget -= 1;
L_00364FD8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 5004u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00364FF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364FF8u);  if (depth < kMaxDepth) unit_0099(c, 128u, depth + 1u); else { c.pc = 0x00365190u; return; } if (c.pc != 0x00364FF8u) [[unlikely]] return; }
L_00364FF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 5004u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00365018; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365018u);  if (depth < kMaxDepth) unit_0099(c, 128u, depth + 1u); else { c.pc = 0x00365190u; return; } if (c.pc != 0x00365018u) [[unlikely]] return; }
L_00365018:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 5004u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00365038; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365038u);  if (depth < kMaxDepth) unit_0099(c, 128u, depth + 1u); else { c.pc = 0x00365190u; return; } if (c.pc != 0x00365038u) [[unlikely]] return; }
L_00365038:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365048u);  if (depth < kMaxDepth) unit_00AA(c, 47u, depth + 1u); else { c.pc = 0x003A8740u; return; } if (c.pc != 0x00365048u) [[unlikely]] return; }
L_00365048:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5011u)));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003650D0; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[17], c.r[17].w[0] + 4960u);
    c.budget -= 3;
L_00365068:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 88u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003650B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003650A0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00365090; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003650B8; } }
L_00365090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365098u); c.r[4].d[0] = ld8((c.r[17].w[0] + 80u));  if (depth < kMaxDepth) unit_009A(c, 34u, depth + 1u); else { c.pc = 0x00368500u; return; } if (c.pc != 0x00365098u) [[unlikely]] return; }
L_00365098:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003650B8; } }
L_003650A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003650A8u); c.r[4].d[0] = ld8((c.r[17].w[0] + 80u));  if (depth < kMaxDepth) unit_009A(c, 40u, depth + 1u); else { c.pc = 0x003686F0u; return; } if (c.pc != 0x003650A8u) [[unlikely]] return; }
L_003650A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003650B8; } }
L_003650B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003650B8u); c.r[4].d[0] = ld8((c.r[17].w[0] + 80u));  if (depth < kMaxDepth) unit_0098(c, 561u, depth + 1u); else { c.pc = 0x00363A50u; return; } if (c.pc != 0x003650B8u) [[unlikely]] return; }
L_003650B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5011u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00365068u | kUnwind; return; } goto L_00365068; } }
L_003650D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], 0u + 108u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003650E4u); st8((c.r[1].w[0] + 5011u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x003650E4u) [[unlikely]] return; }
L_003650E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003650ECu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00AA(c, 67u, depth + 1u); else { c.pc = 0x003A8B70u; return; } if (c.pc != 0x003650ECu) [[unlikely]] return; }
L_003650EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003650F4u);  if (depth < kMaxDepth) unit_008B(c, 87u, depth + 1u); else { c.pc = 0x0032C7C0u; return; } if (c.pc != 0x003650F4u) [[unlikely]] return; }
L_003650F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365104u);  if (depth < kMaxDepth) unit_00AA(c, 47u, depth + 1u); else { c.pc = 0x003A8740u; return; } if (c.pc != 0x00365104u) [[unlikely]] return; }
L_00365104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036510Cu);  if (depth < kMaxDepth) unit_00A2(c, 329u, depth + 1u); else { c.pc = 0x0038AD70u; return; } if (c.pc != 0x0036510Cu) [[unlikely]] return; }
L_0036510C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365114u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 67u, depth + 1u); else { c.pc = 0x003A8B70u; return; } if (c.pc != 0x00365114u) [[unlikely]] return; }
L_00365114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036511Cu);  if (depth < kMaxDepth) unit_0099(c, 38u, depth + 1u); else { c.pc = 0x003646E0u; return; } if (c.pc != 0x0036511Cu) [[unlikely]] return; }
L_0036511C:
    set32(c.r[4], 0u + 95u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365128u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x00365128u) [[unlikely]] return; }
L_00365128:
    set32(c.r[4], 0u + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365134u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x00365134u) [[unlikely]] return; }
L_00365134:
    set32(c.r[4], 0u + 94u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365140u); set32(c.r[5], 0u + 50u);  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x00365140u) [[unlikely]] return; }
L_00365140:
    set32(c.r[4], 0u + 108u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036514Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x0036514Cu) [[unlikely]] return; }
L_0036514C:
    set32(c.r[4], 0u + 99u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365158u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 103u, depth + 1u); else { c.pc = 0x0032C8B0u; return; } if (c.pc != 0x00365158u) [[unlikely]] return; }
L_00365158:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00365170:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 4880u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { set32(c.r[4], 0u + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0032C8B0u | kUnwind; return; } [[clang::musttail]] return unit_008B(c, 103u, depth); }
L_00365190:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00367D28; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { goto L_00367A80; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00367500; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);  if (t) { goto L_00366F80; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00366F58; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_00366F30; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00366F08; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x04000000u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);  if (t) { goto L_00366C50; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00366C18; } }
    c.r[3].d[0] = 0ull | 32768ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 16384u);  if (t) { goto L_003667F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00366728; } }
    set32(c.r[3], 0u + 8192u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 4096u);  if (t) { goto L_00366688; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003664D0; } }
    set32(c.r[3], 0u + 2048u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1024u);  if (t) { goto L_003664A8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003663E8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 512u);  if (t) { goto L_00366168; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00365EC0; } }
    set32(c.r[3], 0u + 256u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 128u);  if (t) { goto L_00365940; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003653C0; } }
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 32u);  if (t) { goto L_00365398; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00365370; } }
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 8u);  if (t) { goto L_00365348; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00365320; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_003652F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003652D0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003652A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_003652A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003652B0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0099(c, 127u, depth + 1u); else { c.pc = 0x00365170u; return; } if (c.pc != 0x003652B0u) [[unlikely]] return; }
L_003652B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 24960u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003652C4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003652C4u) [[unlikely]] return; }
L_003652C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
    c.budget -= 1;
L_003652D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003652D8u); c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_0099(c, 127u, depth + 1u); else { c.pc = 0x00365170u; return; } if (c.pc != 0x003652D8u) [[unlikely]] return; }
L_003652D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] + 24992u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003652ECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003652ECu) [[unlikely]] return; }
L_003652EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
    c.budget -= 1;
L_003652F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365300u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 127u, depth + 1u); else { c.pc = 0x00365170u; return; } if (c.pc != 0x00365300u) [[unlikely]] return; }
L_00365300:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] + 25264u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365314u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365314u) [[unlikely]] return; }
L_00365314:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
    c.budget -= 1;
L_00365320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365328u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 127u, depth + 1u); else { c.pc = 0x00365170u; return; } if (c.pc != 0x00365328u) [[unlikely]] return; }
L_00365328:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] + 25760u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036533Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x0036533Cu) [[unlikely]] return; }
L_0036533C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
    c.budget -= 1;
L_00365348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365350u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 127u, depth + 1u); else { c.pc = 0x00365170u; return; } if (c.pc != 0x00365350u) [[unlikely]] return; }
L_00365350:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] + 25824u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365364u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365364u) [[unlikely]] return; }
L_00365364:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
    c.budget -= 1;
L_00365370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365378u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 127u, depth + 1u); else { c.pc = 0x00365170u; return; } if (c.pc != 0x00365378u) [[unlikely]] return; }
L_00365378:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] + 26208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036538Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x0036538Cu) [[unlikely]] return; }
L_0036538C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
    c.budget -= 1;
L_00365398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003653A0u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_0099(c, 127u, depth + 1u); else { c.pc = 0x00365170u; return; } if (c.pc != 0x003653A0u) [[unlikely]] return; }
L_003653A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 26176u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003653B4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003653B4u) [[unlikely]] return; }
L_003653B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
    c.budget -= 1;
L_003653C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003653C8u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 127u, depth + 1u); else { c.pc = 0x00365170u; return; } if (c.pc != 0x003653C8u) [[unlikely]] return; }
L_003653C8:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003653D8u); set32(c.r[6], 0u + 180u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003653D8u) [[unlikely]] return; }
L_003653D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] + 25200u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003653ECu); set32(c.r[6], 0u + 60u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x003653ECu) [[unlikely]] return; }
L_003653EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[8].d[0] = ld8((c.r[1].w[0] + 5012u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[7], c.r[7].w[0] + 26304u);
    set32(c.r[6], c.r[6].w[0] + 26308u);
    set32(c.r[5], c.r[5].w[0] + 26316u);
    set32(c.r[4], c.r[4].w[0] + 26312u);
    set32(c.r[8], c.r[8].w[0] << 4);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5013u));
    set32(c.r[7], ld32((c.r[7].w[0])));
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    st16((c.r[29].w[0] + 32u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[6].w[0])));
    st16((c.r[29].w[0] + 52u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[5], ld32((c.r[5].w[0])));
    st16((c.r[29].w[0] + 56u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 27;
    { const bool t = c.r[1].d[0] == 0ull; st16((c.r[29].w[0] + 72u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_00367FA0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 9456u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00364000u < 16384u) { entry = entries_0099[(t - 0x00364000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00365478:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5001u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00365498; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365494u); set32(c.r[6], 0u + 66u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365494u) [[unlikely]] return; }
L_00365494:
    c.budget -= 1;
L_00365498:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 5001u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003654B8u); set32(c.r[6], 0u + 110u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003654B8u) [[unlikely]] return; }
L_003654B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_003654C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_003654E0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003654DCu); set32(c.r[6], 0u - 88u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003654DCu) [[unlikely]] return; }
L_003654DC:
    c.budget -= 1;
L_003654E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00365500; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365500u); set32(c.r[6], 0u - 52u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365500u) [[unlikely]] return; }
L_00365500:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00365520; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365520u); set32(c.r[6], 0u - 16u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365520u) [[unlikely]] return; }
L_00365520:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00365540; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036553Cu); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x0036553Cu) [[unlikely]] return; }
L_0036553C:
    c.budget -= 1;
L_00365540:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365560u); set32(c.r[6], 0u + 56u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365560u) [[unlikely]] return; }
L_00365560:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00365568:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00365588; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365584u); set32(c.r[6], 0u - 88u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365584u) [[unlikely]] return; }
L_00365584:
    c.budget -= 1;
L_00365588:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003655A8u); set32(c.r[6], 0u - 16u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003655A8u) [[unlikely]] return; }
L_003655A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_003655B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_003655D0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003655CCu); set32(c.r[6], 0u + 110u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003655CCu) [[unlikely]] return; }
L_003655CC:
    c.budget -= 1;
L_003655D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003655F0u); set32(c.r[6], 0u + 154u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003655F0u) [[unlikely]] return; }
L_003655F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_003655F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00365618; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365614u); set32(c.r[6], 0u + 66u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365614u) [[unlikely]] return; }
L_00365614:
    c.budget -= 1;
L_00365618:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365638u); set32(c.r[6], 0u + 110u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365638u) [[unlikely]] return; }
L_00365638:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00365640:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00365660; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036565Cu); set32(c.r[6], 0u - 88u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x0036565Cu) [[unlikely]] return; }
L_0036565C:
    c.budget -= 1;
L_00365660:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00365680; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365680u); set32(c.r[6], 0u - 52u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365680u) [[unlikely]] return; }
L_00365680:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_003656A0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003656A0u); set32(c.r[6], 0u - 16u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003656A0u) [[unlikely]] return; }
L_003656A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_003656C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003656BCu); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003656BCu) [[unlikely]] return; }
L_003656BC:
    c.budget -= 1;
L_003656C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003656E0u); set32(c.r[6], 0u + 56u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003656E0u) [[unlikely]] return; }
L_003656E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_003656E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00365708; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365704u); set32(c.r[6], 0u + 66u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365704u) [[unlikely]] return; }
L_00365704:
    c.budget -= 1;
L_00365708:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00365728; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365728u); set32(c.r[6], 0u + 110u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365728u) [[unlikely]] return; }
L_00365728:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365748u); set32(c.r[6], 0u + 154u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365748u) [[unlikely]] return; }
L_00365748:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00365750:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00365770; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036576Cu); set32(c.r[6], 0u + 66u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x0036576Cu) [[unlikely]] return; }
L_0036576C:
    c.budget -= 1;
L_00365770:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00365790; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365790u); set32(c.r[6], 0u + 110u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365790u) [[unlikely]] return; }
L_00365790:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003657B0u); set32(c.r[6], 0u + 154u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003657B0u) [[unlikely]] return; }
L_003657B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_003657B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_003657D8; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003657D4u); set32(c.r[6], 0u + 110u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003657D4u) [[unlikely]] return; }
L_003657D4:
    c.budget -= 1;
L_003657D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003657F8u); set32(c.r[6], 0u + 154u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003657F8u) [[unlikely]] return; }
L_003657F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00365800:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00365820; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036581Cu); set32(c.r[6], 0u + 66u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x0036581Cu) [[unlikely]] return; }
L_0036581C:
    c.budget -= 1;
L_00365820:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365840u); set32(c.r[6], 0u + 110u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365840u) [[unlikely]] return; }
L_00365840:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00365848:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00365868; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365864u); set32(c.r[6], 0u - 66u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365864u) [[unlikely]] return; }
L_00365864:
    c.budget -= 1;
L_00365868:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365888u); set32(c.r[6], 0u - 22u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365888u) [[unlikely]] return; }
L_00365888:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00365890:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_003658B0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003658ACu); set32(c.r[6], 0u + 66u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003658ACu) [[unlikely]] return; }
L_003658AC:
    c.budget -= 1;
L_003658B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003658D0u); set32(c.r[6], 0u + 110u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003658D0u) [[unlikely]] return; }
L_003658D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_003658D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_003658F8; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003658F4u); set32(c.r[6], 0u + 22u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003658F4u) [[unlikely]] return; }
L_003658F4:
    c.budget -= 1;
L_003658F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00365918; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365918u); set32(c.r[6], 0u + 66u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365918u) [[unlikely]] return; }
L_00365918:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365938u); set32(c.r[6], 0u + 110u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365938u) [[unlikely]] return; }
L_00365938:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00365940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365948u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 127u, depth + 1u); else { c.pc = 0x00365170u; return; } if (c.pc != 0x00365948u) [[unlikely]] return; }
L_00365948:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365958u); set32(c.r[6], 0u + 180u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00365958u) [[unlikely]] return; }
L_00365958:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] + 25136u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036596Cu); set32(c.r[6], 0u + 60u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0036596Cu) [[unlikely]] return; }
L_0036596C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[8].d[0] = ld8((c.r[1].w[0] + 5012u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[7], c.r[7].w[0] + 26304u);
    set32(c.r[6], c.r[6].w[0] + 26308u);
    set32(c.r[5], c.r[5].w[0] + 26316u);
    set32(c.r[4], c.r[4].w[0] + 26312u);
    set32(c.r[8], c.r[8].w[0] << 4);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5013u));
    set32(c.r[7], ld32((c.r[7].w[0])));
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    st16((c.r[29].w[0] + 32u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[6].w[0])));
    st16((c.r[29].w[0] + 52u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[5], ld32((c.r[5].w[0])));
    st16((c.r[29].w[0] + 56u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 27;
    { const bool t = c.r[1].d[0] == 0ull; st16((c.r[29].w[0] + 72u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_00367FA0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 9392u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00364000u < 16384u) { entry = entries_0099[(t - 0x00364000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003659F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5001u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00365A18; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365A14u); set32(c.r[6], 0u + 66u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365A14u) [[unlikely]] return; }
L_00365A14:
    c.budget -= 1;
L_00365A18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 5001u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365A38u); set32(c.r[6], 0u + 110u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365A38u) [[unlikely]] return; }
L_00365A38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00365A40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00365A60; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365A5Cu); set32(c.r[6], 0u - 88u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365A5Cu) [[unlikely]] return; }
L_00365A5C:
    c.budget -= 1;
L_00365A60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00365A80; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365A80u); set32(c.r[6], 0u - 52u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365A80u) [[unlikely]] return; }
L_00365A80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00365AA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365AA0u); set32(c.r[6], 0u - 16u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365AA0u) [[unlikely]] return; }
L_00365AA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00365AC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365ABCu); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365ABCu) [[unlikely]] return; }
L_00365ABC:
    c.budget -= 1;
L_00365AC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365AE0u); set32(c.r[6], 0u + 56u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365AE0u) [[unlikely]] return; }
L_00365AE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00365AE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00365B08; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365B04u); set32(c.r[6], 0u - 88u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365B04u) [[unlikely]] return; }
L_00365B04:
    c.budget -= 1;
L_00365B08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365B28u); set32(c.r[6], 0u - 16u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365B28u) [[unlikely]] return; }
L_00365B28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00365B30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00365B50; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365B4Cu); set32(c.r[6], 0u + 110u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365B4Cu) [[unlikely]] return; }
L_00365B4C:
    c.budget -= 1;
L_00365B50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365B70u); set32(c.r[6], 0u + 154u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365B70u) [[unlikely]] return; }
L_00365B70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00365B78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00365B98; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365B94u); set32(c.r[6], 0u + 66u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365B94u) [[unlikely]] return; }
L_00365B94:
    c.budget -= 1;
L_00365B98:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365BB8u); set32(c.r[6], 0u + 110u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365BB8u) [[unlikely]] return; }
L_00365BB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00365BC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00365BE0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365BDCu); set32(c.r[6], 0u - 88u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365BDCu) [[unlikely]] return; }
L_00365BDC:
    c.budget -= 1;
L_00365BE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00365C00; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365C00u); set32(c.r[6], 0u - 52u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365C00u) [[unlikely]] return; }
L_00365C00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00365C20; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365C20u); set32(c.r[6], 0u - 16u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365C20u) [[unlikely]] return; }
L_00365C20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00365C40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365C3Cu); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365C3Cu) [[unlikely]] return; }
L_00365C3C:
    c.budget -= 1;
L_00365C40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365C60u); set32(c.r[6], 0u + 56u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365C60u) [[unlikely]] return; }
L_00365C60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00365C68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00365C88; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365C84u); set32(c.r[6], 0u + 66u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365C84u) [[unlikely]] return; }
L_00365C84:
    c.budget -= 1;
L_00365C88:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00365CA8; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365CA8u); set32(c.r[6], 0u + 110u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365CA8u) [[unlikely]] return; }
L_00365CA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365CC8u); set32(c.r[6], 0u + 154u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365CC8u) [[unlikely]] return; }
L_00365CC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00365CD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00365CF0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365CECu); set32(c.r[6], 0u + 66u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365CECu) [[unlikely]] return; }
L_00365CEC:
    c.budget -= 1;
L_00365CF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00365D10; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365D10u); set32(c.r[6], 0u + 110u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365D10u) [[unlikely]] return; }
L_00365D10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365D30u); set32(c.r[6], 0u + 154u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365D30u) [[unlikely]] return; }
L_00365D30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00365D38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00365D58; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365D54u); set32(c.r[6], 0u + 110u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365D54u) [[unlikely]] return; }
L_00365D54:
    c.budget -= 1;
L_00365D58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365D78u); set32(c.r[6], 0u + 154u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365D78u) [[unlikely]] return; }
L_00365D78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00365D80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00365DA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365D9Cu); set32(c.r[6], 0u + 66u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365D9Cu) [[unlikely]] return; }
L_00365D9C:
    c.budget -= 1;
L_00365DA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365DC0u); set32(c.r[6], 0u + 110u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365DC0u) [[unlikely]] return; }
L_00365DC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00365DC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00365DE8; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365DE4u); set32(c.r[6], 0u - 66u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365DE4u) [[unlikely]] return; }
L_00365DE4:
    c.budget -= 1;
L_00365DE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365E08u); set32(c.r[6], 0u - 22u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365E08u) [[unlikely]] return; }
L_00365E08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00365E10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00365E30; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365E2Cu); set32(c.r[6], 0u + 66u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365E2Cu) [[unlikely]] return; }
L_00365E2C:
    c.budget -= 1;
L_00365E30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365E50u); set32(c.r[6], 0u + 110u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365E50u) [[unlikely]] return; }
L_00365E50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00365E58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00365E78; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365E74u); set32(c.r[6], 0u + 22u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365E74u) [[unlikely]] return; }
L_00365E74:
    c.budget -= 1;
L_00365E78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00365E98; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365E98u); set32(c.r[6], 0u + 66u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365E98u) [[unlikely]] return; }
L_00365E98:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365EB8u); set32(c.r[6], 0u + 110u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00365EB8u) [[unlikely]] return; }
L_00365EB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00365EC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365EC8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 127u, depth + 1u); else { c.pc = 0x00365170u; return; } if (c.pc != 0x00365EC8u) [[unlikely]] return; }
L_00365EC8:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365ED8u); set32(c.r[6], 0u + 180u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00365ED8u) [[unlikely]] return; }
L_00365ED8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] + 25040u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365EECu); set32(c.r[6], 0u + 60u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00365EECu) [[unlikely]] return; }
L_00365EEC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5012u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00365F78; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00365F48; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00365F18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00365FA8; } }
L_00365F18:
    set32(c.r[2], 0u + 181u);
    st16((c.r[29].w[0] + 32u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 40u);
    set32(c.r[2], 0u + 221u);
    st16((c.r[29].w[0] + 36u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[29].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 419u);
    st16((c.r[29].w[0] + 76u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[29].w[0] + 72u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 198u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 56u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00365FA8; } }
L_00365F48:
    set32(c.r[2], 0u + 157u);
    st16((c.r[29].w[0] + 32u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 40u);
    set32(c.r[2], 0u + 197u);
    st16((c.r[29].w[0] + 36u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[29].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 443u);
    st16((c.r[29].w[0] + 76u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[29].w[0] + 72u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 246u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 56u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00365FA8; } }
L_00365F78:
    set32(c.r[2], 0u + 230u);
    st16((c.r[29].w[0] + 32u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 40u);
    set32(c.r[2], 0u + 270u);
    st16((c.r[29].w[0] + 36u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[29].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 370u);
    st16((c.r[29].w[0] + 76u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[29].w[0] + 72u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 100u);
    st16((c.r[29].w[0] + 56u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 12;
L_00365FA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5003u));
    c.r[1].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_00366068; } }
    set32(c.r[8], c.r[2].w[0] << 5);
    c.r[7].d[0] = ld16((c.r[1].w[0] + 25048u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st16((c.r[29].w[0] + 40u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[6].d[0] = ld16((c.r[1].w[0] + 25052u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st16((c.r[29].w[0] + 44u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[2].d[0] = ld16((c.r[1].w[0] + 25050u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[6], c.r[2].w[0] + c.r[8].w[0]);
    c.r[5].d[0] = ld16((c.r[1].w[0] + 25054u));
    st16((c.r[29].w[0] + 42u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    c.r[4].d[0] = ld16((c.r[1].w[0] + 25068u));
    st16((c.r[29].w[0] + 46u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st16((c.r[29].w[0] + 60u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld16((c.r[1].w[0] + 25072u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st16((c.r[29].w[0] + 64u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[1].w[0] + 25070u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    c.r[6].d[0] = ld16((c.r[1].w[0] + 25074u));
    st16((c.r[29].w[0] + 62u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    c.r[5].d[0] = ld16((c.r[1].w[0] + 25088u));
    st16((c.r[29].w[0] + 66u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st16((c.r[29].w[0] + 80u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[4].d[0] = ld16((c.r[1].w[0] + 25092u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st16((c.r[29].w[0] + 84u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld16((c.r[1].w[0] + 25090u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 25094u));
    st16((c.r[29].w[0] + 82u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    c.budget -= 43;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 86u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00366130; } }
L_00366068:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 25048u));
    set32(c.r[2], c.r[2].w[0] - 8u);
    set32(c.r[2], c.r[2].w[0] << 5);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[9], c.r[3].w[0] + 128u);
    c.r[8].d[0] = ld16((c.r[1].w[0] + 25052u));
    st16((c.r[29].w[0] + 40u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[8], c.r[8].w[0] + 128u);
    c.r[7].d[0] = ld16((c.r[1].w[0] + 25050u));
    st16((c.r[29].w[0] + 44u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = ld16((c.r[1].w[0] + 25054u));
    st16((c.r[29].w[0] + 42u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = ld16((c.r[1].w[0] + 25068u));
    st16((c.r[29].w[0] + 46u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], c.r[5].w[0] + 128u);
    c.r[4].d[0] = ld16((c.r[1].w[0] + 25072u));
    st16((c.r[29].w[0] + 60u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] + 128u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 25070u));
    st16((c.r[29].w[0] + 64u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = ld16((c.r[1].w[0] + 25074u));
    st16((c.r[29].w[0] + 62u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = ld16((c.r[1].w[0] + 25088u));
    st16((c.r[29].w[0] + 66u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[6], c.r[6].w[0] + 128u);
    c.r[5].d[0] = ld16((c.r[1].w[0] + 25092u));
    st16((c.r[29].w[0] + 80u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], c.r[5].w[0] + 128u);
    c.r[4].d[0] = ld16((c.r[1].w[0] + 25090u));
    st16((c.r[29].w[0] + 84u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 25094u));
    st16((c.r[29].w[0] + 82u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[29].w[0] + 86u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 50;
L_00366130:
    set32(c.r[2], 0u - 32768u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366144u); st16((c.r[1].w[0] + 5056u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 44u, depth + 1u); else { c.pc = 0x003647A0u; return; } if (c.pc != 0x00366144u) [[unlikely]] return; }
L_00366144:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 5056u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366160u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00366160u) [[unlikely]] return; }
L_00366160:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00366168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366170u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 127u, depth + 1u); else { c.pc = 0x00365170u; return; } if (c.pc != 0x00366170u) [[unlikely]] return; }
L_00366170:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366180u); set32(c.r[6], 0u + 180u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00366180u) [[unlikely]] return; }
L_00366180:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] + 25104u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366194u); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00366194u) [[unlikely]] return; }
L_00366194:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[6].d[0] = ld8((c.r[1].w[0] + 5012u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], c.r[5].w[0] + 26376u);
    set32(c.r[4], c.r[4].w[0] + 26378u);
    set32(c.r[3], c.r[29].w[0] + 36u);
    set32(c.r[6], c.r[6].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    st16((c.r[29].w[0] + 32u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[1].w[0] + 5003u));
    c.r[1].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_00366220; } }
    set32(c.r[8], c.r[4].w[0] << 5);
    c.r[7].d[0] = ld16((c.r[1].w[0] + 25048u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st16((c.r[29].w[0] + 40u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[6].d[0] = ld16((c.r[1].w[0] + 25052u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st16((c.r[29].w[0] + 44u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[5].d[0] = ld16((c.r[1].w[0] + 25050u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    c.r[4].d[0] = ld16((c.r[1].w[0] + 25054u));
    st16((c.r[29].w[0] + 42u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 46u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_00366268; } }
    c.budget -= 1;
L_00366220:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[7].d[0] = ld16((c.r[1].w[0] + 25048u));
    set32(c.r[4], c.r[4].w[0] - 8u);
    set32(c.r[8], c.r[4].w[0] << 5);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[7], c.r[7].w[0] + 128u);
    c.r[6].d[0] = ld16((c.r[1].w[0] + 25052u));
    st16((c.r[29].w[0] + 40u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[6], c.r[6].w[0] + 128u);
    c.r[5].d[0] = ld16((c.r[1].w[0] + 25050u));
    st16((c.r[29].w[0] + 44u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    c.r[4].d[0] = ld16((c.r[1].w[0] + 25054u));
    st16((c.r[29].w[0] + 42u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    st16((c.r[29].w[0] + 46u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 18;
L_00366268:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5022u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5022u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[1].d[0] = c.r[4].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003662B0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF7F0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 5004u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 5004u), c.r[3].w[0]);  if (t) { goto L_00367FA0; } }
    c.budget -= 1;
L_003662B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[4], 0u + 560u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5022u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    set32(c.r[4], c.r[4].w[0] - c.r[6].w[0]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 18;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));  if (t) { goto L_00366300; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00366300:
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[2], 0u + 320u);
    set32(c.r[4], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[5].w[0] << 1);
    st16((c.r[29].w[0] + 32u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5023u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5023u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00366350; } }
    set32(c.r[2], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5023u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00366350:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5023u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x2AAA0000u);
    c.r[3].d[0] = c.r[3].d[0] | 43691ull;
    set32(c.r[2], 0u + 32u);
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 17;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_0036639C; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0036639C:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_003663B0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003663B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 5056u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], 0u + 224u);
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st16((c.r[29].w[0] + 38u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 32u);
    st16((c.r[29].w[0] + 34u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003663E0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003663E0u) [[unlikely]] return; }
L_003663E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_003663E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003663F0u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0099(c, 127u, depth + 1u); else { c.pc = 0x00365170u; return; } if (c.pc != 0x003663F0u) [[unlikely]] return; }
L_003663F0:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366400u); set32(c.r[6], 0u + 180u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00366400u) [[unlikely]] return; }
L_00366400:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] + 25328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366414u); set32(c.r[6], 0u + 180u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00366414u) [[unlikely]] return; }
L_00366414:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[9].d[0] = ld8((c.r[1].w[0] + 5008u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[8], c.r[8].w[0] + 26352u);
    set32(c.r[7], c.r[7].w[0] + 26354u);
    set32(c.r[3], c.r[3].w[0] + 26356u);
    set32(c.r[2], c.r[2].w[0] + 26358u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], 0u + 9u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[9].w[0] << 3);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    st16((c.r[29].w[0] + 34u), static_cast<std::uint16_t>(c.r[8].w[0]));
    st16((c.r[29].w[0] + 54u), static_cast<std::uint16_t>(c.r[8].w[0]));
    st16((c.r[29].w[0] + 74u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    st16((c.r[29].w[0] + 94u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[29].w[0] + 114u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[29].w[0] + 134u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[29].w[0] + 98u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[29].w[0] + 118u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[29].w[0] + 138u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[29].w[0] + 154u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[29].w[0] + 174u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003664A0u); st16((c.r[29].w[0] + 194u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003664A0u) [[unlikely]] return; }
L_003664A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_003664A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003664B0u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_0099(c, 127u, depth + 1u); else { c.pc = 0x00365170u; return; } if (c.pc != 0x003664B0u) [[unlikely]] return; }
L_003664B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[4], c.r[4].w[0] + 25920u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003664C4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003664C4u) [[unlikely]] return; }
L_003664C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
    c.budget -= 1;
L_003664D0:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003664E0u); set32(c.r[6], 0u + 180u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003664E0u) [[unlikely]] return; }
L_003664E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] + 25520u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003664F4u); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x003664F4u) [[unlikely]] return; }
L_003664F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003664FCu); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0099(c, 127u, depth + 1u); else { c.pc = 0x00365170u; return; } if (c.pc != 0x003664FCu) [[unlikely]] return; }
L_003664FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5016u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5016u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[1].d[0] = c.r[2].sd[0] < 61ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00366548; } }
    st8((c.r[1].w[0] + 5016u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5017u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00366540; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5017u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00366548; } }
L_00366540:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5017u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00366548:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5017u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 128u);  if (t) { goto L_00366568; } }
    set32(c.r[2], 0u + 255u);
    st16((c.r[29].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[29].w[0] + 46u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00366568:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366578u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00366578u) [[unlikely]] return; }
L_00366578:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5018u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5018u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[1].d[0] = c.r[2].sd[0] < 91ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003665C8; } }
    st8((c.r[1].w[0] + 5018u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5019u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003665C0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5019u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003665C8; } }
    c.budget -= 1;
L_003665C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5019u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003665C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5020u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5020u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[1].d[0] = c.r[2].sd[0] < 121ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00366658; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 23716u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st8((c.r[1].w[0] + 5020u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00366630; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5021u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5021u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00366658; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5021u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00366658; } }
    c.budget -= 1;
L_00366630:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5021u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5021u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00366658; } }
    st8((c.r[1].w[0] + 5021u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00366658:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5019u));
    set32(c.r[2], c.r[2].w[0] + 57u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036666Cu); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0036666Cu) [[unlikely]] return; }
L_0036666C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5021u));
    set32(c.r[2], c.r[2].w[0] + 59u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366680u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00366680u) [[unlikely]] return; }
L_00366680:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00366688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366690u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0099(c, 127u, depth + 1u); else { c.pc = 0x00365170u; return; } if (c.pc != 0x00366690u) [[unlikely]] return; }
L_00366690:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003666A0u); set32(c.r[6], 0u + 180u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003666A0u) [[unlikely]] return; }
L_003666A0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] + 25552u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003666B4u); set32(c.r[6], 0u + 80u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x003666B4u) [[unlikely]] return; }
L_003666B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.r[1].d[0] = c.r[2].sd[0] < 101ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 100u);  if (t) { goto L_003666D0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003666D0:
    set32(c.r[8], c.r[29].w[0] + 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::multu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] >> 5);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366714u); st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00366714u) [[unlikely]] return; }
L_00366714:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036671Cu); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0099(c, 22u, depth + 1u); else { c.pc = 0x00364460u; return; } if (c.pc != 0x0036671Cu) [[unlikely]] return; }
L_0036671C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
    c.budget -= 1;
L_00366728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366730u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0099(c, 127u, depth + 1u); else { c.pc = 0x00365170u; return; } if (c.pc != 0x00366730u) [[unlikely]] return; }
L_00366730:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 25632u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366744u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00366744u) [[unlikely]] return; }
L_00366744:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 4981u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003667B0; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5018u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5018u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003667C0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5018u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5019u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5019u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5019u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5019u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003667C0; } }
    c.budget -= 1;
L_003667B0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003667C0; } }
    st8((c.r[1].w[0] + 5019u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003667C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5019u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 27u);  if (t) { goto L_003667E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003667D8u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x003667D8u) [[unlikely]] return; }
L_003667D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_003667E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003667E8u); set32(c.r[4], 0u + 144u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x003667E8u) [[unlikely]] return; }
L_003667E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_003667F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003667F8u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0099(c, 127u, depth + 1u); else { c.pc = 0x00365170u; return; } if (c.pc != 0x003667F8u) [[unlikely]] return; }
L_003667F8:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366808u); set32(c.r[6], 0u + 180u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00366808u) [[unlikely]] return; }
L_00366808:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] + 25664u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036681Cu); set32(c.r[6], 0u + 40u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0036681Cu) [[unlikely]] return; }
L_0036681C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5016u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00366C00; } }
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 9344u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00364000u < 16384u) { entry = entries_0099[(t - 0x00364000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00366848:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 4981u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00366870; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[1].w[0] + 5017u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5016u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_00366870:
    set32(c.r[2], 0u + 255u);
    st16((c.r[29].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 68u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00366C00; } }
L_00366880:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5017u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5017u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].sd[0] < 49ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003668C8; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5016u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 255u);
    st16((c.r[29].w[0] + 48u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 68u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00366C00; } }
    c.budget -= 1;
L_003668C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[6].d[0] = ld8((c.r[1].w[0] + 5017u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x2AAA0000u);
    c.r[4].d[0] = c.r[2].d[0] | 43691ull;
    set32(c.r[7], c.r[29].w[0] + 48u);
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[2], 0u + 255u);
    set32(c.r[5], c.r[6].w[0] << 8);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[5].w[0] >> 31);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 3));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 68u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00366C00; } }
L_00366920:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 4981u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00366960; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00366948; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00366978; } }
L_00366948:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5017u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 5u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5016u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00366978; } }
L_00366960:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5016u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5017u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_00366978:
    set32(c.r[2], 0u - 1u);
    st16((c.r[29].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 255u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 68u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00366C00; } }
    c.budget -= 1;
L_00366990:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5017u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5017u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].sd[0] < 49ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003669D0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[1].w[0] + 5017u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5016u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 255u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00366A28; } }
L_003669D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 5017u));
    set32(c.r[5], 0u + 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x2AAA0000u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.r[3].d[0] = c.r[3].d[0] | 43691ull;
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[5], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] << 8);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 22;
L_00366A28:
    set32(c.r[2], 0u + 255u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 68u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00366C00; } }
    c.budget -= 1;
L_00366A38:
    set32(c.r[2], 0u + 255u);
    st16((c.r[29].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 68u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00366C00; } }
L_00366A48:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5017u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5017u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00366A90; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[1].w[0] + 5017u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5016u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 255u);
    st16((c.r[29].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u - 1u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 68u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00366C00; } }
L_00366A90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[7].d[0] = ld8((c.r[1].w[0] + 5017u));
    set32(c.r[2], 0u + 16u);
    set32(c.r[8], c.r[29].w[0] + 48u);
    set32(c.r[3], c.r[2].w[0] - c.r[7].w[0]);
    set32(c.r[2], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));  if (t) { goto L_00366ABC; } }
    set32(c.r[2], c.r[3].w[0] + 15u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 2;
L_00366ABC:
    c.r[4].d[0] = ld8((c.r[8].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], c.r[2].w[0] << 8);
    set32(c.r[6], c.r[29].w[0] + 68u);
    set32(c.r[2], c.r[7].w[0] << 8);
    set32(c.r[3], c.r[2].w[0] - c.r[7].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] >= 0; st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_00366AEC; } }
    set32(c.r[2], c.r[3].w[0] + 15u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 2;
L_00366AEC:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00366C00; } }
    c.budget -= 1;
L_00366B08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 4981u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00366B30; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[1].w[0] + 5017u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5016u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_00366B30:
    set32(c.r[2], 0u + 255u);
    st16((c.r[29].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 68u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00366C00; } }
    c.budget -= 1;
L_00366B48:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5017u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5017u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].sd[0] < 49ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00366B88; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[1].w[0] + 5017u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5016u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 255u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 68u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00366BE0; } }
L_00366B88:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 5017u));
    set32(c.r[5], 0u + 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x2AAA0000u);
    set32(c.r[6], c.r[29].w[0] + 68u);
    c.r[3].d[0] = c.r[3].d[0] | 43691ull;
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[5], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] << 8);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 22;
L_00366BE0:
    set32(c.r[2], 0u + 255u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00366C00; } }
    c.budget -= 1;
L_00366BF0:
    set32(c.r[2], 0u + 255u);
    st16((c.r[29].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[29].w[0] + 68u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00366C00:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366C10u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00366C10u) [[unlikely]] return; }
L_00366C10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00366C18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366C20u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0099(c, 127u, depth + 1u); else { c.pc = 0x00365170u; return; } if (c.pc != 0x00366C20u) [[unlikely]] return; }
L_00366C20:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 26272u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366C34u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00366C34u) [[unlikely]] return; }
L_00366C34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366C3Cu); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00366C3Cu) [[unlikely]] return; }
L_00366C3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366C44u); set32(c.r[4], 0u + 129u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00366C44u) [[unlikely]] return; }
L_00366C44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
    c.budget -= 1;
L_00366C50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 5088u)));
    set32(c.r[3], 0u - 101u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00366C70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00366ED8; } }
    c.budget -= 1;
L_00366C70:
    set32(c.r[3], 0u - 102u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00366C88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00366ED8; } }
    c.budget -= 1;
L_00366C88:
    set32(c.r[3], 0u - 103u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00366CA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00366ED8; } }
    c.budget -= 1;
L_00366CA0:
    set32(c.r[3], 0u - 104u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00366CB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_00366ED8; } }
    c.budget -= 1;
L_00366CB8:
    set32(c.r[3], 0u - 105u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00366CD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_00366ED8; } }
    c.budget -= 1;
L_00366CD0:
    set32(c.r[3], 0u - 106u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00366CE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_00366ED8; } }
    c.budget -= 1;
L_00366CE8:
    set32(c.r[3], 0u - 107u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00366D00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_00366ED8; } }
    c.budget -= 1;
L_00366D00:
    set32(c.r[3], 0u - 108u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00366D18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 7u);  if (t) { goto L_00366ED8; } }
    c.budget -= 1;
L_00366D18:
    c.r[1].d[0] = c.r[2].sd[0] < -200ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[2].sd[0] < -204ll ? 1ull : 0ull;  if (t) { goto L_00366D38; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00366D38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_00366ED8; } }
    c.budget -= 1;
L_00366D38:
    c.r[1].d[0] = c.r[2].sd[0] < -400ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[2].sd[0] < -404ll ? 1ull : 0ull;  if (t) { goto L_00366D58; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00366D58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 9u);  if (t) { goto L_00366ED8; } }
    c.budget -= 1;
L_00366D58:
    set32(c.r[3], 0u - 601u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00366D70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_00366ED8; } }
    c.budget -= 1;
L_00366D70:
    set32(c.r[3], 0u - 602u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00366D88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 11u);  if (t) { goto L_00366ED8; } }
    c.budget -= 1;
L_00366D88:
    set32(c.r[3], 0u - 603u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 617u);  if (t) { goto L_00366DA0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00366DA8; } }
    c.budget -= 1;
L_00366DA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 12u);  if (t) { goto L_00366ED8; } }
L_00366DA8:
    set32(c.r[3], 0u - 610u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 616u);  if (t) { goto L_00366DD8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00366DD8; } }
    set32(c.r[3], c.r[2].w[0] + 620u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u - 626u);  if (t) { goto L_00366DD8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00366DE0; } }
    c.budget -= 1;
L_00366DD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 13u);  if (t) { goto L_00366ED8; } }
L_00366DE0:
    set32(c.r[3], 0u - 611u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 613u);  if (t) { goto L_00366E00; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00366E00; } }
    set32(c.r[3], 0u - 614u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00366E08; } }
L_00366E00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 14u);  if (t) { goto L_00366ED8; } }
L_00366E08:
    set32(c.r[3], 0u - 612u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00366E20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 15u);  if (t) { goto L_00366ED8; } }
    c.budget -= 1;
L_00366E20:
    set32(c.r[3], 0u - 615u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00366E38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_00366ED8; } }
    c.budget -= 1;
L_00366E38:
    c.r[1].d[0] = c.r[2].sd[0] < -620ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[2].sd[0] < -625ll ? 1ull : 0ull;  if (t) { goto L_00366E58; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00366E58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 17u);  if (t) { goto L_00366ED8; } }
    c.budget -= 1;
L_00366E58:
    c.r[1].d[0] = c.r[2].sd[0] < -700ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[2].sd[0] < -704ll ? 1ull : 0ull;  if (t) { goto L_00366E78; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00366E78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 18u);  if (t) { goto L_00366ED8; } }
    c.budget -= 1;
L_00366E78:
    c.r[1].d[0] = c.r[2].sd[0] < -805ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[2].sd[0] < -1055ll ? 1ull : 0ull;  if (t) { goto L_00366E98; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00366E98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 19u);  if (t) { goto L_00366ED8; } }
    c.budget -= 1;
L_00366E98:
    c.r[1].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[2].sd[0] < -99ll ? 1ull : 0ull;  if (t) { goto L_00366EB8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00366EB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 19u);  if (t) { goto L_00366ED8; } }
    c.budget -= 1;
L_00366EB8:
    set32(c.r[3], 0u + 127u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00366ED0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 21u);  if (t) { goto L_00366ED8; } }
    c.budget -= 1;
L_00366ED0:
    set32(c.r[2], 0u + 20u);
    c.budget -= 2;
L_00366ED8:
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    set32(c.r[2], c.r[16].w[0] + 66u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366EECu); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00366EECu) [[unlikely]] return; }
L_00366EEC:
    set32(c.r[3], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 8u);  if (t) { goto L_00367FA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366F00u);  if (depth < kMaxDepth) unit_0099(c, 22u, depth + 1u); else { c.pc = 0x00364460u; return; } if (c.pc != 0x00366F00u) [[unlikely]] return; }
L_00366F00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00366F08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366F10u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0099(c, 127u, depth + 1u); else { c.pc = 0x00365170u; return; } if (c.pc != 0x00366F10u) [[unlikely]] return; }
L_00366F10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] + 25712u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366F24u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00366F24u) [[unlikely]] return; }
L_00366F24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
    c.budget -= 1;
L_00366F30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366F38u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_0099(c, 127u, depth + 1u); else { c.pc = 0x00365170u; return; } if (c.pc != 0x00366F38u) [[unlikely]] return; }
L_00366F38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] + 26112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366F4Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00366F4Cu) [[unlikely]] return; }
L_00366F4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
    c.budget -= 1;
L_00366F58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366F60u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0099(c, 127u, depth + 1u); else { c.pc = 0x00365170u; return; } if (c.pc != 0x00366F60u) [[unlikely]] return; }
L_00366F60:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 25888u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366F74u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00366F74u) [[unlikely]] return; }
L_00366F74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
    c.budget -= 1;
L_00366F80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366F88u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 127u, depth + 1u); else { c.pc = 0x00365170u; return; } if (c.pc != 0x00366F88u) [[unlikely]] return; }
L_00366F88:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366F98u); set32(c.r[6], 0u + 180u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00366F98u) [[unlikely]] return; }
L_00366F98:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] + 25200u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366FACu); set32(c.r[6], 0u + 60u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00366FACu) [[unlikely]] return; }
L_00366FAC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[8].d[0] = ld8((c.r[1].w[0] + 5014u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[7], c.r[7].w[0] + 26304u);
    set32(c.r[6], c.r[6].w[0] + 26308u);
    set32(c.r[5], c.r[5].w[0] + 26316u);
    set32(c.r[4], c.r[4].w[0] + 26312u);
    set32(c.r[8], c.r[8].w[0] << 4);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5015u));
    set32(c.r[7], ld32((c.r[7].w[0])));
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    st16((c.r[29].w[0] + 32u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[6].w[0])));
    st16((c.r[29].w[0] + 52u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[5], ld32((c.r[5].w[0])));
    st16((c.r[29].w[0] + 56u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 27;
    { const bool t = c.r[1].d[0] == 0ull; st16((c.r[29].w[0] + 72u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_00367FA0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 9280u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00364000u < 16384u) { entry = entries_0099[(t - 0x00364000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00367038:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5001u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367058; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367054u); set32(c.r[6], 0u + 66u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00367054u) [[unlikely]] return; }
L_00367054:
    c.budget -= 1;
L_00367058:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 5001u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367078u); set32(c.r[6], 0u + 110u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00367078u) [[unlikely]] return; }
L_00367078:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00367080:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_003670A0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036709Cu); set32(c.r[6], 0u - 88u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x0036709Cu) [[unlikely]] return; }
L_0036709C:
    c.budget -= 1;
L_003670A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_003670C0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003670C0u); set32(c.r[6], 0u - 52u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003670C0u) [[unlikely]] return; }
L_003670C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_003670E0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003670E0u); set32(c.r[6], 0u - 16u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003670E0u) [[unlikely]] return; }
L_003670E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367100; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003670FCu); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003670FCu) [[unlikely]] return; }
L_003670FC:
    c.budget -= 1;
L_00367100:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367120u); set32(c.r[6], 0u + 56u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00367120u) [[unlikely]] return; }
L_00367120:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00367128:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367148; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367144u); set32(c.r[6], 0u - 88u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00367144u) [[unlikely]] return; }
L_00367144:
    c.budget -= 1;
L_00367148:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367168u); set32(c.r[6], 0u - 16u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00367168u) [[unlikely]] return; }
L_00367168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00367170:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367190; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036718Cu); set32(c.r[6], 0u + 110u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x0036718Cu) [[unlikely]] return; }
L_0036718C:
    c.budget -= 1;
L_00367190:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003671B0u); set32(c.r[6], 0u + 154u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003671B0u) [[unlikely]] return; }
L_003671B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_003671B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_003671D8; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003671D4u); set32(c.r[6], 0u + 66u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003671D4u) [[unlikely]] return; }
L_003671D4:
    c.budget -= 1;
L_003671D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003671F8u); set32(c.r[6], 0u + 110u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003671F8u) [[unlikely]] return; }
L_003671F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00367200:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367220; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036721Cu); set32(c.r[6], 0u - 88u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x0036721Cu) [[unlikely]] return; }
L_0036721C:
    c.budget -= 1;
L_00367220:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367240; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367240u); set32(c.r[6], 0u - 52u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00367240u) [[unlikely]] return; }
L_00367240:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367260; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367260u); set32(c.r[6], 0u - 16u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00367260u) [[unlikely]] return; }
L_00367260:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367280; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036727Cu); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x0036727Cu) [[unlikely]] return; }
L_0036727C:
    c.budget -= 1;
L_00367280:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003672A0u); set32(c.r[6], 0u + 56u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003672A0u) [[unlikely]] return; }
L_003672A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_003672A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_003672C8; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003672C4u); set32(c.r[6], 0u + 66u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003672C4u) [[unlikely]] return; }
L_003672C4:
    c.budget -= 1;
L_003672C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_003672E8; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003672E8u); set32(c.r[6], 0u + 110u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003672E8u) [[unlikely]] return; }
L_003672E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367308u); set32(c.r[6], 0u + 154u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00367308u) [[unlikely]] return; }
L_00367308:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00367310:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367330; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036732Cu); set32(c.r[6], 0u + 66u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x0036732Cu) [[unlikely]] return; }
L_0036732C:
    c.budget -= 1;
L_00367330:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367350; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367350u); set32(c.r[6], 0u + 110u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00367350u) [[unlikely]] return; }
L_00367350:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367370u); set32(c.r[6], 0u + 154u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00367370u) [[unlikely]] return; }
L_00367370:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00367378:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367398; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367394u); set32(c.r[6], 0u + 110u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00367394u) [[unlikely]] return; }
L_00367394:
    c.budget -= 1;
L_00367398:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003673B8u); set32(c.r[6], 0u + 154u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003673B8u) [[unlikely]] return; }
L_003673B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_003673C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_003673E0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003673DCu); set32(c.r[6], 0u + 66u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003673DCu) [[unlikely]] return; }
L_003673DC:
    c.budget -= 1;
L_003673E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367400u); set32(c.r[6], 0u + 110u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00367400u) [[unlikely]] return; }
L_00367400:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00367408:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367428; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367424u); set32(c.r[6], 0u - 66u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00367424u) [[unlikely]] return; }
L_00367424:
    c.budget -= 1;
L_00367428:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367448u); set32(c.r[6], 0u - 22u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00367448u) [[unlikely]] return; }
L_00367448:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00367450:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367470; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036746Cu); set32(c.r[6], 0u + 66u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x0036746Cu) [[unlikely]] return; }
L_0036746C:
    c.budget -= 1;
L_00367470:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367490u); set32(c.r[6], 0u + 110u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00367490u) [[unlikely]] return; }
L_00367490:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00367498:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_003674B8; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003674B4u); set32(c.r[6], 0u + 22u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003674B4u) [[unlikely]] return; }
L_003674B4:
    c.budget -= 1;
L_003674B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_003674D8; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003674D8u); set32(c.r[6], 0u + 66u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003674D8u) [[unlikely]] return; }
L_003674D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003674F8u); set32(c.r[6], 0u + 110u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003674F8u) [[unlikely]] return; }
L_003674F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00367500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367508u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 127u, depth + 1u); else { c.pc = 0x00365170u; return; } if (c.pc != 0x00367508u) [[unlikely]] return; }
L_00367508:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367518u); set32(c.r[6], 0u + 180u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00367518u) [[unlikely]] return; }
L_00367518:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] + 25136u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036752Cu); set32(c.r[6], 0u + 60u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0036752Cu) [[unlikely]] return; }
L_0036752C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[8].d[0] = ld8((c.r[1].w[0] + 5014u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[7], c.r[7].w[0] + 26304u);
    set32(c.r[6], c.r[6].w[0] + 26308u);
    set32(c.r[5], c.r[5].w[0] + 26316u);
    set32(c.r[4], c.r[4].w[0] + 26312u);
    set32(c.r[8], c.r[8].w[0] << 4);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5015u));
    set32(c.r[7], ld32((c.r[7].w[0])));
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    st16((c.r[29].w[0] + 32u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[6].w[0])));
    st16((c.r[29].w[0] + 52u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[5], ld32((c.r[5].w[0])));
    st16((c.r[29].w[0] + 56u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 27;
    { const bool t = c.r[1].d[0] == 0ull; st16((c.r[29].w[0] + 72u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_00367FA0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 9216u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00364000u < 16384u) { entry = entries_0099[(t - 0x00364000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003675B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5001u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_003675D8; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003675D4u); set32(c.r[6], 0u + 66u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003675D4u) [[unlikely]] return; }
L_003675D4:
    c.budget -= 1;
L_003675D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 5001u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003675F8u); set32(c.r[6], 0u + 110u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003675F8u) [[unlikely]] return; }
L_003675F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00367600:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367620; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036761Cu); set32(c.r[6], 0u - 88u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x0036761Cu) [[unlikely]] return; }
L_0036761C:
    c.budget -= 1;
L_00367620:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367640; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367640u); set32(c.r[6], 0u - 52u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00367640u) [[unlikely]] return; }
L_00367640:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367660; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367660u); set32(c.r[6], 0u - 16u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00367660u) [[unlikely]] return; }
L_00367660:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367680; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036767Cu); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x0036767Cu) [[unlikely]] return; }
L_0036767C:
    c.budget -= 1;
L_00367680:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003676A0u); set32(c.r[6], 0u + 56u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003676A0u) [[unlikely]] return; }
L_003676A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_003676A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_003676C8; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003676C4u); set32(c.r[6], 0u - 88u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003676C4u) [[unlikely]] return; }
L_003676C4:
    c.budget -= 1;
L_003676C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003676E8u); set32(c.r[6], 0u - 16u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003676E8u) [[unlikely]] return; }
L_003676E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_003676F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367710; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036770Cu); set32(c.r[6], 0u + 110u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x0036770Cu) [[unlikely]] return; }
L_0036770C:
    c.budget -= 1;
L_00367710:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367730u); set32(c.r[6], 0u + 154u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00367730u) [[unlikely]] return; }
L_00367730:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00367738:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367758; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367754u); set32(c.r[6], 0u + 66u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00367754u) [[unlikely]] return; }
L_00367754:
    c.budget -= 1;
L_00367758:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367778u); set32(c.r[6], 0u + 110u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00367778u) [[unlikely]] return; }
L_00367778:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00367780:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_003677A0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036779Cu); set32(c.r[6], 0u - 88u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x0036779Cu) [[unlikely]] return; }
L_0036779C:
    c.budget -= 1;
L_003677A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_003677C0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003677C0u); set32(c.r[6], 0u - 52u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003677C0u) [[unlikely]] return; }
L_003677C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_003677E0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003677E0u); set32(c.r[6], 0u - 16u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003677E0u) [[unlikely]] return; }
L_003677E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367800; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003677FCu); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003677FCu) [[unlikely]] return; }
L_003677FC:
    c.budget -= 1;
L_00367800:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367820u); set32(c.r[6], 0u + 56u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00367820u) [[unlikely]] return; }
L_00367820:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00367828:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367848; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367844u); set32(c.r[6], 0u + 66u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00367844u) [[unlikely]] return; }
L_00367844:
    c.budget -= 1;
L_00367848:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367868; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367868u); set32(c.r[6], 0u + 110u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00367868u) [[unlikely]] return; }
L_00367868:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367888u); set32(c.r[6], 0u + 154u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00367888u) [[unlikely]] return; }
L_00367888:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00367890:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_003678B0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003678ACu); set32(c.r[6], 0u + 66u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003678ACu) [[unlikely]] return; }
L_003678AC:
    c.budget -= 1;
L_003678B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_003678D0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003678D0u); set32(c.r[6], 0u + 110u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003678D0u) [[unlikely]] return; }
L_003678D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003678F0u); set32(c.r[6], 0u + 154u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003678F0u) [[unlikely]] return; }
L_003678F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_003678F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367918; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367914u); set32(c.r[6], 0u + 110u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00367914u) [[unlikely]] return; }
L_00367914:
    c.budget -= 1;
L_00367918:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367938u); set32(c.r[6], 0u + 154u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00367938u) [[unlikely]] return; }
L_00367938:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00367940:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367960; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036795Cu); set32(c.r[6], 0u + 66u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x0036795Cu) [[unlikely]] return; }
L_0036795C:
    c.budget -= 1;
L_00367960:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4968u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367980u); set32(c.r[6], 0u + 110u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00367980u) [[unlikely]] return; }
L_00367980:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00367988:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_003679A8; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003679A4u); set32(c.r[6], 0u - 66u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003679A4u) [[unlikely]] return; }
L_003679A4:
    c.budget -= 1;
L_003679A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003679C8u); set32(c.r[6], 0u - 22u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003679C8u) [[unlikely]] return; }
L_003679C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_003679D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_003679F0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003679ECu); set32(c.r[6], 0u + 66u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x003679ECu) [[unlikely]] return; }
L_003679EC:
    c.budget -= 1;
L_003679F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367A10u); set32(c.r[6], 0u + 110u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00367A10u) [[unlikely]] return; }
L_00367A10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00367A18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367A38; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367A34u); set32(c.r[6], 0u + 22u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00367A34u) [[unlikely]] return; }
L_00367A34:
    c.budget -= 1;
L_00367A38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367A58; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367A58u); set32(c.r[6], 0u + 66u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00367A58u) [[unlikely]] return; }
L_00367A58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367A78u); set32(c.r[6], 0u + 110u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00367A78u) [[unlikely]] return; }
L_00367A78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00367A80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367A88u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 127u, depth + 1u); else { c.pc = 0x00365170u; return; } if (c.pc != 0x00367A88u) [[unlikely]] return; }
L_00367A88:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367A98u); set32(c.r[6], 0u + 180u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00367A98u) [[unlikely]] return; }
L_00367A98:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] + 25040u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367AACu); set32(c.r[6], 0u + 60u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00367AACu) [[unlikely]] return; }
L_00367AAC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5014u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00367B38; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00367B08; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00367AD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367B68; } }
L_00367AD8:
    set32(c.r[2], 0u + 181u);
    st16((c.r[29].w[0] + 32u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 40u);
    set32(c.r[2], 0u + 221u);
    st16((c.r[29].w[0] + 36u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[29].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 419u);
    st16((c.r[29].w[0] + 76u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[29].w[0] + 72u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 198u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 56u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00367B68; } }
L_00367B08:
    set32(c.r[2], 0u + 158u);
    st16((c.r[29].w[0] + 32u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 40u);
    set32(c.r[2], 0u + 198u);
    st16((c.r[29].w[0] + 36u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[29].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 442u);
    st16((c.r[29].w[0] + 76u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[29].w[0] + 72u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 244u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 56u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00367B68; } }
L_00367B38:
    set32(c.r[2], 0u + 222u);
    st16((c.r[29].w[0] + 32u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 40u);
    set32(c.r[2], 0u + 262u);
    st16((c.r[29].w[0] + 36u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[29].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 378u);
    st16((c.r[29].w[0] + 76u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[29].w[0] + 72u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 116u);
    st16((c.r[29].w[0] + 56u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 12;
L_00367B68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5003u));
    c.r[1].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_00367C28; } }
    set32(c.r[8], c.r[2].w[0] << 5);
    c.r[7].d[0] = ld16((c.r[1].w[0] + 25048u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st16((c.r[29].w[0] + 40u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[6].d[0] = ld16((c.r[1].w[0] + 25052u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st16((c.r[29].w[0] + 44u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[2].d[0] = ld16((c.r[1].w[0] + 25050u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[6], c.r[2].w[0] + c.r[8].w[0]);
    c.r[5].d[0] = ld16((c.r[1].w[0] + 25054u));
    st16((c.r[29].w[0] + 42u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    c.r[4].d[0] = ld16((c.r[1].w[0] + 25068u));
    st16((c.r[29].w[0] + 46u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st16((c.r[29].w[0] + 60u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld16((c.r[1].w[0] + 25072u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st16((c.r[29].w[0] + 64u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[1].w[0] + 25070u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    c.r[6].d[0] = ld16((c.r[1].w[0] + 25074u));
    st16((c.r[29].w[0] + 62u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    c.r[5].d[0] = ld16((c.r[1].w[0] + 25088u));
    st16((c.r[29].w[0] + 66u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st16((c.r[29].w[0] + 80u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[4].d[0] = ld16((c.r[1].w[0] + 25092u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st16((c.r[29].w[0] + 84u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld16((c.r[1].w[0] + 25090u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 25094u));
    st16((c.r[29].w[0] + 82u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    c.budget -= 43;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 86u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00367CF0; } }
L_00367C28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 25048u));
    set32(c.r[2], c.r[2].w[0] - 8u);
    set32(c.r[2], c.r[2].w[0] << 5);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[9], c.r[3].w[0] + 128u);
    c.r[8].d[0] = ld16((c.r[1].w[0] + 25052u));
    st16((c.r[29].w[0] + 40u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[8], c.r[8].w[0] + 128u);
    c.r[7].d[0] = ld16((c.r[1].w[0] + 25050u));
    st16((c.r[29].w[0] + 44u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = ld16((c.r[1].w[0] + 25054u));
    st16((c.r[29].w[0] + 42u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = ld16((c.r[1].w[0] + 25068u));
    st16((c.r[29].w[0] + 46u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], c.r[5].w[0] + 128u);
    c.r[4].d[0] = ld16((c.r[1].w[0] + 25072u));
    st16((c.r[29].w[0] + 60u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] + 128u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 25070u));
    st16((c.r[29].w[0] + 64u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = ld16((c.r[1].w[0] + 25074u));
    st16((c.r[29].w[0] + 62u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = ld16((c.r[1].w[0] + 25088u));
    st16((c.r[29].w[0] + 66u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[6], c.r[6].w[0] + 128u);
    c.r[5].d[0] = ld16((c.r[1].w[0] + 25092u));
    st16((c.r[29].w[0] + 80u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], c.r[5].w[0] + 128u);
    c.r[4].d[0] = ld16((c.r[1].w[0] + 25090u));
    st16((c.r[29].w[0] + 84u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 25094u));
    st16((c.r[29].w[0] + 82u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[29].w[0] + 86u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 50;
L_00367CF0:
    set32(c.r[2], 0u - 32768u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367D04u); st16((c.r[1].w[0] + 5058u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 44u, depth + 1u); else { c.pc = 0x003647A0u; return; } if (c.pc != 0x00367D04u) [[unlikely]] return; }
L_00367D04:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 5058u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00367FA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367D20u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00367D20u) [[unlikely]] return; }
L_00367D20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00367FA0; } }
L_00367D28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367D30u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 127u, depth + 1u); else { c.pc = 0x00365170u; return; } if (c.pc != 0x00367D30u) [[unlikely]] return; }
L_00367D30:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367D40u); set32(c.r[6], 0u + 180u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00367D40u) [[unlikely]] return; }
L_00367D40:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] + 25104u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367D54u); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00367D54u) [[unlikely]] return; }
L_00367D54:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[6].d[0] = ld8((c.r[1].w[0] + 5012u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], c.r[5].w[0] + 26376u);
    set32(c.r[4], c.r[4].w[0] + 26378u);
    set32(c.r[3], c.r[29].w[0] + 36u);
    set32(c.r[6], c.r[6].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    st16((c.r[29].w[0] + 32u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[1].w[0] + 5003u));
    c.r[1].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_00367DE0; } }
    set32(c.r[8], c.r[4].w[0] << 5);
    c.r[7].d[0] = ld16((c.r[1].w[0] + 25048u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st16((c.r[29].w[0] + 40u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[6].d[0] = ld16((c.r[1].w[0] + 25052u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st16((c.r[29].w[0] + 44u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[5].d[0] = ld16((c.r[1].w[0] + 25050u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    c.r[4].d[0] = ld16((c.r[1].w[0] + 25054u));
    st16((c.r[29].w[0] + 42u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 46u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_00367E28; } }
    c.budget -= 1;
L_00367DE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[7].d[0] = ld16((c.r[1].w[0] + 25048u));
    set32(c.r[4], c.r[4].w[0] - 8u);
    set32(c.r[8], c.r[4].w[0] << 5);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[7], c.r[7].w[0] + 128u);
    c.r[6].d[0] = ld16((c.r[1].w[0] + 25052u));
    st16((c.r[29].w[0] + 40u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[6], c.r[6].w[0] + 128u);
    c.r[5].d[0] = ld16((c.r[1].w[0] + 25050u));
    st16((c.r[29].w[0] + 44u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    c.r[4].d[0] = ld16((c.r[1].w[0] + 25054u));
    st16((c.r[29].w[0] + 42u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    st16((c.r[29].w[0] + 46u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 18;
L_00367E28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5022u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5022u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[1].d[0] = c.r[4].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00367E70; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFEFF0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 5004u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 5004u), c.r[3].w[0]);  if (t) { goto L_00367FA0; } }
    c.budget -= 1;
L_00367E70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[4], 0u + 560u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5022u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    set32(c.r[4], c.r[4].w[0] - c.r[6].w[0]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 18;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));  if (t) { goto L_00367EC0; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00367EC0:
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[2], 0u + 320u);
    set32(c.r[4], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[5].w[0] << 1);
    st16((c.r[29].w[0] + 32u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5023u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5023u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00367F10; } }
    set32(c.r[2], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5023u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00367F10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5023u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x2AAA0000u);
    c.r[3].d[0] = c.r[3].d[0] | 43691ull;
    set32(c.r[2], 0u + 32u);
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 17;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_00367F5C; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00367F5C:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00367F70; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00367F70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 5058u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], 0u + 224u);
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st16((c.r[29].w[0] + 38u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 32u);
    st16((c.r[29].w[0] + 34u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367FA0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 411u, depth + 1u); else { c.pc = 0x00367FB0u; return; } if (c.pc != 0x00367FA0u) [[unlikely]] return; }
L_00367FA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_00367FB0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].d[0] = 0ll < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_009A(c, 4u, depth); } }
    set32(c.r[21], c.r[29].w[0] + 162u);
    set32(c.r[20], c.r[29].w[0] + 164u);
    set32(c.r[19], c.r[29].w[0] + 166u);
    c.budget -= 3;
    [[clang::musttail]] return unit_009A(c, 1u, depth);
}

}
