#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00A0[4096] = {
    1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 0, 0, 0, 10, 11, 0, 0, 12, 0, 0, 13, 0, 0, 14, 15, 0, 16, 0, 17, 0, 0, 0,
    0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0,
    0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 34, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 37, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0,
    0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0,
    51, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0,
    0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0,
    0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 69, 0, 0, 0, 70, 0,
    0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 77, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 82, 0,
    0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0,
    0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0,
    0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0,
    0, 0, 118, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 129,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0,
    0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 137, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0,
    0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0,
    0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0,
    0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0,
    183, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0,
    208, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 226, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0,
    231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0,
    233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 241, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 246, 0, 247, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 249, 0, 250, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0,
    256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 259, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 262, 0, 0, 0, 263, 0,
    0, 0, 264, 0, 0, 0, 265, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 268, 0, 269, 0, 0, 0,
    270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 285, 0,
    0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 291, 0, 0, 0, 0, 0, 0, 0,
    0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 297, 0, 0, 0, 298, 0, 299, 0, 0, 300, 0, 0,
    0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 305, 0, 0, 0, 306, 0, 307, 0, 0, 308, 0, 0,
    0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 312, 0, 313, 0, 0, 0, 314, 0, 0, 0,
    0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 330, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0,
    336, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 343, 0,
    0, 0, 344, 0, 345, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0,
    351, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 356, 0, 0, 0, 357, 0, 358, 0, 0, 359, 0, 0,
    0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 364, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 370, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 373, 0, 374, 0, 375, 0, 0, 0, 0, 0, 376, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0,
    379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 0, 382, 0, 383, 0, 384, 0, 385, 0, 386, 0,
    0, 387, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0,
    0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 399, 0, 0, 400, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 403, 0, 0, 0, 404, 405, 406, 407, 408, 409, 410, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0,
    0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 415, 0, 416, 0, 417, 0, 0, 0, 0, 0, 0, 0,
    418, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 427, 0,
    0, 0, 0, 428, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 433, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 435, 436, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0,
    0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 442, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00A0(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00380000;
    case 2u: goto L_00380004;
    case 3u: goto L_00380008;
    case 4u: goto L_0038000C;
    case 5u: goto L_00380010;
    case 6u: goto L_00380014;
    case 7u: goto L_00380018;
    case 8u: goto L_0038001C;
    case 9u: goto L_00380020;
    case 10u: goto L_00380034;
    case 11u: goto L_00380038;
    case 12u: goto L_00380044;
    case 13u: goto L_00380050;
    case 14u: goto L_0038005C;
    case 15u: goto L_00380060;
    case 16u: goto L_00380068;
    case 17u: goto L_00380070;
    case 18u: goto L_00380088;
    case 19u: goto L_003800A0;
    case 20u: goto L_003800D0;
    case 21u: goto L_003800F0;
    case 22u: goto L_00380120;
    case 23u: goto L_00380180;
    case 24u: goto L_00380190;
    case 25u: goto L_00380280;
    case 26u: goto L_003802C0;
    case 27u: goto L_003802CC;
    case 28u: goto L_00380378;
    case 29u: goto L_00380398;
    case 30u: goto L_003803A4;
    case 31u: goto L_003803BC;
    case 32u: goto L_003803D0;
    case 33u: goto L_003803E0;
    case 34u: goto L_0038040C;
    case 35u: goto L_00380410;
    case 36u: goto L_0038043C;
    case 37u: goto L_00380488;
    case 38u: goto L_00380490;
    case 39u: goto L_00380498;
    case 40u: goto L_003804B4;
    case 41u: goto L_00380510;
    case 42u: goto L_00380520;
    case 43u: goto L_00380528;
    case 44u: goto L_00380544;
    case 45u: goto L_00380560;
    case 46u: goto L_003805B4;
    case 47u: goto L_003805F8;
    case 48u: goto L_00380618;
    case 49u: goto L_00380630;
    case 50u: goto L_00380664;
    case 51u: goto L_00380680;
    case 52u: goto L_00380690;
    case 53u: goto L_003806A0;
    case 54u: goto L_003806B8;
    case 55u: goto L_003806F8;
    case 56u: goto L_00380708;
    case 57u: goto L_00380718;
    case 58u: goto L_00380748;
    case 59u: goto L_00380750;
    case 60u: goto L_00380778;
    case 61u: goto L_00380790;
    case 62u: goto L_003807B0;
    case 63u: goto L_003807B8;
    case 64u: goto L_003807EC;
    case 65u: goto L_00380820;
    case 66u: goto L_0038083C;
    case 67u: goto L_00380850;
    case 68u: goto L_00380860;
    case 69u: goto L_00380868;
    case 70u: goto L_00380878;
    case 71u: goto L_00380888;
    case 72u: goto L_00380898;
    case 73u: goto L_003808A8;
    case 74u: goto L_003808C8;
    case 75u: goto L_003808D8;
    case 76u: goto L_003808E4;
    case 77u: goto L_003808F4;
    case 78u: goto L_00380920;
    case 79u: goto L_00380948;
    case 80u: goto L_0038095C;
    case 81u: goto L_00380964;
    case 82u: goto L_00380978;
    case 83u: goto L_00380988;
    case 84u: goto L_00380998;
    case 85u: goto L_003809AC;
    case 86u: goto L_003809E8;
    case 87u: goto L_00380A10;
    case 88u: goto L_00380A28;
    case 89u: goto L_00380A48;
    case 90u: goto L_00380A50;
    case 91u: goto L_00380AA8;
    case 92u: goto L_00380AB8;
    case 93u: goto L_00380AC0;
    case 94u: goto L_00380AD0;
    case 95u: goto L_00380AF0;
    case 96u: goto L_00380B18;
    case 97u: goto L_00380B48;
    case 98u: goto L_00380B58;
    case 99u: goto L_00380B94;
    case 100u: goto L_00380BC8;
    case 101u: goto L_00380BF0;
    case 102u: goto L_00380C08;
    case 103u: goto L_00380C18;
    case 104u: goto L_00380C2C;
    case 105u: goto L_00380C68;
    case 106u: goto L_00380C9C;
    case 107u: goto L_00380CC4;
    case 108u: goto L_00380D14;
    case 109u: goto L_00380D3C;
    case 110u: goto L_00380D48;
    case 111u: goto L_00380D70;
    case 112u: goto L_00380D88;
    case 113u: goto L_00380D98;
    case 114u: goto L_00380DAC;
    case 115u: goto L_00380DE8;
    case 116u: goto L_00380E1C;
    case 117u: goto L_00380E64;
    case 118u: goto L_00380E88;
    case 119u: goto L_00380E94;
    case 120u: goto L_00380EA4;
    case 121u: goto L_00380EC0;
    case 122u: goto L_00380ECC;
    case 123u: goto L_00380EDC;
    case 124u: goto L_00380F08;
    case 125u: goto L_00380F30;
    case 126u: goto L_00380F48;
    case 127u: goto L_00380F58;
    case 128u: goto L_00380F68;
    case 129u: goto L_00380F7C;
    case 130u: goto L_00380FB8;
    case 131u: goto L_00380FE0;
    case 132u: goto L_00380FF8;
    case 133u: goto L_00381018;
    case 134u: goto L_00381020;
    case 135u: goto L_00381058;
    case 136u: goto L_00381068;
    case 137u: goto L_00381078;
    case 138u: goto L_003810B0;
    case 139u: goto L_003810D0;
    case 140u: goto L_0038110C;
    case 141u: goto L_00381128;
    case 142u: goto L_00381138;
    case 143u: goto L_0038114C;
    case 144u: goto L_00381188;
    case 145u: goto L_003811BC;
    case 146u: goto L_003811E0;
    case 147u: goto L_003811F8;
    case 148u: goto L_00381204;
    case 149u: goto L_00381214;
    case 150u: goto L_00381254;
    case 151u: goto L_00381264;
    case 152u: goto L_00381278;
    case 153u: goto L_0038129C;
    case 154u: goto L_003812AC;
    case 155u: goto L_003812BC;
    case 156u: goto L_003812D0;
    case 157u: goto L_00381304;
    case 158u: goto L_00381320;
    case 159u: goto L_00381330;
    case 160u: goto L_0038133C;
    case 161u: goto L_0038134C;
    case 162u: goto L_00381378;
    case 163u: goto L_003813A0;
    case 164u: goto L_003813B0;
    case 165u: goto L_003813B8;
    case 166u: goto L_003813CC;
    case 167u: goto L_003813E0;
    case 168u: goto L_003813F0;
    case 169u: goto L_00381404;
    case 170u: goto L_00381440;
    case 171u: goto L_00381468;
    case 172u: goto L_003814A4;
    case 173u: goto L_003814D8;
    case 174u: goto L_00381514;
    case 175u: goto L_00381530;
    case 176u: goto L_00381540;
    case 177u: goto L_00381554;
    case 178u: goto L_00381590;
    case 179u: goto L_003815C4;
    case 180u: goto L_0038160C;
    case 181u: goto L_00381640;
    case 182u: goto L_00381668;
    case 183u: goto L_00381680;
    case 184u: goto L_00381690;
    case 185u: goto L_003816A4;
    case 186u: goto L_003816E0;
    case 187u: goto L_00381714;
    case 188u: goto L_0038175C;
    case 189u: goto L_00381790;
    case 190u: goto L_003817B8;
    case 191u: goto L_003817D0;
    case 192u: goto L_003817E0;
    case 193u: goto L_003817F4;
    case 194u: goto L_00381830;
    case 195u: goto L_00381864;
    case 196u: goto L_003818AC;
    case 197u: goto L_003818C8;
    case 198u: goto L_00381908;
    case 199u: goto L_00381930;
    case 200u: goto L_00381940;
    case 201u: goto L_00381950;
    case 202u: goto L_00381964;
    case 203u: goto L_00381990;
    case 204u: goto L_003819C4;
    case 205u: goto L_00381A0C;
    case 206u: goto L_00381A40;
    case 207u: goto L_00381A68;
    case 208u: goto L_00381A80;
    case 209u: goto L_00381A90;
    case 210u: goto L_00381AA4;
    case 211u: goto L_00381AE0;
    case 212u: goto L_00381B14;
    case 213u: goto L_00381B48;
    case 214u: goto L_00381BB4;
    case 215u: goto L_00381C20;
    case 216u: goto L_00381C94;
    case 217u: goto L_00381D0C;
    case 218u: goto L_00381D78;
    case 219u: goto L_00381DEC;
    case 220u: goto L_00381E64;
    case 221u: goto L_00381EC0;
    case 222u: goto L_00381FA8;
    case 223u: goto L_00381FB4;
    case 224u: goto L_00381FCC;
    case 225u: goto L_00381FE0;
    case 226u: goto L_00381FE8;
    case 227u: goto L_00382020;
    case 228u: goto L_00382040;
    case 229u: goto L_00382050;
    case 230u: goto L_00382078;
    case 231u: goto L_00382080;
    case 232u: goto L_00382178;
    case 233u: goto L_00382180;
    case 234u: goto L_00382194;
    case 235u: goto L_003821A8;
    case 236u: goto L_003821B0;
    case 237u: goto L_003821B8;
    case 238u: goto L_00382230;
    case 239u: goto L_0038226C;
    case 240u: goto L_003822B8;
    case 241u: goto L_003822C0;
    case 242u: goto L_003822C8;
    case 243u: goto L_00382328;
    case 244u: goto L_00382330;
    case 245u: goto L_00382338;
    case 246u: goto L_00382398;
    case 247u: goto L_003823A0;
    case 248u: goto L_003823A8;
    case 249u: goto L_00382408;
    case 250u: goto L_00382410;
    case 251u: goto L_00382418;
    case 252u: goto L_00382458;
    case 253u: goto L_00382460;
    case 254u: goto L_003824A0;
    case 255u: goto L_003824E0;
    case 256u: goto L_00382500;
    case 257u: goto L_003825D4;
    case 258u: goto L_003825E0;
    case 259u: goto L_003825E8;
    case 260u: goto L_00382628;
    case 261u: goto L_00382660;
    case 262u: goto L_00382668;
    case 263u: goto L_00382678;
    case 264u: goto L_00382688;
    case 265u: goto L_00382698;
    case 266u: goto L_003826A0;
    case 267u: goto L_003826E0;
    case 268u: goto L_003826E8;
    case 269u: goto L_003826F0;
    case 270u: goto L_00382700;
    case 271u: goto L_00382720;
    case 272u: goto L_00382860;
    case 273u: goto L_003828A0;
    case 274u: goto L_003828B8;
    case 275u: goto L_003828C4;
    case 276u: goto L_003828D8;
    case 277u: goto L_00382910;
    case 278u: goto L_00382930;
    case 279u: goto L_00382940;
    case 280u: goto L_00382948;
    case 281u: goto L_003829B8;
    case 282u: goto L_003829C8;
    case 283u: goto L_003829D8;
    case 284u: goto L_003829E8;
    case 285u: goto L_003829F8;
    case 286u: goto L_00382A0C;
    case 287u: goto L_00382A24;
    case 288u: goto L_00382A30;
    case 289u: goto L_00382A44;
    case 290u: goto L_00382A58;
    case 291u: goto L_00382A60;
    case 292u: goto L_00382A84;
    case 293u: goto L_00382AB0;
    case 294u: goto L_00382B24;
    case 295u: goto L_00382B38;
    case 296u: goto L_00382B48;
    case 297u: goto L_00382B50;
    case 298u: goto L_00382B60;
    case 299u: goto L_00382B68;
    case 300u: goto L_00382B74;
    case 301u: goto L_00382B84;
    case 302u: goto L_00382B98;
    case 303u: goto L_00382BB8;
    case 304u: goto L_00382BC8;
    case 305u: goto L_00382BD0;
    case 306u: goto L_00382BE0;
    case 307u: goto L_00382BE8;
    case 308u: goto L_00382BF4;
    case 309u: goto L_00382C18;
    case 310u: goto L_00382C38;
    case 311u: goto L_00382C48;
    case 312u: goto L_00382C58;
    case 313u: goto L_00382C60;
    case 314u: goto L_00382C70;
    case 315u: goto L_00382C90;
    case 316u: goto L_00382CA4;
    case 317u: goto L_00382CBC;
    case 318u: goto L_00382CC4;
    case 319u: goto L_00382CD8;
    case 320u: goto L_00382D18;
    case 321u: goto L_00382D84;
    case 322u: goto L_00382DF0;
    case 323u: goto L_00382E90;
    case 324u: goto L_00382FAC;
    case 325u: goto L_00382FE4;
    case 326u: goto L_00382FF8;
    case 327u: goto L_00383024;
    case 328u: goto L_00383044;
    case 329u: goto L_00383058;
    case 330u: goto L_00383060;
    case 331u: goto L_00383120;
    case 332u: goto L_00383134;
    case 333u: goto L_0038314C;
    case 334u: goto L_00383158;
    case 335u: goto L_0038316C;
    case 336u: goto L_00383180;
    case 337u: goto L_00383188;
    case 338u: goto L_003831AC;
    case 339u: goto L_003831D8;
    case 340u: goto L_0038324C;
    case 341u: goto L_00383260;
    case 342u: goto L_00383270;
    case 343u: goto L_00383278;
    case 344u: goto L_00383288;
    case 345u: goto L_00383290;
    case 346u: goto L_0038329C;
    case 347u: goto L_003832AC;
    case 348u: goto L_003832C0;
    case 349u: goto L_003832E0;
    case 350u: goto L_003832F0;
    case 351u: goto L_00383300;
    case 352u: goto L_00383308;
    case 353u: goto L_00383318;
    case 354u: goto L_00383338;
    case 355u: goto L_00383348;
    case 356u: goto L_00383350;
    case 357u: goto L_00383360;
    case 358u: goto L_00383368;
    case 359u: goto L_00383374;
    case 360u: goto L_00383384;
    case 361u: goto L_00383398;
    case 362u: goto L_003833B8;
    case 363u: goto L_003833C8;
    case 364u: goto L_00383418;
    case 365u: goto L_00383420;
    case 366u: goto L_00383484;
    case 367u: goto L_00383580;
    case 368u: goto L_00383610;
    case 369u: goto L_00383640;
    case 370u: goto L_00383654;
    case 371u: goto L_0038365C;
    case 372u: goto L_003836A4;
    case 373u: goto L_003836AC;
    case 374u: goto L_003836B4;
    case 375u: goto L_003836BC;
    case 376u: goto L_003836D4;
    case 377u: goto L_003836DC;
    case 378u: goto L_003836F0;
    case 379u: goto L_00383700;
    case 380u: goto L_00383730;
    case 381u: goto L_00383740;
    case 382u: goto L_00383758;
    case 383u: goto L_00383760;
    case 384u: goto L_00383768;
    case 385u: goto L_00383770;
    case 386u: goto L_00383778;
    case 387u: goto L_00383784;
    case 388u: goto L_0038378C;
    case 389u: goto L_003837A0;
    case 390u: goto L_003837DC;
    case 391u: goto L_0038386C;
    case 392u: goto L_00383890;
    case 393u: goto L_003838B0;
    case 394u: goto L_003838D0;
    case 395u: goto L_003838F0;
    case 396u: goto L_003839C0;
    case 397u: goto L_00383AB0;
    case 398u: goto L_00383AEC;
    case 399u: goto L_00383B14;
    case 400u: goto L_00383B20;
    case 401u: goto L_00383B28;
    case 402u: goto L_00383B38;
    case 403u: goto L_00383B90;
    case 404u: goto L_00383BA0;
    case 405u: goto L_00383BA4;
    case 406u: goto L_00383BA8;
    case 407u: goto L_00383BAC;
    case 408u: goto L_00383BB0;
    case 409u: goto L_00383BB4;
    case 410u: goto L_00383BB8;
    case 411u: goto L_00383BC0;
    case 412u: goto L_00383BF4;
    case 413u: goto L_00383C08;
    case 414u: goto L_00383C38;
    case 415u: goto L_00383C50;
    case 416u: goto L_00383C58;
    case 417u: goto L_00383C60;
    case 418u: goto L_00383C80;
    case 419u: goto L_00383C88;
    case 420u: goto L_00383C9C;
    case 421u: goto L_00383CB0;
    case 422u: goto L_00383CD0;
    case 423u: goto L_00383D0C;
    case 424u: goto L_00383D40;
    case 425u: goto L_00383D58;
    case 426u: goto L_00383D6C;
    case 427u: goto L_00383D78;
    case 428u: goto L_00383D8C;
    case 429u: goto L_00383DA4;
    case 430u: goto L_00383DB8;
    case 431u: goto L_00383DC8;
    case 432u: goto L_00383DE0;
    case 433u: goto L_00383DF8;
    case 434u: goto L_00383E28;
    case 435u: goto L_00383E34;
    case 436u: goto L_00383E38;
    case 437u: goto L_00383E40;
    case 438u: goto L_00383E6C;
    case 439u: goto L_00383E90;
    case 440u: goto L_00383EA8;
    case 441u: goto L_00383EC0;
    case 442u: goto L_00383ED4;
    case 443u: goto L_00383EE8;
    case 444u: goto L_00383F10;
    case 445u: goto L_00383F50;
    case 446u: goto L_00383F60;
    case 447u: goto L_00383F94;
    default: bad_entry(c, 0x00380000u); return;
    }
L_00380000:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 1;
L_00380004:
    set32(c.r[3], 0u + 210u);
    c.budget -= 1;
L_00380008:
    st8((c.r[1].w[0] + 5085u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_0038000C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 1;
L_00380010:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00380014:
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00380018:
    c.budget -= 1;
L_0038001C:
    c.budget -= 1;
L_00380020:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], 0u + 220u);
    st8((c.r[1].w[0] + 5085u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5086u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 5;
L_00380034:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 1;
L_00380038:
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
L_00380044:
    st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 15u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
L_00380050:
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1860u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
L_0038005C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00380060:
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
    c.pc = 0x00380064u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_00380068:
    c.budget -= 2;
L_00380070:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], 0u + 230u);
    st8((c.r[1].w[0] + 5085u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5107u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
L_00380088:
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 40u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003800A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], 0u + 240u);
    st8((c.r[1].w[0] + 5085u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5086u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 15u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 12;
L_003800D0:
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1860u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003800F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], 0u + 250u);
    st8((c.r[1].w[0] + 5085u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5107u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 40u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00380120:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], 0u + 252u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5084u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00381E70; } }
    set32(c.r[3], 0u + 251u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 250u);  if (t) { goto L_00381E20; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00381DC0; } }
    set32(c.r[3], 0u + 241u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 240u);  if (t) { goto L_00381D80; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 232u);  if (t) { goto L_00381D58; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 231u);  if (t) { goto L_00381D18; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00381CC8; } }
    set32(c.r[3], 0u + 230u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 221u);  if (t) { goto L_00381C68; } }
    goto L_00380184;
L_00380180:
    set32(c.r[3], 0u + 221u);
    c.budget -= 1;
L_00380184:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00381C28; } }
    set32(c.r[3], 0u + 220u);
    c.budget -= 1;
L_00380190:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 211u);  if (t) { goto L_00381C00; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00381BC0; } }
    set32(c.r[3], 0u + 210u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 201u);  if (t) { goto L_00381B90; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00381B50; } }
    set32(c.r[3], 0u + 200u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 182u);  if (t) { goto L_00381B30; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 181u);  if (t) { goto L_00381B28; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 180u);  if (t) { goto L_00381A28; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003819E0; } }
    set32(c.r[3], 0u + 172u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 171u);  if (t) { goto L_003819D8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 170u);  if (t) { goto L_003818D0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[7], 0u + 162u);  if (t) { goto L_00381880; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[7].d[0]; set32(c.r[6], 0u + 161u);  if (t) { goto L_00381878; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; set32(c.r[5], 0u + 160u);  if (t) { goto L_00381778; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 152u);  if (t) { goto L_00381730; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 151u);  if (t) { goto L_00381728; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 150u);  if (t) { goto L_00381628; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003815E0; } }
    set32(c.r[3], 0u + 142u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 141u);  if (t) { goto L_003815D8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 140u);  if (t) { goto L_003814C0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00381478; } }
    set32(c.r[4], 0u + 131u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 130u);  if (t) { goto L_00381328; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003812D8; } }
    set32(c.r[4], 0u + 128u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 127u);  if (t) { goto L_003811F0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003811D8; } }
    set32(c.r[3], 0u + 126u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 125u);  if (t) { goto L_003811D0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 124u);  if (t) { goto L_003810B8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003810A8; } }
    goto L_00380284;
L_00380280:
    c.budget -= 1;
L_00380284:
    set32(c.r[4], 0u + 123u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 122u);  if (t) { goto L_00381000; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00380FF0; } }
    set32(c.r[4], 0u + 121u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 120u);  if (t) { goto L_00380EB8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[6], 0u + 112u);  if (t) { goto L_00380E38; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; set32(c.r[4], 0u + 111u);  if (t) { goto L_00380E30; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 110u);  if (t) { goto L_00380D30; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00380CE8; } }
    goto L_003802C4;
L_003802C0:
    c.budget -= 1;
L_003802C4:
    set32(c.r[3], 0u + 103u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 102u);  if (t) { goto L_00380CB8; } }
    goto L_003802D0;
L_003802CC:
    set32(c.r[3], 0u + 102u);
    c.budget -= 1;
L_003802D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 101u);  if (t) { goto L_00380CB0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 100u);  if (t) { goto L_00380BB0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 11u);  if (t) { goto L_00380B68; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[4], 0u + 10u);  if (t) { goto L_00380B60; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 9u);  if (t) { goto L_00380B00; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00380AE8; } }
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 7u);  if (t) { goto L_00380A30; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00380A20; } }
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_003808D0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003808C0; } }
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_00380798; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00380788; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 22u);  if (t) { goto L_003805E0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00380588; } }
    set32(c.r[3], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 20u);  if (t) { goto L_00380460; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_00380400; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_003803C8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00380380; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381EA8; } }
    goto L_0038037C;
L_00380378:
    c.budget -= 1;
L_0038037C:
    c.budget -= 1;
L_00380380:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380398u); st8((c.r[1].w[0] + 5085u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0098(c, 558u, depth + 1u); else { c.pc = 0x00363A20u; return; } if (c.pc != 0x00380398u) [[unlikely]] return; }
L_00380398:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003803A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008E(c, 337u, depth + 1u); else { c.pc = 0x0033B920u; return; } if (c.pc != 0x003803A4u) [[unlikely]] return; }
L_003803A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] | 12288ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003803BCu); c.r[6].d[0] = c.r[2].d[0] | 47104ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003803BCu) [[unlikely]] return; }
L_003803BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381EA8; } }
    c.budget -= 1;
L_003803C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003803D0u);  if (depth < kMaxDepth) unit_009F(c, 225u, depth + 1u); else { c.pc = 0x0037DC40u; return; } if (c.pc != 0x003803D0u) [[unlikely]] return; }
L_003803D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 20u);  if (t) { goto L_00381EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003803E0u); set32(c.r[5], 0u + 167u);  if (depth < kMaxDepth) unit_009F(c, 514u, depth + 1u); else { c.pc = 0x0037FFC0u; return; } if (c.pc != 0x003803E0u) [[unlikely]] return; }
L_003803E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00381EA8; } }
L_00380400:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F50000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038040Cu); c.r[4].d[0] = c.r[2].d[0] | 59392ull;  if (depth < kMaxDepth) unit_008F(c, 83u, depth + 1u); else { c.pc = 0x0033D350u; return; } if (c.pc != 0x0038040Cu) [[unlikely]] return; }
L_0038040C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 1;
L_00380410:
    set32(c.r[6], 0u + 1u);
    st16((c.r[1].w[0] + 5082u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    st8((c.r[1].w[0] + 5081u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = c.r[2].d[0] | 12288ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038043Cu); st8((c.r[28].w[0] - 23072u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 18u, depth + 1u); else { c.pc = 0x0033C490u; return; } if (c.pc != 0x0038043Cu) [[unlikely]] return; }
L_0038043C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5085u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5084u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00381EA8; } }
    c.budget -= 1;
L_00380460:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5085u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00380518; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00380488; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381EA8; } }
    c.budget -= 1;
L_00380488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380490u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x00380490u) [[unlikely]] return; }
L_00380490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380498u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x00380498u) [[unlikely]] return; }
L_00380498:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00381EA8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 22u);  if (t) { goto L_003804C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003804B4u);  if (depth < kMaxDepth) unit_00A0(c, 1u, depth + 1u); else { c.pc = 0x00380000u; return; } if (c.pc != 0x003804B4u) [[unlikely]] return; }
L_003804B4:
    set32(c.r[2], 0u + 5u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00381EA8; } }
    c.budget -= 1;
L_003804C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4968u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5085u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5081u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));
    c.r[5].d[0] = c.r[2].d[0] | 12288ull;
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5085u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380510u); st8((c.r[28].w[0] - 23072u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 18u, depth + 1u); else { c.pc = 0x0033C490u; return; } if (c.pc != 0x00380510u) [[unlikely]] return; }
L_00380510:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381EA8; } }
L_00380518:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380520u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x00380520u) [[unlikely]] return; }
L_00380520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380528u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x00380528u) [[unlikely]] return; }
L_00380528:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00381EA8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 22u);  if (t) { goto L_00380558; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380544u);  if (depth < kMaxDepth) unit_00A0(c, 1u, depth + 1u); else { c.pc = 0x00380000u; return; } if (c.pc != 0x00380544u) [[unlikely]] return; }
L_00380544:
    set32(c.r[2], 0u + 5u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00381EA8; } }
    c.budget -= 1;
L_00380558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380560u); set32(c.r[4], 0u + 22u);  if (depth < kMaxDepth) unit_00A0(c, 1u, depth + 1u); else { c.pc = 0x00380000u; return; } if (c.pc != 0x00380560u) [[unlikely]] return; }
L_00380560:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5081u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23072u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00381EA8; } }
    c.budget -= 1;
L_00380588:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00381EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003805B4u);  if (depth < kMaxDepth) unit_00A0(c, 19u, depth + 1u); else { c.pc = 0x003800A0u; return; } if (c.pc != 0x003805B4u) [[unlikely]] return; }
L_003805B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], 0u + 20u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00381EA8; } }
    c.budget -= 1;
L_003805E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00380728; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003805F8u);  if (depth < kMaxDepth) unit_0098(c, 521u, depth + 1u); else { c.pc = 0x00363640u; return; } if (c.pc != 0x003805F8u) [[unlikely]] return; }
L_003805F8:
    c.r[3].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00380640; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5001u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00380628; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380618u);  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x00380618u) [[unlikely]] return; }
L_00380618:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00380688; } }
    c.budget -= 1;
L_00380628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380630u);  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x00380630u) [[unlikely]] return; }
L_00380630:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00380688; } }
L_00380640:
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00380688; } }
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5001u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00380678; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380664u);  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x00380664u) [[unlikely]] return; }
L_00380664:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00380688; } }
    c.budget -= 1;
L_00380678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380680u);  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x00380680u) [[unlikely]] return; }
L_00380680:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00380688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380690u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x00380690u) [[unlikely]] return; }
L_00380690:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_00380700; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003806A0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A0(c, 21u, depth + 1u); else { c.pc = 0x003800F0u; return; } if (c.pc != 0x003806A0u) [[unlikely]] return; }
L_003806A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F50000u);
    set32(c.r[3], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = c.r[2].d[0] | 59392ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003806B8u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_008F(c, 83u, depth + 1u); else { c.pc = 0x0033D350u; return; } if (c.pc != 0x003806B8u) [[unlikely]] return; }
L_003806B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[6], 0u + 1u);
    st16((c.r[1].w[0] + 5082u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[5].d[0] = c.r[2].d[0] | 12288ull;
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5001u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5081u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003806F8u); st8((c.r[28].w[0] - 23072u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 18u, depth + 1u); else { c.pc = 0x0033C490u; return; } if (c.pc != 0x003806F8u) [[unlikely]] return; }
L_003806F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00380738; } }
L_00380700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380708u);  if (depth < kMaxDepth) unit_0098(c, 531u, depth + 1u); else { c.pc = 0x00363760u; return; } if (c.pc != 0x00380708u) [[unlikely]] return; }
L_00380708:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 100u);  if (t) { goto L_00380738; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380718u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 21u, depth + 1u); else { c.pc = 0x003800F0u; return; } if (c.pc != 0x00380718u) [[unlikely]] return; }
L_00380718:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00380738; } }
L_00380728:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00380738:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 10363u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00381EA8; } }
L_00380748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380750u);  if (depth < kMaxDepth) unit_00A0(c, 256u, depth + 1u); else { c.pc = 0x00382500u; return; } if (c.pc != 0x00380750u) [[unlikely]] return; }
L_00380750:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5084u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00381EA8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 100u);  if (t) { goto L_00381EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380778u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 21u, depth + 1u); else { c.pc = 0x003800F0u; return; } if (c.pc != 0x00380778u) [[unlikely]] return; }
L_00380778:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00381EA8; } }
L_00380788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380790u); set32(c.r[5], 0u + 29u);  if (depth < kMaxDepth) unit_009F(c, 514u, depth + 1u); else { c.pc = 0x0037FFC0u; return; } if (c.pc != 0x00380790u) [[unlikely]] return; }
L_00380790:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381EA8; } }
L_00380798:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003808B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003807B0u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x003807B0u) [[unlikely]] return; }
L_003807B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003807B8u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x003807B8u) [[unlikely]] return; }
L_003807B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u - 251u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003808A0; } }
    set32(c.r[2], 0u - 256u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 252u);  if (t) { goto L_00380890; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00380880; } }
    set32(c.r[2], 0u - 253u);
    c.budget -= 1;
L_003807EC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 254u);  if (t) { goto L_00380870; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00380858; } }
    set32(c.r[2], 0u - 255u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00380848; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00380818; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381EA8; } }
L_00380818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380820u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_00A0(c, 1u, depth + 1u); else { c.pc = 0x00380000u; return; } if (c.pc != 0x00380820u) [[unlikely]] return; }
L_00380820:
    set32(c.r[3], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038083Cu); st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008E(c, 349u, depth + 1u); else { c.pc = 0x0033BA80u; return; } if (c.pc != 0x0038083Cu) [[unlikely]] return; }
L_0038083C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381EA8; } }
    c.budget -= 1;
L_00380848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380850u); set32(c.r[4], 0u + 110u);  if (depth < kMaxDepth) unit_00A0(c, 1u, depth + 1u); else { c.pc = 0x00380000u; return; } if (c.pc != 0x00380850u) [[unlikely]] return; }
L_00380850:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381EA8; } }
L_00380858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380860u); set32(c.r[4], 0u + 120u);  if (depth < kMaxDepth) unit_00A0(c, 1u, depth + 1u); else { c.pc = 0x00380000u; return; } if (c.pc != 0x00380860u) [[unlikely]] return; }
L_00380860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380868u);  if (depth < kMaxDepth) unit_008E(c, 349u, depth + 1u); else { c.pc = 0x0033BA80u; return; } if (c.pc != 0x00380868u) [[unlikely]] return; }
L_00380868:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381EA8; } }
L_00380870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380878u); set32(c.r[4], 0u + 130u);  if (depth < kMaxDepth) unit_00A0(c, 1u, depth + 1u); else { c.pc = 0x00380000u; return; } if (c.pc != 0x00380878u) [[unlikely]] return; }
L_00380878:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381EA8; } }
L_00380880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380888u); set32(c.r[4], 0u + 140u);  if (depth < kMaxDepth) unit_00A0(c, 1u, depth + 1u); else { c.pc = 0x00380000u; return; } if (c.pc != 0x00380888u) [[unlikely]] return; }
L_00380888:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381EA8; } }
L_00380890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380898u); set32(c.r[4], 0u + 150u);  if (depth < kMaxDepth) unit_00A0(c, 1u, depth + 1u); else { c.pc = 0x00380000u; return; } if (c.pc != 0x00380898u) [[unlikely]] return; }
L_00380898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381EA8; } }
L_003808A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003808A8u); set32(c.r[4], 0u + 180u);  if (depth < kMaxDepth) unit_00A0(c, 1u, depth + 1u); else { c.pc = 0x00380000u; return; } if (c.pc != 0x003808A8u) [[unlikely]] return; }
L_003808A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381EA8; } }
L_003808B0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00381EA8; } }
L_003808C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003808C8u); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 9u, depth + 1u); else { c.pc = 0x00380020u; return; } if (c.pc != 0x003808C8u) [[unlikely]] return; }
L_003808C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381EA8; } }
L_003808D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003808D8u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x003808D8u) [[unlikely]] return; }
L_003808D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003808E4u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));  if (depth < kMaxDepth) unit_008F(c, 79u, depth + 1u); else { c.pc = 0x0033D2F0u; return; } if (c.pc != 0x003808E4u) [[unlikely]] return; }
L_003808E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 170u);  if (t) { goto L_00380908; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003808F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x003808F4u) [[unlikely]] return; }
L_003808F4:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00381EA8; } }
    c.budget -= 1;
L_00380908:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003809C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380920u);  if (depth < kMaxDepth) unit_0098(c, 534u, depth + 1u); else { c.pc = 0x003637C0u; return; } if (c.pc != 0x00380920u) [[unlikely]] return; }
L_00380920:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_00380980; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00380940; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003809D0; } }
    c.budget -= 1;
L_00380940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380948u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00380948u) [[unlikely]] return; }
L_00380948:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038095Cu); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0090(c, 378u, depth + 1u); else { c.pc = 0x00343210u; return; } if (c.pc != 0x0038095Cu) [[unlikely]] return; }
L_0038095C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380964u);  if (depth < kMaxDepth) unit_0090(c, 347u, depth + 1u); else { c.pc = 0x00342D60u; return; } if (c.pc != 0x00380964u) [[unlikely]] return; }
L_00380964:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380978u); c.r[5].d[0] = c.r[2].d[0] | 12288ull;  if (depth < kMaxDepth) unit_008F(c, 28u, depth + 1u); else { c.pc = 0x0033C7E0u; return; } if (c.pc != 0x00380978u) [[unlikely]] return; }
L_00380978:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003809D0; } }
L_00380980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380988u);  if (depth < kMaxDepth) unit_0098(c, 529u, depth + 1u); else { c.pc = 0x00363720u; return; } if (c.pc != 0x00380988u) [[unlikely]] return; }
L_00380988:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 103u);  if (t) { goto L_003809A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380998u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00380998u) [[unlikely]] return; }
L_00380998:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003809B0; } }
L_003809A0:
    set32(c.r[4], 0u + 103u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003809ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x003809ACu) [[unlikely]] return; }
L_003809AC:
    c.budget -= 1;
L_003809B0:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003809D0; } }
L_003809C0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_003809D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 10363u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00381EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003809E8u);  if (depth < kMaxDepth) unit_00A0(c, 256u, depth + 1u); else { c.pc = 0x00382500u; return; } if (c.pc != 0x003809E8u) [[unlikely]] return; }
L_003809E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 6u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5084u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00381EA8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 100u);  if (t) { goto L_00381EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380A10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00380A10u) [[unlikely]] return; }
L_00380A10:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00381EA8; } }
L_00380A20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380A28u); set32(c.r[5], 0u + 105u);  if (depth < kMaxDepth) unit_009F(c, 514u, depth + 1u); else { c.pc = 0x0037FFC0u; return; } if (c.pc != 0x00380A28u) [[unlikely]] return; }
L_00380A28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381EA8; } }
L_00380A30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00380AD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380A48u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x00380A48u) [[unlikely]] return; }
L_00380A48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380A50u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x00380A50u) [[unlikely]] return; }
L_00380A50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u - 251u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00380AC8; } }
    set32(c.r[2], 0u - 256u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 255u);  if (t) { goto L_00380AC8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00380AC8; } }
    set32(c.r[2], 0u - 254u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00380AB0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00380AA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381EA8; } }
    c.budget -= 1;
L_00380AA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380AA8u); set32(c.r[4], 0u + 9u);  if (depth < kMaxDepth) unit_00A0(c, 1u, depth + 1u); else { c.pc = 0x00380000u; return; } if (c.pc != 0x00380AA8u) [[unlikely]] return; }
L_00380AA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381EA8; } }
L_00380AB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380AB8u); set32(c.r[4], 0u + 120u);  if (depth < kMaxDepth) unit_00A0(c, 1u, depth + 1u); else { c.pc = 0x00380000u; return; } if (c.pc != 0x00380AB8u) [[unlikely]] return; }
L_00380AB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380AC0u);  if (depth < kMaxDepth) unit_008E(c, 349u, depth + 1u); else { c.pc = 0x0033BA80u; return; } if (c.pc != 0x00380AC0u) [[unlikely]] return; }
L_00380AC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381EA8; } }
L_00380AC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380AD0u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_00A0(c, 1u, depth + 1u); else { c.pc = 0x00380000u; return; } if (c.pc != 0x00380AD0u) [[unlikely]] return; }
L_00380AD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381EA8; } }
L_00380AD8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00381EA8; } }
L_00380AE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380AF0u); set32(c.r[5], 0u + 108u);  if (depth < kMaxDepth) unit_009F(c, 514u, depth + 1u); else { c.pc = 0x0037FFC0u; return; } if (c.pc != 0x00380AF0u) [[unlikely]] return; }
L_00380AF0:
    set32(c.r[2], 0u + 300u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00381EA8; } }
L_00380B00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00380B20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380B18u);  if (depth < kMaxDepth) unit_00A0(c, 1u, depth + 1u); else { c.pc = 0x00380000u; return; } if (c.pc != 0x00380B18u) [[unlikely]] return; }
L_00380B18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381EA8; } }
L_00380B20:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 270ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00381EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380B48u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x00380B48u) [[unlikely]] return; }
L_00380B48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 11u);  if (t) { goto L_00381EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380B58u);  if (depth < kMaxDepth) unit_00A0(c, 1u, depth + 1u); else { c.pc = 0x00380000u; return; } if (c.pc != 0x00380B58u) [[unlikely]] return; }
L_00380B58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381EA8; } }
L_00380B60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_00381EA8; } }
L_00380B68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[5], 0u + 158u);  if (t) { goto L_00381EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380B94u);  if (depth < kMaxDepth) unit_00A0(c, 9u, depth + 1u); else { c.pc = 0x00380020u; return; } if (c.pc != 0x00380B94u) [[unlikely]] return; }
L_00380B94:
    set32(c.r[3], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00381EA8; } }
L_00380BB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00380C40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380BC8u);  if (depth < kMaxDepth) unit_0098(c, 534u, depth + 1u); else { c.pc = 0x003637C0u; return; } if (c.pc != 0x00380BC8u) [[unlikely]] return; }
L_00380BC8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_00380C00; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00380BE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00380C50; } }
    c.budget -= 1;
L_00380BE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380BF0u); set32(c.r[4], 0u + 102u);  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00380BF0u) [[unlikely]] return; }
L_00380BF0:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00380C50; } }
L_00380C00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380C08u);  if (depth < kMaxDepth) unit_0098(c, 529u, depth + 1u); else { c.pc = 0x00363720u; return; } if (c.pc != 0x00380C08u) [[unlikely]] return; }
L_00380C08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 103u);  if (t) { goto L_00380C20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380C18u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00380C18u) [[unlikely]] return; }
L_00380C18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00380C30; } }
L_00380C20:
    set32(c.r[4], 0u + 103u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380C2Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00380C2Cu) [[unlikely]] return; }
L_00380C2C:
    c.budget -= 1;
L_00380C30:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00380C50; } }
L_00380C40:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00380C50:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 10363u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00381EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380C68u);  if (depth < kMaxDepth) unit_00A0(c, 256u, depth + 1u); else { c.pc = 0x00382500u; return; } if (c.pc != 0x00380C68u) [[unlikely]] return; }
L_00380C68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 101u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5084u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00381EA8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00381EA8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], 0u + 102u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380C9Cu); st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00380C9Cu) [[unlikely]] return; }
L_00380C9C:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00381EA8; } }
    c.budget -= 1;
L_00380CB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_00381EA8; } }
L_00380CB8:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380CC4u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_00A0(c, 19u, depth + 1u); else { c.pc = 0x003800A0u; return; } if (c.pc != 0x00380CC4u) [[unlikely]] return; }
L_00380CC4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 20u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00381EA8; } }
    c.budget -= 1;
L_00380CE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[5], 0u + 159u);  if (t) { goto L_00381EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380D14u);  if (depth < kMaxDepth) unit_00A0(c, 9u, depth + 1u); else { c.pc = 0x00380020u; return; } if (c.pc != 0x00380D14u) [[unlikely]] return; }
L_00380D14:
    set32(c.r[3], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00381EA8; } }
L_00380D30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00380DC0; } }
    goto L_00380D40;
L_00380D3C:
    c.budget -= 1;
L_00380D40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380D48u);  if (depth < kMaxDepth) unit_0098(c, 534u, depth + 1u); else { c.pc = 0x003637C0u; return; } if (c.pc != 0x00380D48u) [[unlikely]] return; }
L_00380D48:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_00380D80; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00380D68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00380DD0; } }
    c.budget -= 1;
L_00380D68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380D70u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00380D70u) [[unlikely]] return; }
L_00380D70:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00380DD0; } }
L_00380D80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380D88u);  if (depth < kMaxDepth) unit_0098(c, 529u, depth + 1u); else { c.pc = 0x00363720u; return; } if (c.pc != 0x00380D88u) [[unlikely]] return; }
L_00380D88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 103u);  if (t) { goto L_00380DA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380D98u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00380D98u) [[unlikely]] return; }
L_00380D98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00380DB0; } }
L_00380DA0:
    set32(c.r[4], 0u + 103u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380DACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00380DACu) [[unlikely]] return; }
L_00380DAC:
    c.budget -= 1;
L_00380DB0:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00380DD0; } }
L_00380DC0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00380DD0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 10363u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00381EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380DE8u);  if (depth < kMaxDepth) unit_00A0(c, 256u, depth + 1u); else { c.pc = 0x00382500u; return; } if (c.pc != 0x00380DE8u) [[unlikely]] return; }
L_00380DE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 111u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5084u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00381EA8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00381EA8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], 0u + 112u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380E1Cu); st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00380E1Cu) [[unlikely]] return; }
L_00380E1C:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00381EA8; } }
    c.budget -= 1;
L_00380E30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_00381EA8; } }
L_00380E38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[5], 0u + 102u);  if (t) { goto L_00380E80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380E64u);  if (depth < kMaxDepth) unit_00A0(c, 9u, depth + 1u); else { c.pc = 0x00380020u; return; } if (c.pc != 0x00380E64u) [[unlikely]] return; }
L_00380E64:
    set32(c.r[3], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00381EA8; } }
L_00380E80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380E88u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x00380E88u) [[unlikely]] return; }
L_00380E88:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380E94u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));  if (depth < kMaxDepth) unit_008F(c, 79u, depth + 1u); else { c.pc = 0x0033D2F0u; return; } if (c.pc != 0x00380E94u) [[unlikely]] return; }
L_00380E94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 170u);  if (t) { goto L_00381EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380EA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00380EA4u) [[unlikely]] return; }
L_00380EA4:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00381EA8; } }
    c.budget -= 1;
L_00380EB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380EC0u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x00380EC0u) [[unlikely]] return; }
L_00380EC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380ECCu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));  if (depth < kMaxDepth) unit_008F(c, 79u, depth + 1u); else { c.pc = 0x0033D2F0u; return; } if (c.pc != 0x00380ECCu) [[unlikely]] return; }
L_00380ECC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 170u);  if (t) { goto L_00380EF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380EDCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00380EDCu) [[unlikely]] return; }
L_00380EDC:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00381EA8; } }
    c.budget -= 1;
L_00380EF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00380F90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380F08u);  if (depth < kMaxDepth) unit_0098(c, 534u, depth + 1u); else { c.pc = 0x003637C0u; return; } if (c.pc != 0x00380F08u) [[unlikely]] return; }
L_00380F08:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_00380F50; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00380F28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00380FA0; } }
    c.budget -= 1;
L_00380F28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380F30u); set32(c.r[4], 0u + 122u);  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00380F30u) [[unlikely]] return; }
L_00380F30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 20u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380F48u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 51u, depth + 1u); else { c.pc = 0x0033CCA0u; return; } if (c.pc != 0x00380F48u) [[unlikely]] return; }
L_00380F48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00380FA0; } }
L_00380F50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380F58u);  if (depth < kMaxDepth) unit_0098(c, 529u, depth + 1u); else { c.pc = 0x00363720u; return; } if (c.pc != 0x00380F58u) [[unlikely]] return; }
L_00380F58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 103u);  if (t) { goto L_00380F70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380F68u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00380F68u) [[unlikely]] return; }
L_00380F68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00380F80; } }
L_00380F70:
    set32(c.r[4], 0u + 103u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380F7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00380F7Cu) [[unlikely]] return; }
L_00380F7C:
    c.budget -= 1;
L_00380F80:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00380FA0; } }
L_00380F90:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00380FA0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 10363u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00381EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380FB8u);  if (depth < kMaxDepth) unit_00A0(c, 256u, depth + 1u); else { c.pc = 0x00382500u; return; } if (c.pc != 0x00380FB8u) [[unlikely]] return; }
L_00380FB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 121u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5084u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00381EA8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 100u);  if (t) { goto L_00381EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380FE0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00380FE0u) [[unlikely]] return; }
L_00380FE0:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00381EA8; } }
L_00380FF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00380FF8u); set32(c.r[5], 0u + 103u);  if (depth < kMaxDepth) unit_009F(c, 514u, depth + 1u); else { c.pc = 0x0037FFC0u; return; } if (c.pc != 0x00380FF8u) [[unlikely]] return; }
L_00380FF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381EA8; } }
L_00381000:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00381098; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381018u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x00381018u) [[unlikely]] return; }
L_00381018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381020u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x00381020u) [[unlikely]] return; }
L_00381020:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u - 256u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00381070; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00381050; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381EA8; } }
    c.budget -= 1;
L_00381050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381058u); set32(c.r[4], 0u + 127u);  if (depth < kMaxDepth) unit_00A0(c, 1u, depth + 1u); else { c.pc = 0x00380000u; return; } if (c.pc != 0x00381058u) [[unlikely]] return; }
L_00381058:
    set32(c.r[2], 0u + 300u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381068u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008E(c, 349u, depth + 1u); else { c.pc = 0x0033BA80u; return; } if (c.pc != 0x00381068u) [[unlikely]] return; }
L_00381068:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381EA8; } }
L_00381070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381078u); set32(c.r[4], 0u + 124u);  if (depth < kMaxDepth) unit_00A0(c, 1u, depth + 1u); else { c.pc = 0x00380000u; return; } if (c.pc != 0x00381078u) [[unlikely]] return; }
L_00381078:
    set32(c.r[3], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00381EA8; } }
    c.budget -= 1;
L_00381098:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00381EA8; } }
L_003810A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003810B0u);  if (depth < kMaxDepth) unit_00A0(c, 9u, depth + 1u); else { c.pc = 0x00380020u; return; } if (c.pc != 0x003810B0u) [[unlikely]] return; }
L_003810B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381EA8; } }
L_003810B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00381160; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003810D0u);  if (depth < kMaxDepth) unit_0098(c, 534u, depth + 1u); else { c.pc = 0x003637C0u; return; } if (c.pc != 0x003810D0u) [[unlikely]] return; }
L_003810D0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_00381120; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_003810F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381170; } }
    c.budget -= 1;
L_003810F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5084u));
    set32(c.r[4], 0u + 126u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038110Cu); st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x0038110Cu) [[unlikely]] return; }
L_0038110C:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00381170; } }
    c.budget -= 1;
L_00381120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381128u);  if (depth < kMaxDepth) unit_0098(c, 529u, depth + 1u); else { c.pc = 0x00363720u; return; } if (c.pc != 0x00381128u) [[unlikely]] return; }
L_00381128:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 103u);  if (t) { goto L_00381140; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381138u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00381138u) [[unlikely]] return; }
L_00381138:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381150; } }
L_00381140:
    set32(c.r[4], 0u + 103u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038114Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x0038114Cu) [[unlikely]] return; }
L_0038114C:
    c.budget -= 1;
L_00381150:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00381170; } }
L_00381160:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00381170:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 10363u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00381EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381188u);  if (depth < kMaxDepth) unit_00A0(c, 256u, depth + 1u); else { c.pc = 0x00382500u; return; } if (c.pc != 0x00381188u) [[unlikely]] return; }
L_00381188:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 125u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5084u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00381EA8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00381EA8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], 0u + 126u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003811BCu); st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x003811BCu) [[unlikely]] return; }
L_003811BC:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00381EA8; } }
    c.budget -= 1;
L_003811D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_00381EA8; } }
L_003811D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003811E0u); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 514u, depth + 1u); else { c.pc = 0x0037FFC0u; return; } if (c.pc != 0x003811E0u) [[unlikely]] return; }
L_003811E0:
    set32(c.r[2], 0u + 300u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00381EA8; } }
L_003811F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003811F8u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x003811F8u) [[unlikely]] return; }
L_003811F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381204u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));  if (depth < kMaxDepth) unit_008F(c, 79u, depth + 1u); else { c.pc = 0x0033D2F0u; return; } if (c.pc != 0x00381204u) [[unlikely]] return; }
L_00381204:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 170u);  if (t) { goto L_00381228; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381214u);  if (depth < kMaxDepth) unit_00A0(c, 1u, depth + 1u); else { c.pc = 0x00380000u; return; } if (c.pc != 0x00381214u) [[unlikely]] return; }
L_00381214:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00381EA8; } }
    c.budget -= 1;
L_00381228:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], 0u + 7u);  if (t) { goto L_00381280; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381254u);  if (depth < kMaxDepth) unit_00A0(c, 1u, depth + 1u); else { c.pc = 0x00380000u; return; } if (c.pc != 0x00381254u) [[unlikely]] return; }
L_00381254:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381264u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0090(c, 347u, depth + 1u); else { c.pc = 0x00342D60u; return; } if (c.pc != 0x00381264u) [[unlikely]] return; }
L_00381264:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381278u); c.r[5].d[0] = c.r[2].d[0] | 12288ull;  if (depth < kMaxDepth) unit_008F(c, 28u, depth + 1u); else { c.pc = 0x0033C7E0u; return; } if (c.pc != 0x00381278u) [[unlikely]] return; }
L_00381278:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381EA8; } }
L_00381280:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.r[1].d[0] = c.r[2].sd[0] < 270ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00381EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038129Cu);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x0038129Cu) [[unlikely]] return; }
L_0038129C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 7u);  if (t) { goto L_00381EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003812ACu);  if (depth < kMaxDepth) unit_00A0(c, 1u, depth + 1u); else { c.pc = 0x00380000u; return; } if (c.pc != 0x003812ACu) [[unlikely]] return; }
L_003812AC:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003812BCu); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0090(c, 347u, depth + 1u); else { c.pc = 0x00342D60u; return; } if (c.pc != 0x003812BCu) [[unlikely]] return; }
L_003812BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003812D0u); c.r[5].d[0] = c.r[2].d[0] | 12288ull;  if (depth < kMaxDepth) unit_008F(c, 28u, depth + 1u); else { c.pc = 0x0033C7E0u; return; } if (c.pc != 0x003812D0u) [[unlikely]] return; }
L_003812D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381EA8; } }
L_003812D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[5], 0u + 110u);  if (t) { goto L_00381EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381304u);  if (depth < kMaxDepth) unit_00A0(c, 9u, depth + 1u); else { c.pc = 0x00380020u; return; } if (c.pc != 0x00381304u) [[unlikely]] return; }
L_00381304:
    set32(c.r[3], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381320u); st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008E(c, 349u, depth + 1u); else { c.pc = 0x0033BA80u; return; } if (c.pc != 0x00381320u) [[unlikely]] return; }
L_00381320:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381EA8; } }
L_00381328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381330u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x00381330u) [[unlikely]] return; }
L_00381330:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038133Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));  if (depth < kMaxDepth) unit_008F(c, 79u, depth + 1u); else { c.pc = 0x0033D2F0u; return; } if (c.pc != 0x0038133Cu) [[unlikely]] return; }
L_0038133C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 170u);  if (t) { goto L_00381360; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038134Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x0038134Cu) [[unlikely]] return; }
L_0038134C:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00381EA8; } }
    c.budget -= 1;
L_00381360:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00381418; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381378u);  if (depth < kMaxDepth) unit_0098(c, 534u, depth + 1u); else { c.pc = 0x003637C0u; return; } if (c.pc != 0x00381378u) [[unlikely]] return; }
L_00381378:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_003813D8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00381398; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381428; } }
    c.budget -= 1;
L_00381398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003813A0u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x003813A0u) [[unlikely]] return; }
L_003813A0:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003813B0u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008E(c, 345u, depth + 1u); else { c.pc = 0x0033BA20u; return; } if (c.pc != 0x003813B0u) [[unlikely]] return; }
L_003813B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003813B8u);  if (depth < kMaxDepth) unit_0090(c, 336u, depth + 1u); else { c.pc = 0x00342C80u; return; } if (c.pc != 0x003813B8u) [[unlikely]] return; }
L_003813B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003813CCu); c.r[5].d[0] = c.r[2].d[0] | 12288ull;  if (depth < kMaxDepth) unit_008F(c, 28u, depth + 1u); else { c.pc = 0x0033C7E0u; return; } if (c.pc != 0x003813CCu) [[unlikely]] return; }
L_003813CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381428; } }
    c.budget -= 1;
L_003813D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003813E0u);  if (depth < kMaxDepth) unit_0098(c, 529u, depth + 1u); else { c.pc = 0x00363720u; return; } if (c.pc != 0x003813E0u) [[unlikely]] return; }
L_003813E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 103u);  if (t) { goto L_003813F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003813F0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x003813F0u) [[unlikely]] return; }
L_003813F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381408; } }
L_003813F8:
    set32(c.r[4], 0u + 103u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381404u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00381404u) [[unlikely]] return; }
L_00381404:
    c.budget -= 1;
L_00381408:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00381428; } }
L_00381418:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00381428:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 10363u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00381EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381440u);  if (depth < kMaxDepth) unit_00A0(c, 256u, depth + 1u); else { c.pc = 0x00382500u; return; } if (c.pc != 0x00381440u) [[unlikely]] return; }
L_00381440:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 131u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5084u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00381EA8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 100u);  if (t) { goto L_00381EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381468u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00381468u) [[unlikely]] return; }
L_00381468:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00381EA8; } }
L_00381478:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00381EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003814A4u);  if (depth < kMaxDepth) unit_00A0(c, 9u, depth + 1u); else { c.pc = 0x00380020u; return; } if (c.pc != 0x003814A4u) [[unlikely]] return; }
L_003814A4:
    set32(c.r[3], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00381EA8; } }
L_003814C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00381568; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003814D8u);  if (depth < kMaxDepth) unit_0098(c, 534u, depth + 1u); else { c.pc = 0x003637C0u; return; } if (c.pc != 0x003814D8u) [[unlikely]] return; }
L_003814D8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_00381528; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_003814F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381578; } }
    c.budget -= 1;
L_003814F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5084u));
    set32(c.r[4], 0u + 142u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381514u); st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00381514u) [[unlikely]] return; }
L_00381514:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00381578; } }
    c.budget -= 1;
L_00381528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381530u);  if (depth < kMaxDepth) unit_0098(c, 529u, depth + 1u); else { c.pc = 0x00363720u; return; } if (c.pc != 0x00381530u) [[unlikely]] return; }
L_00381530:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 103u);  if (t) { goto L_00381548; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381540u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00381540u) [[unlikely]] return; }
L_00381540:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381558; } }
L_00381548:
    set32(c.r[4], 0u + 103u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381554u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00381554u) [[unlikely]] return; }
L_00381554:
    c.budget -= 1;
L_00381558:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00381578; } }
L_00381568:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00381578:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 10363u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00381EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381590u);  if (depth < kMaxDepth) unit_00A0(c, 256u, depth + 1u); else { c.pc = 0x00382500u; return; } if (c.pc != 0x00381590u) [[unlikely]] return; }
L_00381590:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 141u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5084u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00381EA8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00381EA8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], 0u + 142u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003815C4u); st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x003815C4u) [[unlikely]] return; }
L_003815C4:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00381EA8; } }
    c.budget -= 1;
L_003815D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_00381EA8; } }
L_003815E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[5], 0u + 163u);  if (t) { goto L_00381EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038160Cu);  if (depth < kMaxDepth) unit_00A0(c, 9u, depth + 1u); else { c.pc = 0x00380020u; return; } if (c.pc != 0x0038160Cu) [[unlikely]] return; }
L_0038160C:
    set32(c.r[3], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00381EA8; } }
L_00381628:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003816B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381640u);  if (depth < kMaxDepth) unit_0098(c, 534u, depth + 1u); else { c.pc = 0x003637C0u; return; } if (c.pc != 0x00381640u) [[unlikely]] return; }
L_00381640:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_00381678; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00381660; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003816C8; } }
    c.budget -= 1;
L_00381660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381668u); set32(c.r[4], 0u + 152u);  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00381668u) [[unlikely]] return; }
L_00381668:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003816C8; } }
L_00381678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381680u);  if (depth < kMaxDepth) unit_0098(c, 529u, depth + 1u); else { c.pc = 0x00363720u; return; } if (c.pc != 0x00381680u) [[unlikely]] return; }
L_00381680:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 103u);  if (t) { goto L_00381698; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381690u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00381690u) [[unlikely]] return; }
L_00381690:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003816A8; } }
L_00381698:
    set32(c.r[4], 0u + 103u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003816A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x003816A4u) [[unlikely]] return; }
L_003816A4:
    c.budget -= 1;
L_003816A8:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003816C8; } }
L_003816B8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_003816C8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 10363u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00381EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003816E0u);  if (depth < kMaxDepth) unit_00A0(c, 256u, depth + 1u); else { c.pc = 0x00382500u; return; } if (c.pc != 0x003816E0u) [[unlikely]] return; }
L_003816E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 151u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5084u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00381EA8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00381EA8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], 0u + 152u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381714u); st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00381714u) [[unlikely]] return; }
L_00381714:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00381EA8; } }
    c.budget -= 1;
L_00381728:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_00381EA8; } }
L_00381730:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00381EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038175Cu); set32(c.r[5], 0u + 164u);  if (depth < kMaxDepth) unit_00A0(c, 9u, depth + 1u); else { c.pc = 0x00380020u; return; } if (c.pc != 0x0038175Cu) [[unlikely]] return; }
L_0038175C:
    set32(c.r[3], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00381EA8; } }
L_00381778:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00381808; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381790u);  if (depth < kMaxDepth) unit_0098(c, 534u, depth + 1u); else { c.pc = 0x003637C0u; return; } if (c.pc != 0x00381790u) [[unlikely]] return; }
L_00381790:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_003817C8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_003817B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381818; } }
    c.budget -= 1;
L_003817B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003817B8u); set32(c.r[4], 0u + 162u);  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x003817B8u) [[unlikely]] return; }
L_003817B8:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00381818; } }
L_003817C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003817D0u);  if (depth < kMaxDepth) unit_0098(c, 529u, depth + 1u); else { c.pc = 0x00363720u; return; } if (c.pc != 0x003817D0u) [[unlikely]] return; }
L_003817D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 103u);  if (t) { goto L_003817E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003817E0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x003817E0u) [[unlikely]] return; }
L_003817E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003817F8; } }
L_003817E8:
    set32(c.r[4], 0u + 103u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003817F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x003817F4u) [[unlikely]] return; }
L_003817F4:
    c.budget -= 1;
L_003817F8:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00381818; } }
L_00381808:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00381818:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 10363u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00381EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381830u);  if (depth < kMaxDepth) unit_00A0(c, 256u, depth + 1u); else { c.pc = 0x00382500u; return; } if (c.pc != 0x00381830u) [[unlikely]] return; }
L_00381830:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 161u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5084u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00381EA8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00381EA8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], 0u + 162u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381864u); st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00381864u) [[unlikely]] return; }
L_00381864:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00381EA8; } }
    c.budget -= 1;
L_00381878:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_00381EA8; } }
L_00381880:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[5], 0u + 165u);  if (t) { goto L_00381EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003818ACu);  if (depth < kMaxDepth) unit_00A0(c, 9u, depth + 1u); else { c.pc = 0x00380020u; return; } if (c.pc != 0x003818ACu) [[unlikely]] return; }
L_003818AC:
    set32(c.r[3], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003818C8u); st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008E(c, 345u, depth + 1u); else { c.pc = 0x0033BA20u; return; } if (c.pc != 0x003818C8u) [[unlikely]] return; }
L_003818C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381EA8; } }
L_003818D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00381900; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00381EA8; } }
    c.budget -= 1;
L_00381900:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381908u);  if (depth < kMaxDepth) unit_0098(c, 534u, depth + 1u); else { c.pc = 0x003637C0u; return; } if (c.pc != 0x00381908u) [[unlikely]] return; }
L_00381908:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_00381938; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00381928; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381978; } }
    c.budget -= 1;
L_00381928:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381930u); set32(c.r[4], 0u + 172u);  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00381930u) [[unlikely]] return; }
L_00381930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381978; } }
L_00381938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381940u);  if (depth < kMaxDepth) unit_0098(c, 529u, depth + 1u); else { c.pc = 0x00363720u; return; } if (c.pc != 0x00381940u) [[unlikely]] return; }
L_00381940:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 103u);  if (t) { goto L_00381958; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381950u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00381950u) [[unlikely]] return; }
L_00381950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381968; } }
L_00381958:
    set32(c.r[4], 0u + 103u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381964u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00381964u) [[unlikely]] return; }
L_00381964:
    c.budget -= 1;
L_00381968:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00381978:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 10363u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00381EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381990u);  if (depth < kMaxDepth) unit_00A0(c, 256u, depth + 1u); else { c.pc = 0x00382500u; return; } if (c.pc != 0x00381990u) [[unlikely]] return; }
L_00381990:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 171u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5084u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00381EA8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00381EA8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], 0u + 172u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003819C4u); st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x003819C4u) [[unlikely]] return; }
L_003819C4:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00381EA8; } }
    c.budget -= 1;
L_003819D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_00381EA8; } }
L_003819E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[5], 0u + 166u);  if (t) { goto L_00381EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381A0Cu);  if (depth < kMaxDepth) unit_00A0(c, 9u, depth + 1u); else { c.pc = 0x00380020u; return; } if (c.pc != 0x00381A0Cu) [[unlikely]] return; }
L_00381A0C:
    set32(c.r[3], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00381EA8; } }
L_00381A28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00381AB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381A40u);  if (depth < kMaxDepth) unit_0098(c, 534u, depth + 1u); else { c.pc = 0x003637C0u; return; } if (c.pc != 0x00381A40u) [[unlikely]] return; }
L_00381A40:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_00381A78; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00381A60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381AC8; } }
    c.budget -= 1;
L_00381A60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381A68u); set32(c.r[4], 0u + 182u);  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00381A68u) [[unlikely]] return; }
L_00381A68:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00381AC8; } }
L_00381A78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381A80u);  if (depth < kMaxDepth) unit_0098(c, 529u, depth + 1u); else { c.pc = 0x00363720u; return; } if (c.pc != 0x00381A80u) [[unlikely]] return; }
L_00381A80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 103u);  if (t) { goto L_00381A98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381A90u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00381A90u) [[unlikely]] return; }
L_00381A90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381AA8; } }
L_00381A98:
    set32(c.r[4], 0u + 103u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381AA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00381AA4u) [[unlikely]] return; }
L_00381AA4:
    c.budget -= 1;
L_00381AA8:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00381AC8; } }
L_00381AB8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00381AC8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 10363u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00381EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381AE0u);  if (depth < kMaxDepth) unit_00A0(c, 256u, depth + 1u); else { c.pc = 0x00382500u; return; } if (c.pc != 0x00381AE0u) [[unlikely]] return; }
L_00381AE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 181u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5084u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00381EA8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00381EA8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], 0u + 182u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381B14u); st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A0(c, 17u, depth + 1u); else { c.pc = 0x00380070u; return; } if (c.pc != 0x00381B14u) [[unlikely]] return; }
L_00381B14:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00381EA8; } }
    c.budget -= 1;
L_00381B28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_00381EA8; } }
L_00381B30:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381B48u); c.r[4].d[0] = ld8((c.r[1].w[0] + 5086u));  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x003788A0u; return; } if (c.pc != 0x00381B48u) [[unlikely]] return; }
L_00381B48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381EA8; } }
L_00381B50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00381EA8; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5085u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5085u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00381EA8; } }
    c.budget -= 1;
L_00381B90:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 15u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381BB4u); c.r[4].d[0] = ld8((c.r[1].w[0] + 5086u));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x00381BB4u) [[unlikely]] return; }
L_00381BB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381EA8; } }
    c.budget -= 1;
L_00381BC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00381EA8; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5085u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5085u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00381EA8; } }
    c.budget -= 1;
L_00381C00:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 5086u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381C20u); set32(c.r[5], c.r[5].w[0] + 5001u);  if (depth < kMaxDepth) unit_009E(c, 38u, depth + 1u); else { c.pc = 0x00378B40u; return; } if (c.pc != 0x00381C20u) [[unlikely]] return; }
L_00381C20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381EA8; } }
L_00381C28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00381EA8; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5085u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5085u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00381EA8; } }
    c.budget -= 1;
L_00381C68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5107u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00381CA0; } }
    set32(c.r[2], 0u + 40u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381C94u); c.r[4].d[0] = ld8((c.r[1].w[0] + 5086u));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x00381C94u) [[unlikely]] return; }
L_00381C94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381EA8; } }
    c.budget -= 1;
L_00381CA0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], 0u + 30u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[3].w[0] + 3420u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00381EA8; } }
L_00381CC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[2].w[0] + 1u);  if (t) { goto L_00381EA8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 40u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381D0Cu); c.r[4].d[0] = ld8((c.r[1].w[0] + 5086u));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x00381D0Cu) [[unlikely]] return; }
L_00381D0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381EA8; } }
    c.budget -= 1;
L_00381D18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00381EA8; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5085u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5085u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00381EA8; } }
    c.budget -= 1;
L_00381D58:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 5086u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381D78u); set32(c.r[5], c.r[5].w[0] + 5001u);  if (depth < kMaxDepth) unit_009E(c, 41u, depth + 1u); else { c.pc = 0x00378BA0u; return; } if (c.pc != 0x00381D78u) [[unlikely]] return; }
L_00381D78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381EA8; } }
L_00381D80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00381EA8; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5085u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5085u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00381EA8; } }
    c.budget -= 1;
L_00381DC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5107u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00381DF8; } }
    set32(c.r[2], 0u + 40u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381DECu); c.r[4].d[0] = ld8((c.r[1].w[0] + 5086u));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x00381DECu) [[unlikely]] return; }
L_00381DEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381EA8; } }
    c.budget -= 1;
L_00381DF8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], 0u + 30u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[3].w[0] + 3420u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00381EA8; } }
L_00381E20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[2].w[0] + 1u);  if (t) { goto L_00381EA8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 40u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381E64u); c.r[4].d[0] = ld8((c.r[1].w[0] + 5086u));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x00381E64u) [[unlikely]] return; }
L_00381E64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00381EA8; } }
    c.budget -= 1;
L_00381E70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00381EA8; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5085u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5085u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_00381EA8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00381EC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 92u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 5084u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00382480; } }
    set32(c.r[2], 0u + 91u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 90u);  if (t) { goto L_00382478; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00382450; } }
    set32(c.r[2], 0u + 61u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 60u);  if (t) { goto L_00382400; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003823E0; } }
    set32(c.r[2], 0u + 31u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 30u);  if (t) { goto L_00382390; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00382370; } }
    set32(c.r[2], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 20u);  if (t) { goto L_00382320; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 11u);  if (t) { goto L_00382300; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003822B0; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_00382290; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00382228; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00382210; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_003821A0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00382168; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00382048; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00381FD8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00381F90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00382488; } }
L_00381F90:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381FA8u); st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0098(c, 558u, depth + 1u); else { c.pc = 0x00363A20u; return; } if (c.pc != 0x00381FA8u) [[unlikely]] return; }
L_00381FA8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381FB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008E(c, 337u, depth + 1u); else { c.pc = 0x0033B920u; return; } if (c.pc != 0x00381FB4u) [[unlikely]] return; }
L_00381FB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] | 12288ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381FCCu); c.r[6].d[0] = c.r[2].d[0] | 47104ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00381FCCu) [[unlikely]] return; }
L_00381FCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00382488; } }
    c.budget -= 1;
L_00381FD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381FE0u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00381FE0u) [[unlikely]] return; }
L_00381FE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00381FE8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_009F(c, 225u, depth + 1u); else { c.pc = 0x0037DC40u; return; } if (c.pc != 0x00381FE8u) [[unlikely]] return; }
L_00381FE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00382488; } }
    set32(c.r[2], 0u + 20u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F50000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = c.r[2].d[0] | 59392ull;
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5084u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382020u); st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 83u, depth + 1u); else { c.pc = 0x0033D350u; return; } if (c.pc != 0x00382020u) [[unlikely]] return; }
L_00382020:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[6], 0u + 1u);
    st16((c.r[1].w[0] + 5082u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382040u); c.r[5].d[0] = c.r[2].d[0] | 12288ull;  if (depth < kMaxDepth) unit_008F(c, 18u, depth + 1u); else { c.pc = 0x0033C490u; return; } if (c.pc != 0x00382040u) [[unlikely]] return; }
L_00382040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00382488; } }
L_00382048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382050u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00382050u) [[unlikely]] return; }
L_00382050:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00382070; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00382488; } }
L_00382070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382078u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x00382078u) [[unlikely]] return; }
L_00382078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382080u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x00382080u) [[unlikely]] return; }
L_00382080:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u - 254u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00382148; } }
    set32(c.r[2], 0u - 253u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 252u);  if (t) { goto L_00382148; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00382148; } }
    set32(c.r[2], 0u - 255u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 251u);  if (t) { goto L_00382128; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00382108; } }
    set32(c.r[2], 0u - 256u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_00382108; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00382488; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003820E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00382108; } }
L_003820E8:
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00382488; } }
    c.budget -= 1;
L_00382108:
    set32(c.r[2], 0u + 60u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00382488; } }
    c.budget -= 1;
L_00382128:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 30u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00382488; } }
    c.budget -= 1;
L_00382148:
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00382488; } }
    c.budget -= 1;
L_00382168:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382178u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0090(c, 378u, depth + 1u); else { c.pc = 0x00343210u; return; } if (c.pc != 0x00382178u) [[unlikely]] return; }
L_00382178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382180u);  if (depth < kMaxDepth) unit_0090(c, 348u, depth + 1u); else { c.pc = 0x00342D70u; return; } if (c.pc != 0x00382180u) [[unlikely]] return; }
L_00382180:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382194u); c.r[5].d[0] = c.r[2].d[0] | 12288ull;  if (depth < kMaxDepth) unit_008F(c, 28u, depth + 1u); else { c.pc = 0x0033C7E0u; return; } if (c.pc != 0x00382194u) [[unlikely]] return; }
L_00382194:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00382488; } }
    c.budget -= 1;
L_003821A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003821A8u); set32(c.r[4], 0u + 97u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x003821A8u) [[unlikely]] return; }
L_003821A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003821B0u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x003821B0u) [[unlikely]] return; }
L_003821B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003821B8u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x003821B8u) [[unlikely]] return; }
L_003821B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00382488; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003821E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003821F8; } }
    c.budget -= 1;
L_003821E8:
    set32(c.r[2], 0u + 5u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00382488; } }
L_003821F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5085u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 60u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00382488; } }
L_00382210:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_00382228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382230u); set32(c.r[4], 0u + 98u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00382230u) [[unlikely]] return; }
L_00382230:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00382488; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00382278; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038226Cu);  if (depth < kMaxDepth) unit_0098(c, 529u, depth + 1u); else { c.pc = 0x00363720u; return; } if (c.pc != 0x0038226Cu) [[unlikely]] return; }
L_0038226C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00382488; } }
    c.budget -= 1;
L_00382278:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5085u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 90u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00382488; } }
L_00382290:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1860u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00382488; } }
    c.budget -= 1;
L_003822B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003822B8u); set32(c.r[4], 0u + 99u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x003822B8u) [[unlikely]] return; }
L_003822B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003822C0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 256u, depth + 1u); else { c.pc = 0x00382500u; return; } if (c.pc != 0x003822C0u) [[unlikely]] return; }
L_003822C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003822C8u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x003822C8u) [[unlikely]] return; }
L_003822C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003822E0; } }
    set32(c.r[2], 0u + 91u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00382488; } }
L_003822E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 92u);  if (t) { goto L_00382488; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00382488; } }
    c.budget -= 1;
L_00382300:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1860u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00382488; } }
    c.budget -= 1;
L_00382320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382328u); set32(c.r[4], 0u + 140u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00382328u) [[unlikely]] return; }
L_00382328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382330u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 256u, depth + 1u); else { c.pc = 0x00382500u; return; } if (c.pc != 0x00382330u) [[unlikely]] return; }
L_00382330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382338u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x00382338u) [[unlikely]] return; }
L_00382338:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00382350; } }
    set32(c.r[2], 0u + 91u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00382488; } }
L_00382350:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 92u);  if (t) { goto L_00382488; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00382488; } }
    c.budget -= 1;
L_00382370:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1860u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00382488; } }
    c.budget -= 1;
L_00382390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382398u); set32(c.r[4], 0u + 100u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00382398u) [[unlikely]] return; }
L_00382398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003823A0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 256u, depth + 1u); else { c.pc = 0x00382500u; return; } if (c.pc != 0x003823A0u) [[unlikely]] return; }
L_003823A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003823A8u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x003823A8u) [[unlikely]] return; }
L_003823A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003823C0; } }
    set32(c.r[2], 0u + 91u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00382488; } }
L_003823C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 92u);  if (t) { goto L_00382488; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00382488; } }
    c.budget -= 1;
L_003823E0:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1860u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00382488; } }
    c.budget -= 1;
L_00382400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382408u); set32(c.r[4], 0u + 101u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00382408u) [[unlikely]] return; }
L_00382408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382410u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 256u, depth + 1u); else { c.pc = 0x00382500u; return; } if (c.pc != 0x00382410u) [[unlikely]] return; }
L_00382410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382418u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x00382418u) [[unlikely]] return; }
L_00382418:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00382430; } }
    set32(c.r[2], 0u + 91u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00382488; } }
L_00382430:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 92u);  if (t) { goto L_00382488; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00382488; } }
    c.budget -= 1;
L_00382450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382458u); set32(c.r[4], 0u + 98u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x00382458u) [[unlikely]] return; }
L_00382458:
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_00382460:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5085u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00382488; } }
    c.budget -= 1;
L_00382478:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00382460u | kUnwind; return; } goto L_00382460; } }
L_00382480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00382460u | kUnwind; return; } goto L_00382460; } }
L_00382488:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003824A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], 0u + 100u);
    st8((c.r[1].w[0] + 5085u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5086u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 15u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1860u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003824E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], 0u + 110u);
    st8((c.r[1].w[0] + 5085u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00382500:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00382528; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00382528:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x88880000u);
    c.r[4].d[0] = c.r[2].d[0] | 34953ull;
    set32(c.r[5], 0u + 10u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[3].d[0] = c.r[2].d[0] | 26215ull;
    mmi::mult(c, 0, c.r[4].w[0], c.r[7].w[0]);
    set32(c.r[6], c.r[7].w[0] >> 31);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    set32(c.r[4], c.r[6].w[0] >> 31);
    c.r[3].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[6].w[0], c.r[5].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = c.hi.d[0];
    c.budget -= 24;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[2], c.r[29].w[0] + 40u);  if (t) { goto L_003825A8; } }
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], ld32((c.r[28].w[0] - 27640u)));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 8;
L_003825A8:
    set32(c.r[3], ld32((c.r[28].w[0] - 27640u)));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003825D4u); st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00AA(c, 48u, depth + 1u); else { c.pc = 0x003A8750u; return; } if (c.pc != 0x003825D4u) [[unlikely]] return; }
L_003825D4:
    set32(c.r[4], 0u + 22u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003825E0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 45u, depth + 1u); else { c.pc = 0x003A8700u; return; } if (c.pc != 0x003825E0u) [[unlikely]] return; }
L_003825E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003825E8u); set32(c.r[4], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x003825E8u) [[unlikely]] return; }
L_003825E8:
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[2], 0u + 640u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_00382618; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00382618:
    c.r[4].d[0] = c.r[2].d[0] << 48;
    set32(c.r[5], 0u + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382628u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_00AA(c, 46u, depth + 1u); else { c.pc = 0x003A8720u; return; } if (c.pc != 0x00382628u) [[unlikely]] return; }
L_00382628:
    c.r[4].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00382690; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00382680; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00382650; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003826F0; } }
L_00382650:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382660u);  if (depth < kMaxDepth) unit_00AA(c, 47u, depth + 1u); else { c.pc = 0x003A8740u; return; } if (c.pc != 0x00382660u) [[unlikely]] return; }
L_00382660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382668u); set32(c.r[4], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_00AA(c, 51u, depth + 1u); else { c.pc = 0x003A87A0u; return; } if (c.pc != 0x00382668u) [[unlikely]] return; }
L_00382668:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44480000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382678u);  if (depth < kMaxDepth) unit_00AA(c, 47u, depth + 1u); else { c.pc = 0x003A8740u; return; } if (c.pc != 0x00382678u) [[unlikely]] return; }
L_00382678:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003826F0; } }
L_00382680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382688u); set32(c.r[4], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_00AA(c, 53u, depth + 1u); else { c.pc = 0x003A8940u; return; } if (c.pc != 0x00382688u) [[unlikely]] return; }
L_00382688:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003826F0; } }
L_00382690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382698u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_00AA(c, 48u, depth + 1u); else { c.pc = 0x003A8750u; return; } if (c.pc != 0x00382698u) [[unlikely]] return; }
L_00382698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003826A0u); set32(c.r[4], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x003826A0u) [[unlikely]] return; }
L_003826A0:
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[2], 0u + 640u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_003826D0; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_003826D0:
    c.r[4].d[0] = c.r[2].d[0] << 48;
    set32(c.r[5], 0u + 332u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003826E0u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_00AA(c, 46u, depth + 1u); else { c.pc = 0x003A8720u; return; } if (c.pc != 0x003826E0u) [[unlikely]] return; }
L_003826E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003826E8u); set32(c.r[4], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_00AA(c, 53u, depth + 1u); else { c.pc = 0x003A8940u; return; } if (c.pc != 0x003826E8u) [[unlikely]] return; }
L_003826E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003826F0u);  if (depth < kMaxDepth) unit_00AA(c, 55u, depth + 1u); else { c.pc = 0x003A8A90u; return; } if (c.pc != 0x003826F0u) [[unlikely]] return; }
L_003826F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00382700:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[1].w[0] + 5085u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00382720:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], 0u + 131u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5084u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00382E48; } }
    set32(c.r[3], 0u + 130u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 121u);  if (t) { goto L_00382E38; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00382DF8; } }
    set32(c.r[3], 0u + 120u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 111u);  if (t) { goto L_00382DD0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00382D90; } }
    set32(c.r[3], 0u + 110u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 101u);  if (t) { goto L_00382D60; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00382D20; } }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 92u);  if (t) { goto L_00382D00; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00382CF8; } }
    set32(c.r[3], 0u + 91u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 90u);  if (t) { goto L_00382CF0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00382CD0; } }
    set32(c.r[3], 0u + 70u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[6], 0u + 60u);  if (t) { goto L_00382CB0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; set32(c.r[4], 0u + 51u);  if (t) { goto L_00382C98; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[5], 0u + 50u);  if (t) { goto L_00382C50; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00382C40; } }
    set32(c.r[4], 0u + 41u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 40u);  if (t) { goto L_00382BD8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00382BC0; } }
    set32(c.r[4], 0u + 31u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 30u);  if (t) { goto L_00382B58; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00382B40; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 6u);  if (t) { goto L_00382AE8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_00382AD0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00382A90; } }
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_00382A50; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003829F0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00382938; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003828D0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00382848; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00382E78; } }
    c.budget -= 1;
L_00382848:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382860u); st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0098(c, 558u, depth + 1u); else { c.pc = 0x00363A20u; return; } if (c.pc != 0x00382860u) [[unlikely]] return; }
L_00382860:
    set32(c.r[3], ld32((c.r[28].w[0] - 23712u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] | 12288ull;
    set32(c.r[6], 0u + 7148u);
    st8((c.r[1].w[0] + 4973u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4973u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5081u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003828A0u); st8((c.r[28].w[0] - 23072u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003828A0u) [[unlikely]] return; }
L_003828A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F70000u);
    c.r[4].d[0] = c.r[3].d[0] | 12288ull;
    c.r[5].d[0] = c.r[2].d[0] | 57344ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003828B8u); set32(c.r[6], 0u + 7148u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x003828B8u) [[unlikely]] return; }
L_003828B8:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003828C4u); set32(c.r[5], 0u + 29u);  if (depth < kMaxDepth) unit_00A0(c, 254u, depth + 1u); else { c.pc = 0x003824A0u; return; } if (c.pc != 0x003828C4u) [[unlikely]] return; }
L_003828C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00382E78; } }
    c.budget -= 1;
L_003828D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003828D8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009F(c, 225u, depth + 1u); else { c.pc = 0x0037DC40u; return; } if (c.pc != 0x003828D8u) [[unlikely]] return; }
L_003828D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00382E78; } }
    set32(c.r[2], 0u + 20u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = c.r[2].d[0] | 28672ull;
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5084u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382910u); st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 83u, depth + 1u); else { c.pc = 0x0033D350u; return; } if (c.pc != 0x00382910u) [[unlikely]] return; }
L_00382910:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[6].d[0] = 0ull + 0ull;
    st16((c.r[1].w[0] + 5082u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 4973u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382930u); c.r[5].d[0] = c.r[2].d[0] | 12288ull;  if (depth < kMaxDepth) unit_008F(c, 18u, depth + 1u); else { c.pc = 0x0033C490u; return; } if (c.pc != 0x00382930u) [[unlikely]] return; }
L_00382930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00382E78; } }
L_00382938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382940u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x00382940u) [[unlikely]] return; }
L_00382940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382948u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x00382948u) [[unlikely]] return; }
L_00382948:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u - 254u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003829E0; } }
    set32(c.r[2], 0u - 253u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 252u);  if (t) { goto L_003829E0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003829E0; } }
    set32(c.r[2], 0u - 255u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 251u);  if (t) { goto L_003829D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003829C0; } }
    set32(c.r[2], 0u - 256u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_003829C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00382E78; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003829B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00382E78; } }
L_003829B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003829B8u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_00A0(c, 255u, depth + 1u); else { c.pc = 0x003824E0u; return; } if (c.pc != 0x003829B8u) [[unlikely]] return; }
L_003829B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00382E78; } }
L_003829C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003829C8u); set32(c.r[4], 0u + 60u);  if (depth < kMaxDepth) unit_00A0(c, 255u, depth + 1u); else { c.pc = 0x003824E0u; return; } if (c.pc != 0x003829C8u) [[unlikely]] return; }
L_003829C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00382E78; } }
L_003829D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003829D8u); set32(c.r[4], 0u + 30u);  if (depth < kMaxDepth) unit_00A0(c, 255u, depth + 1u); else { c.pc = 0x003824E0u; return; } if (c.pc != 0x003829D8u) [[unlikely]] return; }
L_003829D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00382E78; } }
L_003829E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003829E8u); set32(c.r[4], 0u + 70u);  if (depth < kMaxDepth) unit_00A0(c, 255u, depth + 1u); else { c.pc = 0x003824E0u; return; } if (c.pc != 0x003829E8u) [[unlikely]] return; }
L_003829E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00382E78; } }
L_003829F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003829F8u); set32(c.r[5], 0u + 49u);  if (depth < kMaxDepth) unit_00A0(c, 254u, depth + 1u); else { c.pc = 0x003824A0u; return; } if (c.pc != 0x003829F8u) [[unlikely]] return; }
L_003829F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] | 12288ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382A0Cu); set32(c.r[6], 0u + 7148u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00382A0Cu) [[unlikely]] return; }
L_00382A0C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F70000u);
    c.r[4].d[0] = c.r[3].d[0] | 12288ull;
    c.r[5].d[0] = c.r[2].d[0] | 57344ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382A24u); set32(c.r[6], 0u + 7148u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00382A24u) [[unlikely]] return; }
L_00382A24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382A30u); c.r[4].d[0] = c.r[2].d[0] | 12288ull;  if (depth < kMaxDepth) unit_0090(c, 416u, depth + 1u); else { c.pc = 0x00343870u; return; } if (c.pc != 0x00382A30u) [[unlikely]] return; }
L_00382A30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 4973u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382A44u); c.r[5].d[0] = c.r[2].d[0] | 12288ull;  if (depth < kMaxDepth) unit_008F(c, 28u, depth + 1u); else { c.pc = 0x0033C7E0u; return; } if (c.pc != 0x00382A44u) [[unlikely]] return; }
L_00382A44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00382E78; } }
    c.budget -= 1;
L_00382A50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382A58u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x00382A58u) [[unlikely]] return; }
L_00382A58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382A60u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x00382A60u) [[unlikely]] return; }
L_00382A60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 5u);  if (t) { goto L_00382E78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382A84u);  if (depth < kMaxDepth) unit_00A0(c, 255u, depth + 1u); else { c.pc = 0x003824E0u; return; } if (c.pc != 0x00382A84u) [[unlikely]] return; }
L_00382A84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00382E78; } }
    c.budget -= 1;
L_00382A90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00382AA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00382AB8; } }
L_00382AA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382AB0u);  if (depth < kMaxDepth) unit_00A0(c, 254u, depth + 1u); else { c.pc = 0x003824A0u; return; } if (c.pc != 0x00382AB0u) [[unlikely]] return; }
L_00382AB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00382E78; } }
L_00382AB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5085u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00382E78; } }
    c.budget -= 1;
L_00382AD0:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 300u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
L_00382AE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 241ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00382E78; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00382B30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382B24u);  if (depth < kMaxDepth) unit_0098(c, 524u, depth + 1u); else { c.pc = 0x003636A0u; return; } if (c.pc != 0x00382B24u) [[unlikely]] return; }
L_00382B24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00382E78; } }
    c.budget -= 1;
L_00382B30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382B38u); set32(c.r[4], 0u + 90u);  if (depth < kMaxDepth) unit_00A0(c, 255u, depth + 1u); else { c.pc = 0x003824E0u; return; } if (c.pc != 0x00382B38u) [[unlikely]] return; }
L_00382B38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00382E78; } }
L_00382B40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382B48u); set32(c.r[5], 0u + 44u);  if (depth < kMaxDepth) unit_00A0(c, 254u, depth + 1u); else { c.pc = 0x003824A0u; return; } if (c.pc != 0x00382B48u) [[unlikely]] return; }
L_00382B48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382B50u);  if (depth < kMaxDepth) unit_008E(c, 349u, depth + 1u); else { c.pc = 0x0033BA80u; return; } if (c.pc != 0x00382B50u) [[unlikely]] return; }
L_00382B50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00382E78; } }
L_00382B58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382B60u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00A0(c, 256u, depth + 1u); else { c.pc = 0x00382500u; return; } if (c.pc != 0x00382B60u) [[unlikely]] return; }
L_00382B60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382B68u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x00382B68u) [[unlikely]] return; }
L_00382B68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382B74u); c.r[4].d[0] = ld8((c.r[1].w[0] + 4973u));  if (depth < kMaxDepth) unit_008F(c, 79u, depth + 1u); else { c.pc = 0x0033D2F0u; return; } if (c.pc != 0x00382B74u) [[unlikely]] return; }
L_00382B74:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00382B90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382B84u);  if (depth < kMaxDepth) unit_00A0(c, 255u, depth + 1u); else { c.pc = 0x003824E0u; return; } if (c.pc != 0x00382B84u) [[unlikely]] return; }
L_00382B84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00382E78; } }
    c.budget -= 1;
L_00382B90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382B98u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 524u, depth + 1u); else { c.pc = 0x003636A0u; return; } if (c.pc != 0x00382B98u) [[unlikely]] return; }
L_00382B98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00382BB0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00382E78; } }
    c.budget -= 1;
L_00382BB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382BB8u); set32(c.r[4], 0u + 92u);  if (depth < kMaxDepth) unit_00A0(c, 255u, depth + 1u); else { c.pc = 0x003824E0u; return; } if (c.pc != 0x00382BB8u) [[unlikely]] return; }
L_00382BB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00382E78; } }
L_00382BC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382BC8u); set32(c.r[5], 0u + 45u);  if (depth < kMaxDepth) unit_00A0(c, 254u, depth + 1u); else { c.pc = 0x003824A0u; return; } if (c.pc != 0x00382BC8u) [[unlikely]] return; }
L_00382BC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382BD0u);  if (depth < kMaxDepth) unit_008E(c, 349u, depth + 1u); else { c.pc = 0x0033BA80u; return; } if (c.pc != 0x00382BD0u) [[unlikely]] return; }
L_00382BD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00382E78; } }
L_00382BD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382BE0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00A0(c, 256u, depth + 1u); else { c.pc = 0x00382500u; return; } if (c.pc != 0x00382BE0u) [[unlikely]] return; }
L_00382BE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382BE8u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x00382BE8u) [[unlikely]] return; }
L_00382BE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382BF4u); c.r[4].d[0] = ld8((c.r[1].w[0] + 4973u));  if (depth < kMaxDepth) unit_008F(c, 79u, depth + 1u); else { c.pc = 0x0033D2F0u; return; } if (c.pc != 0x00382BF4u) [[unlikely]] return; }
L_00382BF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00382C10; } }
    set32(c.r[2], 0u + 31u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00382E78; } }
    c.budget -= 1;
L_00382C10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382C18u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 524u, depth + 1u); else { c.pc = 0x003636A0u; return; } if (c.pc != 0x00382C18u) [[unlikely]] return; }
L_00382C18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00382C30; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00382E78; } }
    c.budget -= 1;
L_00382C30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382C38u); set32(c.r[4], 0u + 92u);  if (depth < kMaxDepth) unit_00A0(c, 255u, depth + 1u); else { c.pc = 0x003824E0u; return; } if (c.pc != 0x00382C38u) [[unlikely]] return; }
L_00382C38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00382E78; } }
L_00382C40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382C48u); set32(c.r[5], 0u + 104u);  if (depth < kMaxDepth) unit_00A0(c, 254u, depth + 1u); else { c.pc = 0x003824A0u; return; } if (c.pc != 0x00382C48u) [[unlikely]] return; }
L_00382C48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00382E78; } }
L_00382C50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382C58u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00A0(c, 256u, depth + 1u); else { c.pc = 0x00382500u; return; } if (c.pc != 0x00382C58u) [[unlikely]] return; }
L_00382C58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382C60u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 524u, depth + 1u); else { c.pc = 0x003636A0u; return; } if (c.pc != 0x00382C60u) [[unlikely]] return; }
L_00382C60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 91u);  if (t) { goto L_00382C78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382C70u);  if (depth < kMaxDepth) unit_00A0(c, 255u, depth + 1u); else { c.pc = 0x003824E0u; return; } if (c.pc != 0x00382C70u) [[unlikely]] return; }
L_00382C70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00382E78; } }
L_00382C78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 92u);  if (t) { goto L_00382E78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382C90u);  if (depth < kMaxDepth) unit_00A0(c, 255u, depth + 1u); else { c.pc = 0x003824E0u; return; } if (c.pc != 0x00382C90u) [[unlikely]] return; }
L_00382C90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00382E78; } }
L_00382C98:
    set32(c.r[4], 0u + 51u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382CA4u); set32(c.r[5], 0u + 35u);  if (depth < kMaxDepth) unit_00A0(c, 254u, depth + 1u); else { c.pc = 0x003824A0u; return; } if (c.pc != 0x00382CA4u) [[unlikely]] return; }
L_00382CA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00382E78; } }
    c.budget -= 1;
L_00382CB0:
    set32(c.r[4], 0u + 41u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382CBCu); set32(c.r[5], 0u + 114u);  if (depth < kMaxDepth) unit_00A0(c, 254u, depth + 1u); else { c.pc = 0x003824A0u; return; } if (c.pc != 0x00382CBCu) [[unlikely]] return; }
L_00382CBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382CC4u);  if (depth < kMaxDepth) unit_008E(c, 349u, depth + 1u); else { c.pc = 0x0033BA80u; return; } if (c.pc != 0x00382CC4u) [[unlikely]] return; }
L_00382CC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00382E78; } }
    c.budget -= 1;
L_00382CD0:
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_00382CD8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5085u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00382E78; } }
    c.budget -= 1;
L_00382CF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00382CD8u | kUnwind; return; } goto L_00382CD8; } }
L_00382CF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00382CD8u | kUnwind; return; } goto L_00382CD8; } }
L_00382D00:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382D18u); c.r[4].d[0] = ld8((c.r[1].w[0] + 5086u));  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x003788A0u; return; } if (c.pc != 0x00382D18u) [[unlikely]] return; }
L_00382D18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00382E78; } }
L_00382D20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00382E78; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5085u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5085u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00382E78; } }
    c.budget -= 1;
L_00382D60:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 15u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382D84u); c.r[4].d[0] = ld8((c.r[1].w[0] + 5086u));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x00382D84u) [[unlikely]] return; }
L_00382D84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00382E78; } }
    c.budget -= 1;
L_00382D90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00382E78; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5085u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5085u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00382E78; } }
    c.budget -= 1;
L_00382DD0:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 5086u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382DF0u); set32(c.r[5], c.r[5].w[0] + 5001u);  if (depth < kMaxDepth) unit_009E(c, 38u, depth + 1u); else { c.pc = 0x00378B40u; return; } if (c.pc != 0x00382DF0u) [[unlikely]] return; }
L_00382DF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00382E78; } }
L_00382DF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00382E78; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5085u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5085u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00382E78; } }
    c.budget -= 1;
L_00382E38:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00382E78; } }
L_00382E48:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 110u);  if (t) { goto L_00382E78; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00382E78:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00382E90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 131u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 5084u));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00383538; } }
    set32(c.r[2], 0u + 130u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 121u);  if (t) { goto L_00383520; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_003834E0; } }
    set32(c.r[2], 0u + 120u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 111u);  if (t) { goto L_003834D0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00383490; } }
    set32(c.r[2], 0u + 110u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 101u);  if (t) { goto L_00383468; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00383428; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 92u);  if (t) { goto L_00383400; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_003833F8; } }
    set32(c.r[2], 0u + 91u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 90u);  if (t) { goto L_003833F0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 71u);  if (t) { goto L_003833C0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 70u);  if (t) { goto L_00383358; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00383340; } }
    set32(c.r[4], 0u + 61u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 60u);  if (t) { goto L_003832F8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003832E8; } }
    set32(c.r[4], 0u + 31u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 30u);  if (t) { goto L_00383280; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00383268; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 6u);  if (t) { goto L_00383210; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_003831F8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_003831B8; } }
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_00383178; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00383118; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00383050; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00382FF0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00382FA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00383568; } }
L_00382FA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382FACu); st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0098(c, 558u, depth + 1u); else { c.pc = 0x00363A20u; return; } if (c.pc != 0x00382FACu) [[unlikely]] return; }
L_00382FAC:
    set32(c.r[2], ld32((c.r[28].w[0] - 23712u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 29u);
    st8((c.r[1].w[0] + 4973u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4973u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5081u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382FE4u); st8((c.r[28].w[0] - 23072u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A0(c, 254u, depth + 1u); else { c.pc = 0x003824A0u; return; } if (c.pc != 0x00382FE4u) [[unlikely]] return; }
L_00382FE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00383568; } }
    c.budget -= 1;
L_00382FF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00382FF8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009F(c, 225u, depth + 1u); else { c.pc = 0x0037DC40u; return; } if (c.pc != 0x00382FF8u) [[unlikely]] return; }
L_00382FF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00383568; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    st8((c.r[1].w[0] + 5085u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[2].d[0] | 28672ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5084u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383024u); st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 83u, depth + 1u); else { c.pc = 0x0033D350u; return; } if (c.pc != 0x00383024u) [[unlikely]] return; }
L_00383024:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[6].d[0] = 0ull + 0ull;
    st16((c.r[1].w[0] + 5082u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 4973u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383044u); c.r[5].d[0] = c.r[2].d[0] | 12288ull;  if (depth < kMaxDepth) unit_008F(c, 18u, depth + 1u); else { c.pc = 0x0033C490u; return; } if (c.pc != 0x00383044u) [[unlikely]] return; }
L_00383044:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00383568; } }
    c.budget -= 1;
L_00383050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383058u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x00383058u) [[unlikely]] return; }
L_00383058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383060u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x00383060u) [[unlikely]] return; }
L_00383060:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u - 254u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003830F8; } }
    set32(c.r[2], 0u - 253u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 252u);  if (t) { goto L_003830F8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003830F8; } }
    set32(c.r[2], 0u - 255u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 251u);  if (t) { goto L_003830E8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003830D8; } }
    set32(c.r[2], 0u - 256u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003830D8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003830C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00383108; } }
L_003830C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5084u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00383108; } }
L_003830D8:
    set32(c.r[2], 0u + 60u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00383108; } }
L_003830E8:
    set32(c.r[2], 0u + 30u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00383108; } }
L_003830F8:
    set32(c.r[2], 0u + 70u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00383108:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5085u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00383568; } }
    c.budget -= 1;
L_00383118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383120u); set32(c.r[5], 0u + 49u);  if (depth < kMaxDepth) unit_00A0(c, 254u, depth + 1u); else { c.pc = 0x003824A0u; return; } if (c.pc != 0x00383120u) [[unlikely]] return; }
L_00383120:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] | 12288ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383134u); set32(c.r[6], 0u + 7148u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00383134u) [[unlikely]] return; }
L_00383134:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F70000u);
    c.r[4].d[0] = c.r[3].d[0] | 12288ull;
    c.r[5].d[0] = c.r[2].d[0] | 57344ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038314Cu); set32(c.r[6], 0u + 7148u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0038314Cu) [[unlikely]] return; }
L_0038314C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383158u); c.r[4].d[0] = c.r[2].d[0] | 12288ull;  if (depth < kMaxDepth) unit_0090(c, 416u, depth + 1u); else { c.pc = 0x00343870u; return; } if (c.pc != 0x00383158u) [[unlikely]] return; }
L_00383158:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 4973u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038316Cu); c.r[5].d[0] = c.r[2].d[0] | 12288ull;  if (depth < kMaxDepth) unit_008F(c, 28u, depth + 1u); else { c.pc = 0x0033C7E0u; return; } if (c.pc != 0x0038316Cu) [[unlikely]] return; }
L_0038316C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00383568; } }
    c.budget -= 1;
L_00383178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383180u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x00383180u) [[unlikely]] return; }
L_00383180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383188u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x00383188u) [[unlikely]] return; }
L_00383188:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 5u);  if (t) { goto L_00383568; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003831ACu);  if (depth < kMaxDepth) unit_00A0(c, 255u, depth + 1u); else { c.pc = 0x003824E0u; return; } if (c.pc != 0x003831ACu) [[unlikely]] return; }
L_003831AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00383568; } }
    c.budget -= 1;
L_003831B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003831D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003831E0; } }
L_003831D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003831D8u); set32(c.r[5], 0u + 50u);  if (depth < kMaxDepth) unit_00A0(c, 254u, depth + 1u); else { c.pc = 0x003824A0u; return; } if (c.pc != 0x003831D8u) [[unlikely]] return; }
L_003831D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00383568; } }
L_003831E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5085u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00383568; } }
    c.budget -= 1;
L_003831F8:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 300u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
L_00383210:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 241ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00383568; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00383258; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038324Cu);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x0038324Cu) [[unlikely]] return; }
L_0038324C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00383568; } }
    c.budget -= 1;
L_00383258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383260u); set32(c.r[4], 0u + 90u);  if (depth < kMaxDepth) unit_00A0(c, 255u, depth + 1u); else { c.pc = 0x003824E0u; return; } if (c.pc != 0x00383260u) [[unlikely]] return; }
L_00383260:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00383568; } }
L_00383268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383270u); set32(c.r[5], 0u + 44u);  if (depth < kMaxDepth) unit_00A0(c, 254u, depth + 1u); else { c.pc = 0x003824A0u; return; } if (c.pc != 0x00383270u) [[unlikely]] return; }
L_00383270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383278u);  if (depth < kMaxDepth) unit_008E(c, 349u, depth + 1u); else { c.pc = 0x0033BA80u; return; } if (c.pc != 0x00383278u) [[unlikely]] return; }
L_00383278:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00383568; } }
L_00383280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383288u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_00A0(c, 256u, depth + 1u); else { c.pc = 0x00382500u; return; } if (c.pc != 0x00383288u) [[unlikely]] return; }
L_00383288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383290u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x00383290u) [[unlikely]] return; }
L_00383290:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038329Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));  if (depth < kMaxDepth) unit_008F(c, 79u, depth + 1u); else { c.pc = 0x0033D2F0u; return; } if (c.pc != 0x0038329Cu) [[unlikely]] return; }
L_0038329C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003832B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003832ACu);  if (depth < kMaxDepth) unit_00A0(c, 255u, depth + 1u); else { c.pc = 0x003824E0u; return; } if (c.pc != 0x003832ACu) [[unlikely]] return; }
L_003832AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00383568; } }
    c.budget -= 1;
L_003832B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003832C0u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x003832C0u) [[unlikely]] return; }
L_003832C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003832D8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00383568; } }
    c.budget -= 1;
L_003832D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003832E0u); set32(c.r[4], 0u + 92u);  if (depth < kMaxDepth) unit_00A0(c, 255u, depth + 1u); else { c.pc = 0x003824E0u; return; } if (c.pc != 0x003832E0u) [[unlikely]] return; }
L_003832E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00383568; } }
L_003832E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003832F0u); set32(c.r[5], 0u + 35u);  if (depth < kMaxDepth) unit_00A0(c, 254u, depth + 1u); else { c.pc = 0x003824A0u; return; } if (c.pc != 0x003832F0u) [[unlikely]] return; }
L_003832F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00383568; } }
L_003832F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383300u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_00A0(c, 256u, depth + 1u); else { c.pc = 0x00382500u; return; } if (c.pc != 0x00383300u) [[unlikely]] return; }
L_00383300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383308u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x00383308u) [[unlikely]] return; }
L_00383308:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 91u);  if (t) { goto L_00383320; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383318u);  if (depth < kMaxDepth) unit_00A0(c, 255u, depth + 1u); else { c.pc = 0x003824E0u; return; } if (c.pc != 0x00383318u) [[unlikely]] return; }
L_00383318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00383568; } }
L_00383320:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 92u);  if (t) { goto L_00383568; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383338u);  if (depth < kMaxDepth) unit_00A0(c, 255u, depth + 1u); else { c.pc = 0x003824E0u; return; } if (c.pc != 0x00383338u) [[unlikely]] return; }
L_00383338:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00383568; } }
L_00383340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383348u); set32(c.r[5], 0u + 114u);  if (depth < kMaxDepth) unit_00A0(c, 254u, depth + 1u); else { c.pc = 0x003824A0u; return; } if (c.pc != 0x00383348u) [[unlikely]] return; }
L_00383348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383350u);  if (depth < kMaxDepth) unit_008E(c, 349u, depth + 1u); else { c.pc = 0x0033BA80u; return; } if (c.pc != 0x00383350u) [[unlikely]] return; }
L_00383350:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00383568; } }
L_00383358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383360u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_00A0(c, 256u, depth + 1u); else { c.pc = 0x00382500u; return; } if (c.pc != 0x00383360u) [[unlikely]] return; }
L_00383360:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383368u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x00383368u) [[unlikely]] return; }
L_00383368:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383374u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));  if (depth < kMaxDepth) unit_008F(c, 79u, depth + 1u); else { c.pc = 0x0033D2F0u; return; } if (c.pc != 0x00383374u) [[unlikely]] return; }
L_00383374:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 31u);  if (t) { goto L_00383390; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383384u);  if (depth < kMaxDepth) unit_00A0(c, 255u, depth + 1u); else { c.pc = 0x003824E0u; return; } if (c.pc != 0x00383384u) [[unlikely]] return; }
L_00383384:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00383568; } }
    c.budget -= 1;
L_00383390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383398u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x00383398u) [[unlikely]] return; }
L_00383398:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_003833B0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00383568; } }
    c.budget -= 1;
L_003833B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003833B8u); set32(c.r[4], 0u + 92u);  if (depth < kMaxDepth) unit_00A0(c, 255u, depth + 1u); else { c.pc = 0x003824E0u; return; } if (c.pc != 0x003833B8u) [[unlikely]] return; }
L_003833B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00383568; } }
L_003833C0:
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_003833C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5085u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00383568; } }
    c.budget -= 1;
L_003833F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003833C8u | kUnwind; return; } goto L_003833C8; } }
L_003833F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003833C8u | kUnwind; return; } goto L_003833C8; } }
L_00383400:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383418u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5086u)));  if (depth < kMaxDepth) unit_00A0(c, 367u, depth + 1u); else { c.pc = 0x00383580u; return; } if (c.pc != 0x00383418u) [[unlikely]] return; }
L_00383418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383420u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  call(c, 0x011AF870u, depth + 1u); if (c.pc != 0x00383420u) [[unlikely]] return; }
L_00383420:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00383568; } }
L_00383428:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00383568; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5085u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5085u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00383568; } }
    c.budget -= 1;
L_00383468:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 15u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383484u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  call(c, 0x011AF880u, depth + 1u); if (c.pc != 0x00383484u) [[unlikely]] return; }
L_00383484:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5086u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00383568; } }
L_00383490:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00383568; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5085u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5085u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00383568; } }
    c.budget -= 1;
L_003834D0:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00383568; } }
L_003834E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00383568; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5085u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5085u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00383568; } }
    c.budget -= 1;
L_00383520:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5086u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00383568; } }
L_00383538:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 110u);  if (t) { goto L_00383568; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00383568:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00383580:
    c.r[4].d[0] = c.r[4].d[0] << 56;
    set32(c.r[3], 0u + 114u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003835F8; } }
    set32(c.r[3], 0u + 35u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 44u);  if (t) { goto L_003835F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003835E8; } }
    set32(c.r[3], 0u + 50u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 49u);  if (t) { goto L_003835E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003835D8; } }
    set32(c.r[3], 0u + 29u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003835D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00383600; } }
L_003835D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 20u);  if (t) { goto L_00383600; } }
L_003835D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 40u);  if (t) { goto L_00383600; } }
L_003835E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 41u);  if (t) { goto L_00383600; } }
L_003835E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 10u);  if (t) { goto L_00383600; } }
L_003835F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 21u);  if (t) { goto L_00383600; } }
L_003835F8:
    set32(c.r[2], 0u - 23u);
    c.budget -= 2;
L_00383600:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00383610:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5099u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5098u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5097u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { st8((c.r[1].w[0] + 5096u), static_cast<std::uint8_t>(0u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00382700u | kUnwind; return; } goto L_00382700; }
L_00383640:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383654u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 62u, depth + 1u); else { c.pc = 0x0032C500u; return; } if (c.pc != 0x00383654u) [[unlikely]] return; }
L_00383654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038365Cu);  if (depth < kMaxDepth) unit_0089(c, 328u, depth + 1u); else { c.pc = 0x00327170u; return; } if (c.pc != 0x0038365Cu) [[unlikely]] return; }
L_0038365C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 5096u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00383738; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003836E8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00383688; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00383750; } }
L_00383688:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], c.r[28].w[0] - 22392u);
    st8((c.r[1].w[0] + 5096u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[28].w[0] - 22396u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003836A4u); set32(c.r[6], c.r[28].w[0] - 22400u);  if (depth < kMaxDepth) unit_009D(c, 88u, depth + 1u); else { c.pc = 0x00374C80u; return; } if (c.pc != 0x003836A4u) [[unlikely]] return; }
L_003836A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003836ACu);  if (depth < kMaxDepth) unit_0099(c, 41u, depth + 1u); else { c.pc = 0x00364740u; return; } if (c.pc != 0x003836ACu) [[unlikely]] return; }
L_003836AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003836B4u);  if (depth < kMaxDepth) unit_00C1(c, 241u, depth + 1u); else { c.pc = 0x004058B0u; return; } if (c.pc != 0x003836B4u) [[unlikely]] return; }
L_003836B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003836BCu);  if (depth < kMaxDepth) unit_00AA(c, 15u, depth + 1u); else { c.pc = 0x003A8150u; return; } if (c.pc != 0x003836BCu) [[unlikely]] return; }
L_003836BC:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003836D4u); st8((c.r[2].w[0] + 10363u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x003836D4u) [[unlikely]] return; }
L_003836D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003836DCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0046(c, 199u, depth + 1u); else { c.pc = 0x0021B430u; return; } if (c.pc != 0x003836DCu) [[unlikely]] return; }
L_003836DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00383750; } }
    c.budget -= 1;
L_003836E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003836F0u);  if (depth < kMaxDepth) unit_00AA(c, 16u, depth + 1u); else { c.pc = 0x003A8160u; return; } if (c.pc != 0x003836F0u) [[unlikely]] return; }
L_003836F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00383750; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383700u);  if (depth < kMaxDepth) unit_00A0(c, 22u, depth + 1u); else { c.pc = 0x00380120u; return; } if (c.pc != 0x00383700u) [[unlikely]] return; }
L_00383700:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00383750; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 8u);
    st8((c.r[2].w[0] + 10363u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[1].w[0] + 5096u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383730u); st8((c.r[1].w[0] + 5096u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x00383730u) [[unlikely]] return; }
L_00383730:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00383750; } }
L_00383738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383740u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x00383740u) [[unlikely]] return; }
L_00383740:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00383750; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_00383750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383758u);  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x00383758u) [[unlikely]] return; }
L_00383758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383760u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x00383760u) [[unlikely]] return; }
L_00383760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383768u);  if (depth < kMaxDepth) unit_00AA(c, 78u, depth + 1u); else { c.pc = 0x003A8C50u; return; } if (c.pc != 0x00383768u) [[unlikely]] return; }
L_00383768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383770u);  if (depth < kMaxDepth) unit_008B(c, 22u, depth + 1u); else { c.pc = 0x0032C1B0u; return; } if (c.pc != 0x00383770u) [[unlikely]] return; }
L_00383770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383778u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x00383778u) [[unlikely]] return; }
L_00383778:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383784u); set32(c.r[4], c.r[4].w[0] - 15024u);  if (depth < kMaxDepth) unit_0043(c, 416u, depth + 1u); else { c.pc = 0x0020FEF0u; return; } if (c.pc != 0x00383784u) [[unlikely]] return; }
L_00383784:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038378Cu);  if (depth < kMaxDepth) unit_00AA(c, 55u, depth + 1u); else { c.pc = 0x003A8A90u; return; } if (c.pc != 0x0038378Cu) [[unlikely]] return; }
L_0038378C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003837A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003837DCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x003837DCu) [[unlikely]] return; }
L_003837DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00383810; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[3], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] + 14480u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[20].w[0]));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 11;
L_00383810:
    st32((c.r[16].w[0] + 304u), c.r[19].w[0]);
    st8((c.r[16].w[0] + 309u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 312u), c.r[17].w[0]);
    st8((c.r[16].w[0] + 332u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[16].w[0] + 304u);  if (t) { goto L_00383848; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00383840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00383850; } }
L_00383840:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00383850; } }
L_00383848:
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00383850:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[4].w[0] + 12u);
    set32(c.r[5], c.r[3].w[0] + 17280u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038386Cu); set32(c.r[6], c.r[3].w[0] + 17520u);  if (depth < kMaxDepth) unit_00AC(c, 54u, depth + 1u); else { c.pc = 0x003B0700u; return; } if (c.pc != 0x0038386Cu) [[unlikely]] return; }
L_0038386C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00383890:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 5480u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00380000u < 16384u) { entry = entries_00A0[(t - 0x00380000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003838B0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[3], c.r[3].w[0] + 15264u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 168u), c.r[3].w[0]);  c.pc = t; return; }
L_003838D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 308u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] - 5464u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00380000u < 16384u) { entry = entries_00A0[(t - 0x00380000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003838F0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[4].w[0] + 304u);  if (t) { goto L_00383998; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00383968; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00383920; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003839B0; } }
    c.budget -= 1;
L_00383920:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.f[2] = ld32((c.r[6].w[0] + 32u));
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[1] = c.r[5].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[6].w[0] + 32u), c.f[1]);  if (t) { goto L_003839B0; } }
    st32((c.r[6].w[0] + 32u), c.f[0]);
    set32(c.r[3], 0u + 60u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003839B0; } }
L_00383968:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003839B0; } }
    st8((c.r[6].w[0] + 28u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003839B0; } }
L_00383998:
    st32((c.r[6].w[0] + 32u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_003839B0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003839C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 332u)));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[17], c.r[18].w[0] + 304u);  if (t) { goto L_00383B50; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_00383B30; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00383A50; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00383A10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00383B68; } }
L_00383A10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.f[2] = ld32((c.r[17].w[0] + 32u));
    c.r[4].d[0] = c.r[4].d[0] | 52429ull;
    c.f[1] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 32u), c.f[1]);  if (t) { goto L_00383B68; } }
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00383B68; } }
L_00383A50:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 4u));
    c.r[2].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] << 56;  if (t) { goto L_00383A78; } }
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_00383AF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00383AF8; } }
L_00383A78:
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] << 56;  if (t) { goto L_00383A98; } }
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00383AF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00383AF8; } }
L_00383A98:
    c.r[2].d[0] = c.r[3].d[0] & 544ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00383AC0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383AB0u); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00383AB0u) [[unlikely]] return; }
L_00383AB0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00383AF8; } }
L_00383AC0:
    c.r[2].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] << 56;  if (t) { goto L_00383AF8; } }
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00383AE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00383AF8; } }
L_00383AE0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383AECu); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00383AECu) [[unlikely]] return; }
L_00383AEC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00383AF8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 28u)));
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00383B20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383B14u); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00383B14u) [[unlikely]] return; }
L_00383B14:
    set32(c.r[4], c.r[17].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383B20u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x00383B20u) [[unlikely]] return; }
L_00383B20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383B28u); set32(c.r[4], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_00AC(c, 62u, depth + 1u); else { c.pc = 0x003B0A00u; return; } if (c.pc != 0x00383B28u) [[unlikely]] return; }
L_00383B28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00383B68; } }
L_00383B30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383B38u); set32(c.r[4], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_00AC(c, 64u, depth + 1u); else { c.pc = 0x003B0A80u; return; } if (c.pc != 0x00383B38u) [[unlikely]] return; }
L_00383B38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00383B68; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00383B68; } }
L_00383B50:
    st32((c.r[17].w[0] + 32u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_00383B68:
    set32(c.r[3], 0u + 2u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00383B90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00383BA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 308u)));
    c.budget -= 1;
L_00383BA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 1;
L_00383BA8:
    set32(c.r[2], c.r[2].w[0] - 5456u);
    c.budget -= 1;
L_00383BAC:
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 1;
L_00383BB0:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_00383BB4:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_00383BB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00380000u < 16384u) { entry = entries_00A0[(t - 0x00380000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00383BC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 336u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_00383C50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383BF4u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00383BF4u) [[unlikely]] return; }
L_00383BF4:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2480000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383C08u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00383C08u) [[unlikely]] return; }
L_00383C08:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_00383C40; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00383C28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00383C50; } }
L_00383C28:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383C38u); set32(c.r[4], c.r[2].w[0] + 17760u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00383C38u) [[unlikely]] return; }
L_00383C38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00383C50; } }
L_00383C40:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383C50u); set32(c.r[4], c.r[2].w[0] + 18720u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00383C50u) [[unlikely]] return; }
L_00383C50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383C58u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00383C58u) [[unlikely]] return; }
L_00383C58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383C60u); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_0005(c, 46u, depth + 1u); else { c.pc = 0x001158E0u; return; } if (c.pc != 0x00383C60u) [[unlikely]] return; }
L_00383C60:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3FE60000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[4].d[0] = c.r[4].d[0] | 26214ull;
    c.r[3].d[0] = c.r[3].d[0] | 26214ull;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383C80u); c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];  if (depth < kMaxDepth) unit_0005(c, 65u, depth + 1u); else { c.pc = 0x00115DD8u; return; } if (c.pc != 0x00383C80u) [[unlikely]] return; }
L_00383C80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383C88u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 92u, depth + 1u); else { c.pc = 0x00116498u; return; } if (c.pc != 0x00383C88u) [[unlikely]] return; }
L_00383C88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = c.f[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383C9Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00383C9Cu) [[unlikely]] return; }
L_00383C9C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[12] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[5], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383CB0u); set32(c.r[4], c.r[2].w[0] + 17040u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00383CB0u) [[unlikely]] return; }
L_00383CB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00383CD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 336u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[18], c.r[16].w[0] + 304u);  if (t) { goto L_00383EB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383D0Cu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00383D0Cu) [[unlikely]] return; }
L_00383D0C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_00383D48; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00383D30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00383D58; } }
    c.budget -= 1;
L_00383D30:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383D40u); set32(c.r[4], c.r[2].w[0] + 17760u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00383D40u) [[unlikely]] return; }
L_00383D40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00383D58; } }
L_00383D48:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383D58u); set32(c.r[4], c.r[2].w[0] + 18720u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00383D58u) [[unlikely]] return; }
L_00383D58:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383D6Cu); set32(c.r[4], c.r[2].w[0] + 18000u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00383D6Cu) [[unlikely]] return; }
L_00383D6C:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_00383D78:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);  if (t) { goto L_00383D94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383D8Cu); set32(c.r[4], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00AC(c, 58u, depth + 1u); else { c.pc = 0x003B07A0u; return; } if (c.pc != 0x00383D8Cu) [[unlikely]] return; }
L_00383D8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[0];  if (t) { goto L_00383D9C; } }
L_00383D94:
    c.f[0] = c.r[2].w[0];
    c.f[20] = c.f[0];
    c.budget -= 2;
L_00383D9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383DA4u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00383DA4u) [[unlikely]] return; }
L_00383DA4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[18].w[0] + 12u);  if (t) { goto L_00383DC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383DB8u);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x00383DB8u) [[unlikely]] return; }
L_00383DB8:
    c.f[12] = 0u;
    c.f[13] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383DC8u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00383DC8u) [[unlikely]] return; }
L_00383DC8:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[16].w[0] + 18240u);
    set32(c.r[5], 0u + 4u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383DE0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00383DE0u) [[unlikely]] return; }
L_00383DE0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 240u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00383D78u | kUnwind; return; } goto L_00383D78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383DF8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00383DF8u) [[unlikely]] return; }
L_00383DF8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 28u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xC2400000u);  if (t) { goto L_00383E18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00383E1C; } }
L_00383E18:
    c.f[13] = c.r[2].w[0];
    c.budget -= 1;
L_00383E1C:
    c.f[14] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383E28u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00383E28u) [[unlikely]] return; }
L_00383E28:
    set32(c.r[4], c.r[18].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383E34u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_00AC(c, 67u, depth + 1u); else { c.pc = 0x003B0B80u; return; } if (c.pc != 0x00383E34u) [[unlikely]] return; }
L_00383E34:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00383E38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383E40u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00383E40u) [[unlikely]] return; }
L_00383E40:
    c.f[12] = 0u;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xC2400000u);  if (t) { goto L_00383E5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00383E60; } }
L_00383E5C:
    c.f[13] = c.r[2].w[0];
    c.budget -= 1;
L_00383E60:
    c.f[14] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383E6Cu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00383E6Cu) [[unlikely]] return; }
L_00383E6C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00383E90; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383E90u); set32(c.r[4], c.r[3].w[0] + 18960u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00383E90u) [[unlikely]] return; }
L_00383E90:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 4u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383EA8u); set32(c.r[4], c.r[3].w[0] + 19200u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00383EA8u) [[unlikely]] return; }
L_00383EA8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00383E38u | kUnwind; return; } goto L_00383E38; } }
L_00383EB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383EC0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00383EC0u) [[unlikely]] return; }
L_00383EC0:
    c.f[13] = ld32((c.r[18].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383ED4u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00383ED4u) [[unlikely]] return; }
L_00383ED4:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.f[12] = ld32((c.r[18].w[0] + 32u));
    set32(c.r[5], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383EE8u); set32(c.r[4], c.r[2].w[0] + 17040u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00383EE8u) [[unlikely]] return; }
L_00383EE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00383F10:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + 304u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_00383F38; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 28u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];  if (t) { goto L_00383F40; } }
    c.budget -= 1;
L_00383F38:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00383F40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00383F50:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_00383F60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 1u);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00383F94u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x00383F94u) [[unlikely]] return; }
L_00383F94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_00A1(c, 4u, depth); } }
    set32(c.r[7], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], 0u + 18u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[2], 0u + 17u);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00380000u);
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[5], c.r[5].w[0] - 2574u);
    set32(c.r[4], c.r[4].w[0] + 16576u);
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 2573u);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], 0u + 3u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = ld8((c.r[5].w[0]));
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[17].w[0] + 12u), c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 25;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { [[clang::musttail]] return unit_00A1(c, 2u, depth); } }
    [[clang::musttail]] return unit_00A1(c, 1u, depth);
}

}
