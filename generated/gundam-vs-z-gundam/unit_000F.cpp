#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_000F[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 7, 0, 0, 8, 9, 0, 10, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0,
    0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 25, 0,
    0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0,
    0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0,
    0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0,
    45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 64, 0, 0, 0, 65,
    0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0,
    0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0,
    0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 88, 0, 0, 89, 0, 0, 0, 90, 0,
    0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 97, 0, 98, 0, 0,
    0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0,
    0, 103, 0, 0, 0, 104, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0,
    0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0,
    0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 129, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0,
    132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 138, 0, 0, 139, 0, 0, 0,
    0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0,
    144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0,
    149, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0,
    0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161,
    0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0,
    0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0,
    0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0,
    0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0,
    201, 0, 0, 202, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0,
    0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 214, 0, 0,
    215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0,
    0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0,
    234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0,
    0, 0, 0, 0, 241, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0,
    0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 0, 0, 0, 0, 0,
    253, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 267, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0,
    0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0,
    0, 0, 287, 0, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 292,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0,
    0, 0, 0, 0, 298, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0,
    0, 0, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 312, 0, 0, 313, 0, 0, 314, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 318, 0, 0, 0,
    0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326,
    0, 0, 0, 0, 0, 327, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 331,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0,
    337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0,
    0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 347, 0, 0, 348, 0, 0, 349, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 352, 0, 0, 353, 0, 0, 354, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 356, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 360,
    0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 366, 0, 0, 367, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0,
    0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    373, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    375, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0,
    0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 384, 0, 385, 0, 0, 0, 0, 0, 0, 386, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 395,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 402, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 0, 406, 0,
    0, 0, 0, 0, 407, 0, 0, 408, 0, 0, 409, 0, 0, 0, 410, 0, 0, 411, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0,
    421, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0,
    0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 437, 0, 0, 0, 0, 0, 0, 438, 0, 0, 439, 0,
    0, 0, 0, 0, 440, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 0, 444,
    0, 0, 0, 0, 0, 0, 445, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 448, 0, 0, 449, 0, 0, 450, 0, 0,
};

void unit_000F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0013C000;
    case 2u: goto L_0013C020;
    case 3u: goto L_0013C040;
    case 4u: goto L_0013C048;
    case 5u: goto L_0013C068;
    case 6u: goto L_0013C0CC;
    case 7u: goto L_0013C0D0;
    case 8u: goto L_0013C0DC;
    case 9u: goto L_0013C0E0;
    case 10u: goto L_0013C0E8;
    case 11u: goto L_0013C2E0;
    case 12u: goto L_0013C320;
    case 13u: goto L_0013C338;
    case 14u: goto L_0013C360;
    case 15u: goto L_0013C3A4;
    case 16u: goto L_0013C3C8;
    case 17u: goto L_0013C3E0;
    case 18u: goto L_0013C3F8;
    case 19u: goto L_0013C414;
    case 20u: goto L_0013C420;
    case 21u: goto L_0013C430;
    case 22u: goto L_0013C444;
    case 23u: goto L_0013C45C;
    case 24u: goto L_0013C468;
    case 25u: goto L_0013C478;
    case 26u: goto L_0013C48C;
    case 27u: goto L_0013C498;
    case 28u: goto L_0013C4C0;
    case 29u: goto L_0013C4D4;
    case 30u: goto L_0013C4E8;
    case 31u: goto L_0013C508;
    case 32u: goto L_0013C51C;
    case 33u: goto L_0013C584;
    case 34u: goto L_0013C5C0;
    case 35u: goto L_0013C5DC;
    case 36u: goto L_0013C5E8;
    case 37u: goto L_0013C618;
    case 38u: goto L_0013C624;
    case 39u: goto L_0013C674;
    case 40u: goto L_0013C694;
    case 41u: goto L_0013C6B4;
    case 42u: goto L_0013C6D4;
    case 43u: goto L_0013C6E0;
    case 44u: goto L_0013C6F4;
    case 45u: goto L_0013C700;
    case 46u: goto L_0013C714;
    case 47u: goto L_0013C734;
    case 48u: goto L_0013C750;
    case 49u: goto L_0013C768;
    case 50u: goto L_0013C7A4;
    case 51u: goto L_0013C7CC;
    case 52u: goto L_0013C7E0;
    case 53u: goto L_0013C808;
    case 54u: goto L_0013C830;
    case 55u: goto L_0013C9A0;
    case 56u: goto L_0013CA58;
    case 57u: goto L_0013CAE0;
    case 58u: goto L_0013CAF8;
    case 59u: goto L_0013CB20;
    case 60u: goto L_0013CB74;
    case 61u: goto L_0013CBA0;
    case 62u: goto L_0013CBDC;
    case 63u: goto L_0013CBE4;
    case 64u: goto L_0013CBEC;
    case 65u: goto L_0013CBFC;
    case 66u: goto L_0013CC08;
    case 67u: goto L_0013CC50;
    case 68u: goto L_0013CC68;
    case 69u: goto L_0013CC88;
    case 70u: goto L_0013CCB8;
    case 71u: goto L_0013CCD0;
    case 72u: goto L_0013CCF8;
    case 73u: goto L_0013CD60;
    case 74u: goto L_0013CDA8;
    case 75u: goto L_0013CDB8;
    case 76u: goto L_0013CDC8;
    case 77u: goto L_0013CE00;
    case 78u: goto L_0013CE68;
    case 79u: goto L_0013CE88;
    case 80u: goto L_0013CEBC;
    case 81u: goto L_0013CEF0;
    case 82u: goto L_0013CF30;
    case 83u: goto L_0013CF44;
    case 84u: goto L_0013CF60;
    case 85u: goto L_0013CF90;
    case 86u: goto L_0013CFC0;
    case 87u: goto L_0013CFD0;
    case 88u: goto L_0013CFDC;
    case 89u: goto L_0013CFE8;
    case 90u: goto L_0013CFF8;
    case 91u: goto L_0013D018;
    case 92u: goto L_0013D124;
    case 93u: goto L_0013D138;
    case 94u: goto L_0013D148;
    case 95u: goto L_0013D154;
    case 96u: goto L_0013D160;
    case 97u: goto L_0013D16C;
    case 98u: goto L_0013D174;
    case 99u: goto L_0013D190;
    case 100u: goto L_0013D1D0;
    case 101u: goto L_0013D1D8;
    case 102u: goto L_0013D1E8;
    case 103u: goto L_0013D204;
    case 104u: goto L_0013D214;
    case 105u: goto L_0013D21C;
    case 106u: goto L_0013D22C;
    case 107u: goto L_0013D26C;
    case 108u: goto L_0013D274;
    case 109u: goto L_0013D284;
    case 110u: goto L_0013D2A0;
    case 111u: goto L_0013D2E0;
    case 112u: goto L_0013D318;
    case 113u: goto L_0013D328;
    case 114u: goto L_0013D408;
    case 115u: goto L_0013D444;
    case 116u: goto L_0013D45C;
    case 117u: goto L_0013D468;
    case 118u: goto L_0013D4A4;
    case 119u: goto L_0013D540;
    case 120u: goto L_0013D58C;
    case 121u: goto L_0013D5A4;
    case 122u: goto L_0013D5C0;
    case 123u: goto L_0013D5D4;
    case 124u: goto L_0013D5EC;
    case 125u: goto L_0013D60C;
    case 126u: goto L_0013D628;
    case 127u: goto L_0013D638;
    case 128u: goto L_0013D648;
    case 129u: goto L_0013D650;
    case 130u: goto L_0013D65C;
    case 131u: goto L_0013D66C;
    case 132u: goto L_0013D680;
    case 133u: goto L_0013D69C;
    case 134u: goto L_0013D6C0;
    case 135u: goto L_0013D710;
    case 136u: goto L_0013D748;
    case 137u: goto L_0013D758;
    case 138u: goto L_0013D764;
    case 139u: goto L_0013D770;
    case 140u: goto L_0013D794;
    case 141u: goto L_0013D7A4;
    case 142u: goto L_0013D7B4;
    case 143u: goto L_0013D7EC;
    case 144u: goto L_0013D800;
    case 145u: goto L_0013D838;
    case 146u: goto L_0013D850;
    case 147u: goto L_0013D868;
    case 148u: goto L_0013D878;
    case 149u: goto L_0013D880;
    case 150u: goto L_0013D894;
    case 151u: goto L_0013D8A0;
    case 152u: goto L_0013D8C8;
    case 153u: goto L_0013D8D4;
    case 154u: goto L_0013D928;
    case 155u: goto L_0013D934;
    case 156u: goto L_0013D94C;
    case 157u: goto L_0013D964;
    case 158u: goto L_0013D984;
    case 159u: goto L_0013D9A0;
    case 160u: goto L_0013D9EC;
    case 161u: goto L_0013D9FC;
    case 162u: goto L_0013DA10;
    case 163u: goto L_0013DA50;
    case 164u: goto L_0013DA9C;
    case 165u: goto L_0013DAAC;
    case 166u: goto L_0013DAC0;
    case 167u: goto L_0013DAEC;
    case 168u: goto L_0013DB14;
    case 169u: goto L_0013DB20;
    case 170u: goto L_0013DB48;
    case 171u: goto L_0013DB54;
    case 172u: goto L_0013DBB0;
    case 173u: goto L_0013DBBC;
    case 174u: goto L_0013DBD4;
    case 175u: goto L_0013DBEC;
    case 176u: goto L_0013DC0C;
    case 177u: goto L_0013DC30;
    case 178u: goto L_0013DC40;
    case 179u: goto L_0013DC54;
    case 180u: goto L_0013DC90;
    case 181u: goto L_0013DCA0;
    case 182u: goto L_0013DCB0;
    case 183u: goto L_0013DCF0;
    case 184u: goto L_0013DD04;
    case 185u: goto L_0013DD18;
    case 186u: goto L_0013DD50;
    case 187u: goto L_0013DDB0;
    case 188u: goto L_0013DDC4;
    case 189u: goto L_0013DDF0;
    case 190u: goto L_0013DE08;
    case 191u: goto L_0013DE38;
    case 192u: goto L_0013DE4C;
    case 193u: goto L_0013DE88;
    case 194u: goto L_0013DEB0;
    case 195u: goto L_0013DEC0;
    case 196u: goto L_0013DED4;
    case 197u: goto L_0013DEEC;
    case 198u: goto L_0013DF2C;
    case 199u: goto L_0013DF38;
    case 200u: goto L_0013DF70;
    case 201u: goto L_0013DF80;
    case 202u: goto L_0013DF8C;
    case 203u: goto L_0013DF98;
    case 204u: goto L_0013DFA4;
    case 205u: goto L_0013DFDC;
    case 206u: goto L_0013DFF8;
    case 207u: goto L_0013E008;
    case 208u: goto L_0013E01C;
    case 209u: goto L_0013E060;
    case 210u: goto L_0013E098;
    case 211u: goto L_0013E0AC;
    case 212u: goto L_0013E0D8;
    case 213u: goto L_0013E0E8;
    case 214u: goto L_0013E0F4;
    case 215u: goto L_0013E100;
    case 216u: goto L_0013E10C;
    case 217u: goto L_0013E144;
    case 218u: goto L_0013E15C;
    case 219u: goto L_0013E16C;
    case 220u: goto L_0013E1E8;
    case 221u: goto L_0013E220;
    case 222u: goto L_0013E230;
    case 223u: goto L_0013E23C;
    case 224u: goto L_0013E268;
    case 225u: goto L_0013E274;
    case 226u: goto L_0013E2B0;
    case 227u: goto L_0013E2C0;
    case 228u: goto L_0013E2CC;
    case 229u: goto L_0013E2F8;
    case 230u: goto L_0013E304;
    case 231u: goto L_0013E33C;
    case 232u: goto L_0013E34C;
    case 233u: goto L_0013E364;
    case 234u: goto L_0013E380;
    case 235u: goto L_0013E3A0;
    case 236u: goto L_0013E3B8;
    case 237u: goto L_0013E3D0;
    case 238u: goto L_0013E410;
    case 239u: goto L_0013E458;
    case 240u: goto L_0013E474;
    case 241u: goto L_0013E490;
    case 242u: goto L_0013E498;
    case 243u: goto L_0013E4C8;
    case 244u: goto L_0013E4D8;
    case 245u: goto L_0013E4E4;
    case 246u: goto L_0013E510;
    case 247u: goto L_0013E51C;
    case 248u: goto L_0013E578;
    case 249u: goto L_0013E584;
    case 250u: goto L_0013E5B8;
    case 251u: goto L_0013E5D8;
    case 252u: goto L_0013E5E4;
    case 253u: goto L_0013E600;
    case 254u: goto L_0013E60C;
    case 255u: goto L_0013E640;
    case 256u: goto L_0013E660;
    case 257u: goto L_0013E66C;
    case 258u: goto L_0013E6E0;
    case 259u: goto L_0013E730;
    case 260u: goto L_0013E748;
    case 261u: goto L_0013E760;
    case 262u: goto L_0013E770;
    case 263u: goto L_0013E7A0;
    case 264u: goto L_0013E7B0;
    case 265u: goto L_0013E7BC;
    case 266u: goto L_0013E7E8;
    case 267u: goto L_0013E7F4;
    case 268u: goto L_0013E850;
    case 269u: goto L_0013E85C;
    case 270u: goto L_0013E890;
    case 271u: goto L_0013E8B0;
    case 272u: goto L_0013E8BC;
    case 273u: goto L_0013E8D8;
    case 274u: goto L_0013E8E4;
    case 275u: goto L_0013E918;
    case 276u: goto L_0013E938;
    case 277u: goto L_0013E944;
    case 278u: goto L_0013E9A0;
    case 279u: goto L_0013E9B8;
    case 280u: goto L_0013E9D0;
    case 281u: goto L_0013E9EC;
    case 282u: goto L_0013EA04;
    case 283u: goto L_0013EA1C;
    case 284u: goto L_0013EA38;
    case 285u: goto L_0013EA90;
    case 286u: goto L_0013EAF8;
    case 287u: goto L_0013EB08;
    case 288u: goto L_0013EB14;
    case 289u: goto L_0013EB30;
    case 290u: goto L_0013EB60;
    case 291u: goto L_0013EB70;
    case 292u: goto L_0013EB7C;
    case 293u: goto L_0013EBA8;
    case 294u: goto L_0013EBB4;
    case 295u: goto L_0013EC30;
    case 296u: goto L_0013EC3C;
    case 297u: goto L_0013EC70;
    case 298u: goto L_0013EC90;
    case 299u: goto L_0013EC9C;
    case 300u: goto L_0013ECB8;
    case 301u: goto L_0013ECC4;
    case 302u: goto L_0013ECF8;
    case 303u: goto L_0013ED18;
    case 304u: goto L_0013ED24;
    case 305u: goto L_0013ED84;
    case 306u: goto L_0013EDA4;
    case 307u: goto L_0013EDC4;
    case 308u: goto L_0013EDE4;
    case 309u: goto L_0013EE30;
    case 310u: goto L_0013EE90;
    case 311u: goto L_0013EEC0;
    case 312u: goto L_0013EECC;
    case 313u: goto L_0013EED8;
    case 314u: goto L_0013EEE4;
    case 315u: goto L_0013EF20;
    case 316u: goto L_0013EF34;
    case 317u: goto L_0013EF64;
    case 318u: goto L_0013EF70;
    case 319u: goto L_0013EF88;
    case 320u: goto L_0013EF94;
    case 321u: goto L_0013EFA8;
    case 322u: goto L_0013EFB8;
    case 323u: goto L_0013EFCC;
    case 324u: goto L_0013EFDC;
    case 325u: goto L_0013F010;
    case 326u: goto L_0013F07C;
    case 327u: goto L_0013F094;
    case 328u: goto L_0013F09C;
    case 329u: goto L_0013F0DC;
    case 330u: goto L_0013F0F4;
    case 331u: goto L_0013F0FC;
    case 332u: goto L_0013F144;
    case 333u: goto L_0013F15C;
    case 334u: goto L_0013F190;
    case 335u: goto L_0013F1B4;
    case 336u: goto L_0013F1F0;
    case 337u: goto L_0013F200;
    case 338u: goto L_0013F21C;
    case 339u: goto L_0013F244;
    case 340u: goto L_0013F254;
    case 341u: goto L_0013F264;
    case 342u: goto L_0013F278;
    case 343u: goto L_0013F288;
    case 344u: goto L_0013F298;
    case 345u: goto L_0013F2C0;
    case 346u: goto L_0013F2E4;
    case 347u: goto L_0013F314;
    case 348u: goto L_0013F320;
    case 349u: goto L_0013F32C;
    case 350u: goto L_0013F33C;
    case 351u: goto L_0013F348;
    case 352u: goto L_0013F358;
    case 353u: goto L_0013F364;
    case 354u: goto L_0013F370;
    case 355u: goto L_0013F3B8;
    case 356u: goto L_0013F3C4;
    case 357u: goto L_0013F3D0;
    case 358u: goto L_0013F420;
    case 359u: goto L_0013F46C;
    case 360u: goto L_0013F47C;
    case 361u: goto L_0013F490;
    case 362u: goto L_0013F4A0;
    case 363u: goto L_0013F4BC;
    case 364u: goto L_0013F4E0;
    case 365u: goto L_0013F520;
    case 366u: goto L_0013F52C;
    case 367u: goto L_0013F538;
    case 368u: goto L_0013F544;
    case 369u: goto L_0013F578;
    case 370u: goto L_0013F588;
    case 371u: goto L_0013F5B0;
    case 372u: goto L_0013F5C8;
    case 373u: goto L_0013F600;
    case 374u: goto L_0013F618;
    case 375u: goto L_0013F680;
    case 376u: goto L_0013F6A4;
    case 377u: goto L_0013F6B4;
    case 378u: goto L_0013F740;
    case 379u: goto L_0013F778;
    case 380u: goto L_0013F798;
    case 381u: goto L_0013F7C0;
    case 382u: goto L_0013F7F8;
    case 383u: goto L_0013F824;
    case 384u: goto L_0013F830;
    case 385u: goto L_0013F838;
    case 386u: goto L_0013F854;
    case 387u: goto L_0013F85C;
    case 388u: goto L_0013F898;
    case 389u: goto L_0013F8AC;
    case 390u: goto L_0013F8C4;
    case 391u: goto L_0013F91C;
    case 392u: goto L_0013F940;
    case 393u: goto L_0013F94C;
    case 394u: goto L_0013F964;
    case 395u: goto L_0013F97C;
    case 396u: goto L_0013F9C4;
    case 397u: goto L_0013F9D8;
    case 398u: goto L_0013F9EC;
    case 399u: goto L_0013FA2C;
    case 400u: goto L_0013FA38;
    case 401u: goto L_0013FA60;
    case 402u: goto L_0013FA6C;
    case 403u: goto L_0013FAC0;
    case 404u: goto L_0013FAD0;
    case 405u: goto L_0013FAE8;
    case 406u: goto L_0013FAF8;
    case 407u: goto L_0013FB10;
    case 408u: goto L_0013FB1C;
    case 409u: goto L_0013FB28;
    case 410u: goto L_0013FB38;
    case 411u: goto L_0013FB44;
    case 412u: goto L_0013FB58;
    case 413u: goto L_0013FB88;
    case 414u: goto L_0013FBB0;
    case 415u: goto L_0013FBC0;
    case 416u: goto L_0013FBD4;
    case 417u: goto L_0013FBEC;
    case 418u: goto L_0013FC2C;
    case 419u: goto L_0013FC38;
    case 420u: goto L_0013FC74;
    case 421u: goto L_0013FC80;
    case 422u: goto L_0013FC9C;
    case 423u: goto L_0013FCC8;
    case 424u: goto L_0013FCE0;
    case 425u: goto L_0013FD20;
    case 426u: goto L_0013FD34;
    case 427u: goto L_0013FD50;
    case 428u: goto L_0013FD68;
    case 429u: goto L_0013FDA8;
    case 430u: goto L_0013FDBC;
    case 431u: goto L_0013FDD8;
    case 432u: goto L_0013FE10;
    case 433u: goto L_0013FE50;
    case 434u: goto L_0013FE70;
    case 435u: goto L_0013FE88;
    case 436u: goto L_0013FECC;
    case 437u: goto L_0013FED0;
    case 438u: goto L_0013FEEC;
    case 439u: goto L_0013FEF8;
    case 440u: goto L_0013FF10;
    case 441u: goto L_0013FF1C;
    case 442u: goto L_0013FF54;
    case 443u: goto L_0013FF6C;
    case 444u: goto L_0013FF7C;
    case 445u: goto L_0013FF98;
    case 446u: goto L_0013FFA4;
    case 447u: goto L_0013FFD4;
    case 448u: goto L_0013FFDC;
    case 449u: goto L_0013FFE8;
    case 450u: goto L_0013FFF4;
    default: bad_entry(c, 0x0013C000u); return;
    }
L_0013C000:
    c.r[4].d[0] = ld8((c.r[22].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 2832u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 30u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0013C0D0; } }
L_0013C020:
    c.r[4].d[0] = ld8((c.r[22].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[3].w[0] + 2864u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 30u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0013C0D0; } }
L_0013C040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C048u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 338u, depth + 1u); else { c.pc = 0x002D3850u; return; } if (c.pc != 0x0013C048u) [[unlikely]] return; }
L_0013C048:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013C0D0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st32((c.r[2].w[0] + 12u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st32((c.r[2].w[0] + 16u), c.r[17].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C068u); c.r[4].d[0] = ld8((c.r[18].w[0] + 8658u));  if (depth < kMaxDepth) unit_004E(c, 88u, depth + 1u); else { c.pc = 0x00238F50u; return; } if (c.pc != 0x0013C068u) [[unlikely]] return; }
L_0013C068:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013C090; } }
    c.r[4].d[0] = ld8((c.r[22].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 2832u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 30u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0013C0B0; } }
L_0013C090:
    c.r[4].d[0] = ld8((c.r[22].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[3].w[0] + 2864u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[2].w[0] + 30u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_0013C0B0:
    c.r[3].d[0] = ld8((c.r[22].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 2896u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C0CCu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 14u, depth + 1u); else { c.pc = 0x001F81C0u; return; } if (c.pc != 0x0013C0CCu) [[unlikely]] return; }
L_0013C0CC:
    c.budget -= 1;
L_0013C0D0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C0DCu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 115u, depth + 1u); else { c.pc = 0x001F1060u; return; } if (c.pc != 0x0013C0DCu) [[unlikely]] return; }
L_0013C0DC:
    c.budget -= 1;
L_0013C0E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C0E8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 223u, depth + 1u); else { c.pc = 0x00162AA0u; return; } if (c.pc != 0x0013C0E8u) [[unlikely]] return; }
L_0013C0E8:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 562u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013C188; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 560u));
    st16((c.r[18].w[0] + 560u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 558u));
    st8((c.r[18].w[0] + 558u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[20].w[0] + 580u)));
    st32((c.r[18].w[0] + 580u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 588u)));
    st32((c.r[18].w[0] + 588u), c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[20].w[0] + 564u));
    c.r[2].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013C188; } }
    st16((c.r[18].w[0] + 564u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 559u));
    st8((c.r[18].w[0] + 559u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[20].w[0] + 584u)));
    st32((c.r[18].w[0] + 584u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 592u)));
    st32((c.r[18].w[0] + 592u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 600u)));
    st32((c.r[18].w[0] + 600u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[20].w[0] + 562u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = ld16((c.r[20].w[0] + 556u));  if (t) { goto L_0013C168; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 264u)));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 556u));
    c.budget -= 3;
L_0013C168:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 523u));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st16((c.r[2].w[0] + 524u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 523u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    st8((c.r[18].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_0013C188:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 566u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013C218; } }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 564u));
    c.r[2].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013C1B0; } }
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 2;
L_0013C1B0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013C218; } }
    st16((c.r[17].w[0] + 564u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 559u));
    st8((c.r[17].w[0] + 559u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[19].w[0] + 584u)));
    st32((c.r[17].w[0] + 584u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 592u)));
    st32((c.r[17].w[0] + 592u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 600u)));
    st32((c.r[17].w[0] + 600u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[20].w[0] + 562u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = ld16((c.r[20].w[0] + 556u));  if (t) { goto L_0013C1F8; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 264u)));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 556u));
    c.budget -= 3;
L_0013C1F8:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 523u));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st16((c.r[2].w[0] + 524u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 523u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    st8((c.r[17].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_0013C218:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 562u));
    c.r[21].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0013C230; } }
    c.r[21].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0013C230:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 566u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013C248; } }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0013C248:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 564u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013C2B8; } }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 564u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013C2B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013C310; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013C310; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 566u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013C310; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 808u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[21].w[0] + 808u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 808u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 808u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0013C310; } }
    c.budget -= 1;
L_0013C2B8:
    c.r[2].d[0] = ld8((c.r[30].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013C310; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013C310; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 834u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0013C310; } }
    goto L_0013C2E4;
L_0013C2E0:
    c.budget -= 1;
L_0013C2E4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 808u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 808u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[21].w[0] + 515u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 515u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0013C310; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 809u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 809u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0013C310:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], c.r[23].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C320u); set32(c.r[4], c.r[4].w[0] + 19088u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013C320u) [[unlikely]] return; }
L_0013C320:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[5].w[0] + 19088u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C338u); set32(c.r[6], c.r[6].w[0] + 19072u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013C338u) [[unlikely]] return; }
L_0013C338:
    c.r[3].d[0] = ld8((c.r[22].w[0] + 7u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_0013C768; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 13904u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0013C000u < 16384u) { entry = entries_000F[(t - 0x0013C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0013C360:
    c.r[3].d[0] = ld16((c.r[20].w[0] + 562u));
    c.r[2].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[23].d[0] = ld8((c.r[20].w[0] + 515u));  if (t) { goto L_0013C378; } }
    c.r[23].d[0] = c.r[23].d[0] ^ 1ull;
    c.budget -= 2;
L_0013C378:
    c.r[2].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013C3B0; } }
    c.r[3].d[0] = ld8((c.r[30].w[0] + 1u));
    set32(c.r[2], 0u + 136u);
    c.r[3].d[0] = c.r[3].d[0] & 136ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0013C3B0; } }
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C3A4u); set32(c.r[4], c.r[4].w[0] + 19072u);  if (depth < kMaxDepth) unit_0023(c, 101u, depth + 1u); else { c.pc = 0x0018C990u; return; } if (c.pc != 0x0013C3A4u) [[unlikely]] return; }
L_0013C3A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013C3E0; } }
    c.budget -= 1;
L_0013C3B0:
    c.r[6].d[0] = c.r[23].d[0] << 56;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C3C8u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_001A(c, 91u, depth + 1u); else { c.pc = 0x00169480u; return; } if (c.pc != 0x0013C3C8u) [[unlikely]] return; }
L_0013C3C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0013C3E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C3E0u); set32(c.r[4], c.r[4].w[0] + 19072u);  if (depth < kMaxDepth) unit_0046(c, 50u, depth + 1u); else { c.pc = 0x00218D50u; return; } if (c.pc != 0x0013C3E0u) [[unlikely]] return; }
L_0013C3E0:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0013C400; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C3F8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004B(c, 47u, depth + 1u); else { c.pc = 0x0022C950u; return; } if (c.pc != 0x0013C3F8u) [[unlikely]] return; }
L_0013C3F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013C768; } }
L_0013C400:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C414u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_004B(c, 47u, depth + 1u); else { c.pc = 0x0022C950u; return; } if (c.pc != 0x0013C414u) [[unlikely]] return; }
L_0013C414:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013C768; } }
    c.budget -= 1;
L_0013C420:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C430u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_001A(c, 127u, depth + 1u); else { c.pc = 0x0016A150u; return; } if (c.pc != 0x0013C430u) [[unlikely]] return; }
L_0013C430:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C444u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_004B(c, 47u, depth + 1u); else { c.pc = 0x0022C950u; return; } if (c.pc != 0x0013C444u) [[unlikely]] return; }
L_0013C444:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
    set32(c.r[3], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0013C768; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C45Cu); set32(c.r[4], c.r[4].w[0] + 19072u);  if (depth < kMaxDepth) unit_0046(c, 50u, depth + 1u); else { c.pc = 0x00218D50u; return; } if (c.pc != 0x0013C45Cu) [[unlikely]] return; }
L_0013C45C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013C768; } }
    c.budget -= 1;
L_0013C468:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C478u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_001D(c, 30u, depth + 1u); else { c.pc = 0x00174460u; return; } if (c.pc != 0x0013C478u) [[unlikely]] return; }
L_0013C478:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C48Cu); set32(c.r[6], 0u + 9u);  if (depth < kMaxDepth) unit_004B(c, 47u, depth + 1u); else { c.pc = 0x0022C950u; return; } if (c.pc != 0x0013C48Cu) [[unlikely]] return; }
L_0013C48C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013C768; } }
    c.budget -= 1;
L_0013C498:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 564u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013C4F0; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 564u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0013C4F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C4C0u); set32(c.r[4], c.r[4].w[0] + 19072u);  if (depth < kMaxDepth) unit_0021(c, 242u, depth + 1u); else { c.pc = 0x00187920u; return; } if (c.pc != 0x0013C4C0u) [[unlikely]] return; }
L_0013C4C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C4D4u); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_004B(c, 47u, depth + 1u); else { c.pc = 0x0022C950u; return; } if (c.pc != 0x0013C4D4u) [[unlikely]] return; }
L_0013C4D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C4E8u); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_004B(c, 47u, depth + 1u); else { c.pc = 0x0022C950u; return; } if (c.pc != 0x0013C4E8u) [[unlikely]] return; }
L_0013C4E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013C768; } }
L_0013C4F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0013C508; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C508u); set32(c.r[4], c.r[4].w[0] + 19072u);  if (depth < kMaxDepth) unit_0046(c, 50u, depth + 1u); else { c.pc = 0x00218D50u; return; } if (c.pc != 0x0013C508u) [[unlikely]] return; }
L_0013C508:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8658u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C51Cu); set32(c.r[4], c.r[4].w[0] + 19072u);  if (depth < kMaxDepth) unit_0021(c, 96u, depth + 1u); else { c.pc = 0x00186250u; return; } if (c.pc != 0x0013C51Cu) [[unlikely]] return; }
L_0013C51C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013C558; } }
    c.r[4].d[0] = ld8((c.r[19].w[0] + 8658u));
    set32(c.r[3], 0u + 65u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[4].w[0] - 72u);  if (t) { goto L_0013C558; } }
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0013C558; } }
    set32(c.r[3], 0u + 76u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 75u);  if (t) { goto L_0013C558; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0013C768; } }
L_0013C558:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 8658u));
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 8u);  if (t) { goto L_0013C570; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0013C590; } }
L_0013C570:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C584u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_004B(c, 47u, depth + 1u); else { c.pc = 0x0022C950u; return; } if (c.pc != 0x0013C584u) [[unlikely]] return; }
L_0013C584:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013C768; } }
    c.budget -= 1;
L_0013C590:
    set32(c.r[4], c.r[3].w[0] << 7);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 14490u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0013C5C8; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C5C0u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_004B(c, 47u, depth + 1u); else { c.pc = 0x0022C950u; return; } if (c.pc != 0x0013C5C0u) [[unlikely]] return; }
L_0013C5C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013C768; } }
L_0013C5C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C5DCu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_004B(c, 47u, depth + 1u); else { c.pc = 0x0022C950u; return; } if (c.pc != 0x0013C5DCu) [[unlikely]] return; }
L_0013C5DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013C768; } }
    c.budget -= 1;
L_0013C5E8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013C608; } }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 566u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013C630; } }
    c.budget -= 1;
L_0013C608:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C618u); set32(c.r[5], c.r[5].w[0] + 19072u);  if (depth < kMaxDepth) unit_001E(c, 290u, depth + 1u); else { c.pc = 0x0017B620u; return; } if (c.pc != 0x0013C618u) [[unlikely]] return; }
L_0013C618:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C624u); set32(c.r[5], 0u + 22u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x0013C624u) [[unlikely]] return; }
L_0013C624:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013C768; } }
    c.budget -= 1;
L_0013C630:
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 18u);  if (t) { goto L_0013C6C0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0013C6A0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0013C680; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0013C660; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013C768; } }
L_0013C660:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 19072u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C674u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_001F(c, 330u, depth + 1u); else { c.pc = 0x0017F570u; return; } if (c.pc != 0x0013C674u) [[unlikely]] return; }
L_0013C674:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013C768; } }
    c.budget -= 1;
L_0013C680:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 19072u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C694u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_001F(c, 330u, depth + 1u); else { c.pc = 0x0017F570u; return; } if (c.pc != 0x0013C694u) [[unlikely]] return; }
L_0013C694:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013C768; } }
    c.budget -= 1;
L_0013C6A0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 19072u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C6B4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_001F(c, 330u, depth + 1u); else { c.pc = 0x0017F570u; return; } if (c.pc != 0x0013C6B4u) [[unlikely]] return; }
L_0013C6B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013C768; } }
    c.budget -= 1;
L_0013C6C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 19072u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C6D4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001F(c, 330u, depth + 1u); else { c.pc = 0x0017F570u; return; } if (c.pc != 0x0013C6D4u) [[unlikely]] return; }
L_0013C6D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013C768; } }
    c.budget -= 1;
L_0013C6E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C6F4u); set32(c.r[6], 0u + 9u);  if (depth < kMaxDepth) unit_004B(c, 47u, depth + 1u); else { c.pc = 0x0022C950u; return; } if (c.pc != 0x0013C6F4u) [[unlikely]] return; }
L_0013C6F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013C768; } }
    c.budget -= 1;
L_0013C700:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 515u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C714u); set32(c.r[4], c.r[4].w[0] + 19072u);  if (depth < kMaxDepth) unit_001A(c, 95u, depth + 1u); else { c.pc = 0x001696C0u; return; } if (c.pc != 0x0013C714u) [[unlikely]] return; }
L_0013C714:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 515u));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0013C740; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C734u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_004B(c, 47u, depth + 1u); else { c.pc = 0x0022C950u; return; } if (c.pc != 0x0013C734u) [[unlikely]] return; }
L_0013C734:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013C750; } }
    c.budget -= 1;
L_0013C740:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C750u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 47u, depth + 1u); else { c.pc = 0x0022C950u; return; } if (c.pc != 0x0013C750u) [[unlikely]] return; }
L_0013C750:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
    set32(c.r[3], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0013C768; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C768u); set32(c.r[4], c.r[4].w[0] + 19072u);  if (depth < kMaxDepth) unit_0046(c, 50u, depth + 1u); else { c.pc = 0x00218D50u; return; } if (c.pc != 0x0013C768u) [[unlikely]] return; }
L_0013C768:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 270u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013C830; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 562u));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013C7B0; } }
    c.r[3].d[0] = ld8((c.r[30].w[0] + 1u));
    set32(c.r[2], 0u + 136u);
    c.r[3].d[0] = c.r[3].d[0] & 136ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013C7B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C7A4u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_004E(c, 146u, depth + 1u); else { c.pc = 0x0023A0A0u; return; } if (c.pc != 0x0013C7A4u) [[unlikely]] return; }
L_0013C7A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013C830; } }
    c.budget -= 1;
L_0013C7B0:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 564u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0013C7D8; } }
    set32(c.r[5], 0u + 148u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C7CCu); set32(c.r[4], c.r[4].w[0] + 19072u);  if (depth < kMaxDepth) unit_004E(c, 110u, depth + 1u); else { c.pc = 0x00239510u; return; } if (c.pc != 0x0013C7CCu) [[unlikely]] return; }
L_0013C7CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013C830; } }
    c.budget -= 1;
L_0013C7D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C7E0u); c.r[4].d[0] = ld8((c.r[18].w[0] + 8658u));  if (depth < kMaxDepth) unit_004E(c, 88u, depth + 1u); else { c.pc = 0x00238F50u; return; } if (c.pc != 0x0013C7E0u) [[unlikely]] return; }
L_0013C7E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013C810; } }
    c.r[3].d[0] = ld8((c.r[22].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 2832u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C808u); set32(c.r[4], c.r[4].w[0] + 19072u);  if (depth < kMaxDepth) unit_004E(c, 110u, depth + 1u); else { c.pc = 0x00239510u; return; } if (c.pc != 0x0013C808u) [[unlikely]] return; }
L_0013C808:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013C830; } }
L_0013C810:
    c.r[3].d[0] = ld8((c.r[22].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 2864u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C830u); set32(c.r[4], c.r[4].w[0] + 19072u);  if (depth < kMaxDepth) unit_004E(c, 110u, depth + 1u); else { c.pc = 0x00239510u; return; } if (c.pc != 0x0013C830u) [[unlikely]] return; }
L_0013C830:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], ld32((c.r[21].w[0] + 264u)));  if (t) { goto L_0013C8C8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0013C8C8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013C8C8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013C8C8; } }
    c.r[5].d[0] = ld8((c.r[6].w[0] + 515u));
    set32(c.r[4], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0013C8C8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 515u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0013C8C8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0013C8C8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013C8C8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 577u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 1540u)));
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[6].w[0] + 1540u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 577u)));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    st8((c.r[21].w[0] + 577u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
L_0013C8C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013C970; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0013C970; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 508u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013C950; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013C950; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013C950; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013C950; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[16].d[0];  if (t) { goto L_0013C950; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 577u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1534u)));
    c.r[4].d[0] = c.r[4].d[0] & 16ull;
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 1534u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 577u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 577u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0013C970; } }
L_0013C950:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013C970; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1536u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[16].w[0] + 1536u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0013C970:
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
L_0013C9A0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[18], ld32((c.r[4].w[0] + 20u)));
    c.r[2].d[0] = ld16((c.r[18].w[0] + 562u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], ld32((c.r[5].w[0] + 20u)));  if (t) { goto L_0013C9D8; } }
    set32(c.r[18], ld32((c.r[18].w[0] + 264u)));
    c.budget -= 2;
L_0013C9D8:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 566u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013C9F0; } }
    set32(c.r[17], ld32((c.r[17].w[0] + 264u)));
    c.budget -= 2;
L_0013C9F0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    set32(c.r[16], c.r[4].w[0] + 48u);
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 48u);  if (t) { goto L_0013CD90; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_0013CC10; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0013CB68; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0013CAE8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0013CA60; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0013CA48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013CB78; } }
    c.budget -= 1;
L_0013CA48:
    set32(c.r[5], c.r[3].w[0] + 16u);
    set32(c.r[6], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CA58u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013CA58u) [[unlikely]] return; }
L_0013CA58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013CB78; } }
L_0013CA60:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013CA90; } }
    c.f[0] = ld32((c.r[18].w[0] + 2096u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 2100u));
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 2104u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 104u), c.f[0]);  if (t) { goto L_0013CAB8; } }
    c.budget -= 1;
L_0013CA90:
    set32(c.r[2], c.r[29].w[0] + 96u);
    c.f[3] = ld32((c.r[18].w[0] + 32u));
    c.f[2] = ld32((c.r[18].w[0] + 36u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[18].w[0] + 44u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.budget -= 10;
L_0013CAB8:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[0] = ld32((c.r[17].w[0] + 2096u));
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 2100u));
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 2104u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CAE0u); st32((c.r[29].w[0] + 120u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013CAE0u) [[unlikely]] return; }
L_0013CAE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013CB78; } }
L_0013CAE8:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CAF8u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013CAF8u) [[unlikely]] return; }
L_0013CAF8:
    set32(c.r[19], c.r[29].w[0] + 132u);
    set32(c.r[18], c.r[29].w[0] + 136u);
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    c.f[2] = ld32((c.r[18].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CB20u); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0013CB20u) [[unlikely]] return; }
L_0013CB20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0013CB78; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[29].w[0] + 128u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    st32((c.r[19].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.f[0]);  if (t) { goto L_0013CB78; } }
    c.budget -= 1;
L_0013CB68:
    set32(c.r[5], c.r[18].w[0] + 1392u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CB74u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013CB74u) [[unlikely]] return; }
L_0013CB74:
    c.budget -= 1;
L_0013CB78:
    set32(c.r[18], c.r[29].w[0] + 132u);
    c.f[0] = ld32((c.r[18].w[0]));
    set32(c.r[16], c.r[29].w[0] + 136u);
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    c.f[2] = ld32((c.r[16].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CBA0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0013CBA0u) [[unlikely]] return; }
L_0013CBA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0013CBD0; } }
    st32((c.r[18].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[29].w[0] + 128u), 0u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_0013CBD0:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CBDCu); set32(c.r[5], c.r[17].w[0] + 1440u);  if (depth < kMaxDepth) unit_0009(c, 203u, depth + 1u); else { c.pc = 0x00127360u; return; } if (c.pc != 0x0013CBDCu) [[unlikely]] return; }
L_0013CBDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CBE4u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0013CBE4u) [[unlikely]] return; }
L_0013CBE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CBECu); set32(c.r[4], c.r[17].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x0013CBECu) [[unlikely]] return; }
L_0013CBEC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CBFCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x0013CBFCu) [[unlikely]] return; }
L_0013CBFC:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CC08u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0013CC08u) [[unlikely]] return; }
L_0013CC08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013CD90; } }
L_0013CC10:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0013CCC0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0013CCA8; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013CC58; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0013CC40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013CD38; } }
L_0013CC40:
    set32(c.r[5], c.r[3].w[0] + 16u);
    set32(c.r[6], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CC50u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013CC50u) [[unlikely]] return; }
L_0013CC50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013CD38; } }
L_0013CC58:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CC68u); set32(c.r[6], c.r[18].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013CC68u) [[unlikely]] return; }
L_0013CC68:
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    c.f[2] = ld32((c.r[29].w[0] + 136u));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CC88u); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0013CC88u) [[unlikely]] return; }
L_0013CC88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0013CD38; } }
    c.budget -= 1;
L_0013CCA8:
    set32(c.r[6], c.r[18].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CCB8u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013CCB8u) [[unlikely]] return; }
L_0013CCB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013CD38; } }
L_0013CCC0:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CCD0u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013CCD0u) [[unlikely]] return; }
L_0013CCD0:
    set32(c.r[19], c.r[29].w[0] + 132u);
    set32(c.r[18], c.r[29].w[0] + 136u);
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    c.f[2] = ld32((c.r[18].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CCF8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0013CCF8u) [[unlikely]] return; }
L_0013CCF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0013CD38; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[29].w[0] + 128u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    st32((c.r[19].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    st32((c.r[18].w[0]), c.f[0]);
    c.budget -= 9;
L_0013CD38:
    set32(c.r[18], c.r[29].w[0] + 132u);
    c.f[0] = ld32((c.r[18].w[0]));
    set32(c.r[16], c.r[29].w[0] + 136u);
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    c.f[2] = ld32((c.r[16].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CD60u); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0013CD60u) [[unlikely]] return; }
L_0013CD60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0013CD90; } }
    st32((c.r[18].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[29].w[0] + 128u), 0u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_0013CD90:
    set32(c.r[16], c.r[29].w[0] + 136u);
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.f[1] = ld32((c.r[16].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CDA8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0013CDA8u) [[unlikely]] return; }
L_0013CDA8:
    c.f[13] = ld32((c.r[16].w[0]));
    c.f[12] = ld32((c.r[29].w[0] + 128u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CDB8u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0013CDB8u) [[unlikely]] return; }
L_0013CDB8:
    st16((c.r[17].w[0] + 574u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[12] = ld32((c.r[29].w[0] + 132u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CDC8u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0013CDC8u) [[unlikely]] return; }
L_0013CDC8:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[3], 0u - c.r[3].w[0]);
    st16((c.r[17].w[0] + 572u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0013CE00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 17u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 30u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 30u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0013CEB0; } }
    c.f[21] = ld32((c.r[17].w[0] + 48u));
    c.f[20] = ld32((c.r[16].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = c.f[21];  if (t) { goto L_0013CE58; } }
    c.f[21] = c.f[20];
    c.f[20] = c.f[0];
    c.budget -= 2;
L_0013CE58:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CE68u); set32(c.r[6], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013CE68u) [[unlikely]] return; }
L_0013CE68:
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CE88u); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0013CE88u) [[unlikely]] return; }
L_0013CE88:
    c.f[1] = fp::sub(c.f[21], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[1] = fp::add(c.f[21], c.f[20]);  if (t) { goto L_0013CEA8; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0013CEB0; } }
    c.budget -= 1;
L_0013CEA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013CF68; } }
L_0013CEB0:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CEBCu); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0013CEBCu) [[unlikely]] return; }
L_0013CEBC:
    c.f[2] = ld32((c.r[17].w[0] + 48u));
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013CEE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013CF68; } }
    c.budget -= 1;
L_0013CEE0:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CEF0u); set32(c.r[6], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013CEF0u) [[unlikely]] return; }
L_0013CEF0:
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    c.f[2] = ld32((c.r[29].w[0] + 64u));
    c.f[3] = ld32((c.r[29].w[0] + 72u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0013CF50; } }
    c.f[12] = ld32((c.r[16].w[0] + 48u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CF30u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x0013CF30u) [[unlikely]] return; }
L_0013CF30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[6], c.r[16].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CF44u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x0013CF44u) [[unlikely]] return; }
L_0013CF44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013CF60; } }
    c.budget -= 1;
L_0013CF50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CF60u); set32(c.r[4], c.r[4].w[0] + 19072u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013CF60u) [[unlikely]] return; }
L_0013CF60:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0013CF68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0013CF90:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CFC0u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0013CFC0u) [[unlikely]] return; }
L_0013CFC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CFD0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x0013CFD0u) [[unlikely]] return; }
L_0013CFD0:
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CFDCu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0013CFDCu) [[unlikely]] return; }
L_0013CFDC:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CFE8u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0013CFE8u) [[unlikely]] return; }
L_0013CFE8:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CFF8u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013CFF8u) [[unlikely]] return; }
L_0013CFF8:
    c.f[1] = ld32((c.r[17].w[0] + 148u));
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    c.f[2] = ld32((c.r[29].w[0] + 128u));
    c.f[3] = ld32((c.r[29].w[0] + 136u));
    c.f[21] = fp::add(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D018u); c.f[12] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0013D018u) [[unlikely]] return; }
L_0013D018:
    set32(c.r[16], c.r[29].w[0] + 132u);
    c.r[4].d[0] = 0ull + 0ull;
    c.f[22] = ld32((c.r[16].w[0]));
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[21]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[20] = c.f[0];  if (t) { goto L_0013D048; } }
    c.f[0] = c.f[21] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0013D048; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 2;
L_0013D048:
    c.f[1] = ld32((c.r[17].w[0] + 144u));
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0013D064; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0013D064:
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u + 3u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0013D080; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013D2B0; } }
L_0013D080:
    c.f[21] = ld32((c.r[17].w[0] + 148u));
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_0013D094; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0013D094:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.f[0] = c.f[21] ^ fp::kSign;  if (t) { goto L_0013D0AC; } }
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], 0u + 1u);  if (t) { goto L_0013D0AC; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0013D0AC:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0013D0BC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0013D0BC:
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u + 3u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0013D290; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013D238; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0013D1F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013D0F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013D2A8; } }
    c.budget -= 1;
L_0013D0F8:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0013D110; } }
    c.f[21] = c.f[21] ^ fp::kSign;
    c.budget -= 1;
L_0013D110:
    st32((c.r[16].w[0]), 0u);
    c.f[12] = ld32((c.r[17].w[0] + 144u));
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D124u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x0013D124u) [[unlikely]] return; }
L_0013D124:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D138u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x0013D138u) [[unlikely]] return; }
L_0013D138:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D148u); st32((c.r[16].w[0]), c.f[21]);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0013D148u) [[unlikely]] return; }
L_0013D148:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D154u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x00127450u; return; } if (c.pc != 0x0013D154u) [[unlikely]] return; }
L_0013D154:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D160u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 217u, depth + 1u); else { c.pc = 0x00127620u; return; } if (c.pc != 0x0013D160u) [[unlikely]] return; }
L_0013D160:
    c.f[22] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D16Cu); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00125FA0u; return; } if (c.pc != 0x0013D16Cu) [[unlikely]] return; }
L_0013D16C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D174u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x0013D174u) [[unlikely]] return; }
L_0013D174:
    c.f[1] = ld32((c.r[18].w[0] + 48u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D190u); c.f[21] = fp::add(c.f[21], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013D190u) [[unlikely]] return; }
L_0013D190:
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = c.f[21] ^ fp::kSign;  if (t) { goto L_0013D2A8; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0013D2A8; } }
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    c.f[1] = ld32((c.r[17].w[0] + 144u));
    c.f[0] = fp::mul(c.f[0], c.f[22]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 128u);  if (t) { goto L_0013D2A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D1D0u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0013D1D0u) [[unlikely]] return; }
L_0013D1D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D1D8u); set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0013D1D8u) [[unlikely]] return; }
L_0013D1D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D1E8u); set32(c.r[5], c.r[5].w[0] + 19072u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0013D1E8u) [[unlikely]] return; }
L_0013D1E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013D2B0; } }
L_0013D1F0:
    st32((c.r[16].w[0]), 0u);
    c.f[12] = ld32((c.r[17].w[0] + 144u));
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D204u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x0013D204u) [[unlikely]] return; }
L_0013D204:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D214u); st32((c.r[16].w[0]), c.f[22]);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0013D214u) [[unlikely]] return; }
L_0013D214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D21Cu); set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0013D21Cu) [[unlikely]] return; }
L_0013D21C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D22Cu); set32(c.r[5], c.r[5].w[0] + 19072u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0013D22Cu) [[unlikely]] return; }
L_0013D22C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013D2B0; } }
    c.budget -= 1;
L_0013D238:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = c.f[21] ^ fp::kSign;  if (t) { goto L_0013D258; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { goto L_0013D260; } }
    c.budget -= 1;
L_0013D258:
    st32((c.r[16].w[0]), c.f[21]);
    c.budget -= 2;
L_0013D260:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D26Cu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0013D26Cu) [[unlikely]] return; }
L_0013D26C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D274u); set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0013D274u) [[unlikely]] return; }
L_0013D274:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D284u); set32(c.r[5], c.r[5].w[0] + 19072u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0013D284u) [[unlikely]] return; }
L_0013D284:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013D2B0; } }
    c.budget -= 1;
L_0013D290:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D2A0u); set32(c.r[4], c.r[4].w[0] + 19072u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013D2A0u) [[unlikely]] return; }
L_0013D2A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013D2B0; } }
L_0013D2A8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0013D2B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0013D2E0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 208u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D318u); set32(c.r[5], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_002E(c, 117u, depth + 1u); else { c.pc = 0x001B9AF0u; return; } if (c.pc != 0x0013D318u) [[unlikely]] return; }
L_0013D318:
    set32(c.r[16], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D328u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x00127450u; return; } if (c.pc != 0x0013D328u) [[unlikely]] return; }
L_0013D328:
    c.f[4] = ld32((c.r[20].w[0] + 48u));
    c.r[4].d[0] = 0ull + 0ull;
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.r[3].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.r[2].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[3] = ld32((c.r[29].w[0] + 208u));
    c.f[6] = fp::add(c.f[2], c.f[4]);
    c.f[2] = fp::add(c.f[0], c.f[4]);
    c.f[0] = c.f[6] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[5] = fp::add(c.f[1], c.f[4]);  if (t) { goto L_0013D370; } }
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[6]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0013D370; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0013D370:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013D3B0; } }
    c.f[1] = ld32((c.r[29].w[0] + 212u));
    c.f[0] = c.f[5] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013D3A0; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[5]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0013D3A0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0013D3A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013D3B0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 2;
L_0013D3B0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0013D3F0; } }
    c.f[1] = ld32((c.r[29].w[0] + 216u));
    c.f[0] = c.f[2] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013D3E0; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0013D3E0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0013D3E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013D3F0; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 2;
L_0013D3F0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013D6D8; } }
    st32((c.r[29].w[0] + 236u), 0u);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[29].w[0] + 144u);
    c.budget -= 4;
L_0013D408:
    set32(c.r[3], ld32((c.r[29].w[0] + 236u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55550000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[2].d[0] = c.r[2].d[0] | 21846ull;
    set32(c.r[5], c.r[20].w[0] + 16u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D444u); set32(c.r[6], c.r[2].w[0] + 272u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013D444u) [[unlikely]] return; }
L_0013D444:
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D45Cu); set32(c.r[5], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0013D45Cu) [[unlikely]] return; }
L_0013D45C:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D468u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x0013D468u) [[unlikely]] return; }
L_0013D468:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0013D488; } }
    c.f[20] = 0u;
    c.budget -= 1;
L_0013D488:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[12] = c.f[20];  if (t) { goto L_0013D4C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D4A4u);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x0013D4A4u) [[unlikely]] return; }
L_0013D4A4:
    c.f[1] = ld32((c.r[20].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0013D4C8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { goto L_0013D4E0; } }
L_0013D4C8:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0013D4E0; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0013D4E0:
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 236u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    c.r[2].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013D408u | kUnwind; return; } goto L_0013D408; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0013D690; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013D5E0; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0013D550; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0013D528; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013D6C8; } }
L_0013D528:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0013D548; } }
    set32(c.r[5], c.r[20].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D540u); set32(c.r[4], c.r[4].w[0] + 19072u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013D540u) [[unlikely]] return; }
L_0013D540:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013D6D0; } }
L_0013D548:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013D6E0; } }
L_0013D550:
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55550000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[2].d[0] = c.r[2].d[0] | 21846ull;
    set32(c.r[5], c.r[20].w[0] + 16u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D58Cu); set32(c.r[6], c.r[2].w[0] + 272u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013D58Cu) [[unlikely]] return; }
L_0013D58C:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D5A4u); set32(c.r[5], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0013D5A4u) [[unlikely]] return; }
L_0013D5A4:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D5C0u); set32(c.r[5], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0013D5C0u) [[unlikely]] return; }
L_0013D5C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], c.r[20].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D5D4u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013D5D4u) [[unlikely]] return; }
L_0013D5D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013D6D0; } }
    c.budget -= 1;
L_0013D5E0:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D5ECu); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 72u, depth + 1u); else { c.pc = 0x00144D30u; return; } if (c.pc != 0x0013D5ECu) [[unlikely]] return; }
L_0013D5EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013D688; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D60Cu); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013D60Cu) [[unlikely]] return; }
L_0013D60C:
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[16], c.r[29].w[0] + 128u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D628u); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013D628u) [[unlikely]] return; }
L_0013D628:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D638u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013D638u) [[unlikely]] return; }
L_0013D638:
    set32(c.r[5], c.r[20].w[0] + 16u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D648u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013D648u) [[unlikely]] return; }
L_0013D648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D650u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0013D650u) [[unlikely]] return; }
L_0013D650:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D65Cu); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0013D65Cu) [[unlikely]] return; }
L_0013D65C:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D66Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0013D66Cu) [[unlikely]] return; }
L_0013D66C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D680u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x0013D680u) [[unlikely]] return; }
L_0013D680:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013D6D0; } }
L_0013D688:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013D6E0; } }
L_0013D690:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D69Cu); set32(c.r[5], c.r[29].w[0] + 236u);  if (depth < kMaxDepth) unit_0011(c, 75u, depth + 1u); else { c.pc = 0x00144DC0u; return; } if (c.pc != 0x0013D69Cu) [[unlikely]] return; }
L_0013D69C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013D6C8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19072u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D6C0u); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013D6C0u) [[unlikely]] return; }
L_0013D6C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013D6D0; } }
L_0013D6C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013D6E0; } }
L_0013D6D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013D6E0; } }
L_0013D6D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0013D6E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_0013D710:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 14;
L_0013D748:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[21].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D758u); set32(c.r[6], c.r[20].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013D758u) [[unlikely]] return; }
L_0013D758:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D764u); set32(c.r[5], c.r[17].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0013D764u) [[unlikely]] return; }
L_0013D764:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D770u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x0013D770u) [[unlikely]] return; }
L_0013D770:
    c.f[2] = ld32((c.r[21].w[0] + 48u));
    c.f[1] = ld32((c.r[20].w[0] + 192u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[29].w[0] + 192u);  if (t) { goto L_0013D808; } }
    set32(c.r[5], c.r[17].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D794u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0013D794u) [[unlikely]] return; }
L_0013D794:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[21].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D7A4u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013D7A4u) [[unlikely]] return; }
L_0013D7A4:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D7B4u); set32(c.r[6], c.r[17].w[0] + 144u);  if (depth < kMaxDepth) unit_0011(c, 65u, depth + 1u); else { c.pc = 0x00144C30u; return; } if (c.pc != 0x0013D7B4u) [[unlikely]] return; }
L_0013D7B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013D808; } }
    c.f[0] = 0u;
    set32(c.r[2], c.r[18].w[0] << 4);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);  if (t) { goto L_0013D7D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[20].w[0] + 192u));  if (t) { goto L_0013D7E0; } }
L_0013D7D8:
    c.f[0] = ld32((c.r[20].w[0] + 192u));
    c.f[12] = c.f[0] ^ fp::kSign;
    c.budget -= 2;
L_0013D7E0:
    set32(c.r[5], c.r[2].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D7ECu); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0013D7ECu) [[unlikely]] return; }
L_0013D7EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D800u); set32(c.r[6], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x0013D800u) [[unlikely]] return; }
L_0013D800:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013DA20; } }
L_0013D808:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013D748u | kUnwind; return; } goto L_0013D748; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45FA0000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.f[20] = c.r[2].w[0];
    set32(c.r[19], c.r[19].w[0] + 2824u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[29].w[0] + 144u);
    c.budget -= 7;
L_0013D838:
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D850u); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013D850u) [[unlikely]] return; }
L_0013D850:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 1u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D868u); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013D868u) [[unlikely]] return; }
L_0013D868:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D878u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013D878u) [[unlikely]] return; }
L_0013D878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D880u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0013D880u) [[unlikely]] return; }
L_0013D880:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[21].w[0] + 16u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D894u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013D894u) [[unlikely]] return; }
L_0013D894:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D8A0u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0013D8A0u) [[unlikely]] return; }
L_0013D8A0:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0013D8B8; } }
    c.r[18].d[0] = c.r[18].d[0] | 2ull;
    c.budget -= 1;
L_0013D8B8:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[21].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D8C8u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013D8C8u) [[unlikely]] return; }
L_0013D8C8:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D8D4u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0013D8D4u) [[unlikely]] return; }
L_0013D8D4:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0013D8F0; } }
    c.r[18].d[0] = c.r[18].d[0] | 1ull;
    c.budget -= 2;
L_0013D8F0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013D958; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0013D940; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0013D918; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013D970; } }
    c.budget -= 1;
L_0013D918:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D928u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0013D928u) [[unlikely]] return; }
L_0013D928:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D934u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0013D934u) [[unlikely]] return; }
L_0013D934:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013D978; } }
    c.budget -= 1;
L_0013D940:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D94Cu); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013D94Cu) [[unlikely]] return; }
L_0013D94C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013D978; } }
    c.budget -= 1;
L_0013D958:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D964u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013D964u) [[unlikely]] return; }
L_0013D964:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013D978; } }
    c.budget -= 1;
L_0013D970:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013DA20; } }
L_0013D978:
    set32(c.r[4], c.r[21].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D984u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0013D984u) [[unlikely]] return; }
L_0013D984:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0013D9A0; } }
    c.f[20] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D9A0u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013D9A0u) [[unlikely]] return; }
L_0013D9A0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013D838u | kUnwind; return; } goto L_0013D838; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45FA0000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0013DA18; } }
    c.f[1] = ld32((c.r[21].w[0] + 48u));
    c.f[0] = ld32((c.r[20].w[0] + 192u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], c.r[21].w[0] + 16u);  if (t) { goto L_0013DA18; } }
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D9ECu); set32(c.r[6], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013D9ECu) [[unlikely]] return; }
L_0013D9EC:
    c.f[12] = ld32((c.r[20].w[0] + 192u));
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D9FCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x0013D9FCu) [[unlikely]] return; }
L_0013D9FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DA10u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x0013DA10u) [[unlikely]] return; }
L_0013DA10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013DA20; } }
L_0013DA18:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0013DA20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0013DA50:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], 0u + 17u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 30u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 30u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0013DAD8; } }
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = ld32((c.r[16].w[0] + 144u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DA9Cu); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x0013DA9Cu) [[unlikely]] return; }
L_0013DA9C:
    c.f[20] = c.f[0];
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DAACu); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0013DAACu) [[unlikely]] return; }
L_0013DAAC:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[16].w[0] + 64u);  if (t) { goto L_0013DAD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DAC0u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0013DAC0u) [[unlikely]] return; }
L_0013DAC0:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013DAD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013DC68; } }
    c.budget -= 1;
L_0013DAD8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DAECu); set32(c.r[6], c.r[6].w[0] + 19072u);  if (depth < kMaxDepth) unit_0011(c, 37u, depth + 1u); else { c.pc = 0x00144460u; return; } if (c.pc != 0x0013DAECu) [[unlikely]] return; }
L_0013DAEC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0013DB00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0013DC68; } }
L_0013DB00:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[17].w[0] + 16u);
    set32(c.r[6], c.r[16].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DB14u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013DB14u) [[unlikely]] return; }
L_0013DB14:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DB20u); set32(c.r[5], c.r[16].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0013DB20u) [[unlikely]] return; }
L_0013DB20:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0013DB38; } }
    c.r[18].d[0] = c.r[18].d[0] | 1ull;
    c.budget -= 1;
L_0013DB38:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DB48u); set32(c.r[6], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013DB48u) [[unlikely]] return; }
L_0013DB48:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DB54u); set32(c.r[5], c.r[16].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0013DB54u) [[unlikely]] return; }
L_0013DB54:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0013DB70; } }
    c.r[18].d[0] = c.r[18].d[0] | 2ull;
    c.budget -= 2;
L_0013DB70:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0013DBF8; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0013DBE0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0013DBC8; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0013DBA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013DC00; } }
L_0013DBA0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DBB0u); set32(c.r[5], c.r[16].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0013DBB0u) [[unlikely]] return; }
L_0013DBB0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DBBCu); set32(c.r[5], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0013DBBCu) [[unlikely]] return; }
L_0013DBBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013DC00; } }
    c.budget -= 1;
L_0013DBC8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DBD4u); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013DBD4u) [[unlikely]] return; }
L_0013DBD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013DC00; } }
    c.budget -= 1;
L_0013DBE0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DBECu); set32(c.r[5], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013DBECu) [[unlikely]] return; }
L_0013DBEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013DC00; } }
    c.budget -= 1;
L_0013DBF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013DC68; } }
L_0013DC00:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DC0Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0013DC0Cu) [[unlikely]] return; }
L_0013DC0C:
    c.f[1] = ld32((c.r[16].w[0] + 144u));
    c.f[2] = ld32((c.r[17].w[0] + 48u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_0013DC60; } }
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DC30u); set32(c.r[6], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013DC30u) [[unlikely]] return; }
L_0013DC30:
    c.f[12] = ld32((c.r[17].w[0] + 48u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DC40u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x0013DC40u) [[unlikely]] return; }
L_0013DC40:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[6], c.r[17].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DC54u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x0013DC54u) [[unlikely]] return; }
L_0013DC54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013DC68; } }
    c.budget -= 1;
L_0013DC60:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0013DC68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0013DC90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0013DCA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0013DCB0:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[20].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 16;
L_0013DCF0:
    set32(c.r[4], c.r[21].w[0] + 48u);
    set32(c.r[5], c.r[18].w[0] + 144u);
    set32(c.r[6], c.r[20].w[0] + 176u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DD04u); set32(c.r[7], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0010(c, 498u, depth + 1u); else { c.pc = 0x00143BB0u; return; } if (c.pc != 0x0013DD04u) [[unlikely]] return; }
L_0013DD04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 336u);  if (t) { goto L_0013DE58; } }
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DD18u); set32(c.r[6], c.r[18].w[0] + 144u);  if (depth < kMaxDepth) unit_0011(c, 65u, depth + 1u); else { c.pc = 0x00144C30u; return; } if (c.pc != 0x0013DD18u) [[unlikely]] return; }
L_0013DD18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013DE58; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013DDE0; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 320u);  if (t) { goto L_0013DD58; } }
    set32(c.r[5], c.r[21].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DD50u); set32(c.r[6], c.r[20].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013DD50u) [[unlikely]] return; }
L_0013DD50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013DDB0; } }
L_0013DD58:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 562u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013DD78; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 264u)));
    c.budget -= 2;
L_0013DD78:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013DDB0; } }
    c.f[0] = ld32((c.r[3].w[0] + 2096u));
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[5], c.r[29].w[0] + 240u);
    set32(c.r[6], c.r[20].w[0] + 176u);
    st32((c.r[29].w[0] + 240u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 2100u));
    st32((c.r[29].w[0] + 244u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 2104u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DDB0u); st32((c.r[29].w[0] + 248u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013DDB0u) [[unlikely]] return; }
L_0013DDB0:
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DDC4u); set32(c.r[5], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0013DDC4u) [[unlikely]] return; }
L_0013DDC4:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013DDE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E030; } }
L_0013DDE0:
    set32(c.r[5], c.r[21].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DDF0u); set32(c.r[6], c.r[20].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013DDF0u) [[unlikely]] return; }
L_0013DDF0:
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] + 144u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DE08u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0013DE08u) [[unlikely]] return; }
L_0013DE08:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0013DE24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[20].w[0] + 192u));  if (t) { goto L_0013DE2C; } }
L_0013DE24:
    c.f[0] = ld32((c.r[20].w[0] + 192u));
    c.f[12] = c.f[0] ^ fp::kSign;
    c.budget -= 2;
L_0013DE2C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DE38u); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0013DE38u) [[unlikely]] return; }
L_0013DE38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], c.r[29].w[0] + 336u);
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DE4Cu); set32(c.r[6], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x0013DE4Cu) [[unlikely]] return; }
L_0013DE4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013E030; } }
    c.budget -= 1;
L_0013DE58:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 16u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013DCF0u | kUnwind; return; } goto L_0013DCF0; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[19], 0u - 1u);
    set32(c.r[18], c.r[18].w[0] + 2824u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[22], c.r[29].w[0] + 304u);
    set32(c.r[17], c.r[29].w[0] + 272u);
    c.budget -= 7;
L_0013DE88:
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 1u));
    set32(c.r[6], c.r[29].w[0] + 144u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] + 48u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DEB0u); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0010(c, 513u, depth + 1u); else { c.pc = 0x00143DD0u; return; } if (c.pc != 0x0013DEB0u) [[unlikely]] return; }
L_0013DEB0:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[21].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DEC0u); set32(c.r[6], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_0010(c, 520u, depth + 1u); else { c.pc = 0x00143E50u; return; } if (c.pc != 0x0013DEC0u) [[unlikely]] return; }
L_0013DEC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0013DEE0; } }
    set32(c.r[5], c.r[21].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DED4u); set32(c.r[4], c.r[4].w[0] + 19072u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013DED4u) [[unlikely]] return; }
L_0013DED4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013E030; } }
    c.budget -= 1;
L_0013DEE0:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DEECu); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0013DEECu) [[unlikely]] return; }
L_0013DEEC:
    c.f[20] = c.f[0];
    c.f[1] = ld32((c.r[20].w[0] + 192u));
    c.f[0] = ld32((c.r[21].w[0] + 144u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u - 1u);  if (t) { goto L_0013DF40; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0013DF20; } }
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[21]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0013DF40; } }
    c.budget -= 1;
L_0013DF20:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DF2Cu); set32(c.r[5], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013DF2Cu) [[unlikely]] return; }
L_0013DF2C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DF38u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013DF38u) [[unlikely]] return; }
L_0013DF38:
    c.f[21] = c.f[20];
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0013DF40:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013DE88u | kUnwind; return; } goto L_0013DE88; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013DF68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E030; } }
    c.budget -= 1;
L_0013DF68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DF70u); set32(c.r[4], ld32((c.r[21].w[0] + 12u)));  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0013DF70u) [[unlikely]] return; }
L_0013DF70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DF80u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x0013DF80u) [[unlikely]] return; }
L_0013DF80:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DF8Cu); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0013DF8Cu) [[unlikely]] return; }
L_0013DF8C:
    set32(c.r[4], c.r[21].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DF98u); set32(c.r[5], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0013DF98u) [[unlikely]] return; }
L_0013DF98:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DFA4u); set32(c.r[5], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x00127450u; return; } if (c.pc != 0x0013DFA4u) [[unlikely]] return; }
L_0013DFA4:
    c.f[0] = ld32((c.r[21].w[0] + 148u));
    c.f[1] = ld32((c.r[29].w[0] + 340u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0013E028; } }
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0013E028; } }
    c.f[0] = ld32((c.r[29].w[0] + 336u));
    c.f[1] = ld32((c.r[29].w[0] + 344u));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DFDCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0013DFDCu) [[unlikely]] return; }
L_0013DFDC:
    c.f[1] = ld32((c.r[21].w[0] + 144u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[29].w[0] + 336u);  if (t) { goto L_0013E028; } }
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DFF8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013DFF8u) [[unlikely]] return; }
L_0013DFF8:
    c.f[12] = ld32((c.r[21].w[0] + 144u));
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E008u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x0013E008u) [[unlikely]] return; }
L_0013E008:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E01Cu); set32(c.r[6], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x0013E01Cu) [[unlikely]] return; }
L_0013E01C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013E030; } }
    c.budget -= 1;
L_0013E028:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0013E030:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_0013E060:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 128u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[18].w[0] + 48u);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E098u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0010(c, 520u, depth + 1u); else { c.pc = 0x00143E50u; return; } if (c.pc != 0x0013E098u) [[unlikely]] return; }
L_0013E098:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[29].w[0] + 144u);  if (t) { goto L_0013E3C0; } }
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E0ACu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0013E0ACu) [[unlikely]] return; }
L_0013E0AC:
    c.f[2] = ld32((c.r[18].w[0] + 144u));
    c.f[1] = ld32((c.r[16].w[0] + 144u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013E0D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E3E0; } }
    c.budget -= 1;
L_0013E0D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E0D8u); set32(c.r[4], ld32((c.r[18].w[0] + 12u)));  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0013E0D8u) [[unlikely]] return; }
L_0013E0D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E0E8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x0013E0E8u) [[unlikely]] return; }
L_0013E0E8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E0F4u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0013E0F4u) [[unlikely]] return; }
L_0013E0F4:
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E100u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0013E100u) [[unlikely]] return; }
L_0013E100:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E10Cu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x00127450u; return; } if (c.pc != 0x0013E10Cu) [[unlikely]] return; }
L_0013E10C:
    c.f[0] = ld32((c.r[18].w[0] + 148u));
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0013E3D8; } }
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0013E3D8; } }
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.f[1] = ld32((c.r[29].w[0] + 120u));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E144u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0013E144u) [[unlikely]] return; }
L_0013E144:
    c.f[1] = ld32((c.r[18].w[0] + 144u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_0013E3D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E15Cu); set32(c.r[5], c.r[16].w[0] + 112u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013E15Cu) [[unlikely]] return; }
L_0013E15C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E16Cu); set32(c.r[6], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013E16Cu) [[unlikely]] return; }
L_0013E16C:
    c.f[4] = ld32((c.r[29].w[0] + 80u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[7] = ld32((c.r[29].w[0] + 88u));
    c.f[3] = ld32((c.r[29].w[0] + 96u));
    c.f[6] = ld32((c.r[29].w[0] + 104u));
    c.f[2] = c.r[2].w[0];
    c.f[5] = ld32((c.r[18].w[0] + 144u));
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[20] = fp::add(c.facc, fp::mul(c.f[7], c.f[7]));
    c.facc = fp::mul(c.f[4], c.f[3]);
    c.f[4] = fp::add(c.facc, fp::mul(c.f[7], c.f[6]));
    c.f[21] = fp::mul(c.f[2], c.f[4]);
    c.f[1] = c.r[2].w[0];
    c.f[3] = fp::mul(c.f[3], c.f[3]);
    c.f[2] = fp::mul(c.f[6], c.f[6]);
    c.facc = fp::add(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[5], c.f[5]));
    c.f[2] = fp::mul(c.f[1], c.f[2]);
    c.f[1] = fp::mul(c.f[21], c.f[21]);
    c.f[12] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 27;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013E1E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E3E0; } }
L_0013E1E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E1E8u);  if (depth < kMaxDepth) unit_0009(c, 160u, depth + 1u); else { c.pc = 0x00126100u; return; } if (c.pc != 0x0013E1E8u) [[unlikely]] return; }
L_0013E1E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], c.r[16].w[0] + 112u);
    c.f[22] = c.f[21] ^ fp::kSign;
    c.r[17].d[0] = 0ull + 0ull;
    c.f[21] = c.f[0];
    c.f[20] = fp::mul(c.f[1], c.f[20]);
    c.f[0] = fp::add(c.f[22], c.f[0]);
    fpu_div(c, 12u, c.f[0], c.f[20]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E220u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0013E220u) [[unlikely]] return; }
L_0013E220:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E230u); set32(c.r[6], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x0013E230u) [[unlikely]] return; }
L_0013E230:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E23Cu); set32(c.r[5], c.r[16].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0013E23Cu) [[unlikely]] return; }
L_0013E23C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0013E258; } }
    c.r[17].d[0] = c.r[17].d[0] | 1ull;
    c.budget -= 2;
L_0013E258:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E268u); set32(c.r[6], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013E268u) [[unlikely]] return; }
L_0013E268:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E274u); set32(c.r[5], c.r[16].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0013E274u) [[unlikely]] return; }
L_0013E274:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0013E290; } }
    c.r[17].d[0] = c.r[17].d[0] | 2ull;
    c.budget -= 2;
L_0013E290:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[0] = fp::sub(c.f[22], c.f[21]);
    set32(c.r[5], c.r[16].w[0] + 112u);
    fpu_div(c, 12u, c.f[0], c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E2B0u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0013E2B0u) [[unlikely]] return; }
L_0013E2B0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E2C0u); set32(c.r[6], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x0013E2C0u) [[unlikely]] return; }
L_0013E2C0:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E2CCu); set32(c.r[5], c.r[16].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0013E2CCu) [[unlikely]] return; }
L_0013E2CC:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0013E2E8; } }
    c.r[17].d[0] = c.r[17].d[0] | 4ull;
    c.budget -= 2;
L_0013E2E8:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E2F8u); set32(c.r[6], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013E2F8u) [[unlikely]] return; }
L_0013E2F8:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E304u); set32(c.r[5], c.r[16].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0013E304u) [[unlikely]] return; }
L_0013E304:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0013E320; } }
    c.r[17].d[0] = c.r[17].d[0] | 8ull;
    c.budget -= 2;
L_0013E320:
    c.r[2].d[0] = c.r[17].d[0] & 3ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] & 12ull;  if (t) { goto L_0013E388; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_0013E388; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E33Cu); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0013E33Cu) [[unlikely]] return; }
L_0013E33C:
    set32(c.r[5], c.r[16].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E34Cu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0013E34Cu) [[unlikely]] return; }
L_0013E34C:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0013E370; } }
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E364u); set32(c.r[4], c.r[4].w[0] + 19072u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013E364u) [[unlikely]] return; }
L_0013E364:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E3B8; } }
    c.budget -= 1;
L_0013E370:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E380u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013E380u) [[unlikely]] return; }
L_0013E380:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E3B8; } }
L_0013E388:
    c.r[2].d[0] = c.r[17].d[0] & 12ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0013E3A8; } }
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E3A0u); set32(c.r[4], c.r[4].w[0] + 19072u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013E3A0u) [[unlikely]] return; }
L_0013E3A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E3B8; } }
L_0013E3A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E3B8u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013E3B8u) [[unlikely]] return; }
L_0013E3B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013E3E0; } }
L_0013E3C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E3D0u); set32(c.r[4], c.r[4].w[0] + 19072u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013E3D0u) [[unlikely]] return; }
L_0013E3D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013E3E0; } }
L_0013E3D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0013E3E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0013E410:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[20], c.r[20].w[0] + 2656u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[29].w[0] + 208u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 18;
L_0013E458:
    c.r[2].d[0] = ld8((c.r[20].w[0]));
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E474u); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013E474u) [[unlikely]] return; }
L_0013E474:
    c.r[2].d[0] = ld8((c.r[20].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E490u); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013E490u) [[unlikely]] return; }
L_0013E490:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 2;
L_0013E498:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55550000u);
    c.r[2].d[0] = c.r[2].d[0] | 21846ull;
    set32(c.r[3], c.r[19].w[0] >> 31);
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E4C8u); set32(c.r[5], c.r[2].w[0] + 272u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013E4C8u) [[unlikely]] return; }
L_0013E4C8:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E4D8u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013E4D8u) [[unlikely]] return; }
L_0013E4D8:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E4E4u); set32(c.r[5], c.r[16].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0013E4E4u) [[unlikely]] return; }
L_0013E4E4:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[21] = c.f[0];  if (t) { goto L_0013E500; } }
    c.r[18].d[0] = c.r[18].d[0] | 1ull;
    c.budget -= 2;
L_0013E500:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E510u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013E510u) [[unlikely]] return; }
L_0013E510:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E51Cu); set32(c.r[5], c.r[16].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0013E51Cu) [[unlikely]] return; }
L_0013E51C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[20] = c.f[0];  if (t) { goto L_0013E538; } }
    c.r[18].d[0] = c.r[18].d[0] | 2ull;
    c.budget -= 2;
L_0013E538:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0013E680; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0013E670; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013E5F0; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0013E568; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E670; } }
    c.budget -= 1;
L_0013E568:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E578u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013E578u) [[unlikely]] return; }
L_0013E578:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E584u); set32(c.r[5], c.r[16].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0013E584u) [[unlikely]] return; }
L_0013E584:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0013E5A8; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0013E5C0; } }
    c.budget -= 1;
L_0013E5A8:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E5B8u); set32(c.r[5], c.r[16].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0013E5B8u) [[unlikely]] return; }
L_0013E5B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E5D8; } }
L_0013E5C0:
    set32(c.r[4], c.r[29].w[0] + 176u);
    fpu_div(c, 12u, c.f[20], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E5D8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0013E5D8u) [[unlikely]] return; }
L_0013E5D8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E5E4u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0013E5E4u) [[unlikely]] return; }
L_0013E5E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E670; } }
    c.budget -= 1;
L_0013E5F0:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E600u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013E600u) [[unlikely]] return; }
L_0013E600:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E60Cu); set32(c.r[5], c.r[16].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0013E60Cu) [[unlikely]] return; }
L_0013E60C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0013E630; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0013E648; } }
    c.budget -= 1;
L_0013E630:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.f[12] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E640u); set32(c.r[5], c.r[16].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0013E640u) [[unlikely]] return; }
L_0013E640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E660; } }
L_0013E648:
    set32(c.r[4], c.r[29].w[0] + 176u);
    fpu_div(c, 12u, c.f[21], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E660u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0013E660u) [[unlikely]] return; }
L_0013E660:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E66Cu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0013E66Cu) [[unlikely]] return; }
L_0013E66C:
    c.budget -= 1;
L_0013E670:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013E498u | kUnwind; return; } goto L_0013E498; } }
L_0013E680:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013E698; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E6A8; } }
    c.budget -= 1;
L_0013E698:
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.r[2].d[0] = c.r[23].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013E458u | kUnwind; return; } goto L_0013E458; } }
L_0013E6A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_0013E6E0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.r[30].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[23], c.r[23].w[0] + 2824u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[29].w[0] + 224u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 20;
L_0013E730:
    c.r[2].d[0] = ld8((c.r[23].w[0]));
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E748u); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013E748u) [[unlikely]] return; }
L_0013E748:
    c.r[2].d[0] = ld8((c.r[23].w[0] + 1u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E760u); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013E760u) [[unlikely]] return; }
L_0013E760:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
L_0013E770:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55550000u);
    c.r[2].d[0] = c.r[2].d[0] | 21846ull;
    set32(c.r[3], c.r[20].w[0] >> 31);
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[19].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E7A0u); set32(c.r[5], c.r[2].w[0] + 272u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013E7A0u) [[unlikely]] return; }
L_0013E7A0:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E7B0u); set32(c.r[6], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013E7B0u) [[unlikely]] return; }
L_0013E7B0:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E7BCu); set32(c.r[5], c.r[16].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0013E7BCu) [[unlikely]] return; }
L_0013E7BC:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[21] = c.f[0];  if (t) { goto L_0013E7D8; } }
    c.r[19].d[0] = c.r[19].d[0] | 1ull;
    c.budget -= 2;
L_0013E7D8:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E7E8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013E7E8u) [[unlikely]] return; }
L_0013E7E8:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E7F4u); set32(c.r[5], c.r[16].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0013E7F4u) [[unlikely]] return; }
L_0013E7F4:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[20] = c.f[0];  if (t) { goto L_0013E810; } }
    c.r[19].d[0] = c.r[19].d[0] | 2ull;
    c.budget -= 2;
L_0013E810:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0013E958; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0013E948; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013E8C8; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0013E840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E948; } }
    c.budget -= 1;
L_0013E840:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E850u); set32(c.r[6], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013E850u) [[unlikely]] return; }
L_0013E850:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E85Cu); set32(c.r[5], c.r[16].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0013E85Cu) [[unlikely]] return; }
L_0013E85C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0013E880; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0013E898; } }
    c.budget -= 1;
L_0013E880:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E890u); set32(c.r[5], c.r[16].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0013E890u) [[unlikely]] return; }
L_0013E890:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E8B0; } }
L_0013E898:
    set32(c.r[4], c.r[29].w[0] + 192u);
    fpu_div(c, 12u, c.f[20], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E8B0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0013E8B0u) [[unlikely]] return; }
L_0013E8B0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E8BCu); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0013E8BCu) [[unlikely]] return; }
L_0013E8BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[18].d[0] | 2ull;  if (t) { goto L_0013E948; } }
    c.budget -= 1;
L_0013E8C8:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E8D8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013E8D8u) [[unlikely]] return; }
L_0013E8D8:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E8E4u); set32(c.r[5], c.r[16].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0013E8E4u) [[unlikely]] return; }
L_0013E8E4:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0013E908; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0013E920; } }
    c.budget -= 1;
L_0013E908:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[12] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E918u); set32(c.r[5], c.r[16].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0013E918u) [[unlikely]] return; }
L_0013E918:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013E938; } }
L_0013E920:
    set32(c.r[4], c.r[29].w[0] + 192u);
    fpu_div(c, 12u, c.f[21], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E938u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0013E938u) [[unlikely]] return; }
L_0013E938:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E944u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0013E944u) [[unlikely]] return; }
L_0013E944:
    c.r[18].d[0] = c.r[18].d[0] | 1ull;
    c.budget -= 1;
L_0013E948:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013E770u | kUnwind; return; } goto L_0013E770; } }
L_0013E958:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0013EA40; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0013E9D8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013E9C0; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0013E9A8; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0013E990; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013EA38; } }
L_0013E990:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], c.r[22].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E9A0u); set32(c.r[4], c.r[4].w[0] + 19072u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013E9A0u) [[unlikely]] return; }
L_0013E9A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013EA38; } }
L_0013E9A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E9B8u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013E9B8u) [[unlikely]] return; }
L_0013E9B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013EA38; } }
L_0013E9C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E9D0u); set32(c.r[4], c.r[4].w[0] + 19072u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013E9D0u) [[unlikely]] return; }
L_0013E9D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013EA38; } }
L_0013E9D8:
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E9ECu); set32(c.r[4], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0013E9ECu) [[unlikely]] return; }
L_0013E9EC:
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    c.f[20] = c.f[0];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EA04u); set32(c.r[4], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0013EA04u) [[unlikely]] return; }
L_0013EA04:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0013EA28; } }
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EA1Cu); set32(c.r[4], c.r[4].w[0] + 19072u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013EA1Cu) [[unlikely]] return; }
L_0013EA1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013EA38; } }
    c.budget -= 1;
L_0013EA28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EA38u); set32(c.r[4], c.r[4].w[0] + 19072u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013EA38u) [[unlikely]] return; }
L_0013EA38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013EA58; } }
L_0013EA40:
    set32(c.r[30], c.r[30].w[0] + 1u);
    c.r[2].d[0] = c.r[30].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[23], c.r[23].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013E730u | kUnwind; return; } goto L_0013E730; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0013EA58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_0013EA90:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    set32(c.r[4], c.r[29].w[0] + 240u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[5], c.r[22].w[0] + 48u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[29].w[0] + 176u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[29].w[0] + 176u), 0u);
    st32((c.r[29].w[0] + 180u), 0u);
    st32((c.r[29].w[0] + 184u), 0u);
    st32((c.r[29].w[0] + 188u), 0u);
    st32((c.r[29].w[0] + 192u), 0u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EAF8u); st32((c.r[29].w[0] + 196u), 0u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013EAF8u) [[unlikely]] return; }
L_0013EAF8:
    set32(c.r[16], c.r[29].w[0] + 256u);
    set32(c.r[5], c.r[22].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EB08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013EB08u) [[unlikely]] return; }
L_0013EB08:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EB14u); set32(c.r[5], c.r[22].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013EB14u) [[unlikely]] return; }
L_0013EB14:
    set32(c.r[30], c.r[29].w[0] + 188u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[30].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[29].w[0] + 192u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[21].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 7;
L_0013EB30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55550000u);
    c.r[2].d[0] = c.r[2].d[0] | 21846ull;
    set32(c.r[3], c.r[21].w[0] >> 31);
    mmi::mult(c, 0, c.r[2].w[0], c.r[21].w[0]);
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.r[19].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EB60u); set32(c.r[5], c.r[2].w[0] + 272u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013EB60u) [[unlikely]] return; }
L_0013EB60:
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EB70u); set32(c.r[6], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013EB70u) [[unlikely]] return; }
L_0013EB70:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EB7Cu); set32(c.r[5], c.r[18].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0013EB7Cu) [[unlikely]] return; }
L_0013EB7C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[21] = c.f[0];  if (t) { goto L_0013EB98; } }
    c.r[19].d[0] = c.r[19].d[0] | 1ull;
    c.budget -= 2;
L_0013EB98:
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EBA8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013EBA8u) [[unlikely]] return; }
L_0013EBA8:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EBB4u); set32(c.r[5], c.r[18].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0013EBB4u) [[unlikely]] return; }
L_0013EBB4:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[20] = c.f[0];  if (t) { goto L_0013EBD0; } }
    c.r[19].d[0] = c.r[19].d[0] | 2ull;
    c.budget -= 2;
L_0013EBD0:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0013ED30; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0013ECA8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0013EC20; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0013EC00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013ED30; } }
L_0013EC00:
    set32(c.r[20], c.r[20].w[0] + 1u);
    st32((c.r[17].w[0]), c.r[21].w[0]);
    c.r[1].d[0] = c.r[20].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { goto L_0013ED30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013EDF8; } }
    c.budget -= 1;
L_0013EC20:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EC30u); set32(c.r[6], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013EC30u) [[unlikely]] return; }
L_0013EC30:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EC3Cu); set32(c.r[5], c.r[18].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0013EC3Cu) [[unlikely]] return; }
L_0013EC3C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0013EC60; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0013EC78; } }
    c.budget -= 1;
L_0013EC60:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EC70u); set32(c.r[5], c.r[18].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0013EC70u) [[unlikely]] return; }
L_0013EC70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013EC90; } }
L_0013EC78:
    set32(c.r[4], c.r[29].w[0] + 208u);
    fpu_div(c, 12u, c.f[20], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EC90u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0013EC90u) [[unlikely]] return; }
L_0013EC90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EC9Cu); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0013EC9Cu) [[unlikely]] return; }
L_0013EC9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[30].w[0]), c.r[21].w[0]);  if (t) { goto L_0013ED30; } }
    c.budget -= 1;
L_0013ECA8:
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ECB8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013ECB8u) [[unlikely]] return; }
L_0013ECB8:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ECC4u); set32(c.r[5], c.r[18].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0013ECC4u) [[unlikely]] return; }
L_0013ECC4:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0013ECE8; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0013ED00; } }
    c.budget -= 1;
L_0013ECE8:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.f[12] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ECF8u); set32(c.r[5], c.r[18].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0013ECF8u) [[unlikely]] return; }
L_0013ECF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013ED18; } }
L_0013ED00:
    set32(c.r[4], c.r[29].w[0] + 208u);
    fpu_div(c, 12u, c.f[21], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ED18u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0013ED18u) [[unlikely]] return; }
L_0013ED18:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ED24u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0013ED24u) [[unlikely]] return; }
L_0013ED24:
    set32(c.r[2], c.r[29].w[0] + 192u);
    st32((c.r[2].w[0]), c.r[21].w[0]);
    c.budget -= 3;
L_0013ED30:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013EB30u | kUnwind; return; } goto L_0013EB30; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0013EDD0; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_0013EDB0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_0013ED90; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0013ED70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013EDF0; } }
L_0013ED70:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ED84u); set32(c.r[6], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_000F(c, 309u, depth + 1u); else { c.pc = 0x0013EE30u; return; } if (c.pc != 0x0013ED84u) [[unlikely]] return; }
L_0013ED84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013EDF8; } }
    c.budget -= 1;
L_0013ED90:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 240u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EDA4u); set32(c.r[7], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 325u, depth + 1u); else { c.pc = 0x0013F010u; return; } if (c.pc != 0x0013EDA4u) [[unlikely]] return; }
L_0013EDA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013EDF8; } }
    c.budget -= 1;
L_0013EDB0:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 240u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EDC4u); set32(c.r[7], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 334u, depth + 1u); else { c.pc = 0x0013F190u; return; } if (c.pc != 0x0013EDC4u) [[unlikely]] return; }
L_0013EDC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013EDF8; } }
    c.budget -= 1;
L_0013EDD0:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 240u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EDE4u); set32(c.r[7], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 345u, depth + 1u); else { c.pc = 0x0013F2C0u; return; } if (c.pc != 0x0013EDE4u) [[unlikely]] return; }
L_0013EDE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013EDF8; } }
    c.budget -= 1;
L_0013EDF0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0013EDF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_0013EE30:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[7].w[0])));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0013EF40; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x45FA0000u);  if (t) { goto L_0013EF40; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.f[22] = c.r[2].w[0];
    c.r[18].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
L_0013EE90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55550000u);
    c.r[2].d[0] = c.r[2].d[0] | 21846ull;
    set32(c.r[3], c.r[18].w[0] >> 31);
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[19].w[0] + 16u);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EEC0u); set32(c.r[6], c.r[2].w[0] + 272u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013EEC0u) [[unlikely]] return; }
L_0013EEC0:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EECCu); set32(c.r[5], c.r[16].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0013EECCu) [[unlikely]] return; }
L_0013EECC:
    c.f[21] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EED8u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x0013EED8u) [[unlikely]] return; }
L_0013EED8:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EEE4u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x0013EEE4u) [[unlikely]] return; }
L_0013EEE4:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0013EEF8; } }
    c.f[22] = c.f[21];
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_0013EEF8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013EE90u | kUnwind; return; } goto L_0013EE90; } }
    set32(c.r[2], c.r[17].w[0] << 4);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.f[12] = c.f[22];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EF20u); set32(c.r[5], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0013EF20u) [[unlikely]] return; }
L_0013EF20:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], c.r[19].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EF34u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013EF34u) [[unlikely]] return; }
L_0013EF34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013EFE0; } }
    c.budget -= 1;
L_0013EF40:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0013EF78; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0013EF78; } }
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EF64u); set32(c.r[4], c.r[4].w[0] + 19072u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013EF64u) [[unlikely]] return; }
L_0013EF64:
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EF70u); set32(c.r[4], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013EF70u) [[unlikely]] return; }
L_0013EF70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013EF98; } }
L_0013EF78:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EF88u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013EF88u) [[unlikely]] return; }
L_0013EF88:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EF94u); set32(c.r[4], c.r[19].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013EF94u) [[unlikely]] return; }
L_0013EF94:
    c.budget -= 1;
L_0013EF98:
    set32(c.r[4], c.r[19].w[0] + 80u);
    set32(c.r[5], c.r[19].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EFA8u); set32(c.r[6], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013EFA8u) [[unlikely]] return; }
L_0013EFA8:
    set32(c.r[4], c.r[19].w[0] + 96u);
    set32(c.r[5], c.r[19].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EFB8u); set32(c.r[6], c.r[19].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013EFB8u) [[unlikely]] return; }
L_0013EFB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EFCCu); set32(c.r[5], c.r[19].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0013EFCCu) [[unlikely]] return; }
L_0013EFCC:
    set32(c.r[4], c.r[19].w[0] + 16u);
    set32(c.r[5], c.r[19].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EFDCu); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x0013EFDCu) [[unlikely]] return; }
L_0013EFDC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0013EFE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0013F010:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55550000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 21846ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[7].w[0])));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[2].w[0] + 272u);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F07Cu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013F07Cu) [[unlikely]] return; }
L_0013F07C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F094u); set32(c.r[5], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0013F094u) [[unlikely]] return; }
L_0013F094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F09Cu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x0013F09Cu) [[unlikely]] return; }
L_0013F09C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55550000u);
    c.r[2].d[0] = c.r[2].d[0] | 21846ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[20] = c.f[0];
    set32(c.r[5], c.r[18].w[0] + 16u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F0DCu); set32(c.r[6], c.r[2].w[0] + 272u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013F0DCu) [[unlikely]] return; }
L_0013F0DC:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F0F4u); set32(c.r[5], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0013F0F4u) [[unlikely]] return; }
L_0013F0F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F0FCu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x0013F0FCu) [[unlikely]] return; }
L_0013F0FC:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0013F110; } }
    c.f[20] = c.f[0];
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_0013F110:
    c.f[0] = ld32((c.r[19].w[0] + 144u));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013F128; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013F160; } }
L_0013F128:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.f[12] = c.f[20];
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F144u); set32(c.r[5], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0013F144u) [[unlikely]] return; }
L_0013F144:
    set32(c.r[2], c.r[16].w[0] << 4);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19072u);
    set32(c.r[5], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F15Cu); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013F15Cu) [[unlikely]] return; }
L_0013F15C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0013F160:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0013F190:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F1B4u); set32(c.r[5], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_0011(c, 72u, depth + 1u); else { c.pc = 0x00144D30u; return; } if (c.pc != 0x0013F1B4u) [[unlikely]] return; }
L_0013F1B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013F1C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013F2A0; } }
    c.budget -= 1;
L_0013F1C8:
    set32(c.r[3], ld32((c.r[29].w[0] + 200u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[6], c.r[29].w[0] + 96u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] + 48u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F1F0u); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0010(c, 513u, depth + 1u); else { c.pc = 0x00143DD0u; return; } if (c.pc != 0x0013F1F0u) [[unlikely]] return; }
L_0013F1F0:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F200u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0010(c, 520u, depth + 1u); else { c.pc = 0x00143E50u; return; } if (c.pc != 0x0013F200u) [[unlikely]] return; }
L_0013F200:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013F210; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013F2A0; } }
L_0013F210:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F21Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0013F21Cu) [[unlikely]] return; }
L_0013F21C:
    c.f[1] = ld32((c.r[16].w[0] + 144u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013F238; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013F2A0; } }
    c.budget -= 1;
L_0013F238:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F244u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013F244u) [[unlikely]] return; }
L_0013F244:
    set32(c.r[4], c.r[16].w[0] + 80u);
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F254u); set32(c.r[6], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013F254u) [[unlikely]] return; }
L_0013F254:
    set32(c.r[4], c.r[16].w[0] + 96u);
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F264u); set32(c.r[6], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013F264u) [[unlikely]] return; }
L_0013F264:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F278u); set32(c.r[5], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0013F278u) [[unlikely]] return; }
L_0013F278:
    set32(c.r[4], c.r[16].w[0] + 16u);
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F288u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x0013F288u) [[unlikely]] return; }
L_0013F288:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F298u); set32(c.r[4], c.r[4].w[0] + 19072u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013F298u) [[unlikely]] return; }
L_0013F298:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0013F2A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0013F2C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F2E4u); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_0011(c, 75u, depth + 1u); else { c.pc = 0x00144DC0u; return; } if (c.pc != 0x0013F2E4u) [[unlikely]] return; }
L_0013F2E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013F2F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013F4C0; } }
    c.budget -= 1;
L_0013F2F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[16].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F314u); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013F314u) [[unlikely]] return; }
L_0013F314:
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F320u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 203u, depth + 1u); else { c.pc = 0x00127360u; return; } if (c.pc != 0x0013F320u) [[unlikely]] return; }
L_0013F320:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F32Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0013F32Cu) [[unlikely]] return; }
L_0013F32C:
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F33Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0013F33Cu) [[unlikely]] return; }
L_0013F33C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F348u); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0013F348u) [[unlikely]] return; }
L_0013F348:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F358u); set32(c.r[6], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013F358u) [[unlikely]] return; }
L_0013F358:
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F364u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 203u, depth + 1u); else { c.pc = 0x00127360u; return; } if (c.pc != 0x0013F364u) [[unlikely]] return; }
L_0013F364:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F370u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0013F370u) [[unlikely]] return; }
L_0013F370:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0013F3A8; } }
    c.f[3] = ld32((c.r[16].w[0] + 48u));
    set32(c.r[2], c.r[29].w[0] + 48u);
    c.f[2] = ld32((c.r[16].w[0] + 52u));
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.budget -= 9;
L_0013F3A8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F3B8u); set32(c.r[6], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013F3B8u) [[unlikely]] return; }
L_0013F3B8:
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F3C4u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 203u, depth + 1u); else { c.pc = 0x00127360u; return; } if (c.pc != 0x0013F3C4u) [[unlikely]] return; }
L_0013F3C4:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F3D0u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0013F3D0u) [[unlikely]] return; }
L_0013F3D0:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0013F408; } }
    c.f[3] = ld32((c.r[16].w[0] + 64u));
    set32(c.r[2], c.r[29].w[0] + 48u);
    c.f[2] = ld32((c.r[16].w[0] + 68u));
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = ld32((c.r[16].w[0] + 76u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.budget -= 9;
L_0013F408:
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F420u); set32(c.r[4], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0013F420u) [[unlikely]] return; }
L_0013F420:
    c.f[1] = ld32((c.r[16].w[0] + 144u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013F438; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013F4C0; } }
L_0013F438:
    set32(c.r[2], c.r[29].w[0] + 48u);
    c.f[3] = ld32((c.r[2].w[0]));
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[6], c.r[16].w[0] + 48u);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[16].w[0] + 64u), c.f[3]);
    st32((c.r[16].w[0] + 68u), c.f[2]);
    st32((c.r[16].w[0] + 72u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F46Cu); st32((c.r[16].w[0] + 76u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013F46Cu) [[unlikely]] return; }
L_0013F46C:
    set32(c.r[4], c.r[16].w[0] + 96u);
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F47Cu); set32(c.r[6], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013F47Cu) [[unlikely]] return; }
L_0013F47C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F490u); set32(c.r[5], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0013F490u) [[unlikely]] return; }
L_0013F490:
    set32(c.r[4], c.r[16].w[0] + 16u);
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F4A0u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x0013F4A0u) [[unlikely]] return; }
L_0013F4A0:
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19072u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F4BCu); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013F4BCu) [[unlikely]] return; }
L_0013F4BC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0013F4C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0013F4E0:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[4], c.r[21].w[0] + 48u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F520u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_000F(c, 375u, depth + 1u); else { c.pc = 0x0013F680u; return; } if (c.pc != 0x0013F520u) [[unlikely]] return; }
L_0013F520:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F52Cu); set32(c.r[4], c.r[21].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 375u, depth + 1u); else { c.pc = 0x0013F680u; return; } if (c.pc != 0x0013F52Cu) [[unlikely]] return; }
L_0013F52C:
    c.f[21] = fp::add(c.f[20], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F538u); set32(c.r[4], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 375u, depth + 1u); else { c.pc = 0x0013F680u; return; } if (c.pc != 0x0013F538u) [[unlikely]] return; }
L_0013F538:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F544u); set32(c.r[4], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 375u, depth + 1u); else { c.pc = 0x0013F680u; return; } if (c.pc != 0x0013F544u) [[unlikely]] return; }
L_0013F544:
    c.f[0] = fp::add(c.f[20], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[20].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0013F560; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013F568; } }
    c.budget -= 1;
L_0013F560:
    c.r[20].d[0] = c.r[21].d[0] + 0ull;
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0013F568:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[16], c.r[29].w[0] + 272u);
    c.budget -= 4;
L_0013F578:
    set32(c.r[23], c.r[17].w[0] + 48u);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[22].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
L_0013F588:
    set32(c.r[3], c.r[18].w[0] + 1u);
    set32(c.r[2], 0u + 3u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 176u);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F5B0u); set32(c.r[5], c.r[23].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 513u, depth + 1u); else { c.pc = 0x00143DD0u; return; } if (c.pc != 0x0013F5B0u) [[unlikely]] return; }
L_0013F5B0:
    c.f[0] = ld32((c.r[20].w[0] + 192u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F5C8u); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0010(c, 52u, depth + 1u); else { c.pc = 0x001402F0u; return; } if (c.pc != 0x0013F5C8u) [[unlikely]] return; }
L_0013F5C8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0013F608; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0013F5F0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013F620; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013F620; } }
    c.budget -= 1;
L_0013F5F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F600u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013F600u) [[unlikely]] return; }
L_0013F600:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013F648; } }
L_0013F608:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], c.r[20].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F618u); set32(c.r[4], c.r[4].w[0] + 19072u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013F618u) [[unlikely]] return; }
L_0013F618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013F648; } }
L_0013F620:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[22], c.r[22].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013F588u | kUnwind; return; } goto L_0013F588; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013F578u | kUnwind; return; } goto L_0013F578; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0013F648:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_0013F680:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F6A4u); set32(c.r[6], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013F6A4u) [[unlikely]] return; }
L_0013F6A4:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F6B4u); set32(c.r[6], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013F6B4u) [[unlikely]] return; }
L_0013F6B4:
    set32(c.r[17], c.r[29].w[0] + 68u);
    set32(c.r[16], c.r[29].w[0] + 72u);
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = 0u;
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0013F6F8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013F7A8; } }
    c.budget -= 1;
L_0013F6F8:
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.f[3] = ld32((c.r[29].w[0] + 56u));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0013F730; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013F7A8; } }
    c.budget -= 1;
L_0013F730:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F740u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 216u, depth + 1u); else { c.pc = 0x00127600u; return; } if (c.pc != 0x0013F740u) [[unlikely]] return; }
L_0013F740:
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 64u));
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0013F7A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F778u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x0013F778u) [[unlikely]] return; }
L_0013F778:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F798u);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x0013F798u) [[unlikely]] return; }
L_0013F798:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013F7A4; } }
L_0013F7A0:
    c.f[0] = c.r[2].w[0];
    c.budget -= 1;
L_0013F7A4:
    c.budget -= 1;
L_0013F7A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0013F7C0:
    set32(c.r[29], c.r[29].w[0] - 384u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[19].w[0] + 80u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F7F8u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x0013F7F8u) [[unlikely]] return; }
L_0013F7F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.f[3] = c.r[2].w[0];
    set32(c.r[5], c.r[19].w[0] + 16u);
    c.f[2] = ld32((c.r[19].w[0] + 144u));
    set32(c.r[6], c.r[20].w[0] + 176u);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 192u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F824u); c.f[20] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013F824u) [[unlikely]] return; }
L_0013F824:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F830u); set32(c.r[5], c.r[20].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0013F830u) [[unlikely]] return; }
L_0013F830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F838u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x0013F838u) [[unlikely]] return; }
L_0013F838:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0013F848; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0013F848:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F854u); set32(c.r[5], c.r[20].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0013F854u) [[unlikely]] return; }
L_0013F854:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F85Cu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x0013F85Cu) [[unlikely]] return; }
L_0013F85C:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0013F870; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_0013F870:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013F888; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013FDE0; } }
    c.budget -= 1;
L_0013F888:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
L_0013F898:
    set32(c.r[4], c.r[19].w[0] + 48u);
    set32(c.r[5], c.r[20].w[0] + 176u);
    set32(c.r[6], c.r[17].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F8ACu); set32(c.r[7], c.r[29].w[0] + 380u);  if (depth < kMaxDepth) unit_0010(c, 48u, depth + 1u); else { c.pc = 0x00140280u; return; } if (c.pc != 0x0013F8ACu) [[unlikely]] return; }
L_0013F8AC:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 64u);
    set32(c.r[5], c.r[20].w[0] + 176u);
    set32(c.r[6], c.r[17].w[0] + 144u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F8C4u); set32(c.r[7], c.r[29].w[0] + 376u);  if (depth < kMaxDepth) unit_0010(c, 48u, depth + 1u); else { c.pc = 0x00140280u; return; } if (c.pc != 0x0013F8C4u) [[unlikely]] return; }
L_0013F8C4:
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u + 3u);
    c.r[21].d[0] = c.r[21].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[21].d[0] == c.r[2].d[0];  if (t) { goto L_0013F928; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0013F928; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == c.r[2].d[0];  if (t) { goto L_0013F900; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_0013F900; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013F940; } }
    c.budget -= 1;
L_0013F900:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.f[1] = ld32((c.r[20].w[0] + 192u));
    set32(c.r[5], c.r[17].w[0] + 144u);
    c.f[0] = ld32((c.r[19].w[0] + 144u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F91Cu); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0013F91Cu) [[unlikely]] return; }
L_0013F91C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013F940; } }
    c.budget -= 1;
L_0013F928:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.f[1] = ld32((c.r[20].w[0] + 192u));
    set32(c.r[5], c.r[17].w[0] + 144u);
    c.f[0] = ld32((c.r[19].w[0] + 144u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F940u); c.f[12] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0013F940u) [[unlikely]] return; }
L_0013F940:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F94Cu); set32(c.r[5], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013F94Cu) [[unlikely]] return; }
L_0013F94C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 48u);
    set32(c.r[6], c.r[29].w[0] + 352u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F964u); set32(c.r[8], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_000F(c, 432u, depth + 1u); else { c.pc = 0x0013FE10u; return; } if (c.pc != 0x0013F964u) [[unlikely]] return; }
L_0013F964:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 320u);  if (t) { goto L_0013FB60; } }
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F97Cu); set32(c.r[6], c.r[17].w[0] + 144u);  if (depth < kMaxDepth) unit_0011(c, 65u, depth + 1u); else { c.pc = 0x00144C30u; return; } if (c.pc != 0x0013F97Cu) [[unlikely]] return; }
L_0013F97C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013FB60; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013FA08; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0013F9B8; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[2].d[0];  if (t) { goto L_0013FA08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013FDE0; } }
L_0013F9B8:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F9C4u); set32(c.r[5], c.r[20].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0013F9C4u) [[unlikely]] return; }
L_0013F9C4:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[6], c.r[29].w[0] + 336u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F9D8u); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013F9D8u) [[unlikely]] return; }
L_0013F9D8:
    set32(c.r[2], c.r[18].w[0] << 4);
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F9ECu); set32(c.r[5], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0013F9ECu) [[unlikely]] return; }
L_0013F9EC:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013FA08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013FDE0; } }
L_0013FA08:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 352u);  if (t) { goto L_0013FB48; } }
    set32(c.r[5], c.r[29].w[0] + 320u);
    set32(c.r[6], c.r[19].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FA2Cu); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013FA2Cu) [[unlikely]] return; }
L_0013FA2C:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FA38u); set32(c.r[5], c.r[19].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0013FA38u) [[unlikely]] return; }
L_0013FA38:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 380u), c.f[0]);  if (t) { goto L_0013FA50; } }
    c.r[16].d[0] = c.r[16].d[0] | 1ull;
    c.budget -= 1;
L_0013FA50:
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[5], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FA60u); set32(c.r[6], c.r[19].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013FA60u) [[unlikely]] return; }
L_0013FA60:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FA6Cu); set32(c.r[5], c.r[19].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0013FA6Cu) [[unlikely]] return; }
L_0013FA6C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 376u), c.f[0]);  if (t) { goto L_0013FA88; } }
    c.r[16].d[0] = c.r[16].d[0] | 2ull;
    c.budget -= 2;
L_0013FA88:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0013FB00; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0013FAD8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0013FAB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013FB48; } }
L_0013FAB0:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.f[12] = ld32((c.r[19].w[0] + 144u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FAC0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x0013FAC0u) [[unlikely]] return; }
L_0013FAC0:
    set32(c.r[6], c.r[19].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FAD0u); set32(c.r[5], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x0013FAD0u) [[unlikely]] return; }
L_0013FAD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013FB48; } }
L_0013FAD8:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.f[12] = ld32((c.r[19].w[0] + 144u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FAE8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x0013FAE8u) [[unlikely]] return; }
L_0013FAE8:
    set32(c.r[6], c.r[19].w[0] + 64u);
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FAF8u); set32(c.r[5], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x0013FAF8u) [[unlikely]] return; }
L_0013FAF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013FB48; } }
L_0013FB00:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.f[12] = ld32((c.r[29].w[0] + 376u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FB10u); set32(c.r[5], c.r[19].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0013FB10u) [[unlikely]] return; }
L_0013FB10:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FB1Cu); set32(c.r[5], c.r[19].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0013FB1Cu) [[unlikely]] return; }
L_0013FB1C:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FB28u); set32(c.r[5], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x00127450u; return; } if (c.pc != 0x0013FB28u) [[unlikely]] return; }
L_0013FB28:
    c.f[12] = ld32((c.r[19].w[0] + 144u));
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FB38u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x0013FB38u) [[unlikely]] return; }
L_0013FB38:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FB44u); set32(c.r[5], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0013FB44u) [[unlikely]] return; }
L_0013FB44:
    c.budget -= 1;
L_0013FB48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FB58u); set32(c.r[5], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013FB58u) [[unlikely]] return; }
L_0013FB58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013FDE0; } }
L_0013FB60:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013F898u | kUnwind; return; } goto L_0013F898; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[21], 0u - 1u);
    set32(c.r[18], c.r[18].w[0] + 2824u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[29].w[0] + 288u);
    c.budget -= 5;
L_0013FB88:
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 1u));
    set32(c.r[6], c.r[29].w[0] + 176u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] + 48u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FBB0u); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0010(c, 513u, depth + 1u); else { c.pc = 0x00143DD0u; return; } if (c.pc != 0x0013FBB0u) [[unlikely]] return; }
L_0013FBB0:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[19].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FBC0u); set32(c.r[6], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0010(c, 520u, depth + 1u); else { c.pc = 0x00143E50u; return; } if (c.pc != 0x0013FBC0u) [[unlikely]] return; }
L_0013FBC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_0013FBE0; } }
    set32(c.r[5], c.r[19].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FBD4u); set32(c.r[4], c.r[4].w[0] + 19072u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013FBD4u) [[unlikely]] return; }
L_0013FBD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013FDE0; } }
    c.budget -= 1;
L_0013FBE0:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FBECu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0013FBECu) [[unlikely]] return; }
L_0013FBEC:
    st32((c.r[29].w[0] + 380u), c.f[0]);
    c.f[2] = ld32((c.r[20].w[0] + 192u));
    c.f[1] = ld32((c.r[19].w[0] + 144u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u - 1u);  if (t) { goto L_0013FC40; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == c.r[2].d[0];  if (t) { goto L_0013FC20; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0013FC40; } }
    c.budget -= 1;
L_0013FC20:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FC2Cu); set32(c.r[5], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013FC2Cu) [[unlikely]] return; }
L_0013FC2C:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FC38u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013FC38u) [[unlikely]] return; }
L_0013FC38:
    c.f[20] = ld32((c.r[29].w[0] + 380u));
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0013FC40:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013FB88u | kUnwind; return; } goto L_0013FB88; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013FC68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013FDE0; } }
    c.budget -= 1;
L_0013FC68:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FC74u); set32(c.r[5], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013FC74u) [[unlikely]] return; }
L_0013FC74:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FC80u); set32(c.r[5], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013FC80u) [[unlikely]] return; }
L_0013FC80:
    c.f[0] = ld32((c.r[20].w[0] + 192u));
    set32(c.r[16], c.r[29].w[0] + 160u);
    set32(c.r[4], c.r[19].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[6], c.r[29].w[0] + 320u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FC9Cu); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 37u, depth + 1u); else { c.pc = 0x00144460u; return; } if (c.pc != 0x0013FC9Cu) [[unlikely]] return; }
L_0013FC9C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0013FCD0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0013FCB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013FD58; } }
L_0013FCB8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FCC8u); set32(c.r[5], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013FCC8u) [[unlikely]] return; }
L_0013FCC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013FDD8; } }
L_0013FCD0:
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[5], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FCE0u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013FCE0u) [[unlikely]] return; }
L_0013FCE0:
    c.f[1] = ld32((c.r[29].w[0] + 356u));
    c.f[2] = ld32((c.r[29].w[0] + 352u));
    c.f[3] = ld32((c.r[29].w[0] + 360u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0013FD40; } }
    c.f[12] = ld32((c.r[16].w[0]));
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FD20u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x0013FD20u) [[unlikely]] return; }
L_0013FD20:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], c.r[29].w[0] + 352u);
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FD34u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x0013FD34u) [[unlikely]] return; }
L_0013FD34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013FDD8; } }
    c.budget -= 1;
L_0013FD40:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FD50u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013FD50u) [[unlikely]] return; }
L_0013FD50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013FDD8; } }
L_0013FD58:
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[5], c.r[29].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FD68u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013FD68u) [[unlikely]] return; }
L_0013FD68:
    c.f[1] = ld32((c.r[29].w[0] + 356u));
    c.f[2] = ld32((c.r[29].w[0] + 352u));
    c.f[3] = ld32((c.r[29].w[0] + 360u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0013FDC8; } }
    c.f[12] = ld32((c.r[16].w[0]));
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FDA8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x0013FDA8u) [[unlikely]] return; }
L_0013FDA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], c.r[29].w[0] + 352u);
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FDBCu); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x0013FDBCu) [[unlikely]] return; }
L_0013FDBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013FDD8; } }
    c.budget -= 1;
L_0013FDC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FDD8u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013FDD8u) [[unlikely]] return; }
L_0013FDD8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0013FDE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 384u);  c.pc = t; return; }
L_0013FE10:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[17].w[0] + 176u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FE50u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x0013FE50u) [[unlikely]] return; }
L_0013FE50:
    set32(c.r[2], c.r[16].w[0] << 4);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[16], c.r[2].w[0] + 144u);
    set32(c.r[7], c.r[29].w[0] + 156u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FE70u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 48u, depth + 1u); else { c.pc = 0x00140280u; return; } if (c.pc != 0x0013FE70u) [[unlikely]] return; }
L_0013FE70:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 16u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FE88u); set32(c.r[7], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_0010(c, 48u, depth + 1u); else { c.pc = 0x00140280u; return; } if (c.pc != 0x0013FE88u) [[unlikely]] return; }
L_0013FE88:
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u + 2u);
    c.r[17].d[0] = c.r[17].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0010(c, 40u, depth); } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { [[clang::musttail]] return unit_0010(c, 35u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0010(c, 5u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0013FEC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0010(c, 47u, depth); } }
L_0013FEC0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FECCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0013FECCu) [[unlikely]] return; }
L_0013FECC:
    c.f[1] = 0u;
    c.budget -= 1;
L_0013FED0:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { [[clang::musttail]] return unit_0010(c, 47u, depth); } }
    c.f[12] = ld32((c.r[29].w[0] + 156u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FEECu); set32(c.r[17], 0u + 3u);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x0013FEECu) [[unlikely]] return; }
L_0013FEEC:
    c.f[12] = ld32((c.r[29].w[0] + 152u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FEF8u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x0013FEF8u) [[unlikely]] return; }
L_0013FEF8:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_0013FF88; } }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FF10u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013FF10u) [[unlikely]] return; }
L_0013FF10:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FF1Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0013FF1Cu) [[unlikely]] return; }
L_0013FF1C:
    st32((c.r[29].w[0] + 156u), c.f[0]);
    c.f[12] = c.f[0];
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0013FF48; } }
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0013FF60; } }
    c.budget -= 1;
L_0013FF48:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FF54u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013FF54u) [[unlikely]] return; }
L_0013FF54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0010(c, 47u, depth); } }
    c.budget -= 1;
L_0013FF60:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FF6Cu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0013FF6Cu) [[unlikely]] return; }
L_0013FF6C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FF7Cu); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013FF7Cu) [[unlikely]] return; }
L_0013FF7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0010(c, 47u, depth); } }
    c.budget -= 1;
L_0013FF88:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[20].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FF98u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0013FF98u) [[unlikely]] return; }
L_0013FF98:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FFA4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0013FFA4u) [[unlikely]] return; }
L_0013FFA4:
    st32((c.r[29].w[0] + 156u), c.f[0]);
    c.f[12] = c.f[0];
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0013FFD0; } }
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0013FFE8; } }
    c.budget -= 1;
L_0013FFD0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0013FFD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FFDCu); set32(c.r[5], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0013FFDCu) [[unlikely]] return; }
L_0013FFDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0010(c, 47u, depth); } }
    c.budget -= 1;
L_0013FFE8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FFF4u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0013FFF4u) [[unlikely]] return; }
L_0013FFF4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140004u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00140004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0010(c, 2u, depth);
}

}
