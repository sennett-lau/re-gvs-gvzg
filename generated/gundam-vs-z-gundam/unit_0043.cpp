#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0043[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6,
    0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0,
    0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0,
    22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0,
    0, 31, 0, 32, 0, 33, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 39, 0,
    0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0,
    0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 52, 0, 0, 0, 53, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0,
    61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64,
    0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67,
    0, 0, 68, 0, 0, 69, 0, 70, 0, 71, 0, 72, 0, 73, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0,
    0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 106, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0,
    109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0,
    0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0,
    0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0,
    0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0,
    138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0,
    0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0,
    161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0,
    0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0,
    185, 0, 186, 0, 187, 0, 0, 0, 188, 0, 189, 0, 190, 0, 0, 0, 191, 0, 0, 0, 192, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 0,
    195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    197, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203,
    0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 210, 0, 211, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0,
    220, 0, 221, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0,
    0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0,
    0, 0, 230, 0, 231, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0,
    0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 241, 0, 0, 0, 242, 0, 243, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0,
    0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0,
    0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0,
    0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0,
    282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 283, 0, 0, 0, 284, 0, 285, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 288, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293,
    0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 296, 0, 297, 0, 298,
    0, 0, 299, 0, 0, 0, 300, 0, 301, 0, 0, 0, 0, 302, 0, 303, 0, 304, 0, 0, 0, 305, 0, 306, 0, 0, 307, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 310, 0, 0,
    0, 0, 0, 0, 0, 311, 0, 312, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0,
    324, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0,
    327, 0, 0, 0, 0, 0, 328, 0, 329, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 333, 0, 0,
    0, 334, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0,
    340, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 351, 0, 0, 352, 0, 353, 0, 0, 0, 0,
    0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0,
    0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 362, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0,
    0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 382, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0,
    0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 399,
    400, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 412, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0,
    0, 0, 417, 0, 0, 418, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0,
    0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 426, 0, 0, 0, 427, 428, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0,
};

void unit_0043(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0020C000;
    case 2u: goto L_0020C018;
    case 3u: goto L_0020C038;
    case 4u: goto L_0020C050;
    case 5u: goto L_0020C06C;
    case 6u: goto L_0020C07C;
    case 7u: goto L_0020C084;
    case 8u: goto L_0020C08C;
    case 9u: goto L_0020C0C0;
    case 10u: goto L_0020C0E0;
    case 11u: goto L_0020C118;
    case 12u: goto L_0020C16C;
    case 13u: goto L_0020C184;
    case 14u: goto L_0020C1FC;
    case 15u: goto L_0020C358;
    case 16u: goto L_0020C364;
    case 17u: goto L_0020C3A8;
    case 18u: goto L_0020C3B8;
    case 19u: goto L_0020C3C0;
    case 20u: goto L_0020C3E0;
    case 21u: goto L_0020C3F0;
    case 22u: goto L_0020C400;
    case 23u: goto L_0020C434;
    case 24u: goto L_0020C48C;
    case 25u: goto L_0020C4A4;
    case 26u: goto L_0020C4D0;
    case 27u: goto L_0020C4F0;
    case 28u: goto L_0020C54C;
    case 29u: goto L_0020C560;
    case 30u: goto L_0020C568;
    case 31u: goto L_0020C584;
    case 32u: goto L_0020C58C;
    case 33u: goto L_0020C594;
    case 34u: goto L_0020C5A8;
    case 35u: goto L_0020C5B0;
    case 36u: goto L_0020C5CC;
    case 37u: goto L_0020C5DC;
    case 38u: goto L_0020C5EC;
    case 39u: goto L_0020C5F8;
    case 40u: goto L_0020C610;
    case 41u: goto L_0020C630;
    case 42u: goto L_0020C6B0;
    case 43u: goto L_0020C6F0;
    case 44u: goto L_0020C6F8;
    case 45u: goto L_0020C710;
    case 46u: goto L_0020C720;
    case 47u: goto L_0020C764;
    case 48u: goto L_0020C778;
    case 49u: goto L_0020C790;
    case 50u: goto L_0020C7B0;
    case 51u: goto L_0020C7BC;
    case 52u: goto L_0020C804;
    case 53u: goto L_0020C814;
    case 54u: goto L_0020C81C;
    case 55u: goto L_0020C824;
    case 56u: goto L_0020C850;
    case 57u: goto L_0020C860;
    case 58u: goto L_0020C870;
    case 59u: goto L_0020C89C;
    case 60u: goto L_0020C8E8;
    case 61u: goto L_0020C900;
    case 62u: goto L_0020C920;
    case 63u: goto L_0020C940;
    case 64u: goto L_0020C9FC;
    case 65u: goto L_0020CA10;
    case 66u: goto L_0020CA68;
    case 67u: goto L_0020CA7C;
    case 68u: goto L_0020CA88;
    case 69u: goto L_0020CA94;
    case 70u: goto L_0020CA9C;
    case 71u: goto L_0020CAA4;
    case 72u: goto L_0020CAAC;
    case 73u: goto L_0020CAB4;
    case 74u: goto L_0020CABC;
    case 75u: goto L_0020CAC4;
    case 76u: goto L_0020CAE0;
    case 77u: goto L_0020CAF4;
    case 78u: goto L_0020CB30;
    case 79u: goto L_0020CB44;
    case 80u: goto L_0020CBD4;
    case 81u: goto L_0020CC10;
    case 82u: goto L_0020CC2C;
    case 83u: goto L_0020CC38;
    case 84u: goto L_0020CC60;
    case 85u: goto L_0020CCC0;
    case 86u: goto L_0020CDF8;
    case 87u: goto L_0020CE20;
    case 88u: goto L_0020CE9C;
    case 89u: goto L_0020CEB0;
    case 90u: goto L_0020CED4;
    case 91u: goto L_0020CF04;
    case 92u: goto L_0020CF40;
    case 93u: goto L_0020CF50;
    case 94u: goto L_0020CF60;
    case 95u: goto L_0020CFB4;
    case 96u: goto L_0020CFC4;
    case 97u: goto L_0020CFE0;
    case 98u: goto L_0020CFF8;
    case 99u: goto L_0020D00C;
    case 100u: goto L_0020D01C;
    case 101u: goto L_0020D02C;
    case 102u: goto L_0020D040;
    case 103u: goto L_0020D050;
    case 104u: goto L_0020D09C;
    case 105u: goto L_0020D0AC;
    case 106u: goto L_0020D0B4;
    case 107u: goto L_0020D0BC;
    case 108u: goto L_0020D0F0;
    case 109u: goto L_0020D100;
    case 110u: goto L_0020D110;
    case 111u: goto L_0020D13C;
    case 112u: goto L_0020D1A0;
    case 113u: goto L_0020D1C0;
    case 114u: goto L_0020D200;
    case 115u: goto L_0020D264;
    case 116u: goto L_0020D278;
    case 117u: goto L_0020D2A0;
    case 118u: goto L_0020D310;
    case 119u: goto L_0020D320;
    case 120u: goto L_0020D32C;
    case 121u: goto L_0020D364;
    case 122u: goto L_0020D378;
    case 123u: goto L_0020D38C;
    case 124u: goto L_0020D41C;
    case 125u: goto L_0020D450;
    case 126u: goto L_0020D470;
    case 127u: goto L_0020D4B0;
    case 128u: goto L_0020D4EC;
    case 129u: goto L_0020D510;
    case 130u: goto L_0020D520;
    case 131u: goto L_0020D544;
    case 132u: goto L_0020D554;
    case 133u: goto L_0020D570;
    case 134u: goto L_0020D588;
    case 135u: goto L_0020D5D0;
    case 136u: goto L_0020D65C;
    case 137u: goto L_0020D674;
    case 138u: goto L_0020D680;
    case 139u: goto L_0020D690;
    case 140u: goto L_0020D6A0;
    case 141u: goto L_0020D6B4;
    case 142u: goto L_0020D6C0;
    case 143u: goto L_0020D6E4;
    case 144u: goto L_0020D6F4;
    case 145u: goto L_0020D714;
    case 146u: goto L_0020D724;
    case 147u: goto L_0020D740;
    case 148u: goto L_0020D75C;
    case 149u: goto L_0020D7A0;
    case 150u: goto L_0020D7E8;
    case 151u: goto L_0020D81C;
    case 152u: goto L_0020D834;
    case 153u: goto L_0020D83C;
    case 154u: goto L_0020D868;
    case 155u: goto L_0020D87C;
    case 156u: goto L_0020D8C0;
    case 157u: goto L_0020D914;
    case 158u: goto L_0020D91C;
    case 159u: goto L_0020D950;
    case 160u: goto L_0020D960;
    case 161u: goto L_0020D980;
    case 162u: goto L_0020D998;
    case 163u: goto L_0020D9A8;
    case 164u: goto L_0020D9B8;
    case 165u: goto L_0020D9C8;
    case 166u: goto L_0020D9D4;
    case 167u: goto L_0020D9E0;
    case 168u: goto L_0020DA20;
    case 169u: goto L_0020DA48;
    case 170u: goto L_0020DA50;
    case 171u: goto L_0020DA94;
    case 172u: goto L_0020DAC0;
    case 173u: goto L_0020DACC;
    case 174u: goto L_0020DAF0;
    case 175u: goto L_0020DB30;
    case 176u: goto L_0020DB40;
    case 177u: goto L_0020DB60;
    case 178u: goto L_0020DB78;
    case 179u: goto L_0020DB90;
    case 180u: goto L_0020DBB0;
    case 181u: goto L_0020DBC0;
    case 182u: goto L_0020DC70;
    case 183u: goto L_0020DCE8;
    case 184u: goto L_0020DCF8;
    case 185u: goto L_0020DD00;
    case 186u: goto L_0020DD08;
    case 187u: goto L_0020DD10;
    case 188u: goto L_0020DD20;
    case 189u: goto L_0020DD28;
    case 190u: goto L_0020DD30;
    case 191u: goto L_0020DD40;
    case 192u: goto L_0020DD50;
    case 193u: goto L_0020DD58;
    case 194u: goto L_0020DD60;
    case 195u: goto L_0020DD80;
    case 196u: goto L_0020DDAC;
    case 197u: goto L_0020DE00;
    case 198u: goto L_0020DE0C;
    case 199u: goto L_0020DE30;
    case 200u: goto L_0020DE84;
    case 201u: goto L_0020DEA0;
    case 202u: goto L_0020DEF4;
    case 203u: goto L_0020DEFC;
    case 204u: goto L_0020DF04;
    case 205u: goto L_0020DF34;
    case 206u: goto L_0020DF90;
    case 207u: goto L_0020DFA4;
    case 208u: goto L_0020DFD0;
    case 209u: goto L_0020E000;
    case 210u: goto L_0020E088;
    case 211u: goto L_0020E090;
    case 212u: goto L_0020E098;
    case 213u: goto L_0020E0A0;
    case 214u: goto L_0020E0D0;
    case 215u: goto L_0020E0E8;
    case 216u: goto L_0020E0F8;
    case 217u: goto L_0020E140;
    case 218u: goto L_0020E168;
    case 219u: goto L_0020E178;
    case 220u: goto L_0020E180;
    case 221u: goto L_0020E188;
    case 222u: goto L_0020E190;
    case 223u: goto L_0020E1AC;
    case 224u: goto L_0020E1C0;
    case 225u: goto L_0020E1D0;
    case 226u: goto L_0020E1F0;
    case 227u: goto L_0020E214;
    case 228u: goto L_0020E250;
    case 229u: goto L_0020E278;
    case 230u: goto L_0020E288;
    case 231u: goto L_0020E290;
    case 232u: goto L_0020E298;
    case 233u: goto L_0020E2B4;
    case 234u: goto L_0020E2C8;
    case 235u: goto L_0020E2D8;
    case 236u: goto L_0020E2EC;
    case 237u: goto L_0020E30C;
    case 238u: goto L_0020E330;
    case 239u: goto L_0020E3C4;
    case 240u: goto L_0020E3CC;
    case 241u: goto L_0020E3D4;
    case 242u: goto L_0020E3E4;
    case 243u: goto L_0020E3EC;
    case 244u: goto L_0020E420;
    case 245u: goto L_0020E440;
    case 246u: goto L_0020E460;
    case 247u: goto L_0020E470;
    case 248u: goto L_0020E4B0;
    case 249u: goto L_0020E4BC;
    case 250u: goto L_0020E4CC;
    case 251u: goto L_0020E4E0;
    case 252u: goto L_0020E504;
    case 253u: goto L_0020E538;
    case 254u: goto L_0020E550;
    case 255u: goto L_0020E578;
    case 256u: goto L_0020E588;
    case 257u: goto L_0020E598;
    case 258u: goto L_0020E5A8;
    case 259u: goto L_0020E5B4;
    case 260u: goto L_0020E5C8;
    case 261u: goto L_0020E5D4;
    case 262u: goto L_0020E5E8;
    case 263u: goto L_0020E5F4;
    case 264u: goto L_0020E660;
    case 265u: goto L_0020E688;
    case 266u: goto L_0020E698;
    case 267u: goto L_0020E6B0;
    case 268u: goto L_0020E6C4;
    case 269u: goto L_0020E6D4;
    case 270u: goto L_0020E6E8;
    case 271u: goto L_0020E708;
    case 272u: goto L_0020E72C;
    case 273u: goto L_0020E738;
    case 274u: goto L_0020E790;
    case 275u: goto L_0020E7F4;
    case 276u: goto L_0020E834;
    case 277u: goto L_0020E83C;
    case 278u: goto L_0020E888;
    case 279u: goto L_0020E8A8;
    case 280u: goto L_0020E8B8;
    case 281u: goto L_0020E8DC;
    case 282u: goto L_0020E900;
    case 283u: goto L_0020E988;
    case 284u: goto L_0020E998;
    case 285u: goto L_0020E9A0;
    case 286u: goto L_0020E9AC;
    case 287u: goto L_0020E9C0;
    case 288u: goto L_0020EA10;
    case 289u: goto L_0020EA1C;
    case 290u: goto L_0020EA30;
    case 291u: goto L_0020EA40;
    case 292u: goto L_0020EA54;
    case 293u: goto L_0020EA7C;
    case 294u: goto L_0020EAA0;
    case 295u: goto L_0020EACC;
    case 296u: goto L_0020EAEC;
    case 297u: goto L_0020EAF4;
    case 298u: goto L_0020EAFC;
    case 299u: goto L_0020EB08;
    case 300u: goto L_0020EB18;
    case 301u: goto L_0020EB20;
    case 302u: goto L_0020EB34;
    case 303u: goto L_0020EB3C;
    case 304u: goto L_0020EB44;
    case 305u: goto L_0020EB54;
    case 306u: goto L_0020EB5C;
    case 307u: goto L_0020EB68;
    case 308u: goto L_0020EBB0;
    case 309u: goto L_0020EBEC;
    case 310u: goto L_0020EBF4;
    case 311u: goto L_0020EC14;
    case 312u: goto L_0020EC1C;
    case 313u: goto L_0020EC28;
    case 314u: goto L_0020EC3C;
    case 315u: goto L_0020EC48;
    case 316u: goto L_0020EC5C;
    case 317u: goto L_0020EC70;
    case 318u: goto L_0020ECA8;
    case 319u: goto L_0020ECC8;
    case 320u: goto L_0020ECEC;
    case 321u: goto L_0020ED74;
    case 322u: goto L_0020EDB0;
    case 323u: goto L_0020EDF4;
    case 324u: goto L_0020EE00;
    case 325u: goto L_0020EE0C;
    case 326u: goto L_0020EE70;
    case 327u: goto L_0020EE80;
    case 328u: goto L_0020EE98;
    case 329u: goto L_0020EEA0;
    case 330u: goto L_0020EEA8;
    case 331u: goto L_0020EEC0;
    case 332u: goto L_0020EEEC;
    case 333u: goto L_0020EEF4;
    case 334u: goto L_0020EF04;
    case 335u: goto L_0020EF10;
    case 336u: goto L_0020EF28;
    case 337u: goto L_0020EF50;
    case 338u: goto L_0020EF58;
    case 339u: goto L_0020EF6C;
    case 340u: goto L_0020EF80;
    case 341u: goto L_0020EF90;
    case 342u: goto L_0020EFA0;
    case 343u: goto L_0020EFBC;
    case 344u: goto L_0020EFC8;
    case 345u: goto L_0020EFD8;
    case 346u: goto L_0020F000;
    case 347u: goto L_0020F054;
    case 348u: goto L_0020F064;
    case 349u: goto L_0020F074;
    case 350u: goto L_0020F0D0;
    case 351u: goto L_0020F0D8;
    case 352u: goto L_0020F0E4;
    case 353u: goto L_0020F0EC;
    case 354u: goto L_0020F110;
    case 355u: goto L_0020F134;
    case 356u: goto L_0020F144;
    case 357u: goto L_0020F150;
    case 358u: goto L_0020F1F0;
    case 359u: goto L_0020F210;
    case 360u: goto L_0020F234;
    case 361u: goto L_0020F244;
    case 362u: goto L_0020F24C;
    case 363u: goto L_0020F258;
    case 364u: goto L_0020F29C;
    case 365u: goto L_0020F2B0;
    case 366u: goto L_0020F2DC;
    case 367u: goto L_0020F2EC;
    case 368u: goto L_0020F360;
    case 369u: goto L_0020F3C0;
    case 370u: goto L_0020F3D4;
    case 371u: goto L_0020F420;
    case 372u: goto L_0020F46C;
    case 373u: goto L_0020F490;
    case 374u: goto L_0020F4B0;
    case 375u: goto L_0020F4F0;
    case 376u: goto L_0020F540;
    case 377u: goto L_0020F558;
    case 378u: goto L_0020F584;
    case 379u: goto L_0020F5B0;
    case 380u: goto L_0020F600;
    case 381u: goto L_0020F648;
    case 382u: goto L_0020F654;
    case 383u: goto L_0020F65C;
    case 384u: goto L_0020F700;
    case 385u: goto L_0020F72C;
    case 386u: goto L_0020F734;
    case 387u: goto L_0020F768;
    case 388u: goto L_0020F78C;
    case 389u: goto L_0020F7A4;
    case 390u: goto L_0020F7AC;
    case 391u: goto L_0020F7C0;
    case 392u: goto L_0020F7E0;
    case 393u: goto L_0020F7F0;
    case 394u: goto L_0020F848;
    case 395u: goto L_0020F898;
    case 396u: goto L_0020F948;
    case 397u: goto L_0020FAC4;
    case 398u: goto L_0020FAE0;
    case 399u: goto L_0020FAFC;
    case 400u: goto L_0020FB00;
    case 401u: goto L_0020FB18;
    case 402u: goto L_0020FB2C;
    case 403u: goto L_0020FBD0;
    case 404u: goto L_0020FC24;
    case 405u: goto L_0020FC64;
    case 406u: goto L_0020FCF0;
    case 407u: goto L_0020FD40;
    case 408u: goto L_0020FDA8;
    case 409u: goto L_0020FDC4;
    case 410u: goto L_0020FDFC;
    case 411u: goto L_0020FE68;
    case 412u: goto L_0020FE90;
    case 413u: goto L_0020FEA0;
    case 414u: goto L_0020FEB0;
    case 415u: goto L_0020FED0;
    case 416u: goto L_0020FEF0;
    case 417u: goto L_0020FF08;
    case 418u: goto L_0020FF14;
    case 419u: goto L_0020FF30;
    case 420u: goto L_0020FF50;
    case 421u: goto L_0020FF5C;
    case 422u: goto L_0020FF70;
    case 423u: goto L_0020FF90;
    case 424u: goto L_0020FFA0;
    case 425u: goto L_0020FFB0;
    case 426u: goto L_0020FFBC;
    case 427u: goto L_0020FFCC;
    case 428u: goto L_0020FFD0;
    case 429u: goto L_0020FFF0;
    default: bad_entry(c, 0x0020C000u); return;
    }
L_0020C000:
    set32(c.r[16], c.r[17].w[0] + 304u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 562u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C018u); st16((c.r[4].w[0] + 566u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0020C018u) [[unlikely]] return; }
L_0020C018:
    c.r[2].d[0] = c.r[2].d[0] & 31ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 400u);
    set32(c.r[5], 0u + 3u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[6], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C038u); st16((c.r[17].w[0] + 560u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x0020C038u) [[unlikely]] return; }
L_0020C038:
    st32((c.r[17].w[0] + 80u), 0u);
    st32((c.r[17].w[0] + 84u), 0u);
    st32((c.r[17].w[0] + 88u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C050u); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0020C050u) [[unlikely]] return; }
L_0020C050:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 14368u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C06Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0020C06Cu) [[unlikely]] return; }
L_0020C06C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[2], 0u + 13107u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C07Cu); mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]); c.r[4].d[0] = c.lo.d[0];  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0020C07Cu) [[unlikely]] return; }
L_0020C07C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C084u); c.r[4].d[0] = 0ull | 51200ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0020C084u) [[unlikely]] return; }
L_0020C084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C08Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0020C08Cu) [[unlikely]] return; }
L_0020C08C:
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBCCC0000u);
    st16((c.r[17].w[0] + 500u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    st16((c.r[17].w[0] + 498u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st16((c.r[17].w[0] + 496u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 52u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C0C0u); st32((c.r[17].w[0] + 68u), 0u);  if (depth < kMaxDepth) unit_0043(c, 10u, depth + 1u); else { c.pc = 0x0020C0E0u; return; } if (c.pc != 0x0020C0C0u) [[unlikely]] return; }
L_0020C0C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020C0E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_0020C12C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C118u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146480u; return; } if (c.pc != 0x0020C118u) [[unlikely]] return; }
L_0020C118:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0020C12C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020C12C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020C158; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0020C158; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 564u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020C158; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 560u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020C190; } }
L_0020C158:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C16Cu); st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x0020C16Cu) [[unlikely]] return; }
L_0020C16C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C184u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_003F(c, 124u, depth + 1u); else { c.pc = 0x001FD300u; return; } if (c.pc != 0x0020C184u) [[unlikely]] return; }
L_0020C184:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020C3C8; } }
    c.budget -= 1;
L_0020C190:
    set32(c.r[2], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0020C2B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0020C1B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020C338; } }
L_0020C1B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.f[2] = ld32((c.r[16].w[0] + 84u));
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 68u), c.f[1]);  if (t) { goto L_0020C338; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[2], 0u + 8196u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 68u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C1FCu); st16((c.r[17].w[0] + 562u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0020C1FCu) [[unlikely]] return; }
L_0020C1FC:
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0020C290; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0020C270; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0020C250; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0020C230; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020C338; } }
L_0020C230:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DA30000u);
    c.r[3].d[0] = c.r[2].d[0] | 55050ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBB830000u);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 68u), c.r[2].w[0]);  if (t) { goto L_0020C338; } }
    c.budget -= 1;
L_0020C250:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDA30000u);
    c.r[3].d[0] = c.r[2].d[0] | 55050ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3B830000u);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 68u), c.r[2].w[0]);  if (t) { goto L_0020C338; } }
    c.budget -= 1;
L_0020C270:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D230000u);
    c.r[3].d[0] = c.r[2].d[0] | 55050ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBB030000u);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 68u), c.r[2].w[0]);  if (t) { goto L_0020C338; } }
    c.budget -= 1;
L_0020C290:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD230000u);
    c.r[3].d[0] = c.r[2].d[0] | 55050ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3B030000u);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 68u), c.r[2].w[0]);  if (t) { goto L_0020C338; } }
    c.budget -= 1;
L_0020C2B0:
    c.f[2] = ld32((c.r[17].w[0] + 68u));
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = 0u;
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[17].w[0] + 52u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0020C308; } }
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDA30000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3B830000u);  if (t) { goto L_0020C338; } }
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 68u), c.r[2].w[0]);  if (t) { goto L_0020C338; } }
L_0020C308:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DA30000u);
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xBB830000u);  if (t) { goto L_0020C338; } }
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 4;
L_0020C338:
    st32((c.r[29].w[0] + 64u), 0u);
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    set32(c.r[18], c.r[29].w[0] + 68u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[29].w[0] + 72u);
    st32((c.r[18].w[0]), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C358u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0020C358u) [[unlikely]] return; }
L_0020C358:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C364u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0020C364u) [[unlikely]] return; }
L_0020C364:
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C3A8u); st32((c.r[17].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0020C3A8u) [[unlikely]] return; }
L_0020C3A8:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C3B8u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0020C3B8u) [[unlikely]] return; }
L_0020C3B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C3C0u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0020C3C0u) [[unlikely]] return; }
L_0020C3C0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0020C3C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0020C3E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0020C3F0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_0020C400:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C434u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0020C434u) [[unlikely]] return; }
L_0020C434:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0020C4A8; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00210000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[7], 0u + 17u);
    set32(c.r[6], 0u + 28u);
    set32(c.r[3], c.r[3].w[0] - 15152u);
    set32(c.r[2], c.r[2].w[0] - 16u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[16].w[0] + 24u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C48Cu); st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x0020C48Cu) [[unlikely]] return; }
L_0020C48C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 29360u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C4A4u); set32(c.r[7], 0u + 12u);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x0020C4A4u) [[unlikely]] return; }
L_0020C4A4:
    c.budget -= 1;
L_0020C4A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0020C4D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 14240u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0020C000u < 16384u) { entry = entries_0043[(t - 0x0020C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0020C4F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[8], 0u + 8192u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[7], 0u + 25600u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], 0u + 120u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], 0u + 2u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[17], ld32((c.r[4].w[0] + 24u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[18].w[0] + 304u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st16((c.r[4].w[0] + 562u), static_cast<std::uint16_t>(c.r[8].w[0]));
    st16((c.r[4].w[0] + 566u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C54Cu); st16((c.r[4].w[0] + 560u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x0020C54Cu) [[unlikely]] return; }
L_0020C54C:
    st32((c.r[18].w[0] + 80u), 0u);
    set32(c.r[4], c.r[17].w[0] + 2112u);
    st32((c.r[18].w[0] + 84u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C560u); st32((c.r[18].w[0] + 88u), 0u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0020C560u) [[unlikely]] return; }
L_0020C560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C568u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0020C568u) [[unlikely]] return; }
L_0020C568:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 14272u);
    set32(c.r[5], c.r[18].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C584u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0020C584u) [[unlikely]] return; }
L_0020C584:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C58Cu);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0020C58Cu) [[unlikely]] return; }
L_0020C58C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C594u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x0020C594u) [[unlikely]] return; }
L_0020C594:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    set32(c.r[4], 0u + 11264u);
    set32(c.r[2], 0u + 15360u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C5A8u); if (c.r[3].d[0] == 0) c.r[4].d[0] = c.r[2].d[0];  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0020C5A8u) [[unlikely]] return; }
L_0020C5A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C5B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0020C5B0u) [[unlikely]] return; }
L_0020C5B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[5], c.r[18].w[0] + 48u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C5CCu); st32((c.r[29].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0020C5CCu) [[unlikely]] return; }
L_0020C5CC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C5DCu); set32(c.r[6], 0u + 1536u);  if (depth < kMaxDepth) unit_003B(c, 253u, depth + 1u); else { c.pc = 0x001EEBC0u; return; } if (c.pc != 0x0020C5DCu) [[unlikely]] return; }
L_0020C5DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0020C5F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C5ECu);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0020C5ECu) [[unlikely]] return; }
L_0020C5EC:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C5F8u); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0020C5F8u) [[unlikely]] return; }
L_0020C5F8:
    set32(c.r[2], 0u + 1u);
    st16((c.r[18].w[0] + 500u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st16((c.r[18].w[0] + 498u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C610u); st16((c.r[18].w[0] + 496u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 41u, depth + 1u); else { c.pc = 0x0020C630u; return; } if (c.pc != 0x0020C610u) [[unlikely]] return; }
L_0020C610:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0020C630:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[1] = c.r[3].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_0020C698; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44F10000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0020C698; } }
    c.f[2] = ld32((c.r[17].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0020C698; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0020C6A8; } }
    c.budget -= 1;
L_0020C698:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0020C830; } }
L_0020C6A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C6B0u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146480u; return; } if (c.pc != 0x0020C6B0u) [[unlikely]] return; }
L_0020C6B0:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0020C6D8; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 560u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020C6D8; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 564u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020C718; } }
L_0020C6D8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 145u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C6F0u); st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x0020C6F0u) [[unlikely]] return; }
L_0020C6F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C6F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x0020C6F8u) [[unlikely]] return; }
L_0020C6F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C710u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_003F(c, 124u, depth + 1u); else { c.pc = 0x001FD300u; return; } if (c.pc != 0x0020C710u) [[unlikely]] return; }
L_0020C710:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020C830; } }
L_0020C718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C720u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 299u, depth + 1u); else { c.pc = 0x0017EEE0u; return; } if (c.pc != 0x0020C720u) [[unlikely]] return; }
L_0020C720:
    set32(c.r[2], ld32((c.r[17].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020C730; } }
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0020C730:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020C7D0; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0020C7C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C764u); set32(c.r[4], ld32((c.r[17].w[0] + 504u)));  if (depth < kMaxDepth) unit_003E(c, 244u, depth + 1u); else { c.pc = 0x001FA4C0u; return; } if (c.pc != 0x0020C764u) [[unlikely]] return; }
L_0020C764:
    set32(c.r[2], ld32((c.r[17].w[0] + 504u)));
    c.f[20] = c.f[0];
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C778u); set32(c.r[4], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0020C778u) [[unlikely]] return; }
L_0020C778:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0020C7D0; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C790u); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_003B(c, 253u, depth + 1u); else { c.pc = 0x001EEBC0u; return; } if (c.pc != 0x0020C790u) [[unlikely]] return; }
L_0020C790:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020C7D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 64u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C7B0u); st32((c.r[29].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0020C7B0u) [[unlikely]] return; }
L_0020C7B0:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C7BCu); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0020C7BCu) [[unlikely]] return; }
L_0020C7BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020C7D0; } }
    c.budget -= 1;
L_0020C7C8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0020C7D0:
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C804u); st32((c.r[17].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0020C804u) [[unlikely]] return; }
L_0020C804:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C814u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0020C814u) [[unlikely]] return; }
L_0020C814:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C81Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x0020C81Cu) [[unlikely]] return; }
L_0020C81C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C824u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0020C824u) [[unlikely]] return; }
L_0020C824:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0020C830:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0020C850:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0020C860:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_0020C870:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C89Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0020C89Cu) [[unlikely]] return; }
L_0020C89C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0020C900; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u + 17u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 29u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00210000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[3], c.r[3].w[0] - 14048u);
    st32((c.r[16].w[0] + 24u), c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] - 16u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C8E8u); st32((c.r[16].w[0] + 28u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x0020C8E8u) [[unlikely]] return; }
L_0020C8E8:
    c.r[7].d[0] = ld8((c.r[17].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 29360u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C900u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x0020C900u) [[unlikely]] return; }
L_0020C900:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0020C920:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 14224u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0020C000u < 16384u) { entry = entries_0043[(t - 0x0020C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0020C940:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[18], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[19].w[0] + 304u);  if (t) { goto L_0020C998; } }
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + 30u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 94u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0020C9B0; } }
L_0020C998:
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st16((c.r[17].w[0] + 94u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
L_0020C9B0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[4], 0u + 8192u);
    set32(c.r[3], 0u + 25600u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[19].w[0] + 7u), static_cast<std::uint8_t>(0u));
    st16((c.r[19].w[0] + 562u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[19].w[0] + 566u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[19].w[0] + 560u), static_cast<std::uint16_t>(0u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.budget -= 13;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0020CA10; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 41u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[5].d[0] & 127ull;  if (t) { goto L_0020CA08; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C9FCu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x0020C9FCu) [[unlikely]] return; }
L_0020C9FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020CA10; } }
    c.budget -= 1;
L_0020CA08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CA10u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 150u, depth + 1u); else { c.pc = 0x002AA460u; return; } if (c.pc != 0x0020CA10u) [[unlikely]] return; }
L_0020CA10:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 40u)));
    st16((c.r[17].w[0] + 80u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 42u)));
    st16((c.r[17].w[0] + 82u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[17].w[0] + 84u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    st8((c.r[17].w[0] + 92u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st16((c.r[19].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[17].w[0] + 88u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 18;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] << 6);  if (t) { goto L_0020CA70; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CA68u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0020CA68u) [[unlikely]] return; }
L_0020CA68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020CA80; } }
L_0020CA70:
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CA7Cu); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0020CA7Cu) [[unlikely]] return; }
L_0020CA7C:
    c.budget -= 1;
L_0020CA80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CA88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0020CA88u) [[unlikely]] return; }
L_0020CA88:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CA94u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0020CA94u) [[unlikely]] return; }
L_0020CA94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CA9Cu);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0020CA9Cu) [[unlikely]] return; }
L_0020CA9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CAA4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x0020CAA4u) [[unlikely]] return; }
L_0020CAA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CAACu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 38u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0020CAACu) [[unlikely]] return; }
L_0020CAAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CAB4u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0020CAB4u) [[unlikely]] return; }
L_0020CAB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CABCu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 34u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0020CABCu) [[unlikely]] return; }
L_0020CABC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CAC4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0020CAC4u) [[unlikely]] return; }
L_0020CAC4:
    st32((c.r[29].w[0] + 80u), 0u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[0] = ld32((c.r[17].w[0] + 84u));
    set32(c.r[5], c.r[19].w[0] + 48u);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CAE0u); st32((c.r[29].w[0] + 88u), 0u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0020CAE0u) [[unlikely]] return; }
L_0020CAE0:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0020CAF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CAF4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 253u, depth + 1u); else { c.pc = 0x001EEBC0u; return; } if (c.pc != 0x0020CAF4u) [[unlikely]] return; }
L_0020CAF4:
    c.budget -= 1;
L_0020CAF8:
    set32(c.r[2], 0u + 1u);
    st16((c.r[19].w[0] + 500u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[19].w[0] + 498u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[19].w[0] + 496u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 80u)));
    st16((c.r[19].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.r[2].d[0] = c.r[3].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 54ll ? 1ull : 0ull;  if (t) { goto L_0020CB38; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0020CB38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CB30u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_001F(c, 353u, depth + 1u); else { c.pc = 0x0017FCB0u; return; } if (c.pc != 0x0020CB30u) [[unlikely]] return; }
L_0020CB30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020CB48; } }
L_0020CB38:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CB44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001F(c, 353u, depth + 1u); else { c.pc = 0x0017FCB0u; return; } if (c.pc != 0x0020CB44u) [[unlikely]] return; }
L_0020CB44:
    c.budget -= 1;
L_0020CB48:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0020CBB8; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 8658u));
    set32(c.r[2], 0u + 69u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 68u);  if (t) { goto L_0020CBA0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0020CBA0; } }
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 32u);  if (t) { goto L_0020CBA0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0020CB90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020CBB0; } }
    c.budget -= 1;
L_0020CB90:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 93u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0020CBC0; } }
    c.budget -= 1;
L_0020CBA0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 93u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0020CBC0; } }
    c.budget -= 1;
L_0020CBB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 93u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0020CBC0; } }
L_0020CBB8:
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 93u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0020CBC0:
    set32(c.r[2], ld32((c.r[19].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 64u);  if (t) { goto L_0020CBE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CBD4u); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0020CBD4u) [[unlikely]] return; }
L_0020CBD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020CC30; } }
    c.budget -= 1;
L_0020CBE0:
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0020CBF0; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 264u)));
    c.budget -= 1;
L_0020CBF0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0020CC18; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 64u);  if (t) { goto L_0020CC18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CC10u); set32(c.r[5], c.r[3].w[0] + 1360u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0020CC10u) [[unlikely]] return; }
L_0020CC10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020CC30; } }
L_0020CC18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[17].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CC2Cu); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0020CC2Cu) [[unlikely]] return; }
L_0020CC2C:
    c.budget -= 1;
L_0020CC30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CC38u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 84u, depth + 1u); else { c.pc = 0x0020CC60u; return; } if (c.pc != 0x0020CC38u) [[unlikely]] return; }
L_0020CC38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0020CC60:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[18].w[0] + 304u);  if (t) { goto L_0020CCA8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0020CCA8; } }
    set32(c.r[3], 0u + 120u);
    st8((c.r[18].w[0] + 7u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[17].w[0] + 94u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0020CCA8:
    set32(c.r[3], ld32((c.r[18].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0020CCC0; } }
    set32(c.r[5], c.r[3].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CCC0u); set32(c.r[4], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0020CCC0u) [[unlikely]] return; }
L_0020CCC0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020CE10; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0020CD70; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 8658u));
    set32(c.r[3], 0u + 80u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0020CD70; } }
    c.f[2] = ld32((c.r[18].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43900000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44CE0000u);  if (t) { goto L_0020CD60; } }
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0020CD60; } }
    c.f[2] = ld32((c.r[18].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0020CD60; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0020CD60; } }
    c.f[1] = ld32((c.r[18].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x45030000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0020CDF0; } }
L_0020CD60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0020D0C8; } }
L_0020CD70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[2] = ld32((c.r[18].w[0] + 32u));
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44F10000u);  if (t) { goto L_0020CDE0; } }
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0020CDE0; } }
    c.f[2] = ld32((c.r[18].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0020CDE0; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0020CDE0; } }
    c.f[1] = ld32((c.r[18].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x45030000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0020CDF0; } }
    c.budget -= 1;
L_0020CDE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0020D0C8; } }
L_0020CDF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CDF8u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146480u; return; } if (c.pc != 0x0020CDF8u) [[unlikely]] return; }
L_0020CDF8:
    c.f[1] = ld32((c.r[18].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0020CE48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 2u);  if (t) { goto L_0020CE48; } }
L_0020CE10:
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CE20u); set32(c.r[4], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0020CE20u) [[unlikely]] return; }
L_0020CE20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x442F0000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0020CE48; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0020D0C8; } }
L_0020CE48:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 94u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 94u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 94u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020CE68; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_0020CE68:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0020CE88; } }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 560u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020CE88; } }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 564u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020CF10; } }
L_0020CE88:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CE9Cu); st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x0020CE9Cu) [[unlikely]] return; }
L_0020CE9C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0020CEE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CEB0u); set32(c.r[5], 0u + 145u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x0020CEB0u) [[unlikely]] return; }
L_0020CEB0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 92u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0020D0C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CED4u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_003F(c, 128u, depth + 1u); else { c.pc = 0x001FD3E0u; return; } if (c.pc != 0x0020CED4u) [[unlikely]] return; }
L_0020CED4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020D0C8; } }
    c.budget -= 1;
L_0020CEE0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 92u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0020D0C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CF04u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_003F(c, 124u, depth + 1u); else { c.pc = 0x001FD300u; return; } if (c.pc != 0x0020CF04u) [[unlikely]] return; }
L_0020CF04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020D0C8; } }
    c.budget -= 1;
L_0020CF10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 93u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0020CF58; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0020CF48; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0020CF38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020CF60; } }
L_0020CF38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CF40u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 299u, depth + 1u); else { c.pc = 0x0017EEE0u; return; } if (c.pc != 0x0020CF40u) [[unlikely]] return; }
L_0020CF40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020CF60; } }
L_0020CF48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CF50u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 301u, depth + 1u); else { c.pc = 0x0017EF30u; return; } if (c.pc != 0x0020CF50u) [[unlikely]] return; }
L_0020CF50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020CF60; } }
L_0020CF58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CF60u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 303u, depth + 1u); else { c.pc = 0x0017EF80u; return; } if (c.pc != 0x0020CF60u) [[unlikely]] return; }
L_0020CF60:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 41u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020CF80; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020CF80; } }
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0020CF80:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020D068; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 166u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020D060; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 80u)));
    st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[12] = ld32((c.r[17].w[0] + 88u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CFB4u); set32(c.r[4], ld32((c.r[18].w[0] + 504u)));  if (depth < kMaxDepth) unit_003E(c, 244u, depth + 1u); else { c.pc = 0x001FA4C0u; return; } if (c.pc != 0x0020CFB4u) [[unlikely]] return; }
L_0020CFB4:
    c.f[20] = c.f[0];
    set32(c.r[4], c.r[17].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CFC4u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0020CFC4u) [[unlikely]] return; }
L_0020CFC4:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0020D058; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 82u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CFE0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 253u, depth + 1u); else { c.pc = 0x001EEBC0u; return; } if (c.pc != 0x0020CFE0u) [[unlikely]] return; }
L_0020CFE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020D000; } }
    c.f[12] = ld32((c.r[17].w[0] + 84u));
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CFF8u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0020CFF8u) [[unlikely]] return; }
L_0020CFF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020D068; } }
L_0020D000:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D00Cu); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0020D00Cu) [[unlikely]] return; }
L_0020D00C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[17].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D01Cu); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0020D01Cu) [[unlikely]] return; }
L_0020D01C:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 82u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D02Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_002E(c, 328u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x0020D02Cu) [[unlikely]] return; }
L_0020D02C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D040u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 179u, depth + 1u); else { c.pc = 0x001BA240u; return; } if (c.pc != 0x0020D040u) [[unlikely]] return; }
L_0020D040:
    c.f[12] = ld32((c.r[17].w[0] + 84u));
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D050u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0020D050u) [[unlikely]] return; }
L_0020D050:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020D068; } }
L_0020D058:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0020D068; } }
L_0020D060:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0020D068:
    c.f[1] = ld32((c.r[18].w[0] + 48u));
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 52u));
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D09Cu); st32((c.r[18].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0020D09Cu) [[unlikely]] return; }
L_0020D09C:
    c.f[13] = ld32((c.r[18].w[0] + 36u));
    c.f[14] = ld32((c.r[18].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D0ACu); c.f[12] = ld32((c.r[18].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0020D0ACu) [[unlikely]] return; }
L_0020D0AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D0B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x0020D0B4u) [[unlikely]] return; }
L_0020D0B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D0BCu); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0020D0BCu) [[unlikely]] return; }
L_0020D0BC:
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0020D0C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0020D0F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0020D100:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_0020D110:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D13Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0020D13Cu) [[unlikely]] return; }
L_0020D13C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0020D1A0; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u + 17u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 32u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00210000u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[3], c.r[3].w[0] - 11840u);
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 9408u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 180u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D1A0u); st32((c.r[16].w[0] + 188u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x0020D1A0u) [[unlikely]] return; }
L_0020D1A0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0020D1C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] - 14016u);
    set32(c.r[6], ld32((c.r[4].w[0] + 264u)));
    set32(c.r[5], c.r[4].w[0] + 304u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[7], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] + 304u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0020C000u < 16384u) { entry = entries_0043[(t - 0x0020C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0020D200:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 100u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 1u);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 498u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 500u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[7].w[0] + 1u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    st8((c.r[5].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[7].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    st8((c.r[5].w[0] + 65u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D264u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x0020D264u) [[unlikely]] return; }
L_0020D264:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D278u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 117u, depth + 1u); else { c.pc = 0x0020D2A0u; return; } if (c.pc != 0x0020D278u) [[unlikely]] return; }
L_0020D278:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0020D2A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0020D2E8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020D398; } }
L_0020D2E8:
    set32(c.r[2], 0u + 2u);
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[19].w[0] + 32u);
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 255u);
    st8((c.r[19].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D310u); st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0045(c, 208u, depth + 1u); else { c.pc = 0x00216100u; return; } if (c.pc != 0x0020D310u) [[unlikely]] return; }
L_0020D310:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[20], c.r[20].w[0] - 14080u);
    c.budget -= 4;
L_0020D320:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D32Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 171u, depth + 1u); else { c.pc = 0x0017D5E0u; return; } if (c.pc != 0x0020D32Cu) [[unlikely]] return; }
L_0020D32C:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020D320u | kUnwind; return; } goto L_0020D320; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020D358; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020D368; } }
    c.budget -= 1;
L_0020D358:
    set32(c.r[4], c.r[19].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D364u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_004E(c, 110u, depth + 1u); else { c.pc = 0x00239510u; return; } if (c.pc != 0x0020D364u) [[unlikely]] return; }
L_0020D364:
    c.budget -= 1;
L_0020D368:
    set32(c.r[2], 0u + 1u);
    st8((c.r[19].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D378u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x0020D378u) [[unlikely]] return; }
L_0020D378:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D38Cu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 174u, depth + 1u); else { c.pc = 0x0020DAF0u; return; } if (c.pc != 0x0020D38Cu) [[unlikely]] return; }
L_0020D38C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020D420; } }
    c.budget -= 1;
L_0020D398:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 64u));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 65u));
    st8((c.r[18].w[0] + 66u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 67u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    st8((c.r[18].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    st8((c.r[18].w[0] + 65u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 64u));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 66u));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0020D3F0; } }
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st32((c.r[19].w[0] + 504u), 0u);
    st32((c.r[19].w[0] + 128u), 0u);
    st32((c.r[19].w[0] + 132u), 0u);
    st32((c.r[19].w[0] + 136u), 0u);
    st32((c.r[19].w[0] + 96u), 0u);
    c.budget -= 8;
L_0020D3F0:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 14000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D41Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020D41Cu) [[unlikely]] return; }
L_0020D41C:
    c.budget -= 1;
L_0020D420:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0020D450:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D470u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 182u, depth + 1u); else { c.pc = 0x0020DC70u; return; } if (c.pc != 0x0020D470u) [[unlikely]] return; }
L_0020D470:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020D490; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1236u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0020D490; } }
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0020D490:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020D4B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D4ECu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x0020D4ECu) [[unlikely]] return; }
L_0020D4EC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    set32(c.r[2], c.r[28].w[0] - 32484u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[21].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D510u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x0020D510u) [[unlikely]] return; }
L_0020D510:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0020D528; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D520u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x0020D520u) [[unlikely]] return; }
L_0020D520:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_0020D528:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0020D558; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D544u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x0020D544u) [[unlikely]] return; }
L_0020D544:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[21].w[0] + 1u);  if (t) { goto L_0020D558; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D554u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x0020D554u) [[unlikely]] return; }
L_0020D554:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0020D558:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0020D570; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8658u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D570u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 159u, depth + 1u); else { c.pc = 0x0023A2B0u; return; } if (c.pc != 0x0020D570u) [[unlikely]] return; }
L_0020D570:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D588u); st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0043(c, 182u, depth + 1u); else { c.pc = 0x0020DC70u; return; } if (c.pc != 0x0020D588u) [[unlikely]] return; }
L_0020D588:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020D5A8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 1236u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0020D5A8; } }
    st8((c.r[20].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0020D5A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0020D5D0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0020D610; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[20].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0020D610:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 564u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 48u);  if (t) { goto L_0020D668; } }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], 0u + 3u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st8((c.r[19].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st8((c.r[19].w[0] + 65u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st32((c.r[20].w[0] + 504u), 0u);
    st32((c.r[20].w[0] + 128u), 0u);
    st32((c.r[20].w[0] + 132u), 0u);
    st32((c.r[20].w[0] + 136u), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D65Cu); st32((c.r[20].w[0] + 96u), 0u);  if (depth < kMaxDepth) unit_0043(c, 149u, depth + 1u); else { c.pc = 0x0020D7A0u; return; } if (c.pc != 0x0020D65Cu) [[unlikely]] return; }
L_0020D65C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020D778; } }
    c.budget -= 1;
L_0020D668:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D674u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x0020D674u) [[unlikely]] return; }
L_0020D674:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D680u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0020D680u) [[unlikely]] return; }
L_0020D680:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[18].w[0] + 1296u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D690u); set32(c.r[6], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0020D690u) [[unlikely]] return; }
L_0020D690:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D6A0u); set32(c.r[6], 0u + 512u);  if (depth < kMaxDepth) unit_002E(c, 328u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x0020D6A0u) [[unlikely]] return; }
L_0020D6A0:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[19].w[0] + 16u);
    set32(c.r[6], 0u + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D6B4u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 179u, depth + 1u); else { c.pc = 0x001BA240u; return; } if (c.pc != 0x0020D6B4u) [[unlikely]] return; }
L_0020D6B4:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 65u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020D748; } }
L_0020D6C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    set32(c.r[2], c.r[28].w[0] - 32484u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[21].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D6E4u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x0020D6E4u) [[unlikely]] return; }
L_0020D6E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0020D6F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D6F4u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x0020D6F4u) [[unlikely]] return; }
L_0020D6F4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0020D6F8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0020D728; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D714u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x0020D714u) [[unlikely]] return; }
L_0020D714:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[21].w[0] + 1u);  if (t) { goto L_0020D728; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D724u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x0020D724u) [[unlikely]] return; }
L_0020D724:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0020D728:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0020D740; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8658u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D740u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 159u, depth + 1u); else { c.pc = 0x0023A2B0u; return; } if (c.pc != 0x0020D740u) [[unlikely]] return; }
L_0020D740:
    set32(c.r[2], 0u + 32u);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0020D748:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D75Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0043(c, 182u, depth + 1u); else { c.pc = 0x0020DC70u; return; } if (c.pc != 0x0020D75Cu) [[unlikely]] return; }
L_0020D75C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020D778; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 1236u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0020D778; } }
    st8((c.r[20].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0020D778:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0020D7A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], c.r[28].w[0] - 32488u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D7E8u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0020D7E8u) [[unlikely]] return; }
L_0020D7E8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[3], c.r[28].w[0] - 32488u);
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D81Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_002E(c, 248u, depth + 1u); else { c.pc = 0x001BA910u; return; } if (c.pc != 0x0020D81Cu) [[unlikely]] return; }
L_0020D81C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 14208u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D834u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x0020D834u) [[unlikely]] return; }
L_0020D834:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D83Cu); set32(c.r[4], c.r[19].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x0020D83Cu) [[unlikely]] return; }
L_0020D83C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 6u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 13984u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D868u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020D868u) [[unlikely]] return; }
L_0020D868:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D87Cu); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_0043(c, 182u, depth + 1u); else { c.pc = 0x0020DC70u; return; } if (c.pc != 0x0020D87Cu) [[unlikely]] return; }
L_0020D87C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020D898; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 1236u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0020D898; } }
    st8((c.r[19].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0020D898:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0020D8C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FE90000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EDD0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.r[7].d[0] = c.r[3].d[0] | 47710ull;
    set32(c.r[5], c.r[17].w[0] + 64u);
    c.r[3].d[0] = c.r[2].d[0] | 28836ull;
    set32(c.r[6], c.r[17].w[0] + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[4].w[0] + 104u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 108u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D914u); set32(c.r[4], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0020D914u) [[unlikely]] return; }
L_0020D914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D91Cu); set32(c.r[4], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x0020D91Cu) [[unlikely]] return; }
L_0020D91C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0020D958; } }
    set32(c.r[4], c.r[17].w[0] + 32u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[17].w[0] + 64u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D950u); st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0020D950u) [[unlikely]] return; }
L_0020D950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0020D960; } }
L_0020D958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D960u); set32(c.r[4], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0020D960u) [[unlikely]] return; }
L_0020D960:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020D980:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D998u); set32(c.r[5], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0043(c, 179u, depth + 1u); else { c.pc = 0x0020DB90u; return; } if (c.pc != 0x0020D998u) [[unlikely]] return; }
L_0020D998:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D9A8u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0020D9A8u) [[unlikely]] return; }
L_0020D9A8:
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D9B8u); set32(c.r[6], 0u + 2048u);  if (depth < kMaxDepth) unit_002E(c, 328u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x0020D9B8u) [[unlikely]] return; }
L_0020D9B8:
    c.f[12] = ld32((c.r[16].w[0] + 104u));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D9C8u); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0020D9C8u) [[unlikely]] return; }
L_0020D9C8:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D9D4u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0020D9D4u) [[unlikely]] return; }
L_0020D9D4:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D9E0u); set32(c.r[5], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0020D9E0u) [[unlikely]] return; }
L_0020D9E0:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0020DA08; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 6;
L_0020DA08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020DA20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[17].w[0] + 64u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DA48u); set32(c.r[6], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0020DA48u) [[unlikely]] return; }
L_0020DA48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DA50u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 202u, depth + 1u); else { c.pc = 0x00127320u; return; } if (c.pc != 0x0020DA50u) [[unlikely]] return; }
L_0020DA50:
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[17].w[0] + 160u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 160u), c.f[1]);  if (t) { goto L_0020DAA0; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[17].w[0] + 64u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DA94u); st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0020DA94u) [[unlikely]] return; }
L_0020DA94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0020DAD0; } }
    c.budget -= 1;
L_0020DAA0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DAC0u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0020DAC0u) [[unlikely]] return; }
L_0020DAC0:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DACCu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0020DACCu) [[unlikely]] return; }
L_0020DACC:
    c.budget -= 1;
L_0020DAD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0020DAF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0020DB28; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 750u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0020DB18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0020DB28; } }
    c.budget -= 1;
L_0020DB18:
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0020DB28; } }
L_0020DB28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0020DB30:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_0020DB40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[4].w[0] + 264u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DB60u); set32(c.r[5], c.r[16].w[0] + 304u);  if (depth < kMaxDepth) unit_0043(c, 182u, depth + 1u); else { c.pc = 0x0020DC70u; return; } if (c.pc != 0x0020DB60u) [[unlikely]] return; }
L_0020DB60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DB78u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x0020DB78u) [[unlikely]] return; }
L_0020DB78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0020DB90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = ld32((c.r[4].w[0] + 104u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DBB0u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0020DBB0u) [[unlikely]] return; }
L_0020DBB0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] - 14144u);
    c.budget -= 4;
L_0020DBC0:
    c.f[1] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0020DBE0; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[3].d[0] = c.r[4].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020DBC0u | kUnwind; return; } goto L_0020DBC0; } }
L_0020DBE0:
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x3EDD0000u);  if (t) { goto L_0020DC20; } }
    c.r[3].d[0] = c.r[3].d[0] | 28836ull;
    c.f[1] = fp::sub(c.f[2], c.f[20]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0020DC18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[2];  if (t) { goto L_0020DC50; } }
    c.budget -= 1;
L_0020DC18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { goto L_0020DC50; } }
L_0020DC20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3EDD0000u);
    c.r[3].d[0] = c.r[3].d[0] | 28836ull;
    c.f[1] = fp::sub(c.f[20], c.f[2]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0020DC48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[2];  if (t) { goto L_0020DC50; } }
L_0020DC48:
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 2;
L_0020DC50:
    st32((c.r[16].w[0] + 104u), c.f[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020DC70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_0020DD38; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_0020DD18; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0020DCB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020DD60; } }
    c.budget -= 1;
L_0020DCB8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[2], c.r[28].w[0] - 32488u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] - 14208u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DCE8u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0020DCE8u) [[unlikely]] return; }
L_0020DCE8:
    c.f[13] = ld32((c.r[18].w[0] + 4u));
    c.f[14] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DCF8u); c.f[12] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0020DCF8u) [[unlikely]] return; }
L_0020DCF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DD00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0020DD00u) [[unlikely]] return; }
L_0020DD00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DD08u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x0020DD08u) [[unlikely]] return; }
L_0020DD08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DD10u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0020DD10u) [[unlikely]] return; }
L_0020DD10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020DD60; } }
L_0020DD18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DD20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0020DD20u) [[unlikely]] return; }
L_0020DD20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DD28u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x0020DD28u) [[unlikely]] return; }
L_0020DD28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DD30u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0020DD30u) [[unlikely]] return; }
L_0020DD30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020DD60; } }
L_0020DD38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DD40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0020DD40u) [[unlikely]] return; }
L_0020DD40:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DD50u); set32(c.r[6], c.r[17].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x0020DD50u) [[unlikely]] return; }
L_0020DD50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DD58u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x0020DD58u) [[unlikely]] return; }
L_0020DD58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DD60u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0020DD60u) [[unlikely]] return; }
L_0020DD60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0020DD80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DDACu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0020DDACu) [[unlikely]] return; }
L_0020DDAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0020DE10; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u + 17u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[7], c.r[17].w[0] + 6u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 16u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00210000u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[3], c.r[3].w[0] - 8656u);
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 4480u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 8664u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DE00u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x0020DE00u) [[unlikely]] return; }
L_0020DE00:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DE0Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x0020DE0Cu) [[unlikely]] return; }
L_0020DE0C:
    c.budget -= 1;
L_0020DE10:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0020DE30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], c.r[4].w[0] + 304u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 264u)));
    c.r[1].d[0] = c.r[9].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[6].w[0] + 304u);  if (t) { goto L_0020DE68; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[3].d[0];  if (t) { goto L_0020DE68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0020DE88; } }
L_0020DE68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[9].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 13312u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DE84u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020DE84u) [[unlikely]] return; }
L_0020DE84:
    c.budget -= 1;
L_0020DE88:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0020DEA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[4].w[0] + c.r[7].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 6u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0020DFA8; } }
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 5u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DEF4u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0020DEF4u) [[unlikely]] return; }
L_0020DEF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DEFCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0020DEFCu) [[unlikely]] return; }
L_0020DEFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DF04u); set32(c.r[4], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x0020DF04u) [[unlikely]] return; }
L_0020DF04:
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBEE60000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[19].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    st32((c.r[19].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 24u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DF34u); st32((c.r[19].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0020DF34u) [[unlikely]] return; }
L_0020DF34:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[8], 0u + 600u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.r[3].d[0] = 0ull | 58368ull;
    set32(c.r[2], 0u + 64u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st16((c.r[19].w[0] + 164u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[8], c.r[8].w[0] + c.r[16].w[0]);
    c.r[8].d[0] = ld8((c.r[8].w[0] + 6u));
    c.r[8].d[0] = c.r[8].d[0] & 15ull;
    st8((c.r[19].w[0] + 10u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[19].w[0] + 160u), c.r[7].w[0]);
    st16((c.r[19].w[0] + 566u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 514u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[19].w[0] + 504u), 0u);
    st32((c.r[19].w[0] + 508u), 0u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DF90u); st8((c.r[19].w[0] + 516u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x0020DF90u) [[unlikely]] return; }
L_0020DF90:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DFA4u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 208u, depth + 1u); else { c.pc = 0x0020DFD0u; return; } if (c.pc != 0x0020DFA4u) [[unlikely]] return; }
L_0020DFA4:
    c.budget -= 1;
L_0020DFA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0020DFD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1626u)));
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0020E010; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0020E060; } }
    goto L_0020E004;
L_0020E000:
    c.budget -= 1;
L_0020E004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020E038; } }
    c.budget -= 1;
L_0020E010:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0020E060; } }
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 769u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020E030; } }
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_0020E030:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020E0B0; } }
L_0020E038:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0020E060; } }
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 769u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020E058; } }
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_0020E058:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020E0B0; } }
L_0020E060:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 13296u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E088u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020E088u) [[unlikely]] return; }
L_0020E088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E090u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0020E090u) [[unlikely]] return; }
L_0020E090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E098u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x0020E098u) [[unlikely]] return; }
L_0020E098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E0A0u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0020E0A0u) [[unlikely]] return; }
L_0020E0A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0020E0B0; } }
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0020E0B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0020E0D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E0E8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 368u, depth + 1u); else { c.pc = 0x0020F360u; return; } if (c.pc != 0x0020E0E8u) [[unlikely]] return; }
L_0020E0E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_0020E130; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E0F8u); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0020E0F8u) [[unlikely]] return; }
L_0020E0F8:
    c.f[2] = ld32((c.r[16].w[0] + 160u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 160u), c.f[1]);  if (t) { goto L_0020E130; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41900000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 5;
L_0020E130:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0020E140:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E168u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 368u, depth + 1u); else { c.pc = 0x0020F360u; return; } if (c.pc != 0x0020E168u) [[unlikely]] return; }
L_0020E168:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_0020E230; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E178u); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0020E178u) [[unlikely]] return; }
L_0020E178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E180u); set32(c.r[4], c.r[17].w[0] + 2048u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0020E180u) [[unlikely]] return; }
L_0020E180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E188u); c.r[4].d[0] = ld16((c.r[17].w[0] + 8428u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0020E188u) [[unlikely]] return; }
L_0020E188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E190u); c.r[4].d[0] = ld16((c.r[17].w[0] + 8424u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0020E190u) [[unlikely]] return; }
L_0020E190:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 13936u);
    set32(c.r[5], c.r[16].w[0] + 144u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E1ACu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0020E1ACu) [[unlikely]] return; }
L_0020E1AC:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[16].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E1C0u); set32(c.r[7], 0u + 512u);  if (depth < kMaxDepth) unit_0043(c, 346u, depth + 1u); else { c.pc = 0x0020F000u; return; } if (c.pc != 0x0020E1C0u) [[unlikely]] return; }
L_0020E1C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E1D0u); set32(c.r[6], 0u + 768u);  if (depth < kMaxDepth) unit_003B(c, 227u, depth + 1u); else { c.pc = 0x001EE890u; return; } if (c.pc != 0x0020E1D0u) [[unlikely]] return; }
L_0020E1D0:
    c.f[1] = ld32((c.r[16].w[0] + 160u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[5], c.r[16].w[0] + 144u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E1F0u); st32((c.r[16].w[0] + 160u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0020E1F0u) [[unlikely]] return; }
L_0020E1F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0020E220; } }
    c.f[1] = ld32((c.r[16].w[0] + 160u));
    c.f[0] = 0u;
    c.budget -= 3;
L_0020E214:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0020E230; } }
L_0020E220:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0020E230:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0020E250:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E278u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 368u, depth + 1u); else { c.pc = 0x0020F360u; return; } if (c.pc != 0x0020E278u) [[unlikely]] return; }
L_0020E278:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 2048u);  if (t) { goto L_0020E420; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E288u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0020E288u) [[unlikely]] return; }
L_0020E288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E290u); c.r[4].d[0] = ld16((c.r[16].w[0] + 8428u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0020E290u) [[unlikely]] return; }
L_0020E290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E298u); c.r[4].d[0] = ld16((c.r[16].w[0] + 8424u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0020E298u) [[unlikely]] return; }
L_0020E298:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 13936u);
    set32(c.r[5], c.r[17].w[0] + 144u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E2B4u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0020E2B4u) [[unlikely]] return; }
L_0020E2B4:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E2C8u); set32(c.r[7], 0u + 1024u);  if (depth < kMaxDepth) unit_0043(c, 346u, depth + 1u); else { c.pc = 0x0020F000u; return; } if (c.pc != 0x0020E2C8u) [[unlikely]] return; }
L_0020E2C8:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E2D8u); set32(c.r[6], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0020E2D8u) [[unlikely]] return; }
L_0020E2D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D800000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E2ECu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0020E2ECu) [[unlikely]] return; }
L_0020E2EC:
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E30Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0020E30Cu) [[unlikely]] return; }
L_0020E30C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[17].w[0] + 32u);  if (t) { goto L_0020E330; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E330u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0020E330u) [[unlikely]] return; }
L_0020E330:
    set32(c.r[2], ld32((c.r[16].w[0] + 504u)));
    st32((c.r[17].w[0] + 504u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 508u)));
    st32((c.r[17].w[0] + 508u), c.r[2].w[0]);
    c.f[3] = ld32((c.r[16].w[0] + 1296u));
    c.f[2] = ld32((c.r[16].w[0] + 1300u));
    c.f[1] = ld32((c.r[16].w[0] + 1304u));
    c.f[0] = ld32((c.r[16].w[0] + 1308u));
    st32((c.r[17].w[0] + 128u), c.f[3]);
    st32((c.r[17].w[0] + 132u), c.f[2]);
    st32((c.r[17].w[0] + 136u), c.f[1]);
    st32((c.r[17].w[0] + 140u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 504u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0020E418; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020E418; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020E418; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020E418; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[17].w[0] + 104u), 0u);
    st32((c.r[17].w[0] + 108u), c.r[3].w[0]);
    st16((c.r[17].w[0] + 500u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E3C4u); st16((c.r[17].w[0] + 498u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x0020E3C4u) [[unlikely]] return; }
L_0020E3C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E3CCu); set32(c.r[4], c.r[16].w[0] + 2048u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0020E3CCu) [[unlikely]] return; }
L_0020E3CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E3D4u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x0020E3D4u) [[unlikely]] return; }
L_0020E3D4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E3E4u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0020E3E4u) [[unlikely]] return; }
L_0020E3E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E3ECu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0020E3ECu) [[unlikely]] return; }
L_0020E3EC:
    set32(c.r[3], c.r[29].w[0] + 64u);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[17].w[0] + 64u), c.f[3]);
    st32((c.r[17].w[0] + 68u), c.f[2]);
    st32((c.r[17].w[0] + 72u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.f[0]);  if (t) { goto L_0020E420; } }
    c.budget -= 1;
L_0020E418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E420u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x0020E420u) [[unlikely]] return; }
L_0020E420:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0020E440:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E460u); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 368u, depth + 1u); else { c.pc = 0x0020F360u; return; } if (c.pc != 0x0020E460u) [[unlikely]] return; }
L_0020E460:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0020E538; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E470u);  if (depth < kMaxDepth) unit_0043(c, 371u, depth + 1u); else { c.pc = 0x0020F420u; return; } if (c.pc != 0x0020E470u) [[unlikely]] return; }
L_0020E470:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020E538; } }
    c.f[2] = ld32((c.r[17].w[0] + 108u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 104u), c.f[1]);  if (t) { goto L_0020E4A0; } }
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 1;
L_0020E4A0:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E4B0u); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0020E4B0u) [[unlikely]] return; }
L_0020E4B0:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E4BCu); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0020E4BCu) [[unlikely]] return; }
L_0020E4BC:
    set32(c.r[4], c.r[17].w[0] + 144u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E4CCu); set32(c.r[6], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x0020E4CCu) [[unlikely]] return; }
L_0020E4CC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E4E0u); set32(c.r[7], 0u + 2048u);  if (depth < kMaxDepth) unit_0043(c, 346u, depth + 1u); else { c.pc = 0x0020F000u; return; } if (c.pc != 0x0020E4E0u) [[unlikely]] return; }
L_0020E4E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020E538; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[4], c.r[17].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E504u); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0020E504u) [[unlikely]] return; }
L_0020E504:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] - 13456u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 128u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E538u); st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 354u, depth + 1u); else { c.pc = 0x0020F110u; return; } if (c.pc != 0x0020E538u) [[unlikely]] return; }
L_0020E538:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020E550:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E578u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 368u, depth + 1u); else { c.pc = 0x0020F360u; return; } if (c.pc != 0x0020E578u) [[unlikely]] return; }
L_0020E578:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0020E640; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E588u);  if (depth < kMaxDepth) unit_0043(c, 371u, depth + 1u); else { c.pc = 0x0020F420u; return; } if (c.pc != 0x0020E588u) [[unlikely]] return; }
L_0020E588:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + 32u);  if (t) { goto L_0020E640; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E598u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0020E598u) [[unlikely]] return; }
L_0020E598:
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E5A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 331u, depth + 1u); else { c.pc = 0x0020EEC0u; return; } if (c.pc != 0x0020E5A8u) [[unlikely]] return; }
L_0020E5A8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E5B4u); set32(c.r[5], c.r[17].w[0] + 144u);  if (depth < kMaxDepth) unit_0043(c, 354u, depth + 1u); else { c.pc = 0x0020F110u; return; } if (c.pc != 0x0020E5B4u) [[unlikely]] return; }
L_0020E5B4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E5C8u); set32(c.r[7], 0u + 256u);  if (depth < kMaxDepth) unit_0043(c, 346u, depth + 1u); else { c.pc = 0x0020F000u; return; } if (c.pc != 0x0020E5C8u) [[unlikely]] return; }
L_0020E5C8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E5D4u); set32(c.r[5], c.r[17].w[0] + 144u);  if (depth < kMaxDepth) unit_0043(c, 359u, depth + 1u); else { c.pc = 0x0020F210u; return; } if (c.pc != 0x0020E5D4u) [[unlikely]] return; }
L_0020E5D4:
    c.r[6].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E5E8u); set32(c.r[5], c.r[17].w[0] + 144u);  if (depth < kMaxDepth) unit_003B(c, 227u, depth + 1u); else { c.pc = 0x001EE890u; return; } if (c.pc != 0x0020E5E8u) [[unlikely]] return; }
L_0020E5E8:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E5F4u); set32(c.r[5], c.r[17].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0020E5F4u) [[unlikely]] return; }
L_0020E5F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0020E640; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[3], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0020E638; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 160u), c.r[3].w[0]);  if (t) { goto L_0020E640; } }
L_0020E638:
    set32(c.r[3], c.r[5].w[0] + 16u);
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    c.budget -= 2;
L_0020E640:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0020E660:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E688u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 368u, depth + 1u); else { c.pc = 0x0020F360u; return; } if (c.pc != 0x0020E688u) [[unlikely]] return; }
L_0020E688:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0020E770; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E698u);  if (depth < kMaxDepth) unit_0043(c, 371u, depth + 1u); else { c.pc = 0x0020F420u; return; } if (c.pc != 0x0020E698u) [[unlikely]] return; }
L_0020E698:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020E770; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 64u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E6B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 331u, depth + 1u); else { c.pc = 0x0020EEC0u; return; } if (c.pc != 0x0020E6B0u) [[unlikely]] return; }
L_0020E6B0:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[16].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E6C4u); set32(c.r[7], 0u + 1024u);  if (depth < kMaxDepth) unit_0043(c, 346u, depth + 1u); else { c.pc = 0x0020F000u; return; } if (c.pc != 0x0020E6C4u) [[unlikely]] return; }
L_0020E6C4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[16].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E6D4u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0020E6D4u) [[unlikely]] return; }
L_0020E6D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D800000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E6E8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0020E6E8u) [[unlikely]] return; }
L_0020E6E8:
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E708u); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0020E708u) [[unlikely]] return; }
L_0020E708:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_0020E730; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E72Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0020E72Cu) [[unlikely]] return; }
L_0020E72C:
    c.budget -= 1;
L_0020E730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E738u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 337u, depth + 1u); else { c.pc = 0x001EFA80u; return; } if (c.pc != 0x0020E738u) [[unlikely]] return; }
L_0020E738:
    c.f[2] = ld32((c.r[16].w[0] + 160u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 160u), c.f[1]);  if (t) { goto L_0020E770; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 5;
L_0020E770:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0020E790:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 508u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0020E820; } }
    set32(c.r[19], ld32((c.r[18].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0020E820; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020E820; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020E820; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 128u);  if (t) { goto L_0020E820; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E7F4u); set32(c.r[5], c.r[19].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0020E7F4u) [[unlikely]] return; }
L_0020E7F4:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0020E820; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020E820; } }
    st32((c.r[18].w[0] + 504u), 0u);
    c.budget -= 2;
L_0020E820:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[18].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E834u); set32(c.r[7], 0u + 1024u);  if (depth < kMaxDepth) unit_0043(c, 346u, depth + 1u); else { c.pc = 0x0020F000u; return; } if (c.pc != 0x0020E834u) [[unlikely]] return; }
L_0020E834:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E83Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 337u, depth + 1u); else { c.pc = 0x001EFA80u; return; } if (c.pc != 0x0020E83Cu) [[unlikely]] return; }
L_0020E83C:
    c.f[2] = ld32((c.r[18].w[0] + 160u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[18].w[0] + 160u), c.f[1]);  if (t) { goto L_0020E8E0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], 0u + 128u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[18].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1576u)));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0020E8E0; } }
    c.budget -= 1;
L_0020E888:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E8A8u); set32(c.r[19], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x0020E8A8u) [[unlikely]] return; }
L_0020E8A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[19].w[0] + 11u);  if (t) { goto L_0020E8B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E8B8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x0020E8B8u) [[unlikely]] return; }
L_0020E8B8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020E888u | kUnwind; return; } goto L_0020E888; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 160u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8658u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E8DCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 159u, depth + 1u); else { c.pc = 0x0023A2B0u; return; } if (c.pc != 0x0020E8DCu) [[unlikely]] return; }
L_0020E8DC:
    c.budget -= 1;
L_0020E8E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0020E900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[1] = c.r[3].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[4].w[0] + 160u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 160u), c.f[1]);  if (t) { goto L_0020E9B0; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    set32(c.r[2], c.r[2].w[0] - 13392u);
    set32(c.r[6], c.r[7].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[16].w[0] + 128u), c.f[3]);
    st32((c.r[16].w[0] + 132u), c.f[2]);
    st32((c.r[16].w[0] + 136u), c.f[1]);
    st32((c.r[16].w[0] + 140u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E988u); set32(c.r[6], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0043(c, 331u, depth + 1u); else { c.pc = 0x0020EEC0u; return; } if (c.pc != 0x0020E988u) [[unlikely]] return; }
L_0020E988:
    set32(c.r[4], c.r[16].w[0] + 64u);
    set32(c.r[5], c.r[16].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E998u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0020E998u) [[unlikely]] return; }
L_0020E998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E9A0u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0020E9A0u) [[unlikely]] return; }
L_0020E9A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E9ACu); st8((c.r[16].w[0] + 514u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x0020E9ACu) [[unlikely]] return; }
L_0020E9AC:
    c.budget -= 1;
L_0020E9B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0020E9C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[2] = ld32((c.r[4].w[0] + 108u));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 104u), c.f[1]);  if (t) { goto L_0020EA00; } }
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 2;
L_0020EA00:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EA10u); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0020EA10u) [[unlikely]] return; }
L_0020EA10:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EA1Cu); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0020EA1Cu) [[unlikely]] return; }
L_0020EA1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EA30u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0020EA30u) [[unlikely]] return; }
L_0020EA30:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EA40u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x0020EA40u) [[unlikely]] return; }
L_0020EA40:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EA54u); set32(c.r[7], 0u + 2048u);  if (depth < kMaxDepth) unit_0043(c, 346u, depth + 1u); else { c.pc = 0x0020F000u; return; } if (c.pc != 0x0020EA54u) [[unlikely]] return; }
L_0020EA54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020EA80; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[4], c.r[17].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EA7Cu); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0020EA7Cu) [[unlikely]] return; }
L_0020EA7C:
    c.budget -= 1;
L_0020EA80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0020EAA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EACCu); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0020EACCu) [[unlikely]] return; }
L_0020EACC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[2], c.r[28].w[0] - 32480u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EAECu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0020EAECu) [[unlikely]] return; }
L_0020EAEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EAF4u); set32(c.r[4], c.r[18].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x0020EAF4u) [[unlikely]] return; }
L_0020EAF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EAFCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0020EAFCu) [[unlikely]] return; }
L_0020EAFC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EB08u); set32(c.r[5], c.r[18].w[0] + 144u);  if (depth < kMaxDepth) unit_0043(c, 354u, depth + 1u); else { c.pc = 0x0020F110u; return; } if (c.pc != 0x0020EB08u) [[unlikely]] return; }
L_0020EB08:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EB18u); set32(c.r[6], 0u + 2048u);  if (depth < kMaxDepth) unit_003B(c, 227u, depth + 1u); else { c.pc = 0x001EE890u; return; } if (c.pc != 0x0020EB18u) [[unlikely]] return; }
L_0020EB18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EB20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0020EB20u) [[unlikely]] return; }
L_0020EB20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EB34u); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0020EB34u) [[unlikely]] return; }
L_0020EB34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EB3Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0020EB3Cu) [[unlikely]] return; }
L_0020EB3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EB44u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0020EB44u) [[unlikely]] return; }
L_0020EB44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EB54u); set32(c.r[4], c.r[4].w[0] - 13968u);  if (depth < kMaxDepth) unit_0009(c, 197u, depth + 1u); else { c.pc = 0x00126FE0u; return; } if (c.pc != 0x0020EB54u) [[unlikely]] return; }
L_0020EB54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EB5Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0020EB5Cu) [[unlikely]] return; }
L_0020EB5C:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EB68u); set32(c.r[5], c.r[18].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0020EB68u) [[unlikely]] return; }
L_0020EB68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0020EB98; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D800000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[18].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 6;
L_0020EB98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0020EBB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 5u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EBECu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0020EBECu) [[unlikely]] return; }
L_0020EBEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EBF4u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x0020EBF4u) [[unlikely]] return; }
L_0020EBF4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[2], c.r[28].w[0] - 32480u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EC14u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0020EC14u) [[unlikely]] return; }
L_0020EC14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EC1Cu); set32(c.r[4], c.r[18].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x0020EC1Cu) [[unlikely]] return; }
L_0020EC1C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EC28u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x00127450u; return; } if (c.pc != 0x0020EC28u) [[unlikely]] return; }
L_0020EC28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EC3Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0020EC3Cu) [[unlikely]] return; }
L_0020EC3C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EC48u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0020EC48u) [[unlikely]] return; }
L_0020EC48:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EC5Cu); set32(c.r[7], 0u + 1024u);  if (depth < kMaxDepth) unit_0043(c, 346u, depth + 1u); else { c.pc = 0x0020F000u; return; } if (c.pc != 0x0020EC5Cu) [[unlikely]] return; }
L_0020EC5C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[18].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EC70u); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0020EC70u) [[unlikely]] return; }
L_0020EC70:
    c.f[1] = ld32((c.r[18].w[0] + 160u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0020ECA8; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020ECA8u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0020ECA8u) [[unlikely]] return; }
L_0020ECA8:
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020ECC8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0020ECC8u) [[unlikely]] return; }
L_0020ECC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[3].d[0] = c.r[3].d[0] | 4719ull;
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[18].w[0] + 32u);  if (t) { goto L_0020ECF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020ECECu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0020ECECu) [[unlikely]] return; }
L_0020ECEC:
    c.budget -= 1;
L_0020ECF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[18].w[0] + 160u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[18].w[0] + 160u), c.f[0]);  if (t) { goto L_0020ED78; } }
    c.f[1] = ld32((c.r[18].w[0] + 160u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0020ED78; } }
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], c.r[17].w[0] + 304u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 2u);
    st32((c.r[18].w[0] + 504u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[18].w[0] + 508u), 0u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 304u));
    if (c.r[7].d[0] == 0) c.r[6].d[0] = c.r[3].d[0];
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 304u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8658u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020ED74u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_004E(c, 159u, depth + 1u); else { c.pc = 0x0023A2B0u; return; } if (c.pc != 0x0020ED74u) [[unlikely]] return; }
L_0020ED74:
    c.budget -= 1;
L_0020ED78:
    c.f[1] = ld32((c.r[18].w[0] + 160u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0020ED98; } }
    st32((c.r[18].w[0] + 160u), c.f[0]);
    c.budget -= 2;
L_0020ED98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0020EDB0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 6u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0020EE20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EDF4u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_001A(c, 40u, depth + 1u); else { c.pc = 0x00168580u; return; } if (c.pc != 0x0020EDF4u) [[unlikely]] return; }
L_0020EDF4:
    c.r[19].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[19].w[0] - 13376u);
    c.budget -= 3;
L_0020EE00:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EE0Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 171u, depth + 1u); else { c.pc = 0x0017D5E0u; return; } if (c.pc != 0x0020EE0Cu) [[unlikely]] return; }
L_0020EE0C:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020EE00u | kUnwind; return; } goto L_0020EE00; } }
    c.budget -= 1;
L_0020EE20:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 750u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020EE48; } }
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0020EE50; } }
L_0020EE48:
    set32(c.r[3], 0u + 3u);
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0020EE50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0020EE70:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_0020EE80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EE98u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0020EE98u) [[unlikely]] return; }
L_0020EE98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EEA0u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x0020EEA0u) [[unlikely]] return; }
L_0020EEA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EEA8u); set32(c.r[4], ld32((c.r[16].w[0] + 188u)));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x0020EEA8u) [[unlikely]] return; }
L_0020EEA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0020EEC0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 8592u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EEECu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0020EEECu) [[unlikely]] return; }
L_0020EEEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EEF4u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x0020EEF4u) [[unlikely]] return; }
L_0020EEF4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EF04u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x0020EF04u) [[unlikely]] return; }
L_0020EF04:
    set32(c.r[4], c.r[19].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EF10u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0020EF10u) [[unlikely]] return; }
L_0020EF10:
    set32(c.r[16], c.r[29].w[0] + 88u);
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = ld32((c.r[16].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EF28u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0020EF28u) [[unlikely]] return; }
L_0020EF28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020EF50; } }
    c.f[12] = ld32((c.r[29].w[0] + 80u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EF50u); c.f[13] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0020EF50u) [[unlikely]] return; }
L_0020EF50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EF58u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0020EF58u) [[unlikely]] return; }
L_0020EF58:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] << 12);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EF6Cu); set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0020EF6Cu) [[unlikely]] return; }
L_0020EF6C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EF80u); set32(c.r[4], c.r[2].w[0] << 12);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0020EF80u) [[unlikely]] return; }
L_0020EF80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EF90u); set32(c.r[4], c.r[4].w[0] - 13952u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0020EF90u) [[unlikely]] return; }
L_0020EF90:
    c.f[12] = ld32((c.r[17].w[0] + 4u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EFA0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0020EFA0u) [[unlikely]] return; }
L_0020EFA0:
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41080000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[18].w[0] + 8592u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EFBCu); st32((c.r[29].w[0] + 84u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0020EFBCu) [[unlikely]] return; }
L_0020EFBC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EFC8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0020EFC8u) [[unlikely]] return; }
L_0020EFC8:
    set32(c.r[4], c.r[19].w[0] + 144u);
    set32(c.r[6], c.r[19].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EFD8u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x0020EFD8u) [[unlikely]] return; }
L_0020EFD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0020F000:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 24u));
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F054u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x0020F054u) [[unlikely]] return; }
L_0020F054:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F064u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0020F064u) [[unlikely]] return; }
L_0020F064:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F074u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_002E(c, 322u, depth + 1u); else { c.pc = 0x001BB280u; return; } if (c.pc != 0x0020F074u) [[unlikely]] return; }
L_0020F074:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] < 0; set32(c.r[17], 0u + 1u);  if (t) { goto L_0020F0A0; } }
    c.r[2].d[0] = c.r[19].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0020F0C0; } }
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0020F0C0; } }
L_0020F0A0:
    c.r[2].d[0] = c.r[19].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0020F0C0; } }
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0020F0C0:
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F0D0u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 126u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x0020F0D0u) [[unlikely]] return; }
L_0020F0D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F0D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0020F0D8u) [[unlikely]] return; }
L_0020F0D8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F0E4u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 183u, depth + 1u); else { c.pc = 0x00126930u; return; } if (c.pc != 0x0020F0E4u) [[unlikely]] return; }
L_0020F0E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F0ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0020F0ECu) [[unlikely]] return; }
L_0020F0EC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0020F110:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F134u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0009(c, 202u, depth + 1u); else { c.pc = 0x00127320u; return; } if (c.pc != 0x0020F134u) [[unlikely]] return; }
L_0020F134:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F144u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0020F144u) [[unlikely]] return; }
L_0020F144:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 13904u);
    c.budget -= 3;
L_0020F150:
    c.f[1] = ld32((c.r[4].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0020F170; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F150u | kUnwind; return; } goto L_0020F150; } }
L_0020F170:
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[1] = fp::sub(c.f[2], c.f[20]);  if (t) { goto L_0020F1A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0020F1A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[2];  if (t) { goto L_0020F1A8; } }
L_0020F1A0:
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 2;
L_0020F1A8:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[1] = fp::sub(c.f[20], c.f[2]);  if (t) { goto L_0020F1E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0020F1D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[2];  if (t) { goto L_0020F1E0; } }
    c.budget -= 1;
L_0020F1D8:
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 2;
L_0020F1E0:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F1F0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0020F1F0u) [[unlikely]] return; }
L_0020F1F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0020F210:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F234u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 203u, depth + 1u); else { c.pc = 0x00127360u; return; } if (c.pc != 0x0020F234u) [[unlikely]] return; }
L_0020F234:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F244u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0020F244u) [[unlikely]] return; }
L_0020F244:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F24Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0020F24Cu) [[unlikely]] return; }
L_0020F24C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F258u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0020F258u) [[unlikely]] return; }
L_0020F258:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_0020F278; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1];  if (t) { goto L_0020F294; } }
L_0020F278:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0020F294; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1];  if (t) { goto L_0020F294; } }
L_0020F294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F29Cu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00125FA0u; return; } if (c.pc != 0x0020F29Cu) [[unlikely]] return; }
L_0020F29C:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.f[0] = c.r[16].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F2B0u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x0020F2B0u) [[unlikely]] return; }
L_0020F2B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));  if (t) { goto L_0020F2D0; } }
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 2;
L_0020F2D0:
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F2DCu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x0020F2DCu) [[unlikely]] return; }
L_0020F2DC:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F2ECu);  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x0020F2ECu) [[unlikely]] return; }
L_0020F2EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 3585ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0020F320; } }
    set32(c.r[3], 0u + 3584u);
    c.budget -= 1;
L_0020F320:
    c.r[2].d[0] = c.r[3].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 768ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0020F338; } }
    set32(c.r[3], 0u + 768u);
    c.budget -= 1;
L_0020F338:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.r[3].d[0] << 48;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0020F360:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 504u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0020F3E0; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020F398; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020F398; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020F3C8; } }
L_0020F398:
    set32(c.r[2], 0u + 9u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    st32((c.r[4].w[0] + 504u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    st32((c.r[4].w[0] + 508u), 0u);
    st32((c.r[4].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F3C0u); st8((c.r[4].w[0] + 514u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x0020F3C0u) [[unlikely]] return; }
L_0020F3C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0020F408; } }
L_0020F3C8:
    set32(c.r[5], c.r[3].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F3D4u); set32(c.r[4], c.r[4].w[0] + 128u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0020F3D4u) [[unlikely]] return; }
L_0020F3D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020F400; } }
    c.budget -= 1;
L_0020F3E0:
    c.f[3] = ld32((c.r[5].w[0] + 1296u));
    c.f[2] = ld32((c.r[5].w[0] + 1300u));
    c.f[1] = ld32((c.r[5].w[0] + 1304u));
    c.f[0] = ld32((c.r[5].w[0] + 1308u));
    st32((c.r[4].w[0] + 128u), c.f[3]);
    st32((c.r[4].w[0] + 132u), c.f[2]);
    st32((c.r[4].w[0] + 136u), c.f[1]);
    st32((c.r[4].w[0] + 140u), c.f[0]);
    c.budget -= 8;
L_0020F400:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0020F408:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0020F420:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 9u);  if (t) { goto L_0020F478; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 504u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    st32((c.r[4].w[0] + 508u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F46Cu); st8((c.r[4].w[0] + 514u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x0020F46Cu) [[unlikely]] return; }
L_0020F46C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0020F480; } }
    c.budget -= 1;
L_0020F478:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0020F480:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0020F490:
    set32(c.r[3], 0u + 195u);
    set32(c.r[4], 0u + 1u);
    st8((c.r[28].w[0] - 24108u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 451u);
    st8((c.r[28].w[0] - 24104u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[28].w[0] - 24116u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[28].w[0] - 24112u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0020F4B0:
    c.r[3].d[0] = ld16((c.r[28].w[0] - 24112u));
    set32(c.r[29], c.r[29].w[0] - 16u);
    st16((c.r[29].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[29].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 9u));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 12u));
    st8((c.r[29].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[29].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[29].w[0] + 12u));
    st16((c.r[28].w[0] - 24112u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0020F4F0:
    c.r[2].d[0] = ld16((c.r[28].w[0] - 24116u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0020F500; } }
    st16((c.r[28].w[0] - 24116u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0020F500:
    c.r[4].d[0] = ld16((c.r[28].w[0] - 24116u));
    set32(c.r[2], 0u + 32749u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    st16((c.r[28].w[0] - 24116u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[28].w[0] - 24116u));  c.pc = t; return; }
L_0020F540:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F558u); set32(c.r[4], ld32((c.r[4].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x0020F558u) [[unlikely]] return; }
L_0020F558:
    c.f[2] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F584u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x0020F584u) [[unlikely]] return; }
L_0020F584:
    c.f[2] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0020F5B0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 176u), c.r[5].w[0]);  if (t) { goto L_0020F5F8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0] + 180u), c.r[3].w[0]);  if (t) { goto L_0020F5F8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 180u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0] + 184u), c.r[3].w[0]);  if (t) { goto L_0020F5F8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 184u)));
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[4].w[0] + 188u), c.r[3].w[0]);
    c.budget -= 6;
L_0020F5F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0020F600:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; c.f[20] = c.f[12];  if (t) { goto L_0020F6D8; } }
    set32(c.r[3], c.r[6].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F648u); set32(c.r[4], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0020F648u) [[unlikely]] return; }
L_0020F648:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F654u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0020F654u) [[unlikely]] return; }
L_0020F654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F65Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0020F65Cu) [[unlikely]] return; }
L_0020F65C:
    set32(c.r[3], c.r[29].w[0] + 72u);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0020F6D8; } }
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0020F6D8; } }
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[20], c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0020F6CC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020F6CC:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - c.r[2].w[0]);  if (t) { goto L_0020F6E8; } }
L_0020F6D8:
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), 0u);
    c.budget -= 4;
L_0020F6E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0020F700:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], c.r[4].w[0] << 4);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 13248u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F72Cu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0009(c, 167u, depth + 1u); else { c.pc = 0x00126260u; return; } if (c.pc != 0x0020F72Cu) [[unlikely]] return; }
L_0020F72C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F734u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0020F734u) [[unlikely]] return; }
L_0020F734:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 41u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 42u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0020F790; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0020F770; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F768u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0020F768u) [[unlikely]] return; }
L_0020F768:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020F790; } }
L_0020F770:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);  if (t) { goto L_0020F790; } }
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F78Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0020F78Cu) [[unlikely]] return; }
L_0020F78C:
    c.budget -= 1;
L_0020F790:
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    c.f[13] = ld32((c.r[16].w[0] + 8u));
    c.f[14] = ld32((c.r[16].w[0] + 12u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F7A4u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 224u, depth + 1u); else { c.pc = 0x00127770u; return; } if (c.pc != 0x0020F7A4u) [[unlikely]] return; }
L_0020F7A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F7ACu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 167u, depth + 1u); else { c.pc = 0x00126260u; return; } if (c.pc != 0x0020F7ACu) [[unlikely]] return; }
L_0020F7AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020F7C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 13152u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0] + 4u));
    c.f[13] = ld32((c.r[2].w[0] + 8u));
    c.f[14] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 9;
    { set32(c.r[4], ld32((c.r[2].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001278A0u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 233u, depth); }
L_0020F7E0:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_0020F7E4:
    c.budget -= 3;
L_0020F7F0:
    set32(c.r[29], c.r[29].w[0] - 768u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] - 1u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_0020F8B8; } }
    c.r[1].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[5], c.r[16].w[0] - 9u);  if (t) { goto L_0020F878; } }
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 2;
L_0020F848:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F848u | kUnwind; return; } goto L_0020F848; } }
L_0020F878:
    set32(c.r[4], c.r[16].w[0] - 1u);
    c.r[1].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { goto L_0020F8B8; } }
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[2].w[0] + 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 4;
L_0020F898:
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F898u | kUnwind; return; } goto L_0020F898; } }
    c.budget -= 1;
L_0020F8B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[3], c.r[16].w[0] - 1u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[29].w[0] + 704u), 0u);
    set32(c.r[20], c.r[29].w[0] + 448u);
    set32(c.r[19], c.r[29].w[0] + 512u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], 0u + 1u);
    st32((c.r[29].w[0] + 576u), c.f[2]);
    c.f[2] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 640u), c.f[2]);
    c.f[3] = ld32((c.r[18].w[0] + 16u));
    c.f[2] = ld32((c.r[18].w[0]));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[2] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 384u), c.f[2]);
    c.f[3] = ld32((c.r[18].w[0] + 20u));
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[2] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[20].w[0]), c.f[2]);
    c.f[3] = ld32((c.r[18].w[0] + 24u));
    c.f[2] = ld32((c.r[18].w[0] + 8u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[2] = fp::mul(c.f[0], c.f[2]);
    c.budget -= 30;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[19].w[0]), c.f[2]);  if (t) { goto L_0020FA38; } }
    set32(c.r[10], c.r[29].w[0] + 132u);
    set32(c.r[9], c.r[29].w[0] + 708u);
    set32(c.r[8], c.r[29].w[0] + 644u);
    set32(c.r[7], c.r[29].w[0] + 580u);
    set32(c.r[6], c.r[18].w[0] + 16u);
    set32(c.r[5], c.r[29].w[0] + 388u);
    c.budget -= 6;
L_0020F948:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.f[2] = ld32((c.r[10].w[0]));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    st32((c.r[9].w[0]), c.f[2]);
    c.f[3] = ld32((c.r[10].w[0] - 4u));
    set32(c.r[9], c.r[9].w[0] + 4u);
    c.f[2] = ld32((c.r[10].w[0]));
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[2] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[8].w[0]), c.f[2]);
    c.f[2] = ld32((c.r[10].w[0] - 4u));
    set32(c.r[8], c.r[8].w[0] + 4u);
    st32((c.r[7].w[0]), c.f[2]);
    c.f[6] = ld32((c.r[6].w[0]));
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.f[3] = ld32((c.r[6].w[0] - 16u));
    c.f[2] = ld32((c.r[6].w[0] + 16u));
    c.f[4] = ld32((c.r[10].w[0] - 4u));
    c.f[5] = ld32((c.r[10].w[0]));
    c.f[3] = fp::sub(c.f[6], c.f[3]);
    c.f[2] = fp::sub(c.f[2], c.f[6]);
    c.f[3] = fp::mul(c.f[5], c.f[3]);
    c.f[2] = fp::mul(c.f[4], c.f[2]);
    fpu_div(c, 3u, c.f[3], c.f[4]);
    fpu_div(c, 2u, c.f[2], c.f[5]);
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[2] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[5].w[0]), c.f[2]);
    c.f[6] = ld32((c.r[6].w[0] + 4u));
    c.f[3] = ld32((c.r[6].w[0] - 12u));
    c.f[2] = ld32((c.r[6].w[0] + 20u));
    c.f[4] = ld32((c.r[10].w[0] - 4u));
    c.f[5] = ld32((c.r[10].w[0]));
    c.f[3] = fp::sub(c.f[6], c.f[3]);
    c.f[2] = fp::sub(c.f[2], c.f[6]);
    c.f[3] = fp::mul(c.f[5], c.f[3]);
    c.f[2] = fp::mul(c.f[4], c.f[2]);
    fpu_div(c, 3u, c.f[3], c.f[4]);
    fpu_div(c, 2u, c.f[2], c.f[5]);
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[2] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[5].w[0] + 64u), c.f[2]);
    c.f[6] = ld32((c.r[6].w[0] + 8u));
    c.f[3] = ld32((c.r[6].w[0] - 8u));
    c.f[2] = ld32((c.r[6].w[0] + 24u));
    c.f[4] = ld32((c.r[10].w[0] - 4u));
    c.f[5] = ld32((c.r[10].w[0]));
    c.f[3] = fp::sub(c.f[6], c.f[3]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[10], c.r[10].w[0] + 4u);
    c.f[2] = fp::sub(c.f[2], c.f[6]);
    c.f[3] = fp::mul(c.f[5], c.f[3]);
    c.f[2] = fp::mul(c.f[4], c.f[2]);
    fpu_div(c, 3u, c.f[3], c.f[4]);
    fpu_div(c, 2u, c.f[2], c.f[5]);
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[2] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[5].w[0] + 128u), c.f[2]);
    c.budget -= 60;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F948u | kUnwind; return; } goto L_0020F948; } }
L_0020FA38:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[10], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[16].w[0] << 4);
    c.f[1] = ld32((c.r[10].w[0] + 120u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[29].w[0] + 704u);
    set32(c.r[5], c.r[29].w[0] + 640u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    set32(c.r[6], c.r[29].w[0] + 576u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[7], c.r[29].w[0] + 384u);
    set32(c.r[8], c.r[29].w[0] + 192u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[10].w[0] + 700u), c.f[1]);
    st32((c.r[10].w[0] + 636u), c.f[0]);
    st32((c.r[10].w[0] + 572u), 0u);
    c.f[1] = ld32((c.r[3].w[0] - 16u));
    c.f[0] = ld32((c.r[3].w[0] - 32u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[10].w[0] + 380u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] - 12u));
    c.f[0] = ld32((c.r[3].w[0] - 28u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[10].w[0] + 444u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] - 8u));
    c.f[0] = ld32((c.r[3].w[0] - 24u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FAC4u); st32((c.r[10].w[0] + 508u), c.f[0]);  if (depth < kMaxDepth) unit_0043(c, 407u, depth + 1u); else { c.pc = 0x0020FD40u; return; } if (c.pc != 0x0020FAC4u) [[unlikely]] return; }
L_0020FAC4:
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 704u);
    set32(c.r[5], c.r[29].w[0] + 640u);
    set32(c.r[6], c.r[29].w[0] + 576u);
    set32(c.r[8], c.r[29].w[0] + 256u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FAE0u); c.r[9].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 407u, depth + 1u); else { c.pc = 0x0020FD40u; return; } if (c.pc != 0x0020FAE0u) [[unlikely]] return; }
L_0020FAE0:
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 704u);
    set32(c.r[5], c.r[29].w[0] + 640u);
    set32(c.r[6], c.r[29].w[0] + 576u);
    set32(c.r[8], c.r[29].w[0] + 320u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FAFCu); c.r[9].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 407u, depth + 1u); else { c.pc = 0x0020FD40u; return; } if (c.pc != 0x0020FAFCu) [[unlikely]] return; }
L_0020FAFC:
    set32(c.r[3], c.r[16].w[0] - 1u);
    c.budget -= 1;
L_0020FB00:
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0020FD08; } }
    set32(c.r[21], c.r[29].w[0] + 128u);
    set32(c.r[20], c.r[29].w[0] + 192u);
    c.budget -= 3;
L_0020FB18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[20] = ld32((c.r[21].w[0]));
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FB2Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 164u, depth + 1u); else { c.pc = 0x00126190u; return; } if (c.pc != 0x0020FB2Cu) [[unlikely]] return; }
L_0020FB2C:
    c.f[3] = ld32((c.r[20].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = ld32((c.r[20].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = fp::mul(c.f[20], c.f[20]);
    c.f[2] = fp::add(c.f[3], c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[6] = ld32((c.r[18].w[0]));
    c.f[4] = ld32((c.r[18].w[0] + 16u));
    c.f[5] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[4] = fp::sub(c.f[6], c.f[4]);
    c.f[2] = fp::mul(c.f[5], c.f[4]);
    fpu_div(c, 0u, c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0]));
    c.f[6] = ld32((c.r[21].w[0]));
    c.f[4] = ld32((c.r[18].w[0] + 16u));
    c.f[3] = ld32((c.r[18].w[0]));
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    c.f[1] = fp::mul(c.f[5], c.f[1]);
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[2] = fp::mul(c.f[6], c.f[6]);
    c.f[3] = fp::mul(c.f[13], c.f[3]);
    fpu_div(c, 2u, c.f[3], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[6]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0]));
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    st32((c.r[17].w[0] + 48u), c.f[0]);
    c.f[21] = ld32((c.r[21].w[0]));
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    c.f[12] = c.f[21];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FBD0u); c.f[20] = fp::mul(c.f[5], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 164u, depth + 1u); else { c.pc = 0x00126190u; return; } if (c.pc != 0x0020FBD0u) [[unlikely]] return; }
L_0020FBD0:
    fpu_div(c, 4u, c.f[20], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = ld32((c.r[20].w[0] + 64u));
    c.f[2] = ld32((c.r[20].w[0] + 68u));
    c.f[1] = fp::mul(c.f[21], c.f[21]);
    c.f[0] = fp::add(c.f[3], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[4]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[6] = ld32((c.r[21].w[0]));
    c.f[5] = ld32((c.r[18].w[0] + 20u));
    c.f[4] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = ld32((c.r[20].w[0] + 64u));
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[20].w[0] + 68u));
    c.f[13] = c.r[3].w[0];
    c.f[3] = fp::mul(c.f[6], c.f[6]);
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[4] = fp::mul(c.f[13], c.f[4]);
    c.budget -= 21;
L_0020FC24:
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 3u, c.f[4], c.f[3]);
    fpu_div(c, 0u, c.f[0], c.f[6]);
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 64u));
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[21] = ld32((c.r[21].w[0]));
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = ld32((c.r[18].w[0] + 24u));
    c.f[12] = c.f[21];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FC64u); c.f[20] = fp::mul(c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 164u, depth + 1u); else { c.pc = 0x00126190u; return; } if (c.pc != 0x0020FC64u) [[unlikely]] return; }
L_0020FC64:
    fpu_div(c, 2u, c.f[20], c.f[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[3], c.r[16].w[0] - 1u);
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.f[1] = ld32((c.r[20].w[0] + 128u));
    c.f[0] = ld32((c.r[20].w[0] + 132u));
    c.f[4] = c.r[5].w[0];
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[21], c.f[21]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[6] = ld32((c.r[18].w[0] + 24u));
    c.f[5] = ld32((c.r[18].w[0] + 8u));
    c.f[7] = ld32((c.r[21].w[0]));
    c.f[1] = ld32((c.r[20].w[0] + 128u));
    c.f[2] = c.r[4].w[0];
    c.f[0] = ld32((c.r[20].w[0] + 132u));
    c.f[5] = fp::sub(c.f[6], c.f[5]);
    set32(c.r[21], c.r[21].w[0] + 4u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[3] = fp::mul(c.f[7], c.f[7]);
    c.f[4] = fp::mul(c.f[4], c.f[5]);
    fpu_div(c, 3u, c.f[4], c.f[3]);
    fpu_div(c, 0u, c.f[0], c.f[7]);
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 128u));
    st32((c.r[17].w[0] + 40u), c.f[0]);
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 35;
L_0020FCF0:
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    st32((c.r[17].w[0] + 56u), c.f[0]);
    set32(c.r[18], c.r[18].w[0] + 16u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020FB18u | kUnwind; return; } goto L_0020FB18; } }
    c.budget -= 1;
L_0020FD08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 768u);  c.pc = t; return; }
L_0020FD40:
    c.f[4] = ld32((c.r[5].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[4]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[29], c.r[29].w[0] - 64u);  if (t) { goto L_0020FD78; } }
    c.f[0] = ld32((c.r[7].w[0]));
    fpu_div(c, 0u, c.f[0], c.f[4]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0]), c.f[0]);  if (t) { goto L_0020FD80; } }
    c.budget -= 1;
L_0020FD78:
    st32((c.r[8].w[0]), c.f[0]);
    c.budget -= 2;
L_0020FD80:
    c.r[1].d[0] = c.r[9].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[12], 0u + 1u);  if (t) { goto L_0020FE50; } }
    set32(c.r[11], c.r[6].w[0] + 4u);
    set32(c.r[10], c.r[4].w[0] + 4u);
    set32(c.r[6], c.r[5].w[0] + 4u);
    set32(c.r[4], c.r[7].w[0] + 4u);
    set32(c.r[7], c.r[29].w[0] + 4u);
    set32(c.r[5], c.r[8].w[0] + 4u);
    c.f[2] = 0u;
    c.budget -= 7;
L_0020FDA8:
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[4]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0020FDD0; } }
    c.f[0] = ld32((c.r[11].w[0] - 4u));
    fpu_div(c, 0u, c.f[0], c.f[4]);
    c.budget -= 4;
L_0020FDC4:
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] - 4u), c.f[0]);  if (t) { goto L_0020FDD8; } }
L_0020FDD0:
    st32((c.r[7].w[0] - 4u), c.f[2]);
    c.budget -= 2;
L_0020FDD8:
    c.f[3] = ld32((c.r[10].w[0]));
    c.f[1] = ld32((c.r[7].w[0] - 4u));
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[4] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[4]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0020FE20; } }
    c.f[1] = ld32((c.r[5].w[0] - 4u));
    c.budget -= 1;
L_0020FDFC:
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[4]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.f[0]);  if (t) { goto L_0020FE28; } }
    c.budget -= 1;
L_0020FE20:
    st32((c.r[5].w[0]), c.f[2]);
    c.budget -= 2;
L_0020FE28:
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.r[3].d[0] = c.r[12].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    set32(c.r[11], c.r[11].w[0] + 4u);
    set32(c.r[7], c.r[7].w[0] + 4u);
    set32(c.r[10], c.r[10].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020FDA8u | kUnwind; return; } goto L_0020FDA8; } }
    c.budget -= 1;
L_0020FE50:
    set32(c.r[4], c.r[9].w[0] - 2u);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0; set32(c.r[3], c.r[4].w[0] << 2);  if (t) { goto L_0020FE90; } }
    set32(c.r[5], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[3].w[0]);
    c.budget -= 3;
L_0020FE68:
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 10;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[5], c.r[5].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020FE68u | kUnwind; return; } goto L_0020FE68; } }
L_0020FE90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0020FEA0:
    st32((c.r[28].w[0] - 24100u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 24096u), 0u);  c.pc = t; return; }
L_0020FEB0:
    set32(c.r[5], ld32((c.r[28].w[0] - 24096u)));
    set32(c.r[3], 0u + 512u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_0020FEE0; } }
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 31408u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 4;
L_0020FED0:
    set32(c.r[3], ld32((c.r[28].w[0] - 24096u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[28].w[0] - 24096u), c.r[3].w[0]);
    c.budget -= 4;
L_0020FEE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0020FEF0:
    set32(c.r[5], ld32((c.r[28].w[0] - 24100u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_0020FF20; } }
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 31424u);
    c.budget -= 2;
L_0020FF08:
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24100u)));
    c.budget -= 3;
L_0020FF14:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[28].w[0] - 24100u), c.r[3].w[0]);
    c.budget -= 3;
L_0020FF20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0020FF30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[16], ld32((c.r[28].w[0] - 24096u)));
    c.budget -= 8;
    { const bool t = c.r[16].sd[0] <= 0; set32(c.r[17], c.r[17].w[0] - 31408u);  if (t) { goto L_0020FF70; } }
L_0020FF50:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FF5Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020FF5Cu) [[unlikely]] return; }
L_0020FF5C:
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020FF50u | kUnwind; return; } goto L_0020FF50; } }
L_0020FF70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020FF90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
L_0020FFA0:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[16], ld32((c.r[28].w[0] - 24100u)));
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] <= 0; set32(c.r[17], c.r[17].w[0] - 31424u);  if (t) { goto L_0020FFD0; } }
L_0020FFB0:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FFBCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020FFBCu) [[unlikely]] return; }
L_0020FFBC:
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020FFB0u | kUnwind; return; } goto L_0020FFB0; } }
    goto L_0020FFD0;
L_0020FFCC:
    c.budget -= 1;
L_0020FFD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020FFF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    [[clang::musttail]] return unit_0044(c, 1u, depth);
}

}
