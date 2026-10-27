#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0008[4096] = {
    1, 2, 0, 3, 4, 5, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 8, 0, 0, 9, 0, 10, 0, 11, 0, 0, 12, 0, 13, 0, 0,
    14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 18, 19, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 22, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 26, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0,
    30, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 39,
    40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65,
    0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73,
    0, 0, 0, 74, 0, 0, 0, 0, 75, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80,
    0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0,
    0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 94, 0, 0, 95, 96, 0, 0, 0,
    0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 106, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0,
    112, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    127, 0, 0, 0, 0, 0, 128, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131,
    0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135, 136, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 157, 0, 0, 0, 0, 0, 158,
    0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0,
    0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0,
    167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    170, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    178, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 192, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0,
    207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 213, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0,
    0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 225, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0,
    231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 236, 0, 237, 0,
    238, 0, 0, 0, 0, 0, 239, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0,
    245, 0, 0, 0, 246, 0, 247, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 257, 258, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0,
    260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0,
    265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0,
    0, 0, 268, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    272, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 275, 0, 0, 0, 0, 0, 276, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0,
    0, 0, 0, 0, 0, 0, 279, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0,
    289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0,
    292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    308, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 318, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    324, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0,
    348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0,
    0, 0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0,
    0, 384, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 388,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 390, 391, 0, 0, 0, 392, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 394,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 397, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0,
    399, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 403, 0,
    0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0,
};

void unit_0008(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00120000;
    case 2u: goto L_00120004;
    case 3u: goto L_0012000C;
    case 4u: goto L_00120010;
    case 5u: goto L_00120014;
    case 6u: goto L_00120028;
    case 7u: goto L_00120030;
    case 8u: goto L_00120044;
    case 9u: goto L_00120050;
    case 10u: goto L_00120058;
    case 11u: goto L_00120060;
    case 12u: goto L_0012006C;
    case 13u: goto L_00120074;
    case 14u: goto L_00120080;
    case 15u: goto L_001200A0;
    case 16u: goto L_001200E0;
    case 17u: goto L_001200E8;
    case 18u: goto L_001200F0;
    case 19u: goto L_001200F4;
    case 20u: goto L_00120120;
    case 21u: goto L_00120128;
    case 22u: goto L_0012013C;
    case 23u: goto L_00120140;
    case 24u: goto L_00120150;
    case 25u: goto L_00120170;
    case 26u: goto L_00120174;
    case 27u: goto L_001201BC;
    case 28u: goto L_001201C8;
    case 29u: goto L_001201E8;
    case 30u: goto L_00120200;
    case 31u: goto L_00120204;
    case 32u: goto L_00120228;
    case 33u: goto L_0012022C;
    case 34u: goto L_00120270;
    case 35u: goto L_00120298;
    case 36u: goto L_001202C4;
    case 37u: goto L_001202F0;
    case 38u: goto L_001202F8;
    case 39u: goto L_001202FC;
    case 40u: goto L_00120300;
    case 41u: goto L_00120320;
    case 42u: goto L_00120340;
    case 43u: goto L_00120350;
    case 44u: goto L_00120398;
    case 45u: goto L_00120400;
    case 46u: goto L_00120408;
    case 47u: goto L_00120448;
    case 48u: goto L_00120450;
    case 49u: goto L_0012046C;
    case 50u: goto L_00120498;
    case 51u: goto L_001204D0;
    case 52u: goto L_00120500;
    case 53u: goto L_00120548;
    case 54u: goto L_00120588;
    case 55u: goto L_001205F4;
    case 56u: goto L_0012064C;
    case 57u: goto L_001206B4;
    case 58u: goto L_001206F8;
    case 59u: goto L_00120734;
    case 60u: goto L_00120740;
    case 61u: goto L_0012079C;
    case 62u: goto L_001207D8;
    case 63u: goto L_00120800;
    case 64u: goto L_00120814;
    case 65u: goto L_0012087C;
    case 66u: goto L_00120894;
    case 67u: goto L_001208CC;
    case 68u: goto L_00120908;
    case 69u: goto L_00120940;
    case 70u: goto L_001209A0;
    case 71u: goto L_001209D0;
    case 72u: goto L_001209EC;
    case 73u: goto L_001209FC;
    case 74u: goto L_00120A0C;
    case 75u: goto L_00120A20;
    case 76u: goto L_00120A24;
    case 77u: goto L_00120A50;
    case 78u: goto L_00120A80;
    case 79u: goto L_00120A98;
    case 80u: goto L_00120AFC;
    case 81u: goto L_00120B10;
    case 82u: goto L_00120B50;
    case 83u: goto L_00120B9C;
    case 84u: goto L_00120BA4;
    case 85u: goto L_00120BC8;
    case 86u: goto L_00120C08;
    case 87u: goto L_00120C38;
    case 88u: goto L_00120C74;
    case 89u: goto L_00120C98;
    case 90u: goto L_00120CA0;
    case 91u: goto L_00120CC0;
    case 92u: goto L_00120D20;
    case 93u: goto L_00120D5C;
    case 94u: goto L_00120D60;
    case 95u: goto L_00120D6C;
    case 96u: goto L_00120D70;
    case 97u: goto L_00120D90;
    case 98u: goto L_00120DA8;
    case 99u: goto L_00120DB0;
    case 100u: goto L_00120DCC;
    case 101u: goto L_00120DD8;
    case 102u: goto L_00120DE8;
    case 103u: goto L_00120E28;
    case 104u: goto L_00120E68;
    case 105u: goto L_00120E70;
    case 106u: goto L_00120E78;
    case 107u: goto L_00120EA8;
    case 108u: goto L_00120EB0;
    case 109u: goto L_00120EB8;
    case 110u: goto L_00120ECC;
    case 111u: goto L_00120EE0;
    case 112u: goto L_00120F00;
    case 113u: goto L_00120F04;
    case 114u: goto L_00120F58;
    case 115u: goto L_00120FA4;
    case 116u: goto L_00120FBC;
    case 117u: goto L_00120FEC;
    case 118u: goto L_00121028;
    case 119u: goto L_0012103C;
    case 120u: goto L_00121040;
    case 121u: goto L_00121080;
    case 122u: goto L_00121094;
    case 123u: goto L_001210C0;
    case 124u: goto L_00121100;
    case 125u: goto L_00121138;
    case 126u: goto L_00121140;
    case 127u: goto L_00121180;
    case 128u: goto L_00121198;
    case 129u: goto L_0012119C;
    case 130u: goto L_001211E0;
    case 131u: goto L_001211FC;
    case 132u: goto L_00121208;
    case 133u: goto L_00121234;
    case 134u: goto L_00121260;
    case 135u: goto L_00121268;
    case 136u: goto L_0012126C;
    case 137u: goto L_001212B0;
    case 138u: goto L_001212C0;
    case 139u: goto L_00121370;
    case 140u: goto L_00121378;
    case 141u: goto L_001213B8;
    case 142u: goto L_001213C0;
    case 143u: goto L_001213DC;
    case 144u: goto L_00121408;
    case 145u: goto L_0012143C;
    case 146u: goto L_00121440;
    case 147u: goto L_001214D0;
    case 148u: goto L_0012150C;
    case 149u: goto L_00121574;
    case 150u: goto L_001215CC;
    case 151u: goto L_00121634;
    case 152u: goto L_0012163C;
    case 153u: goto L_00121680;
    case 154u: goto L_001216BC;
    case 155u: goto L_00121724;
    case 156u: goto L_00121760;
    case 157u: goto L_00121764;
    case 158u: goto L_0012177C;
    case 159u: goto L_0012179C;
    case 160u: goto L_001217EC;
    case 161u: goto L_001217F8;
    case 162u: goto L_00121804;
    case 163u: goto L_0012183C;
    case 164u: goto L_00121840;
    case 165u: goto L_00121858;
    case 166u: goto L_00121874;
    case 167u: goto L_00121880;
    case 168u: goto L_001218A4;
    case 169u: goto L_001218C0;
    case 170u: goto L_00121900;
    case 171u: goto L_00121910;
    case 172u: goto L_00121924;
    case 173u: goto L_00121940;
    case 174u: goto L_00121948;
    case 175u: goto L_00121980;
    case 176u: goto L_00121A00;
    case 177u: goto L_00121A24;
    case 178u: goto L_00121A80;
    case 179u: goto L_00121A88;
    case 180u: goto L_00121AC0;
    case 181u: goto L_00121AF8;
    case 182u: goto L_00121B5C;
    case 183u: goto L_00121BAC;
    case 184u: goto L_00121C08;
    case 185u: goto L_00121C3C;
    case 186u: goto L_00121C48;
    case 187u: goto L_00121C80;
    case 188u: goto L_00121CE4;
    case 189u: goto L_00121D74;
    case 190u: goto L_00121DD0;
    case 191u: goto L_00121E30;
    case 192u: goto L_00121E34;
    case 193u: goto L_00121E3C;
    case 194u: goto L_00121EB4;
    case 195u: goto L_00121ED4;
    case 196u: goto L_00121F18;
    case 197u: goto L_00121F24;
    case 198u: goto L_00121F60;
    case 199u: goto L_00121F98;
    case 200u: goto L_00121FFC;
    case 201u: goto L_00122040;
    case 202u: goto L_00122048;
    case 203u: goto L_00122080;
    case 204u: goto L_00122098;
    case 205u: goto L_001220D0;
    case 206u: goto L_001220E0;
    case 207u: goto L_00122100;
    case 208u: goto L_00122118;
    case 209u: goto L_00122178;
    case 210u: goto L_001221B4;
    case 211u: goto L_001221C0;
    case 212u: goto L_001221E4;
    case 213u: goto L_001221E8;
    case 214u: goto L_00122238;
    case 215u: goto L_001222CC;
    case 216u: goto L_001222F8;
    case 217u: goto L_00122344;
    case 218u: goto L_0012236C;
    case 219u: goto L_00122390;
    case 220u: goto L_001223F8;
    case 221u: goto L_0012243C;
    case 222u: goto L_00122440;
    case 223u: goto L_00122488;
    case 224u: goto L_001224D8;
    case 225u: goto L_00122520;
    case 226u: goto L_00122524;
    case 227u: goto L_00122560;
    case 228u: goto L_0012258C;
    case 229u: goto L_001225D0;
    case 230u: goto L_001225F8;
    case 231u: goto L_00122600;
    case 232u: goto L_00122618;
    case 233u: goto L_0012263C;
    case 234u: goto L_00122660;
    case 235u: goto L_00122668;
    case 236u: goto L_00122670;
    case 237u: goto L_00122678;
    case 238u: goto L_00122680;
    case 239u: goto L_00122698;
    case 240u: goto L_0012269C;
    case 241u: goto L_001226B0;
    case 242u: goto L_001226C8;
    case 243u: goto L_001226CC;
    case 244u: goto L_001226E8;
    case 245u: goto L_00122700;
    case 246u: goto L_00122710;
    case 247u: goto L_00122718;
    case 248u: goto L_00122720;
    case 249u: goto L_00122730;
    case 250u: goto L_00122748;
    case 251u: goto L_00122758;
    case 252u: goto L_00122778;
    case 253u: goto L_001227D0;
    case 254u: goto L_001227D8;
    case 255u: goto L_00122818;
    case 256u: goto L_00122838;
    case 257u: goto L_0012283C;
    case 258u: goto L_00122840;
    case 259u: goto L_00122864;
    case 260u: goto L_00122880;
    case 261u: goto L_001228B0;
    case 262u: goto L_001228C0;
    case 263u: goto L_001228C8;
    case 264u: goto L_001228F8;
    case 265u: goto L_00122900;
    case 266u: goto L_00122950;
    case 267u: goto L_00122970;
    case 268u: goto L_00122988;
    case 269u: goto L_0012298C;
    case 270u: goto L_001229C0;
    case 271u: goto L_001229D0;
    case 272u: goto L_00122A00;
    case 273u: goto L_00122A04;
    case 274u: goto L_00122A54;
    case 275u: goto L_00122A88;
    case 276u: goto L_00122AA0;
    case 277u: goto L_00122AA4;
    case 278u: goto L_00122AF4;
    case 279u: goto L_00122B18;
    case 280u: goto L_00122B1C;
    case 281u: goto L_00122B78;
    case 282u: goto L_00122BA0;
    case 283u: goto L_00122BC8;
    case 284u: goto L_00122BF8;
    case 285u: goto L_00122C20;
    case 286u: goto L_00122C3C;
    case 287u: goto L_00122C40;
    case 288u: goto L_00122C68;
    case 289u: goto L_00122C80;
    case 290u: goto L_00122C98;
    case 291u: goto L_00122CEC;
    case 292u: goto L_00122D00;
    case 293u: goto L_00122D28;
    case 294u: goto L_00122D54;
    case 295u: goto L_00122D88;
    case 296u: goto L_00122E28;
    case 297u: goto L_00122E3C;
    case 298u: goto L_00122E58;
    case 299u: goto L_00122E80;
    case 300u: goto L_00122E98;
    case 301u: goto L_00122EA8;
    case 302u: goto L_00122EC0;
    case 303u: goto L_00122ED8;
    case 304u: goto L_00122F60;
    case 305u: goto L_00122F74;
    case 306u: goto L_00122FA8;
    case 307u: goto L_00122FB4;
    case 308u: goto L_00123000;
    case 309u: goto L_00123024;
    case 310u: goto L_0012303C;
    case 311u: goto L_00123078;
    case 312u: goto L_001230B0;
    case 313u: goto L_001230C4;
    case 314u: goto L_00123108;
    case 315u: goto L_00123168;
    case 316u: goto L_00123198;
    case 317u: goto L_001231D0;
    case 318u: goto L_001231D4;
    case 319u: goto L_001231DC;
    case 320u: goto L_00123230;
    case 321u: goto L_00123268;
    case 322u: goto L_001232A8;
    case 323u: goto L_001232C0;
    case 324u: goto L_00123300;
    case 325u: goto L_00123318;
    case 326u: goto L_00123348;
    case 327u: goto L_00123378;
    case 328u: goto L_001233B8;
    case 329u: goto L_001233FC;
    case 330u: goto L_00123438;
    case 331u: goto L_0012343C;
    case 332u: goto L_00123490;
    case 333u: goto L_001234A8;
    case 334u: goto L_001234B8;
    case 335u: goto L_001234D0;
    case 336u: goto L_00123504;
    case 337u: goto L_00123544;
    case 338u: goto L_00123560;
    case 339u: goto L_00123570;
    case 340u: goto L_001235A4;
    case 341u: goto L_001235B0;
    case 342u: goto L_00123620;
    case 343u: goto L_0012363C;
    case 344u: goto L_001236B0;
    case 345u: goto L_001236C0;
    case 346u: goto L_001236D0;
    case 347u: goto L_001236E0;
    case 348u: goto L_00123700;
    case 349u: goto L_00123720;
    case 350u: goto L_00123800;
    case 351u: goto L_00123810;
    case 352u: goto L_00123838;
    case 353u: goto L_00123840;
    case 354u: goto L_00123888;
    case 355u: goto L_001238A0;
    case 356u: goto L_00123900;
    case 357u: goto L_001239A0;
    case 358u: goto L_00123A94;
    case 359u: goto L_00123AA4;
    case 360u: goto L_00123AC8;
    case 361u: goto L_00123AD4;
    case 362u: goto L_00123AE4;
    case 363u: goto L_00123AF8;
    case 364u: goto L_00123B14;
    case 365u: goto L_00123B24;
    case 366u: goto L_00123B48;
    case 367u: goto L_00123B54;
    case 368u: goto L_00123B64;
    case 369u: goto L_00123C20;
    case 370u: goto L_00123C2C;
    case 371u: goto L_00123C48;
    case 372u: goto L_00123C58;
    case 373u: goto L_00123C68;
    case 374u: goto L_00123CA8;
    case 375u: goto L_00123CB8;
    case 376u: goto L_00123CC8;
    case 377u: goto L_00123CD4;
    case 378u: goto L_00123CF4;
    case 379u: goto L_00123D20;
    case 380u: goto L_00123D40;
    case 381u: goto L_00123D4C;
    case 382u: goto L_00123D68;
    case 383u: goto L_00123D78;
    case 384u: goto L_00123D84;
    case 385u: goto L_00123DA4;
    case 386u: goto L_00123DD0;
    case 387u: goto L_00123DF0;
    case 388u: goto L_00123DFC;
    case 389u: goto L_00123E28;
    case 390u: goto L_00123E3C;
    case 391u: goto L_00123E40;
    case 392u: goto L_00123E50;
    case 393u: goto L_00123E5C;
    case 394u: goto L_00123E7C;
    case 395u: goto L_00123EA8;
    case 396u: goto L_00123EC8;
    case 397u: goto L_00123ED4;
    case 398u: goto L_00123EF0;
    case 399u: goto L_00123F00;
    case 400u: goto L_00123F0C;
    case 401u: goto L_00123F2C;
    case 402u: goto L_00123F58;
    case 403u: goto L_00123F78;
    case 404u: goto L_00123F84;
    case 405u: goto L_00123FC0;
    case 406u: goto L_00123FEC;
    default: bad_entry(c, 0x00120000u); return;
    }
L_00120000:
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_00120004:
    set32(c.r[3], ld32((c.r[3].w[0] + 11248u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00120000u < 16384u) { entry = entries_0008[(t - 0x00120000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0012000C:
    c.budget -= 1;
L_00120010:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 144u)));
    c.budget -= 1;
L_00120014:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[18].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011FFE0u | kUnwind; return; } [[clang::musttail]] return unit_0007(c, 301u, depth); }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 32u);  if (t) { goto L_00120054; } }
    c.budget -= 1;
L_00120028:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[22].d[0] | 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011FFDCu | kUnwind; return; } [[clang::musttail]] return unit_0007(c, 300u, depth); } }
L_00120030:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[30], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[30].sd[0] >= 0; set32(c.r[20], c.r[20].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011FFDCu | kUnwind; return; } [[clang::musttail]] return unit_0007(c, 300u, depth); } }
    set32(c.r[30], 0u - c.r[30].w[0]);
    c.budget -= 1;
L_00120044:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[22].d[0] | 4ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011FFDCu | kUnwind; return; } [[clang::musttail]] return unit_0007(c, 300u, depth); } }
    c.budget -= 1;
L_00120050:
    set32(c.r[2], 0u + 43u);
    c.budget -= 1;
L_00120054:
    c.r[4].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 1;
L_00120058:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 144u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011FFE0u | kUnwind; return; } [[clang::musttail]] return unit_0007(c, 301u, depth); } }
L_00120060:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[2], 0u + 42u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_00120090; } }
    goto L_00120070;
L_0012006C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00120070:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00120074:
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[21].sd[0] < -1ll ? 1ull : 0ull;
    c.budget -= 3;
L_00120080:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[20], c.r[20].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011FFDCu | kUnwind; return; } [[clang::musttail]] return unit_0007(c, 300u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011FFDCu | kUnwind; return; } [[clang::musttail]] return unit_0007(c, 300u, depth); } }
L_00120090:
    set32(c.r[2], c.r[17].w[0] - 48u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001200C8; } }
L_001200A0:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[16], c.r[2].w[0] - 48u);
    set32(c.r[2], c.r[17].w[0] - 48u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001200A0u | kUnwind; return; } goto L_001200A0; } }
L_001200C8:
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[21].sd[0] < -1ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[21], 0u - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011FFECu | kUnwind; return; } [[clang::musttail]] return unit_0007(c, 303u, depth); }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[17].w[0] - 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011FFF0u | kUnwind; return; } [[clang::musttail]] return unit_0007(c, 304u, depth); } }
L_001200E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[22].d[0] | 128ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011FFDCu | kUnwind; return; } [[clang::musttail]] return unit_0007(c, 300u, depth); } }
L_001200E8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001200F0:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 1;
L_001200F4:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[16], c.r[2].w[0] - 48u);
    set32(c.r[2], c.r[17].w[0] - 48u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001200F0u | kUnwind; return; } goto L_001200F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[30].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011FFECu | kUnwind; return; } [[clang::musttail]] return unit_0007(c, 303u, depth); } }
L_00120120:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[22].d[0] | 64ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011FFDCu | kUnwind; return; } [[clang::musttail]] return unit_0007(c, 300u, depth); } }
L_00120128:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[2], 0u + 108u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = ld8((c.r[18].w[0]));  if (t) { goto L_00120148; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0012013C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[22].d[0] | 32ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011FFDCu | kUnwind; return; } [[clang::musttail]] return unit_0007(c, 300u, depth); } }
    goto L_00120144;
L_00120140:
    c.r[22].d[0] = c.r[22].d[0] | 32ull;
    c.budget -= 1;
L_00120144:
    c.budget -= 1;
L_00120148:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[22].d[0] | 16ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011FFE0u | kUnwind; return; } [[clang::musttail]] return unit_0007(c, 301u, depth); } }
L_00120150:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[20], c.r[20].w[0] + 8u);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[19], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[29].w[0] + 168u), c.r[5].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001204E4; } }
L_00120170:
    c.r[22].d[0] = c.r[22].d[0] | 16ull;
    c.budget -= 1;
L_00120174:
    c.r[2].d[0] = c.r[22].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00120190; } }
    set32(c.r[20], c.r[20].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[2].w[0]));  if (t) { goto L_001201B0; } }
    c.budget -= 1;
L_00120190:
    c.r[2].d[0] = c.r[22].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001201A8; } }
    set32(c.r[20], c.r[20].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (t) { goto L_001201B0; } }
L_001201A8:
    set32(c.r[20], c.r[20].w[0] + 8u);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_001201B0:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_001203B0; } }
    set32(c.r[2], 0u + 45u);
    c.budget -= 1;
L_001201BC:
    c.r[16].d[0] = 0ull - c.r[16].d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 144u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001203B0; } }
L_001201C8:
    c.r[2].d[0] = c.r[22].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[22].d[0] & 64ull;  if (t) { goto L_001201F0; } }
    c.r[3].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[20], c.r[20].w[0] + 8u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st64((c.r[2].w[0]), c.r[3].d[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011FF18u | kUnwind; return; } [[clang::musttail]] return unit_0007(c, 292u, depth); } }
    goto L_001201EC;
L_001201E8:
    st64((c.r[2].w[0]), c.r[3].d[0]);
    c.budget -= 1;
L_001201EC:
    c.budget -= 1;
L_001201F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00120210; } }
    set32(c.r[20], c.r[20].w[0] + 8u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 2;
L_00120200:
    set32(c.r[4], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 1;
L_00120204:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011FF18u | kUnwind; return; } [[clang::musttail]] return unit_0007(c, 292u, depth); } }
    c.budget -= 1;
L_00120210:
    set32(c.r[20], c.r[20].w[0] + 8u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011FF18u | kUnwind; return; } [[clang::musttail]] return unit_0007(c, 292u, depth); } }
    c.budget -= 1;
L_00120228:
    c.r[22].d[0] = c.r[22].d[0] | 16ull;
    c.budget -= 1;
L_0012022C:
    c.r[2].d[0] = c.r[22].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00120248; } }
    set32(c.r[20], c.r[20].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[2].w[0]));  if (t) { goto L_00120268; } }
    c.budget -= 1;
L_00120248:
    c.r[2].d[0] = c.r[22].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00120260; } }
    set32(c.r[20], c.r[20].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld16((c.r[2].w[0]));  if (t) { goto L_00120268; } }
L_00120260:
    set32(c.r[20], c.r[20].w[0] + 8u);
    c.r[16].d[0] = ld32((c.r[2].w[0]));
    c.budget -= 2;
L_00120268:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001203AC; } }
L_00120270:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[3].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 11152u);
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[20], c.r[20].w[0] + 8u);
    c.r[22].d[0] = c.r[22].d[0] | 2ull;
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[3], 0u + 2u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 120u);  if (t) { goto L_001203AC; } }
L_00120298:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 8u);  if (t) { goto L_001202B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[19], c.r[2].w[0] + 11176u);
    c.budget -= 2;
L_001202B0:
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] < 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001202E8; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001202C4u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0011A820u; return; } if (c.pc != 0x001202C4u) [[unlikely]] return; }
L_001202C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);  if (t) { goto L_001202DC; } }
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st8((c.r[29].w[0] + 144u), static_cast<std::uint8_t>(0u));  goto L_001204E8; }
L_001202DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 168u), c.r[21].w[0]);  if (t) { goto L_001204E4; } }
    c.budget -= 1;
L_001202E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001202F0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x001202F0u) [[unlikely]] return; }
L_001202F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 168u), c.r[2].w[0]);  if (t) { goto L_001204E4; } }
L_001202F8:
    c.r[22].d[0] = c.r[22].d[0] | 16ull;
    c.budget -= 1;
L_001202FC:
    c.r[2].d[0] = c.r[22].d[0] & 16ull;
    c.budget -= 1;
L_00120300:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00120318; } }
    set32(c.r[20], c.r[20].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[2].w[0]));  if (t) { goto L_00120338; } }
    c.budget -= 1;
L_00120318:
    c.r[2].d[0] = c.r[22].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00120330; } }
    goto L_00120324;
L_00120320:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00120324:
    set32(c.r[20], c.r[20].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld16((c.r[2].w[0]));  if (t) { goto L_00120338; } }
L_00120330:
    set32(c.r[20], c.r[20].w[0] + 8u);
    c.r[16].d[0] = ld32((c.r[2].w[0]));
    c.budget -= 2;
L_00120338:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001203AC; } }
L_00120340:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 11184u);  if (t) { goto L_00120358; } }
    c.budget -= 1;
L_00120350:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], c.r[2].w[0] + 11152u);
    c.budget -= 2;
L_00120358:
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[22].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00120378; } }
    set32(c.r[20], c.r[20].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[2].w[0]));  if (t) { goto L_00120398; } }
    c.budget -= 1;
L_00120378:
    c.r[2].d[0] = c.r[22].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00120390; } }
    set32(c.r[20], c.r[20].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld16((c.r[2].w[0]));  if (t) { goto L_00120398; } }
L_00120390:
    set32(c.r[20], c.r[20].w[0] + 8u);
    c.r[16].d[0] = ld32((c.r[2].w[0]));
    c.budget -= 2;
L_00120398:
    c.r[2].d[0] = c.r[22].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_001203AC; } }
    c.r[2].d[0] = c.r[22].d[0] | 2ull;
    if (c.r[16].d[0] != 0) c.r[22].d[0] = c.r[2].d[0];
    c.budget -= 2;
L_001203AC:
    st8((c.r[29].w[0] + 144u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001203B0:
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] < 0; st32((c.r[29].w[0] + 164u), c.r[21].w[0]);  if (t) { goto L_001203C0; } }
    set32(c.r[2], 0u - 129u);
    c.r[22].d[0] = c.r[22].d[0] & c.r[2].d[0];
    c.budget -= 2;
L_001203C0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[19], c.r[29].w[0] + 120u);  if (t) { goto L_001203D4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[29].w[0] - c.r[19].w[0]);  if (t) { goto L_001204C4; } }
L_001203D4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;  if (t) { goto L_00120474; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 7u);  if (t) { goto L_00120408; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_00120490; } }
    set32(c.r[19], c.r[2].w[0] + 11208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120400u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00120400u) [[unlikely]] return; }
L_00120400:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 168u), c.r[2].w[0]);  if (t) { goto L_001204E8; } }
L_00120408:
    c.r[2].d[0] = c.r[16].d[0] & c.r[4].d[0];
    c.r[16].d[0] = c.r[16].d[0] >> 3;
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(48ll);
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00120408u | kUnwind; return; } goto L_00120408; } }
    c.r[2].d[0] = c.r[22].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 48u);  if (t) { goto L_001204C0; } }
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[29].w[0] - c.r[19].w[0]);  goto L_001204C4; }
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001204C0; } }
    c.budget -= 1;
L_00120448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120450u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0005(c, 9u, depth + 1u); else { c.pc = 0x00114DE8u; return; } if (c.pc != 0x00120450u) [[unlikely]] return; }
L_00120450:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(48ll);
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], 0u + 10u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012046Cu); st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0005(c, 6u, depth + 1u); else { c.pc = 0x00114868u; return; } if (c.pc != 0x0012046Cu) [[unlikely]] return; }
L_0012046C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 2;
L_00120474:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00120448u | kUnwind; return; } goto L_00120448; } }
    c.r[2].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(48ll);
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001204C0; } }
L_00120490:
    set32(c.r[4], 0u + 15u);
    c.budget -= 2;
L_00120498:
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    c.r[2].d[0] = c.r[16].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[19], c.r[19].w[0] - 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[16].d[0] = c.r[16].d[0] >> 4;
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 10;
    { const bool t = c.r[16].d[0] != 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00120498u | kUnwind; return; } goto L_00120498; } }
L_001204C0:
    set32(c.r[2], c.r[29].w[0] - c.r[19].w[0]);
    c.budget -= 1;
L_001204C4:
    set32(c.r[2], c.r[2].w[0] + 120u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 168u), c.r[2].w[0]);  if (t) { goto L_001204E8; } }
L_001204D0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[19], c.r[29].w[0] + 80u);  if (t) { goto L_001209E8; } }
    set32(c.r[4], 0u + 1u);
    st32((c.r[29].w[0] + 168u), c.r[4].w[0]);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 3;
L_001204E4:
    st8((c.r[29].w[0] + 144u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001204E8:
    set32(c.r[21], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[21].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = ld8((c.r[29].w[0] + 144u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; if (c.r[2].d[0] != 0) c.r[21].d[0] = c.r[5].d[0];  if (t) { goto L_00120510; } }
    goto L_00120504;
L_00120500:
    if (c.r[2].d[0] != 0) c.r[21].d[0] = c.r[5].d[0];
    c.budget -= 1;
L_00120504:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { goto L_00120518; } }
    c.budget -= 1;
L_00120510:
    c.r[2].d[0] = c.r[22].d[0] & 2ull;
    set32(c.r[21], c.r[2].w[0] + c.r[21].w[0]);
    c.budget -= 2;
L_00120518:
    c.r[2].d[0] = c.r[22].d[0] & 132ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_00120608; } }
    set32(c.r[16], c.r[30].w[0] - c.r[21].w[0]);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] <= 0; c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;  if (t) { goto L_00120608; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[8].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_001205B8; } }
    set32(c.r[7], 0u + 16u);
    set32(c.r[6], c.r[8].w[0] + 11120u);
    st32((c.r[23].w[0] + 4u), c.r[7].w[0]);
    c.budget -= 4;
L_00120548:
    st32((c.r[23].w[0]), c.r[6].w[0]);
    set32(c.r[23], c.r[23].w[0] + 8u);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.r[4].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_001205A0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 156u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[6]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[7]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120588u); st128((c.r[29].w[0] + 224u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_0007(c, 280u, depth + 1u); else { c.pc = 0x0011FCE0u; return; } if (c.pc != 0x00120588u) [[unlikely]] return; }
L_00120588:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[6]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[7]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 224u) & ~15u, c.r[8]);  if (t) { goto L_00120A08; } }
    set32(c.r[3], c.r[29].w[0] + 16u);
    c.r[23].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_001205A0:
    set32(c.r[16], c.r[16].w[0] - 16u);
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[23].w[0] + 4u), c.r[7].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00120548u | kUnwind; return; } goto L_00120548; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[23].w[0] + 4u), c.r[16].w[0]);  if (t) { goto L_001205BC; } }
L_001205B8:
    st32((c.r[23].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_001205BC:
    set32(c.r[2], c.r[8].w[0] + 11120u);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    set32(c.r[23], c.r[23].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00120604; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001205F4u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 280u, depth + 1u); else { c.pc = 0x0011FCE0u; return; } if (c.pc != 0x001205F4u) [[unlikely]] return; }
L_001205F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 156u)));  if (t) { goto L_00120A0C; } }
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_00120604:
    c.r[4].d[0] = ld8((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_00120608:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00120660; } }
    set32(c.r[3], c.r[29].w[0] + 144u);
    st32((c.r[23].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[23].w[0]), c.r[3].w[0]);
    set32(c.r[23], c.r[23].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001206C4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012064Cu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 280u, depth + 1u); else { c.pc = 0x0011FCE0u; return; } if (c.pc != 0x0012064Cu) [[unlikely]] return; }
L_0012064C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 156u)));  if (t) { goto L_00120A0C; } }
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001206C4; } }
L_00120660:
    c.r[2].d[0] = c.r[22].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 48u);  if (t) { goto L_001206C4; } }
    set32(c.r[4], 0u + 2u);
    st8((c.r[29].w[0] + 128u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 128u);
    st8((c.r[29].w[0] + 129u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[23].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[23].w[0]), c.r[3].w[0]);
    set32(c.r[23], c.r[23].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.r[4].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 15;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001206C4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001206B4u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 280u, depth + 1u); else { c.pc = 0x0011FCE0u; return; } if (c.pc != 0x001206B4u) [[unlikely]] return; }
L_001206B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 156u)));  if (t) { goto L_00120A0C; } }
    set32(c.r[2], c.r[29].w[0] + 16u);
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_001206C4:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], 0u + 128u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], ld32((c.r[29].w[0] + 164u)));  if (t) { goto L_001207B0; } }
    set32(c.r[16], c.r[30].w[0] - c.r[21].w[0]);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] <= 0; set32(c.r[3], ld32((c.r[29].w[0] + 168u)));  if (t) { goto L_001207B4; } }
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_00120760; } }
    set32(c.r[6], 0u + 16u);
    set32(c.r[17], c.r[7].w[0] + 11136u);
    st32((c.r[23].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 3;
L_001206F8:
    st32((c.r[23].w[0]), c.r[17].w[0]);
    set32(c.r[23], c.r[23].w[0] + 8u);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.r[4].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00120748; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 156u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[6]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120734u); st128((c.r[29].w[0] + 208u) & ~15u, c.r[7]);  if (depth < kMaxDepth) unit_0007(c, 280u, depth + 1u); else { c.pc = 0x0011FCE0u; return; } if (c.pc != 0x00120734u) [[unlikely]] return; }
L_00120734:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[6]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 208u) & ~15u, c.r[7]);  if (t) { goto L_00120A08; } }
L_00120740:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_00120748:
    set32(c.r[16], c.r[16].w[0] - 16u);
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[23].w[0] + 4u), c.r[6].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001206F8u | kUnwind; return; } goto L_001206F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[23].w[0] + 4u), c.r[16].w[0]);  if (t) { goto L_00120764; } }
L_00120760:
    st32((c.r[23].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_00120764:
    set32(c.r[2], c.r[7].w[0] + 11136u);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    set32(c.r[23], c.r[23].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001207AC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012079Cu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 280u, depth + 1u); else { c.pc = 0x0011FCE0u; return; } if (c.pc != 0x0012079Cu) [[unlikely]] return; }
L_0012079C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 156u)));  if (t) { goto L_00120A0C; } }
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_001207AC:
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 1;
L_001207B0:
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_001207B4:
    set32(c.r[16], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] <= 0; set32(c.r[2], ld32((c.r[29].w[0] + 168u)));  if (t) { goto L_00120890; } }
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_00120840; } }
    set32(c.r[6], 0u + 16u);
    set32(c.r[17], c.r[7].w[0] + 11136u);
    st32((c.r[23].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 3;
L_001207D8:
    st32((c.r[23].w[0]), c.r[17].w[0]);
    set32(c.r[23], c.r[23].w[0] + 8u);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.r[4].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00120828; } }
L_00120800:
    set32(c.r[4], ld32((c.r[29].w[0] + 156u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[6]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120814u); st128((c.r[29].w[0] + 208u) & ~15u, c.r[7]);  if (depth < kMaxDepth) unit_0007(c, 280u, depth + 1u); else { c.pc = 0x0011FCE0u; return; } if (c.pc != 0x00120814u) [[unlikely]] return; }
L_00120814:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[6]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 208u) & ~15u, c.r[7]);  if (t) { goto L_00120A08; } }
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_00120828:
    set32(c.r[16], c.r[16].w[0] - 16u);
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[23].w[0] + 4u), c.r[6].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001207D8u | kUnwind; return; } goto L_001207D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[23].w[0] + 4u), c.r[16].w[0]);  if (t) { goto L_00120844; } }
L_00120840:
    st32((c.r[23].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_00120844:
    set32(c.r[2], c.r[7].w[0] + 11136u);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    set32(c.r[23], c.r[23].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0012088C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012087Cu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 280u, depth + 1u); else { c.pc = 0x0011FCE0u; return; } if (c.pc != 0x0012087Cu) [[unlikely]] return; }
L_0012087C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 156u)));  if (t) { goto L_00120A0C; } }
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_0012088C:
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_00120890:
    st32((c.r[23].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_00120894:
    st32((c.r[23].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[23], c.r[23].w[0] + 8u);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001208DC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001208CCu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 280u, depth + 1u); else { c.pc = 0x0011FCE0u; return; } if (c.pc != 0x001208CCu) [[unlikely]] return; }
L_001208CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 156u)));  if (t) { goto L_00120A0C; } }
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_001208DC:
    c.r[2].d[0] = c.r[22].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[30].w[0] - c.r[21].w[0]);  if (t) { goto L_001209A8; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; set32(c.r[4], ld32((c.r[29].w[0] + 160u)));  if (t) { goto L_001209AC; } }
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[8].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_00120968; } }
    set32(c.r[19], 0u + 16u);
    set32(c.r[17], c.r[8].w[0] + 11120u);
    st32((c.r[23].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 3;
L_00120908:
    st32((c.r[23].w[0]), c.r[17].w[0]);
    set32(c.r[23], c.r[23].w[0] + 8u);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.r[4].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00120950; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 156u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120940u); st128((c.r[29].w[0] + 224u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_0007(c, 280u, depth + 1u); else { c.pc = 0x0011FCE0u; return; } if (c.pc != 0x00120940u) [[unlikely]] return; }
L_00120940:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 224u) & ~15u, c.r[8]);  if (t) { goto L_00120A08; } }
    set32(c.r[2], c.r[29].w[0] + 16u);
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00120950:
    set32(c.r[16], c.r[16].w[0] - 16u);
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[23].w[0] + 4u), c.r[19].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00120908u | kUnwind; return; } goto L_00120908; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[23].w[0] + 4u), c.r[16].w[0]);  if (t) { goto L_0012096C; } }
L_00120968:
    st32((c.r[23].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_0012096C:
    set32(c.r[2], c.r[8].w[0] + 11120u);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001209A8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001209A0u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 280u, depth + 1u); else { c.pc = 0x0011FCE0u; return; } if (c.pc != 0x001209A0u) [[unlikely]] return; }
L_001209A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 156u)));  if (t) { goto L_00120A0C; } }
L_001209A8:
    set32(c.r[4], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 1;
L_001209AC:
    c.r[2].d[0] = c.r[21].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[30].d[0] = c.r[21].d[0];
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[4], c.r[4].w[0] + c.r[30].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 160u), c.r[4].w[0]);  if (t) { goto L_001209D8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001209D0u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 280u, depth + 1u); else { c.pc = 0x0011FCE0u; return; } if (c.pc != 0x001209D0u) [[unlikely]] return; }
L_001209D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 156u)));  if (t) { goto L_00120A0C; } }
L_001209D8:
    set32(c.r[5], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 4u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011FF18u | kUnwind; return; } [[clang::musttail]] return unit_0007(c, 292u, depth); } }
L_001209E8:
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 1;
L_001209EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 156u)));  if (t) { goto L_00120A04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001209FCu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 280u, depth + 1u); else { c.pc = 0x0011FCE0u; return; } if (c.pc != 0x001209FCu) [[unlikely]] return; }
L_001209FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 156u)));  if (t) { goto L_00120A0C; } }
L_00120A04:
    st32((c.r[29].w[0] + 4u), 0u);
    c.budget -= 1;
L_00120A08:
    set32(c.r[2], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 1;
L_00120A0C:
    set32(c.r[4], ld32((c.r[29].w[0] + 160u)));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 12u));
    set32(c.r[2], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    c.budget -= 5;
L_00120A20:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 240u));
    c.budget -= 1;
L_00120A24:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 248u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 256u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 264u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 272u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 280u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 288u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 296u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 304u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 312u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_00120A50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00120A78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), 0u);  if (t) { goto L_00120A88; } }
    c.budget -= 1;
L_00120A78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120A80u);  if (depth < kMaxDepth) unit_0006(c, 94u, depth + 1u); else { c.pc = 0x00119240u; return; } if (c.pc != 0x00120A80u) [[unlikely]] return; }
L_00120A80:
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 2;
L_00120A88:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00120A98:
    set32(c.r[29], c.r[29].w[0] - 1152u);
    set32(c.r[10], 0u + 1024u);
    st64((c.r[29].w[0] + 1120u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 1128u), c.r[17].d[0]);
    set32(c.r[11], c.r[29].w[0] + 96u);
    st64((c.r[29].w[0] + 1136u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.r[11].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));
    c.r[9].d[0] = ld16((c.r[16].w[0] + 14u));
    set32(c.r[8], ld32((c.r[16].w[0] + 84u)));
    c.r[2].d[0] = c.r[2].d[0] & 65533ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 36u)));
    st32((c.r[29].w[0] + 84u), c.r[8].w[0]);
    st16((c.r[29].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[29].w[0] + 14u), static_cast<std::uint16_t>(c.r[9].w[0]));
    st32((c.r[29].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[10].w[0]);
    st32((c.r[29].w[0]), c.r[11].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[10].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120AFCu); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_0008(c, 82u, depth + 1u); else { c.pc = 0x00120B50u; return; } if (c.pc != 0x00120AFCu) [[unlikely]] return; }
L_00120AFC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] < 0; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_00120B18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120B10u);  if (depth < kMaxDepth) unit_0005(c, 260u, depth + 1u); else { c.pc = 0x00117F40u; return; } if (c.pc != 0x00120B10u) [[unlikely]] return; }
L_00120B10:
    set32(c.r[3], 0u - 1u);
    if (c.r[2].d[0] != 0) c.r[17].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_00120B18:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00120B38; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_00120B38:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 1120u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 1128u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 1136u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1152u);  c.pc = t; return; }
L_00120B50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (t) { goto L_00120B88; } }
    set32(c.r[2], ld32((c.r[2].w[0] - 17840u)));
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
L_00120B88:
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00120BA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120B9Cu);  if (depth < kMaxDepth) unit_0006(c, 28u, depth + 1u); else { c.pc = 0x001183A0u; return; } if (c.pc != 0x00120B9Cu) [[unlikely]] return; }
L_00120B9C:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00120BA4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_00120BC8; }
L_00120BC8:
    set32(c.r[29], c.r[29].w[0] - 656u);
    st64((c.r[29].w[0] + 576u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 624u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 484u), c.r[4].w[0]);
    st64((c.r[29].w[0] + 584u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 592u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 600u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 608u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 616u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 632u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 640u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 648u), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120C08u); st32((c.r[29].w[0] + 488u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_0006(c, 141u, depth + 1u); else { c.pc = 0x001199C0u; return; } if (c.pc != 0x00120C08u) [[unlikely]] return; }
L_00120C08:
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 12u));
    st32((c.r[29].w[0] + 500u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 472u), 0u);  if (t) { goto L_00120C30; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[3].d[0] & 26ull;  goto L_00120C4C; }
L_00120C30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120C38u); set32(c.r[4], ld32((c.r[29].w[0] + 488u)));  if (depth < kMaxDepth) unit_0008(c, 327u, depth + 1u); else { c.pc = 0x00123378u; return; } if (c.pc != 0x00120C38u) [[unlikely]] return; }
L_00120C38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00122208; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 488u)));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 12u));
    c.r[3].d[0] = c.r[3].d[0] & 26ull;
    c.budget -= 3;
L_00120C4C:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[19], c.r[29].w[0] + 32u);  if (t) { goto L_00120C80; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 488u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 14u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00120C80; } }
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120C74u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 79u, depth + 1u); else { c.pc = 0x00120A98u; return; } if (c.pc != 0x00120C74u) [[unlikely]] return; }
L_00120C74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 576u));  if (t) { goto L_0012220C; } }
    c.budget -= 1;
L_00120C80:
    st32((c.r[29].w[0] + 24u), 0u);
    st32((c.r[29].w[0] + 16u), c.r[19].w[0]);
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), 0u);
    st32((c.r[29].w[0] + 492u), 0u);
    c.budget -= 6;
L_00120C98:
    c.r[21].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[17], 0u + 37u);
    c.budget -= 2;
L_00120CA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 17840u)));
    set32(c.r[5], c.r[29].w[0] + 468u);
    set32(c.r[7], ld32((c.r[3].w[0] - 17832u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120CC0u); set32(c.r[8], c.r[29].w[0] + 472u);  if (depth < kMaxDepth) unit_0006(c, 185u, depth + 1u); else { c.pc = 0x0011A7E8u; return; } if (c.pc != 0x00120CC0u) [[unlikely]] return; }
L_00120CC0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].sd[0] <= 0) { set32(c.r[17], c.r[18].w[0] - c.r[21].w[0]);  goto L_00120CE0; }
    set32(c.r[2], ld32((c.r[29].w[0] + 468u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; set32(c.r[18], c.r[18].w[0] + c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00120CA0u | kUnwind; return; } goto L_00120CA0; } }
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[17], c.r[18].w[0] - c.r[21].w[0]);
    c.budget -= 2;
L_00120CE0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00120D3C; } }
    st32((c.r[19].w[0] + 4u), c.r[17].w[0]);
    st32((c.r[19].w[0]), c.r[21].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00120D30; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120D20u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0008(c, 77u, depth + 1u); else { c.pc = 0x00120A50u; return; } if (c.pc != 0x00120D20u) [[unlikely]] return; }
L_00120D20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_001221F4; } }
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_00120D30:
    set32(c.r[5], ld32((c.r[29].w[0] + 492u)));
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    st32((c.r[29].w[0] + 492u), c.r[5].w[0]);
    c.budget -= 3;
L_00120D3C:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; set32(c.r[2], ld32((c.r[29].w[0] + 24u)));  if (t) { goto L_001221D4; } }
    st8((c.r[29].w[0] + 465u), static_cast<std::uint8_t>(0u));
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[29].w[0] + 516u), 0u);
    c.r[23].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 496u), 0u);
    set32(c.r[20], 0u - 1u);
    c.budget -= 6;
L_00120D5C:
    c.r[4].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 1;
L_00120D60:
    set32(c.r[2], c.r[4].w[0] << 24);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 3;
L_00120D6C:
    set32(c.r[3], c.r[17].w[0] - 32u);
    c.budget -= 1;
L_00120D70:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(89ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { goto L_00121440; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 11776u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00120000u < 16384u) { entry = entries_0008[(t - 0x00120000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00120D90:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 465u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[18].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00120D60u | kUnwind; return; } goto L_00120D60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 32u);  if (t) { goto L_00120DDC; } }
    c.budget -= 1;
L_00120DA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = c.r[23].d[0] | 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00120D5Cu | kUnwind; return; } goto L_00120D5C; } }
L_00120DB0:
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[22], c.r[22].w[0] + 8u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[29].w[0] + 496u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00120D5Cu | kUnwind; return; } goto L_00120D5C; } }
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[29].w[0] + 496u), c.r[2].w[0]);
    c.budget -= 2;
L_00120DCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = c.r[23].d[0] | 4ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00120D5Cu | kUnwind; return; } goto L_00120D5C; } }
    c.budget -= 1;
L_00120DD8:
    set32(c.r[2], 0u + 43u);
    c.budget -= 1;
L_00120DDC:
    c.r[4].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 465u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00120D60u | kUnwind; return; } goto L_00120D60; } }
L_00120DE8:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[2], 0u + 42u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_00120E18; } }
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[20].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[20].sd[0] < -1ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[22], c.r[22].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00120D5Cu | kUnwind; return; } goto L_00120D5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00120D5Cu | kUnwind; return; } goto L_00120D5C; } }
L_00120E18:
    set32(c.r[2], c.r[17].w[0] - 48u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00120E50; } }
L_00120E28:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[16], c.r[2].w[0] - 48u);
    set32(c.r[2], c.r[17].w[0] - 48u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00120E28u | kUnwind; return; } goto L_00120E28; } }
L_00120E50:
    c.r[20].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[20].sd[0] < -1ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[20], 0u - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00120D6Cu | kUnwind; return; } goto L_00120D6C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[17].w[0] - 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00120D70u | kUnwind; return; } goto L_00120D70; } }
L_00120E68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = c.r[23].d[0] | 128ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00120D5Cu | kUnwind; return; } goto L_00120D5C; } }
L_00120E70:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00120E78:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[16], c.r[2].w[0] - 48u);
    set32(c.r[2], c.r[17].w[0] - 48u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00120E78u | kUnwind; return; } goto L_00120E78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 496u), c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00120D6Cu | kUnwind; return; } goto L_00120D6C; } }
L_00120EA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = c.r[23].d[0] | 8ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00120D5Cu | kUnwind; return; } goto L_00120D5C; } }
L_00120EB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = c.r[23].d[0] | 64ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00120D5Cu | kUnwind; return; } goto L_00120D5C; } }
L_00120EB8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[2], 0u + 108u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = ld8((c.r[18].w[0]));  if (t) { goto L_00120ED8; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00120ECC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = c.r[23].d[0] | 32ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00120D5Cu | kUnwind; return; } goto L_00120D5C; } }
    c.budget -= 1;
L_00120ED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = c.r[23].d[0] | 16ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00120D60u | kUnwind; return; } goto L_00120D60; } }
L_00120EE0:
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[22], c.r[22].w[0] + 8u);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[21], c.r[29].w[0] + 96u);
    set32(c.r[30], 0u + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00121450; } }
    c.budget -= 1;
L_00120F00:
    c.r[23].d[0] = c.r[23].d[0] | 16ull;
    c.budget -= 1;
L_00120F04:
    c.r[2].d[0] = c.r[23].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_00120F20; } }
    set32(c.r[22], c.r[22].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[2].w[0]));  if (t) { goto L_00120F40; } }
    c.budget -= 1;
L_00120F20:
    c.r[2].d[0] = c.r[23].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_00120F38; } }
    set32(c.r[22], c.r[22].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (t) { goto L_00120F40; } }
L_00120F38:
    set32(c.r[22], c.r[22].w[0] + 8u);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_00120F40:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_00121320; } }
    set32(c.r[2], 0u + 45u);
    c.r[16].d[0] = 0ull - c.r[16].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 465u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00121320; } }
L_00120F58:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 103u);  if (t) { goto L_00120F70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u + 6u);  if (t) { goto L_00120F88; } }
    c.budget -= 1;
L_00120F70:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 71u);  if (t) { goto L_00120F80; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[23].d[0] & 8ull;  if (t) { goto L_00120F8C; } }
L_00120F80:
    set32(c.r[2], 0u + 1u);
    if (c.r[20].d[0] == 0) c.r[20].d[0] = c.r[2].d[0];
    c.budget -= 2;
L_00120F88:
    c.r[2].d[0] = c.r[23].d[0] & 8ull;
    c.budget -= 1;
L_00120F8C:
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    c.r[2].d[0] = ld64((c.r[2].w[0]));
    st64((c.r[29].w[0] + 504u), c.r[2].d[0]);
    c.r[4].d[0] = ld64((c.r[29].w[0] + 504u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120FA4u); set32(c.r[22], c.r[22].w[0] + 8u);  if (depth < kMaxDepth) unit_0004(c, 208u, depth + 1u); else { c.pc = 0x001132E0u; return; } if (c.pc != 0x00120FA4u) [[unlikely]] return; }
L_00120FA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00120FE0; } }
    c.r[4].d[0] = ld64((c.r[29].w[0] + 504u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120FBCu);  if (depth < kMaxDepth) unit_0005(c, 81u, depth + 1u); else { c.pc = 0x001162C0u; return; } if (c.pc != 0x00120FBCu) [[unlikely]] return; }
L_00120FBC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_00120FD0; } }
    set32(c.r[2], 0u + 45u);
    st8((c.r[29].w[0] + 465u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
L_00120FD0:
    set32(c.r[30], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[2].w[0] + 11648u);  if (t) { goto L_00121454; } }
    c.budget -= 1;
L_00120FE0:
    c.r[4].d[0] = ld64((c.r[29].w[0] + 504u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00120FECu);  if (depth < kMaxDepth) unit_0004(c, 209u, depth + 1u); else { c.pc = 0x00113328u; return; } if (c.pc != 0x00120FECu) [[unlikely]] return; }
L_00120FEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_00121000; } }
    set32(c.r[30], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[2].w[0] + 11656u);  if (t) { goto L_00121454; } }
L_00121000:
    c.r[23].d[0] = c.r[23].d[0] | 256ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 484u)));
    c.r[5].d[0] = ld64((c.r[29].w[0] + 504u));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 464u);
    set32(c.r[9], c.r[29].w[0] + 476u);
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121028u); set32(c.r[11], c.r[29].w[0] + 480u);  if (depth < kMaxDepth) unit_0008(c, 214u, depth + 1u); else { c.pc = 0x00122238u; return; } if (c.pc != 0x00121028u) [[unlikely]] return; }
L_00121028:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 103u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 71u);  if (t) { goto L_00121040; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[7], ld32((c.r[29].w[0] + 476u)));  if (t) { goto L_00121070; } }
    goto L_00121040;
L_0012103C:
    set32(c.r[7], ld32((c.r[29].w[0] + 476u)));
    c.budget -= 1;
L_00121040:
    set32(c.r[7], ld32((c.r[29].w[0] + 476u)));
    c.r[2].d[0] = c.r[7].sd[0] < -3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 101u);  if (t) { goto L_00121060; } }
    c.r[2].d[0] = c.r[20].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], 0u + 103u);  goto L_00121070; }
    set32(c.r[2], 0u + 101u);
    c.budget -= 1;
L_00121060:
    c.r[4].d[0] = c.r[17].d[0] ^ 103ull;
    set32(c.r[3], 0u + 69u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    if (c.r[4].d[0] != 0) c.r[17].d[0] = c.r[3].d[0];
    c.budget -= 4;
L_00121070:
    c.r[2].d[0] = c.r[17].sd[0] < 102ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 102u);  goto L_001210C0; }
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.budget -= 1;
L_00121080:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121094u); st32((c.r[29].w[0] + 476u), c.r[7].w[0]);  if (depth < kMaxDepth) unit_0008(c, 220u, depth + 1u); else { c.pc = 0x001223F8u; return; } if (c.pc != 0x00121094u) [[unlikely]] return; }
L_00121094:
    st32((c.r[29].w[0] + 512u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 480u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 512u)));
    c.r[3].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[30], c.r[6].w[0] + c.r[2].w[0]);  if (t) { goto L_001210B8; } }
    c.r[2].d[0] = c.r[23].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 464u)));  if (t) { goto L_00121124; } }
L_001210B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[30], c.r[30].w[0] + 1u);  if (t) { goto L_00121120; } }
L_001210C0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[5], ld32((c.r[29].w[0] + 480u)));  if (t) { goto L_001210F0; } }
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] <= 0; set32(c.r[30], c.r[20].w[0] + 2u);  if (t) { goto L_00121120; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull; c.r[30].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_001210E4; } }
    c.r[2].d[0] = c.r[23].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 464u)));  if (t) { goto L_00121124; } }
L_001210E4:
    set32(c.r[2], c.r[7].w[0] + c.r[20].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[30], c.r[2].w[0] + 1u);  if (t) { goto L_00121120; } }
L_001210F0:
    c.r[2].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[23].d[0] & 1ull;  if (t) { goto L_00121110; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[30].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00121120; } }
    goto L_00121104;
L_00121100:
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_00121104:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[30], c.r[7].w[0] + 1u);  if (t) { goto L_00121120; } }
    c.budget -= 1;
L_00121110:
    c.budget -= 2;
    if (c.r[7].sd[0] > 0) { set32(c.r[30], c.r[5].w[0] + 1u);  goto L_00121120; }
    set32(c.r[2], c.r[5].w[0] - c.r[7].w[0]);
    set32(c.r[30], c.r[2].w[0] + 2u);
    c.budget -= 2;
L_00121120:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 464u)));
    c.budget -= 1;
L_00121124:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 45u);  if (t) { goto L_00121454; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 465u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00121454; } }
    c.budget -= 1;
L_00121138:
    c.r[2].d[0] = c.r[23].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[23].d[0] & 64ull;  if (t) { goto L_00121160; } }
    goto L_00121144;
L_00121140:
    c.r[2].d[0] = c.r[23].d[0] & 64ull;
    c.budget -= 1;
L_00121144:
    c.r[3].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[22], c.r[22].w[0] + 8u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 492u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st64((c.r[2].w[0]), c.r[3].d[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00120C98u | kUnwind; return; } goto L_00120C98; } }
    c.budget -= 1;
L_00121160:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_00121180; } }
    set32(c.r[22], c.r[22].w[0] + 8u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[4], ld32((c.r[29].w[0] + 492u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00120C98u | kUnwind; return; } goto L_00120C98; } }
    c.budget -= 1;
L_00121180:
    set32(c.r[22], c.r[22].w[0] + 8u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 492u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00120C98u | kUnwind; return; } goto L_00120C98; } }
    c.budget -= 1;
L_00121198:
    c.r[23].d[0] = c.r[23].d[0] | 16ull;
    c.budget -= 1;
L_0012119C:
    c.r[2].d[0] = c.r[23].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_001211B8; } }
    set32(c.r[22], c.r[22].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[2].w[0]));  if (t) { goto L_001211D8; } }
    c.budget -= 1;
L_001211B8:
    c.r[2].d[0] = c.r[23].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_001211D0; } }
    set32(c.r[22], c.r[22].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld16((c.r[2].w[0]));  if (t) { goto L_001211D8; } }
L_001211D0:
    set32(c.r[22], c.r[22].w[0] + 8u);
    c.r[16].d[0] = ld32((c.r[2].w[0]));
    c.budget -= 2;
L_001211D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0012131C; } }
L_001211E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[3].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 11664u);
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[22], c.r[22].w[0] + 8u);
    c.r[23].d[0] = c.r[23].d[0] | 2ull;
    st32((c.r[29].w[0] + 524u), c.r[2].w[0]);
    c.budget -= 7;
L_001211FC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 120u);  if (t) { goto L_0012131C; } }
L_00121208:
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[21], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[21].d[0] != 0ull; set32(c.r[22], c.r[22].w[0] + 8u);  if (t) { goto L_00121220; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[21], c.r[2].w[0] + 11688u);
    c.budget -= 2;
L_00121220:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00121258; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121234u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0011A820u; return; } if (c.pc != 0x00121234u) [[unlikely]] return; }
L_00121234:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[30].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00121450; } }
    set32(c.r[30], c.r[2].w[0] - c.r[21].w[0]);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st8((c.r[29].w[0] + 465u), static_cast<std::uint8_t>(0u));  goto L_00121454; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[30].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00121450; } }
    c.budget -= 1;
L_00121258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121260u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00121260u) [[unlikely]] return; }
L_00121260:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[30].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00121450; } }
L_00121268:
    c.r[23].d[0] = c.r[23].d[0] | 16ull;
    c.budget -= 1;
L_0012126C:
    c.r[2].d[0] = c.r[23].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_00121288; } }
    set32(c.r[22], c.r[22].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[2].w[0]));  if (t) { goto L_001212A8; } }
    c.budget -= 1;
L_00121288:
    c.r[2].d[0] = c.r[23].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_001212A0; } }
    set32(c.r[22], c.r[22].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld16((c.r[2].w[0]));  if (t) { goto L_001212A8; } }
L_001212A0:
    set32(c.r[22], c.r[22].w[0] + 8u);
    c.r[16].d[0] = ld32((c.r[2].w[0]));
    c.budget -= 2;
L_001212A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0012131C; } }
L_001212B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 11696u);  if (t) { goto L_001212C8; } }
    c.budget -= 1;
L_001212C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], c.r[2].w[0] + 11664u);
    c.budget -= 2;
L_001212C8:
    st32((c.r[29].w[0] + 524u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[23].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_001212E8; } }
    set32(c.r[22], c.r[22].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[2].w[0]));  if (t) { goto L_00121308; } }
    c.budget -= 1;
L_001212E8:
    c.r[2].d[0] = c.r[23].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_00121300; } }
    set32(c.r[22], c.r[22].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld16((c.r[2].w[0]));  if (t) { goto L_00121308; } }
L_00121300:
    set32(c.r[22], c.r[22].w[0] + 8u);
    c.r[16].d[0] = ld32((c.r[2].w[0]));
    c.budget -= 2;
L_00121308:
    c.r[2].d[0] = c.r[23].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0012131C; } }
    c.r[2].d[0] = c.r[23].d[0] | 2ull;
    if (c.r[16].d[0] != 0) c.r[23].d[0] = c.r[2].d[0];
    c.budget -= 2;
L_0012131C:
    st8((c.r[29].w[0] + 465u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00121320:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0; st32((c.r[29].w[0] + 516u), c.r[20].w[0]);  if (t) { goto L_00121330; } }
    set32(c.r[2], 0u - 129u);
    c.r[23].d[0] = c.r[23].d[0] & c.r[2].d[0];
    c.budget -= 2;
L_00121330:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[21], c.r[29].w[0] + 444u);  if (t) { goto L_00121344; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 516u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[2], c.r[29].w[0] - c.r[21].w[0]);  if (t) { goto L_00121434; } }
L_00121344:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;  if (t) { goto L_001213E4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 7u);  if (t) { goto L_00121378; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_00121400; } }
    set32(c.r[21], c.r[2].w[0] + 11720u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121370u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00121370u) [[unlikely]] return; }
L_00121370:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[30].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00121454; } }
L_00121378:
    c.r[2].d[0] = c.r[16].d[0] & c.r[4].d[0];
    c.r[16].d[0] = c.r[16].d[0] >> 3;
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(48ll);
    set32(c.r[21], c.r[21].w[0] - 1u);
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00121378u | kUnwind; return; } goto L_00121378; } }
    c.r[2].d[0] = c.r[23].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 48u);  if (t) { goto L_00121430; } }
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[29].w[0] - c.r[21].w[0]);  goto L_00121434; }
    set32(c.r[21], c.r[21].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00121430; } }
    c.budget -= 1;
L_001213B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001213C0u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0005(c, 9u, depth + 1u); else { c.pc = 0x00114DE8u; return; } if (c.pc != 0x001213C0u) [[unlikely]] return; }
L_001213C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(48ll);
    set32(c.r[21], c.r[21].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], 0u + 10u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001213DCu); st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0005(c, 6u, depth + 1u); else { c.pc = 0x00114868u; return; } if (c.pc != 0x001213DCu) [[unlikely]] return; }
L_001213DC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 2;
L_001213E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001213B8u | kUnwind; return; } goto L_001213B8; } }
    c.r[2].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(48ll);
    set32(c.r[21], c.r[21].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00121430; } }
L_00121400:
    set32(c.r[4], 0u + 15u);
    c.budget -= 2;
L_00121408:
    set32(c.r[3], ld32((c.r[29].w[0] + 524u)));
    c.r[2].d[0] = c.r[16].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[21], c.r[21].w[0] - 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[16].d[0] = c.r[16].d[0] >> 4;
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 10;
    { const bool t = c.r[16].d[0] != 0ull; st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00121408u | kUnwind; return; } goto L_00121408; } }
L_00121430:
    set32(c.r[2], c.r[29].w[0] - c.r[21].w[0]);
    c.budget -= 1;
L_00121434:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[30], c.r[2].w[0] + 444u);  if (t) { goto L_00121454; } }
L_0012143C:
    c.budget -= 1;
L_00121440:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[21], c.r[29].w[0] + 96u);  if (t) { goto L_001221D0; } }
    set32(c.r[30], 0u + 1u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 2;
L_00121450:
    st8((c.r[29].w[0] + 465u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00121454:
    set32(c.r[5], ld32((c.r[29].w[0] + 516u)));
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 465u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = ld8((c.r[29].w[0] + 465u));
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[6].d[0];
    st32((c.r[29].w[0] + 520u), c.r[30].w[0]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 520u), c.r[5].w[0]);  if (t) { goto L_00121488; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 520u), c.r[5].w[0]);  if (t) { goto L_00121498; } }
L_00121488:
    set32(c.r[3], ld32((c.r[29].w[0] + 520u)));
    c.r[2].d[0] = c.r[23].d[0] & 2ull;
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 520u), c.r[3].w[0]);
    c.budget -= 4;
L_00121498:
    c.r[5].d[0] = c.r[23].d[0] & 132ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[29].w[0] + 528u), c.r[5].w[0]);  if (t) { goto L_00121588; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 496u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 520u)));
    set32(c.r[16], c.r[6].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] <= 0; c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;  if (t) { goto L_00121588; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_00121538; } }
    set32(c.r[6], 0u + 16u);
    set32(c.r[20], c.r[7].w[0] + 11616u);
    st32((c.r[19].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 4;
L_001214D0:
    st32((c.r[19].w[0]), c.r[20].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.r[4].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00121520; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    st128((c.r[29].w[0] + 544u) & ~15u, c.r[6]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012150Cu); st128((c.r[29].w[0] + 560u) & ~15u, c.r[7]);  if (depth < kMaxDepth) unit_0008(c, 77u, depth + 1u); else { c.pc = 0x00120A50u; return; } if (c.pc != 0x0012150Cu) [[unlikely]] return; }
L_0012150C:
    ld128((c.r[29].w[0] + 544u) & ~15u, c.r[6]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 560u) & ~15u, c.r[7]);  if (t) { goto L_001221F0; } }
    set32(c.r[3], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_00121520:
    set32(c.r[16], c.r[16].w[0] - 16u);
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 4u), c.r[6].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001214D0u | kUnwind; return; } goto L_001214D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[16].w[0]);  if (t) { goto L_0012153C; } }
L_00121538:
    st32((c.r[19].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_0012153C:
    set32(c.r[2], c.r[7].w[0] + 11616u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_00121584; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121574u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0008(c, 77u, depth + 1u); else { c.pc = 0x00120A50u; return; } if (c.pc != 0x00121574u) [[unlikely]] return; }
L_00121574:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_001221F4; } }
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_00121584:
    c.r[4].d[0] = ld8((c.r[29].w[0] + 465u));
    c.budget -= 1;
L_00121588:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001215E0; } }
    set32(c.r[3], c.r[29].w[0] + 465u);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_00121644; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001215CCu); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0008(c, 77u, depth + 1u); else { c.pc = 0x00120A50u; return; } if (c.pc != 0x001215CCu) [[unlikely]] return; }
L_001215CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_001221F4; } }
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00121644; } }
L_001215E0:
    c.r[2].d[0] = c.r[23].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 48u);  if (t) { goto L_00121644; } }
    set32(c.r[4], 0u + 2u);
    st8((c.r[29].w[0] + 448u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 448u);
    st8((c.r[29].w[0] + 449u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[19].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.r[4].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 15;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_00121644; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121634u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0008(c, 77u, depth + 1u); else { c.pc = 0x00120A50u; return; } if (c.pc != 0x00121634u) [[unlikely]] return; }
L_00121634:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_001221F4; } }
L_0012163C:
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 2;
L_00121644:
    set32(c.r[3], ld32((c.r[29].w[0] + 528u)));
    set32(c.r[2], 0u + 128u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], ld32((c.r[29].w[0] + 516u)));  if (t) { goto L_00121738; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 496u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 520u)));
    set32(c.r[16], c.r[4].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] <= 0; set32(c.r[4], ld32((c.r[29].w[0] + 516u)));  if (t) { goto L_00121738; } }
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_001216E8; } }
    set32(c.r[6], 0u + 16u);
    set32(c.r[20], c.r[7].w[0] + 11632u);
    st32((c.r[19].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 3;
L_00121680:
    st32((c.r[19].w[0]), c.r[20].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.r[4].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_001216D0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    st128((c.r[29].w[0] + 544u) & ~15u, c.r[6]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001216BCu); st128((c.r[29].w[0] + 560u) & ~15u, c.r[7]);  if (depth < kMaxDepth) unit_0008(c, 77u, depth + 1u); else { c.pc = 0x00120A50u; return; } if (c.pc != 0x001216BCu) [[unlikely]] return; }
L_001216BC:
    ld128((c.r[29].w[0] + 544u) & ~15u, c.r[6]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 560u) & ~15u, c.r[7]);  if (t) { goto L_001221F0; } }
    set32(c.r[2], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_001216D0:
    set32(c.r[16], c.r[16].w[0] - 16u);
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 4u), c.r[6].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00121680u | kUnwind; return; } goto L_00121680; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[16].w[0]);  if (t) { goto L_001216EC; } }
L_001216E8:
    st32((c.r[19].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_001216EC:
    set32(c.r[2], c.r[7].w[0] + 11632u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_00121734; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121724u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0008(c, 77u, depth + 1u); else { c.pc = 0x00120A50u; return; } if (c.pc != 0x00121724u) [[unlikely]] return; }
L_00121724:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_001221F4; } }
    set32(c.r[3], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_00121734:
    set32(c.r[4], ld32((c.r[29].w[0] + 516u)));
    c.budget -= 1;
L_00121738:
    set32(c.r[16], c.r[4].w[0] - c.r[30].w[0]);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] <= 0; c.r[2].d[0] = c.r[23].d[0] & 256ull;  if (t) { goto L_00121818; } }
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_001217C8; } }
    set32(c.r[6], 0u + 16u);
    set32(c.r[20], c.r[7].w[0] + 11632u);
    st32((c.r[19].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 4;
L_00121760:
    st32((c.r[19].w[0]), c.r[20].w[0]);
    c.budget -= 1;
L_00121764:
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.r[4].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 6;
L_0012177C:
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_001217B0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    st128((c.r[29].w[0] + 544u) & ~15u, c.r[6]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012179Cu); st128((c.r[29].w[0] + 560u) & ~15u, c.r[7]);  if (depth < kMaxDepth) unit_0008(c, 77u, depth + 1u); else { c.pc = 0x00120A50u; return; } if (c.pc != 0x0012179Cu) [[unlikely]] return; }
L_0012179C:
    ld128((c.r[29].w[0] + 544u) & ~15u, c.r[6]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 560u) & ~15u, c.r[7]);  if (t) { goto L_001221F0; } }
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_001217B0:
    set32(c.r[16], c.r[16].w[0] - 16u);
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 4u), c.r[6].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00121760u | kUnwind; return; } goto L_00121760; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[16].w[0]);  if (t) { goto L_001217CC; } }
L_001217C8:
    st32((c.r[19].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_001217CC:
    set32(c.r[2], c.r[7].w[0] + 11632u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 8;
L_001217EC:
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_00121814; } }
L_001217F8:
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121804u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0008(c, 77u, depth + 1u); else { c.pc = 0x00120A50u; return; } if (c.pc != 0x00121804u) [[unlikely]] return; }
L_00121804:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_001221F4; } }
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 2;
L_00121814:
    c.r[2].d[0] = c.r[23].d[0] & 256ull;
    c.budget -= 1;
L_00121818:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[17].sd[0] < 102ll ? 1ull : 0ull;  goto L_00121840; }
    st32((c.r[19].w[0] + 4u), c.r[30].w[0]);
    st32((c.r[19].w[0]), c.r[21].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[30].w[0]);  if (t) { goto L_00122078; } }
    goto L_00121840;
L_0012183C:
    set32(c.r[3], c.r[3].w[0] + c.r[30].w[0]);
    c.budget -= 1;
L_00121840:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 480u)));  if (t) { goto L_00121E48; } }
    c.r[4].d[0] = ld64((c.r[29].w[0] + 504u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121858u);  if (depth < kMaxDepth) unit_0005(c, 81u, depth + 1u); else { c.pc = 0x001162C0u; return; } if (c.pc != 0x00121858u) [[unlikely]] return; }
L_00121858:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 476u)));  if (t) { goto L_001219D8; } }
    set32(c.r[16], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    st32((c.r[19].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + 11752u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_00121874:
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    c.budget -= 3;
L_00121880:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_001218B4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001218A4u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0008(c, 77u, depth + 1u); else { c.pc = 0x00120A50u; return; } if (c.pc != 0x001218A4u) [[unlikely]] return; }
L_001218A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_001221F4; } }
    set32(c.r[3], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_001218B4:
    set32(c.r[2], ld32((c.r[29].w[0] + 476u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 480u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
L_001218C0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[19].w[0] + 4u), c.r[16].w[0]);  goto L_001218D8; }
    c.r[2].d[0] = c.r[23].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[23].d[0] & 4ull;  if (t) { goto L_001220AC; } }
    st32((c.r[19].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_001218D8:
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 500u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0]), c.r[4].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[4].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00121920; } }
    goto L_00121904;
L_00121900:
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 1;
L_00121904:
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121910u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0008(c, 77u, depth + 1u); else { c.pc = 0x00120A50u; return; } if (c.pc != 0x00121910u) [[unlikely]] return; }
L_00121910:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_001221F4; } }
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_00121920:
    set32(c.r[2], ld32((c.r[29].w[0] + 480u)));
    c.budget -= 1;
L_00121924:
    set32(c.r[16], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] <= 0; c.r[2].d[0] = c.r[23].d[0] & 4ull;  if (t) { goto L_001220AC; } }
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_001219A8; } }
    set32(c.r[20], 0u + 16u);
    c.budget -= 1;
L_00121940:
    set32(c.r[17], c.r[7].w[0] + 11632u);
    st32((c.r[19].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 2;
L_00121948:
    st32((c.r[19].w[0]), c.r[17].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.r[4].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00121990; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121980u); st128((c.r[29].w[0] + 560u) & ~15u, c.r[7]);  if (depth < kMaxDepth) unit_0008(c, 77u, depth + 1u); else { c.pc = 0x00120A50u; return; } if (c.pc != 0x00121980u) [[unlikely]] return; }
L_00121980:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 560u) & ~15u, c.r[7]);  if (t) { goto L_001221F0; } }
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 2;
L_00121990:
    set32(c.r[16], c.r[16].w[0] - 16u);
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 4u), c.r[20].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00121948u | kUnwind; return; } goto L_00121948; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[16].w[0]);  if (t) { goto L_001219AC; } }
L_001219A8:
    st32((c.r[19].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_001219AC:
    set32(c.r[2], c.r[7].w[0] + 11632u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_00122084; } }
L_001219D8:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[2], ld32((c.r[29].w[0] + 480u)));  if (t) { goto L_00121BC0; } }
    set32(c.r[16], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    st32((c.r[19].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + 11752u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    c.budget -= 8;
L_00121A00:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_00121A34; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121A24u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0008(c, 77u, depth + 1u); else { c.pc = 0x00120A50u; return; } if (c.pc != 0x00121A24u) [[unlikely]] return; }
L_00121A24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_001221F4; } }
    set32(c.r[3], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_00121A34:
    set32(c.r[2], ld32((c.r[29].w[0] + 476u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[19].w[0] + 4u), c.r[16].w[0]);  goto L_00121A50; }
    set32(c.r[2], ld32((c.r[29].w[0] + 480u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[23].d[0] & 4ull;  if (t) { goto L_001220AC; } }
    st32((c.r[19].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_00121A50:
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 500u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0]), c.r[4].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[4].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00121A98; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 1;
L_00121A80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121A88u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0008(c, 77u, depth + 1u); else { c.pc = 0x00120A50u; return; } if (c.pc != 0x00121A88u) [[unlikely]] return; }
L_00121A88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_001221F4; } }
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_00121A98:
    set32(c.r[2], ld32((c.r[29].w[0] + 476u)));
    set32(c.r[16], 0u - c.r[2].w[0]);
    c.budget -= 4;
    if (c.r[16].sd[0] <= 0) { st32((c.r[19].w[0]), c.r[21].w[0]);  goto L_00121B70; }
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_00121B20; } }
    set32(c.r[20], 0u + 16u);
    set32(c.r[17], c.r[7].w[0] + 11632u);
    st32((c.r[19].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 3;
L_00121AC0:
    st32((c.r[19].w[0]), c.r[17].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.r[4].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00121B08; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121AF8u); st128((c.r[29].w[0] + 560u) & ~15u, c.r[7]);  if (depth < kMaxDepth) unit_0008(c, 77u, depth + 1u); else { c.pc = 0x00120A50u; return; } if (c.pc != 0x00121AF8u) [[unlikely]] return; }
L_00121AF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 560u) & ~15u, c.r[7]);  if (t) { goto L_001221F0; } }
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 2;
L_00121B08:
    set32(c.r[16], c.r[16].w[0] - 16u);
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 4u), c.r[20].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00121AC0u | kUnwind; return; } goto L_00121AC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[16].w[0]);  if (t) { goto L_00121B24; } }
L_00121B20:
    st32((c.r[19].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_00121B24:
    set32(c.r[2], c.r[7].w[0] + 11632u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_00121B6C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121B5Cu); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0008(c, 77u, depth + 1u); else { c.pc = 0x00120A50u; return; } if (c.pc != 0x00121B5Cu) [[unlikely]] return; }
L_00121B5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_001221F4; } }
    set32(c.r[2], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00121B6C:
    st32((c.r[19].w[0]), c.r[21].w[0]);
    c.budget -= 1;
L_00121B70:
    set32(c.r[2], ld32((c.r[29].w[0] + 480u)));
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 480u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[5].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[29].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_001220A8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121BACu); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0008(c, 77u, depth + 1u); else { c.pc = 0x00120A50u; return; } if (c.pc != 0x00121BACu) [[unlikely]] return; }
L_00121BAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_001221F4; } }
    set32(c.r[3], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_001220A8; } }
L_00121BC0:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0]), c.r[21].w[0]);  if (t) { goto L_00121D38; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 480u)));
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 480u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_00121C1C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121C08u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0008(c, 77u, depth + 1u); else { c.pc = 0x00120A50u; return; } if (c.pc != 0x00121C08u) [[unlikely]] return; }
L_00121C08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_001221F4; } }
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], ld32((c.r[29].w[0] + 480u)));
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
L_00121C1C:
    set32(c.r[2], ld32((c.r[29].w[0] + 476u)));
    set32(c.r[16], c.r[2].w[0] - c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] <= 0; c.r[2].d[0] = c.r[23].d[0] & 1ull;  if (t) { goto L_00121CF8; } }
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_00121CA8; } }
    set32(c.r[20], 0u + 16u);
    c.budget -= 1;
L_00121C3C:
    set32(c.r[17], c.r[7].w[0] + 11632u);
    st32((c.r[19].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 3;
L_00121C48:
    st32((c.r[19].w[0]), c.r[17].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.r[4].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00121C90; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121C80u); st128((c.r[29].w[0] + 560u) & ~15u, c.r[7]);  if (depth < kMaxDepth) unit_0008(c, 77u, depth + 1u); else { c.pc = 0x00120A50u; return; } if (c.pc != 0x00121C80u) [[unlikely]] return; }
L_00121C80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 560u) & ~15u, c.r[7]);  if (t) { goto L_001221F0; } }
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_00121C90:
    set32(c.r[16], c.r[16].w[0] - 16u);
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 4u), c.r[20].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00121C48u | kUnwind; return; } goto L_00121C48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[16].w[0]);  if (t) { goto L_00121CAC; } }
L_00121CA8:
    st32((c.r[19].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_00121CAC:
    set32(c.r[2], c.r[7].w[0] + 11632u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_00121CF4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121CE4u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0008(c, 77u, depth + 1u); else { c.pc = 0x00120A50u; return; } if (c.pc != 0x00121CE4u) [[unlikely]] return; }
L_00121CE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_001221F4; } }
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 2;
L_00121CF4:
    c.r[2].d[0] = c.r[23].d[0] & 1ull;
    c.budget -= 1;
L_00121CF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001220A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 11760u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_00122084; } }
    c.budget -= 1;
L_00121D38:
    set32(c.r[2], ld32((c.r[29].w[0] + 476u)));
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 476u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_00121D88; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121D74u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0008(c, 77u, depth + 1u); else { c.pc = 0x00120A50u; return; } if (c.pc != 0x00121D74u) [[unlikely]] return; }
L_00121D74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_001221F4; } }
    set32(c.r[3], c.r[29].w[0] + 32u);
    set32(c.r[7], ld32((c.r[29].w[0] + 476u)));
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
L_00121D88:
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 11760u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[21], c.r[21].w[0] + c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 15;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_00121DE0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121DD0u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0008(c, 77u, depth + 1u); else { c.pc = 0x00120A50u; return; } if (c.pc != 0x00121DD0u) [[unlikely]] return; }
L_00121DD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_001221F4; } }
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_00121DE0:
    st32((c.r[19].w[0]), c.r[21].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 476u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 480u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 480u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 476u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    c.r[6].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 17;
    { const bool t = c.r[6].d[0] != 0ull; st32((c.r[29].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_001220A8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121E30u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0008(c, 77u, depth + 1u); else { c.pc = 0x00120A50u; return; } if (c.pc != 0x00121E30u) [[unlikely]] return; }
L_00121E30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_001221F4; } }
    goto L_00121E38;
L_00121E34:
    set32(c.r[2], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 1;
L_00121E38:
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 1;
L_00121E3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001220A8; } }
    c.budget -= 1;
L_00121E48:
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[21].w[0]));  goto L_00121E64; }
    c.r[2].d[0] = c.r[23].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00122010; } }
    c.r[3].d[0] = ld8((c.r[21].w[0]));
    c.budget -= 1;
L_00121E64:
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[4], 0u + 46u);
    set32(c.r[5], 0u + 2u);
    st8((c.r[29].w[0] + 448u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[29].w[0] + 448u);
    st8((c.r[29].w[0] + 449u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[19].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.r[4].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 17;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_00121EC4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121EB4u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0008(c, 77u, depth + 1u); else { c.pc = 0x00120A50u; return; } if (c.pc != 0x00121EB4u) [[unlikely]] return; }
L_00121EB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_001221F4; } }
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 2;
L_00121EC4:
    c.r[4].d[0] = ld64((c.r[29].w[0] + 504u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121ED4u);  if (depth < kMaxDepth) unit_0005(c, 81u, depth + 1u); else { c.pc = 0x001162C0u; return; } if (c.pc != 0x00121ED4u) [[unlikely]] return; }
L_00121ED4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 480u)));  if (t) { goto L_00121F38; } }
    st32((c.r[19].w[0]), c.r[21].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 480u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 480u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 15;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[29].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_00122058; } }
L_00121F18:
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121F24u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0008(c, 77u, depth + 1u); else { c.pc = 0x00120A50u; return; } if (c.pc != 0x00121F24u) [[unlikely]] return; }
L_00121F24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_001221F4; } }
    set32(c.r[2], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00122058; } }
L_00121F38:
    set32(c.r[16], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] <= 0; set32(c.r[6], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_0012205C; } }
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_00121FC0; } }
    set32(c.r[20], 0u + 16u);
    set32(c.r[17], c.r[7].w[0] + 11632u);
    st32((c.r[19].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 4;
L_00121F60:
    st32((c.r[19].w[0]), c.r[17].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.r[4].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00121FA8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121F98u); st128((c.r[29].w[0] + 560u) & ~15u, c.r[7]);  if (depth < kMaxDepth) unit_0008(c, 77u, depth + 1u); else { c.pc = 0x00120A50u; return; } if (c.pc != 0x00121F98u) [[unlikely]] return; }
L_00121F98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 560u) & ~15u, c.r[7]);  if (t) { goto L_001221F0; } }
    set32(c.r[3], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_00121FA8:
    set32(c.r[16], c.r[16].w[0] - 16u);
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 4u), c.r[20].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00121F60u | kUnwind; return; } goto L_00121F60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[16].w[0]);  if (t) { goto L_00121FC4; } }
L_00121FC0:
    st32((c.r[19].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_00121FC4:
    set32(c.r[2], c.r[7].w[0] + 11632u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_00122058; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00121FFCu); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0008(c, 77u, depth + 1u); else { c.pc = 0x00120A50u; return; } if (c.pc != 0x00121FFCu) [[unlikely]] return; }
L_00121FFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_001221F4; } }
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00122058; } }
L_00122010:
    st32((c.r[19].w[0]), c.r[21].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_00122058; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 1;
L_00122040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00122048u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0008(c, 77u, depth + 1u); else { c.pc = 0x00120A50u; return; } if (c.pc != 0x00122048u) [[unlikely]] return; }
L_00122048:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_001221F4; } }
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_00122058:
    set32(c.r[6], ld32((c.r[29].w[0] + 512u)));
    c.budget -= 1;
L_0012205C:
    st32((c.r[19].w[0]), c.r[29].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 7;
L_00122078:
    c.r[4].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 2;
L_00122080:
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 1;
L_00122084:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = c.r[23].d[0] & 4ull;  if (t) { goto L_001220AC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00122098u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0008(c, 77u, depth + 1u); else { c.pc = 0x00120A50u; return; } if (c.pc != 0x00122098u) [[unlikely]] return; }
L_00122098:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_001221F4; } }
    set32(c.r[2], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_001220A8:
    c.r[2].d[0] = c.r[23].d[0] & 4ull;
    c.budget -= 1;
L_001220AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 496u)));  if (t) { goto L_00122180; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 520u)));
    set32(c.r[16], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] <= 0; set32(c.r[6], ld32((c.r[29].w[0] + 520u)));  if (t) { goto L_00122188; } }
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_00122140; } }
L_001220D0:
    set32(c.r[20], 0u + 16u);
    set32(c.r[17], c.r[7].w[0] + 11616u);
    st32((c.r[19].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 4;
L_001220E0:
    st32((c.r[19].w[0]), c.r[17].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.r[4].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 8;
L_00122100:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00122128; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00122118u); st128((c.r[29].w[0] + 560u) & ~15u, c.r[7]);  if (depth < kMaxDepth) unit_0008(c, 77u, depth + 1u); else { c.pc = 0x00120A50u; return; } if (c.pc != 0x00122118u) [[unlikely]] return; }
L_00122118:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 560u) & ~15u, c.r[7]);  if (t) { goto L_001221F0; } }
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_00122128:
    set32(c.r[16], c.r[16].w[0] - 16u);
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 4u), c.r[20].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001220E0u | kUnwind; return; } goto L_001220E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[16].w[0]);  if (t) { goto L_00122144; } }
L_00122140:
    st32((c.r[19].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_00122144:
    set32(c.r[2], c.r[7].w[0] + 11616u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_00122180; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00122178u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0008(c, 77u, depth + 1u); else { c.pc = 0x00120A50u; return; } if (c.pc != 0x00122178u) [[unlikely]] return; }
L_00122178:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_001221F4; } }
L_00122180:
    set32(c.r[6], ld32((c.r[29].w[0] + 520u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 496u)));
    c.budget -= 2;
L_00122188:
    set32(c.r[4], ld32((c.r[29].w[0] + 496u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 492u)));
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[6].d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 492u), c.r[5].w[0]);  if (t) { goto L_001221BC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001221B4u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0008(c, 77u, depth + 1u); else { c.pc = 0x00120A50u; return; } if (c.pc != 0x001221B4u) [[unlikely]] return; }
L_001221B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_001221F4; } }
L_001221BC:
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.budget -= 1;
L_001221C0:
    st32((c.r[29].w[0] + 20u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00120C98u | kUnwind; return; } goto L_00120C98; } }
    c.budget -= 1;
L_001221D0:
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    c.budget -= 1;
L_001221D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_001221EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001221E4u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0008(c, 77u, depth + 1u); else { c.pc = 0x00120A50u; return; } if (c.pc != 0x001221E4u) [[unlikely]] return; }
L_001221E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 488u)));  if (t) { goto L_001221F4; } }
    goto L_001221EC;
L_001221E8:
    set32(c.r[2], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 1;
L_001221EC:
    st32((c.r[29].w[0] + 20u), 0u);
    c.budget -= 1;
L_001221F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 1;
L_001221F4:
    set32(c.r[4], ld32((c.r[29].w[0] + 492u)));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 12u));
    set32(c.r[2], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    c.budget -= 5;
L_00122208:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 576u));
    c.budget -= 1;
L_0012220C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 584u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 592u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 600u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 608u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 616u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 624u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 632u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 640u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 648u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 656u);  c.pc = t; return; }
L_00122238:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 102u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[10].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    set32(c.r[20], 0u + 3u);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[30].d[0]);
    c.r[30].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 22;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; st64((c.r[29].w[0] + 88u), c.r[31].d[0]);  if (t) { goto L_001222AC; } }
    set32(c.r[2], 0u + 101u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 69u);  if (t) { goto L_001222A4; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[20], 0u + 2u);  if (t) { goto L_001222AC; } }
L_001222A4:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[20], 0u + 2u);
    c.budget -= 2;
L_001222AC:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    if (c.r[2].sd[0] >= 0) { st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  goto L_001222D8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001222CCu);  if (depth < kMaxDepth) unit_0005(c, 60u, depth + 1u); else { c.pc = 0x00115D70u; return; } if (c.pc != 0x001222CCu) [[unlikely]] return; }
L_001222CC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 45u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001222D8:
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    c.r[9].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001222F8u); set32(c.r[10], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_0005(c, 126u, depth + 1u); else { c.pc = 0x00116B08u; return; } if (c.pc != 0x001222F8u) [[unlikely]] return; }
L_001222F8:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 103u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 71u);  if (t) { goto L_00122310; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 102u);  if (t) { goto L_0012231C; } }
L_00122310:
    c.r[2].d[0] = c.r[23].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 102u);  if (t) { goto L_001223B8; } }
L_0012231C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[20].w[0] + c.r[19].w[0]);  if (t) { goto L_0012235C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    set32(c.r[2], 0u + 48u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[21].w[0])));  goto L_00122358; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00122344u);  if (depth < kMaxDepth) unit_0005(c, 81u, depth + 1u); else { c.pc = 0x001162C0u; return; } if (c.pc != 0x00122344u) [[unlikely]] return; }
L_00122344:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00122354; } }
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00122354:
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.budget -= 1;
L_00122358:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_0012235C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012236Cu);  if (depth < kMaxDepth) unit_0005(c, 81u, depth + 1u); else { c.pc = 0x001162C0u; return; } if (c.pc != 0x0012236Cu) [[unlikely]] return; }
L_0012236C:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    if (c.r[2].d[0] == 0) c.r[3].d[0] = c.r[16].d[0];
    c.r[2].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_001223BC; } }
    set32(c.r[5], 0u + 48u);
    c.budget -= 2;
L_00122390:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00122390u | kUnwind; return; } goto L_00122390; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - c.r[20].w[0]);  if (t) { goto L_001223C0; } }
    c.budget -= 1;
L_001223B8:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 1;
L_001223BC:
    set32(c.r[3], c.r[3].w[0] - c.r[20].w[0]);
    c.budget -= 1;
L_001223C0:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[30].w[0]), c.r[3].w[0]);
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
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001223F8:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], c.r[4].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[29], c.r[29].w[0] - 320u);  if (t) { goto L_00122418; } }
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u - c.r[5].w[0]);  if (t) { goto L_0012241C; } }
    c.budget -= 1;
L_00122418:
    set32(c.r[2], 0u + 43u);
    c.budget -= 1;
L_0012241C:
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[4].w[0] + 2u);
    set32(c.r[7], c.r[29].w[0] + 308u);
    c.r[2].d[0] = c.r[5].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[9].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_001224B0; } }
    set32(c.r[8], 0u + 10u);
    mmi::div(c, 0, c.r[5].w[0], c.r[8].w[0]);
    c.budget -= 2;
L_0012243C:
    c.budget -= 1;
L_00122440:
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.budget -= 3;
    if (c.r[8].d[0] == 0ull) { breakpoint(c, 0x00122448u);  goto L_0012244C; }
L_0012244C:
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.hi.d[0];
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 48u);
    c.r[3].d[0] = c.r[5].sd[0] < 10ll ? 1ull : 0ull;
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { mmi::div(c, 0, c.r[5].w[0], c.r[8].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00122440u | kUnwind; return; } goto L_00122440; }
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[2], c.r[5].w[0] + 48u);
    c.r[3].d[0] = c.r[7].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001224C8; } }
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 2;
L_00122488:
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00122488u | kUnwind; return; } goto L_00122488; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[6].w[0] - c.r[4].w[0]);  if (t) { goto L_001224CC; } }
    c.budget -= 1;
L_001224B0:
    set32(c.r[2], 0u + 48u);
    set32(c.r[3], c.r[5].w[0] + 48u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 6;
L_001224C8:
    set32(c.r[2], c.r[6].w[0] - c.r[4].w[0]);
    c.budget -= 1;
L_001224CC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_001224D8:
    set32(c.r[29], c.r[29].w[0] - 752u);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 672u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 680u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 696u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 704u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 720u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 744u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 612u), 0u);
    st32((c.r[29].w[0] + 608u), 0u);
    st64((c.r[29].w[0] + 688u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 712u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 728u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 736u), c.r[30].d[0]);
    c.r[30].d[0] = 0ull + 0ull;
    c.budget -= 18;
L_00122520:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    c.budget -= 1;
L_00122524:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 608u)));  if (t) { goto L_00123134; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 37u);  if (t) { goto L_001225C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 10177u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 37u);  goto L_001225C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 4u)));  if (t) { goto L_00122578; } }
    c.budget -= 1;
L_00122560:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 6;
L_00122578:
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { set32(c.r[4], ld32((c.r[18].w[0])));  goto L_00122598; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012258Cu); st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_0007(c, 67u, depth + 1u); else { c.pc = 0x0011CF38u; return; } if (c.pc != 0x0012258Cu) [[unlikely]] return; }
L_0012258C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (t) { goto L_00123130; } }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_00122598:
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 10177u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00122560u | kUnwind; return; } goto L_00122560; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00122524u | kUnwind; return; } goto L_00122524; } }
    c.budget -= 1;
L_001225C0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[17], c.r[21].w[0] - 1u);  if (t) { goto L_001225FC; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001225D0:
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(121ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { goto L_001227D8; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12192u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00120000u < 16384u) { entry = entries_0008[(t - 0x00120000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001225F8:
    set32(c.r[17], c.r[21].w[0] - 1u);
    c.budget -= 1;
L_001225FC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00122600:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[4], ld32((c.r[18].w[0])));  goto L_00122624; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00122618u); st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_0007(c, 67u, depth + 1u); else { c.pc = 0x0011CF38u; return; } if (c.pc != 0x00122618u) [[unlikely]] return; }
L_00122618:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (t) { goto L_00123120; } }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_00122624:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], ld32((c.r[29].w[0] + 608u)));  if (t) { goto L_00123134; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.budget -= 2;
L_0012263C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] <= 0; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00122600u | kUnwind; return; } goto L_00122600; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00122524u | kUnwind; return; } goto L_00122524; } }
L_00122660:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] | 8ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001225D0u | kUnwind; return; } goto L_001225D0; } }
L_00122668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] | 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001225D0u | kUnwind; return; } goto L_001225D0; } }
L_00122670:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] | 2ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001225D0u | kUnwind; return; } goto L_001225D0; } }
L_00122678:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] | 4ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001225D0u | kUnwind; return; } goto L_001225D0; } }
L_00122680:
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[2].w[0] - 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001225D0u | kUnwind; return; } goto L_001225D0; } }
L_00122698:
    c.r[17].d[0] = c.r[17].d[0] | 1ull;
    c.budget -= 1;
L_0012269C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00120000u);
    set32(c.r[16], 0u + 3u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 2080u);  if (t) { goto L_001226F4; } }
    c.budget -= 1;
L_001226B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00120000u);
    set32(c.r[16], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] - 2080u);
    c.r[30].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 612u), c.r[2].w[0]);  if (t) { goto L_00122800; } }
L_001226C8:
    c.r[17].d[0] = c.r[17].d[0] | 1ull;
    c.budget -= 1;
L_001226CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00120000u);
    set32(c.r[16], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] - 1472u);
    set32(c.r[30], 0u + 8u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 612u), c.r[2].w[0]);  if (t) { goto L_00122800; } }
    c.budget -= 1;
L_001226E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00120000u);
    set32(c.r[16], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] - 1472u);
    c.budget -= 3;
L_001226F4:
    set32(c.r[30], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 612u), c.r[2].w[0]);  if (t) { goto L_00122800; } }
L_00122700:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00120000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] | 256ull;  if (t) { goto L_00122760; } }
    c.budget -= 1;
L_00122710:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 4u);  if (t) { goto L_00122800; } }
L_00122718:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 2u);  if (t) { goto L_00122800; } }
L_00122720:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00122730u); st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_0008(c, 315u, depth + 1u); else { c.pc = 0x00123168u; return; } if (c.pc != 0x00122730u) [[unlikely]] return; }
L_00122730:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[17].d[0] = c.r[17].d[0] | 32ull;
    set32(c.r[16], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (t) { goto L_00122800; } }
    c.budget -= 1;
L_00122748:
    c.r[17].d[0] = c.r[17].d[0] | 32ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00122800; } }
    c.budget -= 1;
L_00122758:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00120000u);
    c.r[17].d[0] = c.r[17].d[0] | 272ull;
    c.budget -= 2;
L_00122760:
    set32(c.r[2], c.r[2].w[0] - 1472u);
    set32(c.r[16], 0u + 3u);
    st32((c.r[29].w[0] + 612u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[30], 0u + 16u);  if (t) { goto L_00122800; } }
    c.budget -= 1;
L_00122778:
    c.r[2].d[0] = c.r[17].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00122524u | kUnwind; return; } goto L_00122524; }
    c.r[2].d[0] = c.r[17].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] & 1ull;  goto L_001227A8; }
    c.r[2].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[23], c.r[23].w[0] + 8u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00122520u | kUnwind; return; } goto L_00122520; } }
    c.budget -= 1;
L_001227A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[23].d[0] + 0ull;  if (t) { goto L_001227C0; } }
    set32(c.r[23], c.r[23].w[0] + 8u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st64((c.r[2].w[0]), c.r[8].d[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00122520u | kUnwind; return; } goto L_00122520; } }
L_001227C0:
    set32(c.r[23], c.r[23].w[0] + 8u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[8].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00122520u | kUnwind; return; } goto L_00122520; } }
L_001227D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00123134; } }
L_001227D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 10177u));
    set32(c.r[16], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00120000u);
    set32(c.r[30], 0u + 10u);
    set32(c.r[3], c.r[3].w[0] - 2080u);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    st32((c.r[29].w[0] + 612u), c.r[3].w[0]);
    c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 10;
L_00122800:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { c.r[2].d[0] = c.r[17].d[0] & 32ull;  goto L_00122824; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00122818u); st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_0007(c, 67u, depth + 1u); else { c.pc = 0x0011CF38u; return; } if (c.pc != 0x00122818u) [[unlikely]] return; }
L_00122818:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (t) { goto L_00123120; } }
    c.r[2].d[0] = c.r[17].d[0] & 32ull;
    c.budget -= 1;
L_00122824:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;  if (t) { goto L_00122890; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0])));  if (t) { goto L_00122870; } }
    c.budget -= 1;
L_00122838:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_0012283C:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_00122840:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00122858; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_0012286C; } }
    c.budget -= 1;
L_00122858:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00122864u); st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_0007(c, 67u, depth + 1u); else { c.pc = 0x0011CF38u; return; } if (c.pc != 0x00122864u) [[unlikely]] return; }
L_00122864:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (t) { goto L_00123120; } }
L_0012286C:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_00122870:
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 10177u));
    c.budget -= 4;
L_00122880:
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00122838u | kUnwind; return; } goto L_00122838; }
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 1;
L_00122890:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00122524u | kUnwind; return; } goto L_00122524; }
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12688u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00120000u < 16384u) { entry = entries_0008[(t - 0x00120000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001228B0:
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[17].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; if (c.r[20].d[0] == 0) c.r[20].d[0] = c.r[2].d[0];  if (t) { goto L_00122930; } }
L_001228C0:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001228C8:
    set32(c.r[16], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0])));  goto L_00122910; }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);
    set32(c.r[17], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[20], c.r[20].w[0] - c.r[16].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001228F8u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0007(c, 67u, depth + 1u); else { c.pc = 0x0011CF38u; return; } if (c.pc != 0x001228F8u) [[unlikely]] return; }
L_001228F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001228C8u | kUnwind; return; } goto L_001228C8; } }
L_00122900:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[8], c.r[8].w[0] + c.r[17].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00122520u | kUnwind; return; } goto L_00122520; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 608u)));  if (t) { goto L_00123124; } }
L_00122910:
    set32(c.r[2], c.r[16].w[0] - c.r[20].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + c.r[20].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + c.r[17].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00122520u | kUnwind; return; } goto L_00122520; } }
    c.budget -= 1;
L_00122930:
    c.r[2].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[23], c.r[23].w[0] + 8u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00122950u); st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_0006(c, 45u, depth + 1u); else { c.pc = 0x001186A0u; return; } if (c.pc != 0x00122950u) [[unlikely]] return; }
L_00122950:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (t) { goto L_00123120; } }
    set32(c.r[8], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 608u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 608u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00122520u | kUnwind; return; } goto L_00122520; } }
    c.budget -= 1;
L_00122970:
    set32(c.r[2], 0u - 1u);
    c.r[3].d[0] = c.r[17].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; if (c.r[20].d[0] == 0) c.r[20].d[0] = c.r[2].d[0];  if (t) { goto L_001229F0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00122988:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_0012298C:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[3], c.r[29].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] + 1u);  if (t) { goto L_001229E0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[20], c.r[20].w[0] - 1u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001229E0; } }
    c.budget -= 2;
    if (c.r[3].sd[0] > 0) { set32(c.r[5], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012298Cu | kUnwind; return; } goto L_0012298C; }
    goto L_001229C4;
L_001229C0:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_001229C4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001229D0u); st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_0007(c, 67u, depth + 1u); else { c.pc = 0x0011CF38u; return; } if (c.pc != 0x001229D0u) [[unlikely]] return; }
L_001229D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00122988u | kUnwind; return; } goto L_00122988; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 608u)));  if (t) { goto L_00123124; } }
L_001229E0:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[8], c.r[8].w[0] + c.r[16].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00122520u | kUnwind; return; } goto L_00122520; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 608u)));  if (t) { goto L_00123134; } }
L_001229F0:
    c.r[2].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[23], c.r[23].w[0] + 8u);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
L_00122A00:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_00122A04:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[3], c.r[29].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[4], c.r[5].w[0] + 1u);  if (t) { goto L_00122A64; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[20], c.r[20].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 9;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[18].w[0]), c.r[4].w[0]);  if (t) { goto L_00122A64; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00122A04u | kUnwind; return; } goto L_00122A04; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00122A54u); st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_0007(c, 67u, depth + 1u); else { c.pc = 0x0011CF38u; return; } if (c.pc != 0x00122A54u) [[unlikely]] return; }
L_00122A54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00122A00u | kUnwind; return; } goto L_00122A00; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[16].d[0]; set32(c.r[4], ld32((c.r[29].w[0] + 608u)));  if (t) { goto L_00123124; } }
L_00122A64:
    set32(c.r[16], c.r[19].w[0] - c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 608u)));  if (t) { goto L_00123134; } }
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[29].w[0] + 608u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 608u), c.r[3].w[0]);  if (t) { goto L_00122AFC; } }
    c.budget -= 1;
L_00122A88:
    set32(c.r[2], 0u - 1u);
    c.r[3].d[0] = c.r[17].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; if (c.r[20].d[0] == 0) c.r[20].d[0] = c.r[2].d[0];  if (t) { goto L_00122B08; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00122AA0:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_00122AA4:
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 10177u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[8], c.r[8].w[0] + c.r[16].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00122520u | kUnwind; return; } goto L_00122520; }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[4].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] - 1u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 8;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00122AFC; } }
    c.budget -= 2;
    if (c.r[3].sd[0] > 0) { set32(c.r[4], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00122AA4u | kUnwind; return; } goto L_00122AA4; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00122AF4u); st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_0007(c, 67u, depth + 1u); else { c.pc = 0x0011CF38u; return; } if (c.pc != 0x00122AF4u) [[unlikely]] return; }
L_00122AF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00122AA0u | kUnwind; return; } goto L_00122AA0; } }
L_00122AFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00122520u | kUnwind; return; } goto L_00122520; } }
    c.budget -= 1;
L_00122B08:
    c.r[2].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[23], c.r[23].w[0] + 8u);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
L_00122B18:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_00122B1C:
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 10177u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));  goto L_00122B84; }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 10;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[18].w[0]), c.r[4].w[0]);  if (t) { goto L_00122B80; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00122B1Cu | kUnwind; return; } goto L_00122B1C; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00122B78u); st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_0007(c, 67u, depth + 1u); else { c.pc = 0x0011CF38u; return; } if (c.pc != 0x00122B78u) [[unlikely]] return; }
L_00122B78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00122B18u | kUnwind; return; } goto L_00122B18; } }
L_00122B80:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00122B84:
    set32(c.r[2], c.r[19].w[0] - c.r[16].w[0]);
    set32(c.r[8], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 608u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 608u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00122520u | kUnwind; return; } goto L_00122520; } }
    c.budget -= 1;
L_00122BA0:
    set32(c.r[20], c.r[20].w[0] - 1u);
    set32(c.r[3], 0u + 348u);
    c.r[2].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(349ll) ? 1ull : 0ull;
    c.r[17].d[0] = c.r[17].d[0] | 704ull;
    if (c.r[2].d[0] == 0) c.r[20].d[0] = c.r[3].d[0];
    set32(c.r[2], c.r[29].w[0] + 256u);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 9;
    { const bool t = c.r[20].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00122D00; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_00122BC8:
    c.r[16].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], c.r[16].w[0] - 43u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(78ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] & 128ull;  if (t) { goto L_00122D04; } }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12720u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00120000u < 16384u) { entry = entries_0008[(t - 0x00120000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00122BF8:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull; c.r[2].d[0] = c.r[17].d[0] & 512ull;  if (t) { goto L_00122C0C; } }
    set32(c.r[30], 0u + 8u);
    c.r[17].d[0] = c.r[17].d[0] | 256ull;
    c.r[2].d[0] = c.r[17].d[0] & 512ull;
    c.budget -= 3;
L_00122C0C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u - 449u);  goto L_00122CB4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 705u);  if (t) { goto L_00122CB4; } }
    c.budget -= 1;
L_00122C20:
    set32(c.r[2], c.r[30].w[0] << 1);
    set32(c.r[3], 0u - 449u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[30], c.r[30].w[0] + c.r[2].w[0]);
    c.r[30].sd[0] = static_cast<std::int16_t>(ld16((c.r[30].w[0] + 12144u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] & c.r[3].d[0];  if (t) { goto L_00122CB8; } }
L_00122C3C:
    c.budget -= 1;
L_00122C40:
    set32(c.r[2], c.r[30].w[0] << 1);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[30], c.r[30].w[0] + c.r[2].w[0]);
    c.r[30].sd[0] = static_cast<std::int16_t>(ld16((c.r[30].w[0] + 12144u)));
    c.r[3].d[0] = c.r[30].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] & 128ull;  goto L_00122D04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 449u);  if (t) { goto L_00122CB4; } }
    c.budget -= 1;
L_00122C68:
    c.r[2].d[0] = c.r[30].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] & 128ull;  goto L_00122D04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 449u);  if (t) { goto L_00122CB4; } }
    c.budget -= 1;
L_00122C80:
    c.r[2].d[0] = c.r[17].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u - 65u);  if (t) { goto L_00122D00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] & c.r[2].d[0];  if (t) { goto L_00122CB8; } }
    c.budget -= 1;
L_00122C98:
    c.r[2].d[0] = c.r[17].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[29].w[0] + 257u);  if (t) { goto L_00122D00; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[17].d[0] & 128ull;  if (t) { goto L_00122D04; } }
    set32(c.r[2], 0u - 257u);
    set32(c.r[30], 0u + 16u);
    c.budget -= 2;
L_00122CB4:
    c.r[17].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.budget -= 1;
L_00122CB8:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00122CE0; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_00122CF4; } }
L_00122CE0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00122CECu); st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_0007(c, 67u, depth + 1u); else { c.pc = 0x0011CF38u; return; } if (c.pc != 0x00122CECu) [[unlikely]] return; }
L_00122CEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (t) { goto L_00122D00; } }
L_00122CF4:
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.budget -= 3;
    if (c.r[20].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00122BC8u | kUnwind; return; } goto L_00122BC8; }
L_00122D00:
    c.r[2].d[0] = c.r[17].d[0] & 128ull;
    c.budget -= 1;
L_00122D04:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] - 1u)));  goto L_00122D30; }
    set32(c.r[3], c.r[29].w[0] + 256u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 608u)));  goto L_00123134; }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] - 1u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00122D28u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 274u, depth + 1u); else { c.pc = 0x0011FB58u; return; } if (c.pc != 0x00122D28u) [[unlikely]] return; }
L_00122D28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 608u)));  if (t) { goto L_00123134; } }
L_00122D30:
    set32(c.r[2], 0u + 120u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 88u);  if (t) { goto L_00122D44; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[17].d[0] & 8ull;  if (t) { goto L_00122D60; } }
L_00122D44:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00122D54u); st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_0007(c, 274u, depth + 1u); else { c.pc = 0x0011FB58u; return; } if (c.pc != 0x00122D54u) [[unlikely]] return; }
L_00122D54:
    ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.r[2].d[0] = c.r[17].d[0] & 8ull;
    c.budget -= 3;
L_00122D60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[29].w[0] + 256u);  if (t) { goto L_00122E18; } }
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[29].w[0] + 256u);
    st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 612u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00122D88u); c.r[6].d[0] = c.r[30].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00122D88u) [[unlikely]] return; }
L_00122D88:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (t) { goto L_00122DB8; } }
    c.r[2].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[23], c.r[23].w[0] + 8u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { goto L_00122E08; } }
    c.budget -= 1;
L_00122DB8:
    c.r[2].d[0] = c.r[17].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[23].d[0] + 0ull;  if (t) { goto L_00122DD8; } }
    set32(c.r[23], c.r[23].w[0] + 8u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00122E08; } }
L_00122DD8:
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[23], c.r[23].w[0] + 8u);  goto L_00122DF8; }
    c.r[2].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[23], c.r[23].w[0] + 8u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st64((c.r[2].w[0]), c.r[5].d[0]);  if (t) { goto L_00122E08; } }
L_00122DF8:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_00122E08:
    set32(c.r[4], ld32((c.r[29].w[0] + 608u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[29].w[0] + 608u), c.r[4].w[0]);
    set32(c.r[3], c.r[29].w[0] + 256u);
    c.budget -= 4;
L_00122E18:
    set32(c.r[2], c.r[19].w[0] - c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00122520u | kUnwind; return; } goto L_00122520; } }
    c.budget -= 1;
L_00122E28:
    set32(c.r[20], c.r[20].w[0] - 1u);
    set32(c.r[3], 0u + 348u);
    c.r[2].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(349ll) ? 1ull : 0ull;
    set32(c.r[4], c.r[29].w[0] + 256u);
    if (c.r[2].d[0] == 0) c.r[20].d[0] = c.r[3].d[0];
    c.budget -= 5;
L_00122E3C:
    c.r[17].d[0] = c.r[17].d[0] | 960ull;
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[22].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[20].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00122F74; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_00122E58:
    c.r[16].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], c.r[16].w[0] - 43u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(59ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { goto L_00122F74; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 13040u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00120000u < 16384u) { entry = entries_0008[(t - 0x00120000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00122E80:
    c.r[2].d[0] = c.r[17].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u - 65u);  if (t) { goto L_00122E98; } }
    c.r[22].d[0] = c.r[22].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] & c.r[2].d[0];  if (t) { goto L_00122F2C; } }
L_00122E98:
    set32(c.r[2], 0u - 193u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] & c.r[2].d[0];  if (t) { goto L_00122F20; } }
    c.budget -= 1;
L_00122EA8:
    c.r[2].d[0] = c.r[17].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u - 65u);  if (t) { goto L_00122F74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] & c.r[2].d[0];  if (t) { goto L_00122F20; } }
    c.budget -= 1;
L_00122EC0:
    c.r[2].d[0] = c.r[17].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u - 321u);  if (t) { goto L_00122F74; } }
    st64((c.r[29].w[0] + 616u), c.r[22].d[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] & c.r[2].d[0];  if (t) { goto L_00122F20; } }
L_00122ED8:
    c.r[3].d[0] = c.r[17].d[0] & 640ull;
    set32(c.r[2], 0u + 512u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[17].d[0] & 512ull;  if (t) { goto L_00122EF8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00122F74; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] & 128ull;  if (t) { goto L_00122F84; } }
L_00122EF8:
    c.r[2].d[0] = c.r[17].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 769u);  if (t) { goto L_00122F14; } }
    c.r[2].d[0] = ld64((c.r[29].w[0] + 616u));
    st32((c.r[29].w[0] + 624u), c.r[19].w[0]);
    c.r[7].d[0] = c.r[22].d[0] - c.r[2].d[0];
    set32(c.r[2], 0u - 769u);
    c.budget -= 4;
L_00122F14:
    c.r[22].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.r[17].d[0] = c.r[2].d[0] | 192ull;
    c.budget -= 3;
L_00122F20:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.budget -= 3;
L_00122F2C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00122F50; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_00122F6C; } }
L_00122F50:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st128((c.r[29].w[0] + 640u) & ~15u, c.r[7]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00122F60u); st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_0007(c, 67u, depth + 1u); else { c.pc = 0x0011CF38u; return; } if (c.pc != 0x00122F60u) [[unlikely]] return; }
L_00122F60:
    ld128((c.r[29].w[0] + 640u) & ~15u, c.r[7]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (t) { goto L_00122F74; } }
L_00122F6C:
    c.budget -= 2;
    if (c.r[20].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00122E58u | kUnwind; return; } goto L_00122E58; }
L_00122F74:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; set32(c.r[2], 0u - 129u);  if (t) { goto L_00122F80; } }
    c.r[17].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.budget -= 1;
L_00122F80:
    c.r[2].d[0] = c.r[17].d[0] & 128ull;
    c.budget -= 1;
L_00122F84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] & 512ull;  if (t) { goto L_0012302C; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] - 1u);  goto L_00122FD0; }
    set32(c.r[3], c.r[29].w[0] + 256u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 608u)));  if (t) { goto L_00123134; } }
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 1;
L_00122FA8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00122FB4u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));  if (depth < kMaxDepth) unit_0007(c, 274u, depth + 1u); else { c.pc = 0x0011FB58u; return; } if (c.pc != 0x00122FB4u) [[unlikely]] return; }
L_00122FB4:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.r[3].d[0] = c.r[4].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00122FA8u | kUnwind; return; } goto L_00122FA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 608u)));  if (t) { goto L_00123134; } }
    c.budget -= 1;
L_00122FD0:
    set32(c.r[2], 0u + 101u);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[8], c.r[8].w[0] - 1u);  if (t) { goto L_00123010; } }
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00123010; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st128((c.r[29].w[0] + 640u) & ~15u, c.r[7]);
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123000u); st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_0007(c, 274u, depth + 1u); else { c.pc = 0x0011FB58u; return; } if (c.pc != 0x00123000u) [[unlikely]] return; }
L_00123000:
    ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    ld128((c.r[29].w[0] + 640u) & ~15u, c.r[7]);
    set32(c.r[8], c.r[8].w[0] - 1u);
    c.budget -= 4;
L_00123010:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st128((c.r[29].w[0] + 640u) & ~15u, c.r[7]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123024u); st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_0007(c, 274u, depth + 1u); else { c.pc = 0x0011FB58u; return; } if (c.pc != 0x00123024u) [[unlikely]] return; }
L_00123024:
    ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);
    ld128((c.r[29].w[0] + 640u) & ~15u, c.r[7]);
    c.budget -= 2;
L_0012302C:
    c.r[2].d[0] = c.r[17].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00122524u | kUnwind; return; } goto L_00122524; }
    c.r[3].d[0] = c.r[17].d[0] & 768ull;
    c.budget -= 1;
L_0012303C:
    set32(c.r[2], 0u + 512u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00123060; } }
    c.r[2].d[0] = ld64((c.r[29].w[0] + 616u));
    st32((c.r[29].w[0] + 624u), c.r[19].w[0]);
    c.r[7].d[0] = c.r[22].d[0] - c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull - c.r[7].d[0];  if (t) { goto L_00123084; } }
    c.budget -= 1;
L_00123060:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 624u)));  if (t) { goto L_001230B4; } }
    st128((c.r[29].w[0] + 640u) & ~15u, c.r[7]);
    set32(c.r[4], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123078u); st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_0005(c, 105u, depth + 1u); else { c.pc = 0x00116638u; return; } if (c.pc != 0x00123078u) [[unlikely]] return; }
L_00123078:
    ld128((c.r[29].w[0] + 640u) & ~15u, c.r[7]);
    ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);
    c.r[6].d[0] = c.r[2].d[0] - c.r[7].d[0];
    c.budget -= 3;
L_00123084:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[2], c.r[29].w[0] + 585u);  if (t) { goto L_001230B4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 624u)));
    set32(c.r[3], c.r[29].w[0] + 584u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 12184u);
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[3].d[0];
    st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001230B0u); st32((c.r[29].w[0] + 624u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x001230B0u) [[unlikely]] return; }
L_001230B0:
    ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);
    c.budget -= 1;
L_001230B4:
    set32(c.r[2], c.r[29].w[0] + 256u);
    st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001230C4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 102u, depth + 1u); else { c.pc = 0x001165F8u; return; } if (c.pc != 0x001230C4u) [[unlikely]] return; }
L_001230C4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (t) { goto L_001230E0; } }
    c.r[2].d[0] = c.r[17].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[23].d[0] + 0ull;  goto L_001230F8; }
L_001230E0:
    c.r[3].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    st64((c.r[2].w[0]), c.r[4].d[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[23].w[0] + 8u);  if (t) { goto L_00123110; } }
    c.budget -= 1;
L_001230F8:
    set32(c.r[23], c.r[23].w[0] + 8u);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123108u); st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_0005(c, 92u, depth + 1u); else { c.pc = 0x00116498u; return; } if (c.pc != 0x00123108u) [[unlikely]] return; }
L_00123108:
    st32((c.r[16].w[0]), c.f[0]);
    ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);
    c.budget -= 2;
L_00123110:
    set32(c.r[3], ld32((c.r[29].w[0] + 608u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 608u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00122520u | kUnwind; return; } goto L_00122520; } }
L_00123120:
    set32(c.r[4], ld32((c.r[29].w[0] + 608u)));
    c.budget -= 1;
L_00123124:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];  if (t) { goto L_00123134; } }
L_00123130:
    set32(c.r[2], ld32((c.r[29].w[0] + 608u)));
    c.budget -= 1;
L_00123134:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 672u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 680u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 688u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 696u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 704u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 712u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 720u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 728u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 736u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 744u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 752u);  c.pc = t; return; }
L_00123168:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[2], 0u + 94u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_00123188; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u + 1u);  if (t) { goto L_0012318C; } }
L_00123188:
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012318C:
    set32(c.r[7], 0u + 255u);
    set32(c.r[2], c.r[4].w[0] + 255u);
    c.budget -= 3;
L_00123198:
    set32(c.r[7], c.r[7].w[0] - 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 7;
    { const bool t = c.r[7].sd[0] >= 0; set32(c.r[2], c.r[2].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00123198u | kUnwind; return; } goto L_00123198; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] - 1u);  if (t) { goto L_00123260; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[10], 0u + 45u);
    set32(c.r[8], c.r[2].w[0] - c.r[8].w[0]);
    set32(c.r[9], 0u + 93u);
    c.budget -= 5;
L_001231D0:
    set32(c.r[2], c.r[4].w[0] + c.r[6].w[0]);
    c.budget -= 1;
L_001231D4:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 2;
L_001231DC:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[10].d[0]; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_00123210; } }
    c.r[2].d[0] = c.r[7].sd[0] < 46ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00123200; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] - 1u);  if (t) { goto L_00123260; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001231D0u | kUnwind; return; } goto L_001231D0; } }
L_00123200:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[9].d[0]; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00123260; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00123258; } }
L_00123210:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[9].d[0]) { set32(c.r[6], 0u + 45u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001231D0u | kUnwind; return; } goto L_001231D0; }
    c.r[2].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_00123230; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 45u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001231D0u | kUnwind; return; } goto L_001231D0; } }
L_00123230:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], c.r[4].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00123230u | kUnwind; return; } goto L_00123230; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001231DCu | kUnwind; return; } goto L_001231DC; } }
    c.budget -= 1;
L_00123258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001231D4u | kUnwind; return; } goto L_001231D4; } }
L_00123260:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00123268:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[8], ld32((c.r[2].w[0] - 17840u)));
    set32(c.r[2], 0u + 520u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    st16((c.r[29].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 16u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 84u), c.r[8].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001232A8u); st32((c.r[29].w[0]), c.r[7].w[0]);  if (depth < kMaxDepth) unit_0008(c, 82u, depth + 1u); else { c.pc = 0x00120B50u; return; } if (c.pc != 0x001232A8u) [[unlikely]] return; }
L_001232A8:
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001232C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st32((c.r[29].w[0] + 84u), c.r[4].w[0]);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], 0u + 520u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    st16((c.r[29].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 16u), c.r[8].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123300u); st32((c.r[29].w[0]), c.r[8].w[0]);  if (depth < kMaxDepth) unit_0008(c, 82u, depth + 1u); else { c.pc = 0x00120B50u; return; } if (c.pc != 0x00123300u) [[unlikely]] return; }
L_00123300:
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00123318:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[2].w[0] - 25776u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123348u); st32((c.r[17].w[0]), 0u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x001048A8u; return; } if (c.pc != 0x00123348u) [[unlikely]] return; }
L_00123348:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00123364; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { st32((c.r[16].w[0]), c.r[3].w[0]);  goto L_00123364; }
L_00123364:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00123378:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 56u)));  goto L_001233A8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 17840u)));
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 5;
L_001233A8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = ld16((c.r[16].w[0] + 12u));  goto L_001233BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001233B8u); c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 28u, depth + 1u); else { c.pc = 0x001183A0u; return; } if (c.pc != 0x001233B8u) [[unlikely]] return; }
L_001233B8:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 12u));
    c.budget -= 1;
L_001233BC:
    c.r[2].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 16u)));  goto L_00123428; }
    c.r[3].d[0] = c.r[4].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00123474; } }
    c.r[2].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 16u)));  goto L_00123420; }
    set32(c.r[5], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + 64u);  if (t) { goto L_00123404; } }
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[2].d[0]) { st32((c.r[16].w[0] + 48u), 0u);  goto L_00123404; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001233FCu); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0006(c, 51u, depth + 1u); else { c.pc = 0x001187C0u; return; } if (c.pc != 0x001233FCu) [[unlikely]] return; }
L_001233FC:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 12u));
    st32((c.r[16].w[0] + 48u), 0u);
    c.budget -= 2;
L_00123404:
    set32(c.r[2], 0u - 37u);
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), 0u);
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[5].w[0]);
    c.budget -= 7;
L_00123420:
    c.r[2].d[0] = c.r[4].d[0] | 8ull;
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00123428:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 12u));  goto L_0012343C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123438u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 144u, depth + 1u); else { c.pc = 0x00119A40u; return; } if (c.pc != 0x00123438u) [[unlikely]] return; }
L_00123438:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 12u));
    c.budget -= 1;
L_0012343C:
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 2ull;  if (t) { goto L_00123460; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_00123470; } }
    c.budget -= 1;
L_00123460:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0012346C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_0012346C:
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 1;
L_00123470:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00123474:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00123490:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001234B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001234A8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 313u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x001234A8u) [[unlikely]] return; }
L_001234A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001234BC; } }
L_001234B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001234B8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 313u, depth + 1u); else { c.pc = 0x003C3010u; return; } if (c.pc != 0x001234B8u) [[unlikely]] return; }
L_001234B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001234BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001234D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00123510; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123504u); set32(c.r[4], c.r[4].w[0] + 13280u);  if (depth < kMaxDepth) unit_0006(c, 279u, depth + 1u); else { c.pc = 0x0011BDB8u; return; } if (c.pc != 0x00123504u) [[unlikely]] return; }
L_00123504:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00123600; } }
    c.budget -= 1;
L_00123510:
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[8], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[10], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[7], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[9], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123544u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 309u, depth + 1u); else { c.pc = 0x003C2E40u; return; } if (c.pc != 0x00123544u) [[unlikely]] return; }
L_00123544:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00123558; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00123600; } }
    c.budget -= 1;
L_00123558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123560u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 314u, depth + 1u); else { c.pc = 0x003C3090u; return; } if (c.pc != 0x00123560u) [[unlikely]] return; }
L_00123560:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[2].d[0] | 12ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123570u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 331u, depth + 1u); else { c.pc = 0x003C3300u; return; } if (c.pc != 0x00123570u) [[unlikely]] return; }
L_00123570:
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00123560u | kUnwind; return; } goto L_00123560; } }
    set32(c.r[7], ld32((c.r[18].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[16].w[0] << 9);
    set32(c.r[2], c.r[2].w[0] + 5760u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 512u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001235A4u); set32(c.r[17], c.r[17].w[0] + c.r[7].w[0]);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x001235A4u) [[unlikely]] return; }
L_001235A4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001235D8; } }
L_001235B0:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 4u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 14u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 5u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 10;
L_001235D8:
    c.r[1].d[0] = c.r[4].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001235F8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] >> 4);
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001235B0u | kUnwind; return; } goto L_001235B0; } }
L_001235F8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00123600:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00123620:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[8], c.r[4].w[0] << 9);
    set32(c.r[3], c.r[3].w[0] + 5760u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(128ll) ? 1ull : 0ull;
    c.budget -= 7;
L_0012363C:
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[8], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001236B0; } }
    c.r[3].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001236B0; } }
    c.r[3].d[0] = ld8((c.r[8].w[0] + 2u));
    set32(c.r[2], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00123670; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00123680; } }
L_00123670:
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00123680:
    c.r[3].d[0] = c.r[5].d[0] & 127ull;
    c.r[5].d[0] = c.r[6].d[0] << 56;
    c.r[4].d[0] = c.r[4].d[0] & 127ull;
    set32(c.r[6], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] << 16);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[4].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001236B0u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 306u, depth + 1u); else { c.pc = 0x003C2BB0u; return; } if (c.pc != 0x001236B0u) [[unlikely]] return; }
L_001236B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001236C0:
    c.budget -= 2;
    { c.r[4].d[0] = c.r[4].d[0] & 255ull;  [[clang::musttail]] return unit_00B0(c, 312u, depth); }
L_001236D0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_00B0(c, 307u, depth); }
L_001236E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] << 9);
    set32(c.r[3], c.r[3].w[0] + 5763u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[2].w[0]));  c.pc = t; return; }
L_00123700:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] << 9);
    set32(c.r[3], c.r[3].w[0] + 5761u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[2].w[0]));  c.pc = t; return; }
L_00123720:
    c.r[3].d[0] = c.r[6].d[0] & 65280ull;
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[6].d[0] & c.r[7].d[0];
    set32(c.r[8], c.r[4].w[0] << 9);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[9], c.r[6].w[0] >> 16);
    set32(c.r[7], c.r[7].w[0] + 5760u);
    set32(c.r[6], c.r[5].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(128ll) ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] >> 8);
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[10], c.r[6].w[0] + c.r[7].w[0]);  if (t) { goto L_00123800; } }
    c.r[6].d[0] = ld8((c.r[10].w[0]));
    set32(c.r[8], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[8].d[0];  if (t) { goto L_00123800; } }
    c.r[7].d[0] = ld8((c.r[10].w[0] + 2u));
    set32(c.r[6], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00123788; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00123798; } }
L_00123788:
    set32(c.r[6], c.r[9].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    c.budget -= 4;
L_00123798:
    c.r[9].d[0] = ld8((c.r[10].w[0] + 1u));
    c.r[7].d[0] = c.r[8].d[0] & 1ull;
    c.r[6].d[0] = c.r[6].d[0] & 127ull;
    set32(c.r[7], c.r[7].w[0] << 7);
    c.r[8].d[0] = c.r[4].d[0] & 127ull;
    c.r[4].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 127ull;
    set32(c.r[6], c.r[5].w[0] << 8);
    set32(c.r[7], c.r[8].w[0] << 16);
    c.r[5].d[0] = c.r[3].d[0] << 56;
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[9].d[0] & 128ull;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[6].d[0] | c.r[4].d[0];  if (t) { goto L_001237DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[9].d[0] & 127ull;  if (t) { goto L_001237F0; } }
L_001237DC:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] - 15584u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
L_001237F0:
    c.r[6].d[0] = c.r[2].d[0] << 56;
    set32(c.r[7], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123800u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);  if (depth < kMaxDepth) unit_00B0(c, 305u, depth + 1u); else { c.pc = 0x003C2AB0u; return; } if (c.pc != 0x00123800u) [[unlikely]] return; }
L_00123800:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00123810:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st8((c.r[4].w[0] + 60u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 48u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 52u), c.f[12]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[4].w[0] + 56u), 0u);  if (t) { goto L_00123858; } }
    c.budget -= 1;
L_00123838:
    st8((c.r[3].w[0] + 61u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 2;
L_00123840:
    set32(c.r[3], c.r[3].w[0] + 64u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00123838u | kUnwind; return; } goto L_00123838; } }
    c.budget -= 1;
L_00123858:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00123888; } }
    c.f[3] = ld32((c.r[7].w[0]));
    c.f[2] = ld32((c.r[7].w[0] + 4u));
    c.f[1] = ld32((c.r[7].w[0] + 8u));
    c.f[0] = ld32((c.r[7].w[0] + 12u));
    st32((c.r[5].w[0]), c.f[3]);
    st32((c.r[5].w[0] + 4u), c.f[2]);
    st32((c.r[5].w[0] + 8u), c.f[1]);
    st32((c.r[5].w[0] + 12u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123888u); c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 3u, depth + 1u); else { c.pc = 0x001240A0u; return; } if (c.pc != 0x00123888u) [[unlikely]] return; }
L_00123888:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001238A0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    set32(c.r[2], c.r[7].w[0] << 3);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    set32(c.r[3], c.r[3].w[0] - 15520u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    set32(c.r[6], c.r[2].w[0] << 2);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[22].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    set32(c.r[16], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F860000u);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 24;
L_00123900:
    c.f[2] = ld32((c.r[4].w[0] + 52u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 60u));
    c.r[4].d[0] = c.r[3].d[0] | 26214ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.r[3].d[0] = c.r[3].d[0] | 13107ull;
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[24] = fp::mul(c.f[1], c.f[2]);
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] < 0; c.f[23] = fp::mul(c.f[0], c.f[2]);  if (t) { goto L_00123938; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00123954; } }
L_00123938:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_00123954:
    c.f[1] = fp::mul(c.f[24], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[19].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[20].w[0] + 16u);
    c.f[0] = c.r[2].w[0];
    c.f[22] = fp::mul(c.f[24], c.f[24]);
    c.f[20] = fp::sub(c.f[1], c.f[0]);
    c.f[21] = fp::mul(c.f[23], c.f[23]);
    c.f[20] = fp::mul(c.f[20], c.f[20]);
    ld128((c.r[19].w[0]) & ~15u, c.vu0.vf[5]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[6]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    st128((c.r[19].w[0]) & ~15u, c.vu0.vf[6]);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 60u));
    set32(c.r[19], c.r[19].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 18;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[2].w[0] - 2u);  if (t) { goto L_00123A00; } }
    c.budget -= 1;
L_001239A0:
    set32(c.r[2], c.r[19].w[0] + 16u);
    set32(c.r[3], c.r[19].w[0] + 32u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[19].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 6u, 5u, 4u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[6]);
    set32(c.r[2], c.r[19].w[0] + 32u);
    c.f[1] = ld32((c.r[19].w[0] + 36u));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[8], c.f[0]);
    c.vu0.vf[5] = c.r[8];
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[19].w[0]) & ~15u, c.vu0.vf[6]);
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    vu::add(c.vu0, 14u, 6u, 6u, 4u);
    st128((c.r[19].w[0]) & ~15u, c.vu0.vf[6]);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[19], c.r[19].w[0] + 64u);
    c.budget -= 24;
L_00123A00:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001239A0u | kUnwind; return; } goto L_001239A0; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_00123A28; } }
    set32(c.r[2], c.r[19].w[0] + 16u);
    ld128((c.r[19].w[0]) & ~15u, c.vu0.vf[5]);
    ld128((c.r[21].w[0]) & ~15u, c.vu0.vf[6]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st128((c.r[19].w[0]) & ~15u, c.vu0.vf[6]);  if (t) { goto L_00123A80; } }
L_00123A28:
    set32(c.r[2], c.r[19].w[0] + 16u);
    set32(c.r[3], c.r[19].w[0] + 32u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[19].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 6u, 5u, 4u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[6]);
    set32(c.r[2], c.r[19].w[0] + 32u);
    c.f[1] = ld32((c.r[19].w[0] + 36u));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[8], c.f[0]);
    c.vu0.vf[5] = c.r[8];
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[19].w[0]) & ~15u, c.vu0.vf[6]);
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    vu::add(c.vu0, 14u, 6u, 6u, 4u);
    st128((c.r[19].w[0]) & ~15u, c.vu0.vf[6]);
    c.budget -= 22;
L_00123A80:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[20].w[0] + 64u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123A94u); c.r[19].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 239u, depth + 1u); else { c.pc = 0x00102678u; return; } if (c.pc != 0x00123A94u) [[unlikely]] return; }
L_00123A94:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[12] = c.f[24];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123AA4u); c.f[13] = c.f[23];  if (depth < kMaxDepth) unit_0009(c, 8u, depth + 1u); else { c.pc = 0x00124350u; return; } if (c.pc != 0x00123AA4u) [[unlikely]] return; }
L_00123AA4:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00123AE8; } }
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[20].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123AC8u); set32(c.r[6], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 239u, depth + 1u); else { c.pc = 0x00102678u; return; } if (c.pc != 0x00123AC8u) [[unlikely]] return; }
L_00123AC8:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123AD4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 116u, depth + 1u); else { c.pc = 0x001257D0u; return; } if (c.pc != 0x00123AD4u) [[unlikely]] return; }
L_00123AD4:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[12] = c.f[23] ^ fp::kSign;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123AE4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 243u, depth + 1u); else { c.pc = 0x00102748u; return; } if (c.pc != 0x00123AE4u) [[unlikely]] return; }
L_00123AE4:
    c.budget -= 1;
L_00123AE8:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 60u));
    set32(c.r[19], c.r[19].w[0] + 64u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[2].w[0] - 2u);  if (t) { goto L_00123BB8; } }
L_00123AF8:
    set32(c.r[4], c.r[29].w[0] + 192u);
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[19].w[0] + 64u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123B14u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0000(c, 239u, depth + 1u); else { c.pc = 0x00102678u; return; } if (c.pc != 0x00123B14u) [[unlikely]] return; }
L_00123B14:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[12] = c.f[24];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123B24u); c.f[13] = c.f[23];  if (depth < kMaxDepth) unit_0009(c, 8u, depth + 1u); else { c.pc = 0x00124350u; return; } if (c.pc != 0x00123B24u) [[unlikely]] return; }
L_00123B24:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00123B68; } }
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[19].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123B48u); set32(c.r[6], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 239u, depth + 1u); else { c.pc = 0x00102678u; return; } if (c.pc != 0x00123B48u) [[unlikely]] return; }
L_00123B48:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123B54u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 116u, depth + 1u); else { c.pc = 0x001257D0u; return; } if (c.pc != 0x00123B54u) [[unlikely]] return; }
L_00123B54:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[12] = c.f[23] ^ fp::kSign;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123B64u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 243u, depth + 1u); else { c.pc = 0x00102748u; return; } if (c.pc != 0x00123B64u) [[unlikely]] return; }
L_00123B64:
    c.budget -= 1;
L_00123B68:
    set32(c.r[3], c.r[29].w[0] + 208u);
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    set32(c.r[2], c.r[29].w[0] + 192u);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    set32(c.r[8], c.f[1]);
    c.vu0.vf[8] = c.r[8];
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    vu::mulbc(c.vu0, 14u, 5u, 5u, c.vu0.vf[8].w[0]);
    vu::sub(c.vu0, 14u, 6u, 5u, 4u);
    set32(c.r[8], c.f[0]);
    c.vu0.vf[8] = c.r[8];
    vu::mulbc(c.vu0, 14u, 6u, 6u, c.vu0.vf[8].w[0]);
    ld128((c.r[19].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 5u, 6u);
    st128((c.r[19].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[19], c.r[19].w[0] + 64u);
    c.budget -= 20;
L_00123BB8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00123AF8u | kUnwind; return; } goto L_00123AF8; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_00123BF8; } }
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    set32(c.r[2], c.r[29].w[0] + 192u);
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[8], c.f[1]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    c.vu0.vf[8] = c.r[8];
    ld128((c.r[19].w[0]) & ~15u, c.vu0.vf[5]);
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[8].w[0]);
    vu::sub(c.vu0, 14u, 5u, 5u, 4u);
    st128((c.r[19].w[0]) & ~15u, c.vu0.vf[5]);
    c.budget -= 12;
L_00123BF8:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_00123E20; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 60u));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[19].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 6);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123C20u); set32(c.r[5], c.r[20].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 239u, depth + 1u); else { c.pc = 0x00102678u; return; } if (c.pc != 0x00123C20u) [[unlikely]] return; }
L_00123C20:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123C2Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 220u, depth + 1u); else { c.pc = 0x00102280u; return; } if (c.pc != 0x00123C2Cu) [[unlikely]] return; }
L_00123C2C:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00123CA0; } }
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[22], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123C48u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 116u, depth + 1u); else { c.pc = 0x001257D0u; return; } if (c.pc != 0x00123C48u) [[unlikely]] return; }
L_00123C48:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.f[12] = c.f[24];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123C58u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 243u, depth + 1u); else { c.pc = 0x00102748u; return; } if (c.pc != 0x00123C58u) [[unlikely]] return; }
L_00123C58:
    c.r[18].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[29].w[0] + 176u);  if (t) { goto L_00123C88; } }
    c.budget -= 1;
L_00123C68:
    set32(c.r[2], c.r[19].w[0] + 64u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[19].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 6u, 5u, 4u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[6]);
    set32(c.r[19], c.r[19].w[0] + 64u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 8;
L_00123C88:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 60u));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00123C68u | kUnwind; return; } goto L_00123C68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0009(c, 1u, depth); } }
L_00123CA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 5u);  if (t) { goto L_00123E10; } }
L_00123CA8:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 60u));
    c.r[19].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[2].w[0] - 2u);  if (t) { goto L_00123D28; } }
L_00123CB8:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[19].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123CC8u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 239u, depth + 1u); else { c.pc = 0x00102678u; return; } if (c.pc != 0x00123CC8u) [[unlikely]] return; }
L_00123CC8:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123CD4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 220u, depth + 1u); else { c.pc = 0x00102280u; return; } if (c.pc != 0x00123CD4u) [[unlikely]] return; }
L_00123CD4:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[22]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00123D00; } }
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[19].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123CF4u); c.f[12] = c.f[24];  if (depth < kMaxDepth) unit_0009(c, 10u, depth + 1u); else { c.pc = 0x00124480u; return; } if (c.pc != 0x00123CF4u) [[unlikely]] return; }
L_00123CF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00123D20; } }
    c.budget -= 1;
L_00123D00:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00123D20; } }
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[19].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123D20u); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_0009(c, 10u, depth + 1u); else { c.pc = 0x00124480u; return; } if (c.pc != 0x00123D20u) [[unlikely]] return; }
L_00123D20:
    set32(c.r[19], c.r[19].w[0] + 64u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 2;
L_00123D28:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00123CB8u | kUnwind; return; } goto L_00123CB8; } }
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[19].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123D40u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 239u, depth + 1u); else { c.pc = 0x00102678u; return; } if (c.pc != 0x00123D40u) [[unlikely]] return; }
L_00123D40:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123D4Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 220u, depth + 1u); else { c.pc = 0x00102280u; return; } if (c.pc != 0x00123D4Cu) [[unlikely]] return; }
L_00123D4C:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[22]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { [[clang::musttail]] return unit_0009(c, 1u, depth); } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 60u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[2].w[0] - 2u);  if (t) { goto L_00123DD8; } }
    c.budget -= 1;
L_00123D68:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123D78u); set32(c.r[6], c.r[19].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 239u, depth + 1u); else { c.pc = 0x00102678u; return; } if (c.pc != 0x00123D78u) [[unlikely]] return; }
L_00123D78:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123D84u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 220u, depth + 1u); else { c.pc = 0x00102280u; return; } if (c.pc != 0x00123D84u) [[unlikely]] return; }
L_00123D84:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[22]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00123DB0; } }
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[19].w[0] + 64u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123DA4u); c.f[12] = c.f[24];  if (depth < kMaxDepth) unit_0009(c, 10u, depth + 1u); else { c.pc = 0x00124480u; return; } if (c.pc != 0x00123DA4u) [[unlikely]] return; }
L_00123DA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00123DD0; } }
    c.budget -= 1;
L_00123DB0:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00123DD0; } }
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[19].w[0] + 64u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123DD0u); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_0009(c, 10u, depth + 1u); else { c.pc = 0x00124480u; return; } if (c.pc != 0x00123DD0u) [[unlikely]] return; }
L_00123DD0:
    set32(c.r[19], c.r[19].w[0] - 64u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 2;
L_00123DD8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00123D68u | kUnwind; return; } goto L_00123D68; } }
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[19].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123DF0u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 239u, depth + 1u); else { c.pc = 0x00102678u; return; } if (c.pc != 0x00123DF0u) [[unlikely]] return; }
L_00123DF0:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123DFCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 220u, depth + 1u); else { c.pc = 0x00102280u; return; } if (c.pc != 0x00123DFCu) [[unlikely]] return; }
L_00123DFC:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[22]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { [[clang::musttail]] return unit_0009(c, 1u, depth); } }
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 2;
L_00123E10:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00123CA8u | kUnwind; return; } goto L_00123CA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0009(c, 1u, depth); } }
L_00123E20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 2u);  if (t) { goto L_00123FF8; } }
L_00123E28:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 60u));
    set32(c.r[18], c.r[2].w[0] - 2u);
    set32(c.r[2], c.r[18].w[0] << 6);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[20].w[0] + c.r[2].w[0]);  if (t) { goto L_00123EB0; } }
L_00123E3C:
    c.budget -= 1;
L_00123E40:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123E50u); set32(c.r[6], c.r[19].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 239u, depth + 1u); else { c.pc = 0x00102678u; return; } if (c.pc != 0x00123E50u) [[unlikely]] return; }
L_00123E50:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123E5Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 220u, depth + 1u); else { c.pc = 0x00102280u; return; } if (c.pc != 0x00123E5Cu) [[unlikely]] return; }
L_00123E5C:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[22]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00123E88; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[19].w[0] + 64u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123E7Cu); c.f[12] = c.f[24];  if (depth < kMaxDepth) unit_0009(c, 10u, depth + 1u); else { c.pc = 0x00124480u; return; } if (c.pc != 0x00123E7Cu) [[unlikely]] return; }
L_00123E7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00123EA8; } }
    c.budget -= 1;
L_00123E88:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00123EA8; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[19].w[0] + 64u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123EA8u); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_0009(c, 10u, depth + 1u); else { c.pc = 0x00124480u; return; } if (c.pc != 0x00123EA8u) [[unlikely]] return; }
L_00123EA8:
    set32(c.r[19], c.r[19].w[0] - 64u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 2;
L_00123EB0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00123E40u | kUnwind; return; } goto L_00123E40; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[19].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123EC8u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 239u, depth + 1u); else { c.pc = 0x00102678u; return; } if (c.pc != 0x00123EC8u) [[unlikely]] return; }
L_00123EC8:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123ED4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 220u, depth + 1u); else { c.pc = 0x00102280u; return; } if (c.pc != 0x00123ED4u) [[unlikely]] return; }
L_00123ED4:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[22]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { [[clang::musttail]] return unit_0009(c, 1u, depth); } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 60u));
    c.r[19].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[2].w[0] - 2u);  if (t) { goto L_00123F60; } }
L_00123EF0:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[19].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123F00u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 239u, depth + 1u); else { c.pc = 0x00102678u; return; } if (c.pc != 0x00123F00u) [[unlikely]] return; }
L_00123F00:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123F0Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 220u, depth + 1u); else { c.pc = 0x00102280u; return; } if (c.pc != 0x00123F0Cu) [[unlikely]] return; }
L_00123F0C:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[22]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00123F38; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[19].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123F2Cu); c.f[12] = c.f[24];  if (depth < kMaxDepth) unit_0009(c, 10u, depth + 1u); else { c.pc = 0x00124480u; return; } if (c.pc != 0x00123F2Cu) [[unlikely]] return; }
L_00123F2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00123F58; } }
    c.budget -= 1;
L_00123F38:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00123F58; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[19].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123F58u); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_0009(c, 10u, depth + 1u); else { c.pc = 0x00124480u; return; } if (c.pc != 0x00123F58u) [[unlikely]] return; }
L_00123F58:
    set32(c.r[19], c.r[19].w[0] + 64u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 2;
L_00123F60:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00123EF0u | kUnwind; return; } goto L_00123EF0; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[19].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123F78u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 239u, depth + 1u); else { c.pc = 0x00102678u; return; } if (c.pc != 0x00123F78u) [[unlikely]] return; }
L_00123F78:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123F84u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 220u, depth + 1u); else { c.pc = 0x00102280u; return; } if (c.pc != 0x00123F84u) [[unlikely]] return; }
L_00123F84:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[22]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { [[clang::musttail]] return unit_0009(c, 1u, depth); } }
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00123FF0; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[22]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00123FC8; } }
    c.f[13] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[19].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123FC0u); c.f[12] = c.f[24];  if (depth < kMaxDepth) unit_0009(c, 11u, depth + 1u); else { c.pc = 0x001244C0u; return; } if (c.pc != 0x00123FC0u) [[unlikely]] return; }
L_00123FC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00123FF0; } }
L_00123FC8:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00123FF0; } }
    c.f[13] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[19].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00123FECu); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_0009(c, 11u, depth + 1u); else { c.pc = 0x001244C0u; return; } if (c.pc != 0x00123FECu) [[unlikely]] return; }
L_00123FEC:
    c.budget -= 1;
L_00123FF0:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 2;
L_00123FF8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00123E28u | kUnwind; return; } goto L_00123E28; } }
    [[clang::musttail]] return unit_0009(c, 1u, depth);
}

}
