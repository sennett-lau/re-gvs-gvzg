#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0050[4096] = {
    1, 0, 0, 2, 3, 4, 0, 0, 5, 6, 7, 8, 9, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0,
    14, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 17, 18, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0,
    23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 28, 0, 29, 0, 0,
    0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0,
    0, 33, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 36, 0, 37, 0, 38, 39, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0,
    43, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 46, 47, 0, 48, 0, 49, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0,
    53, 0, 0, 54, 0, 55, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0, 61, 0, 0, 62, 0, 0, 0,
    63, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 67, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 72,
    0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 80, 0, 0,
    81, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0,
    0, 89, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0,
    97, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 103, 0, 104, 0, 0, 105, 0, 0, 0,
    106, 0, 0, 0, 0, 107, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0,
    114, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0,
    122, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0,
    130, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0,
    138, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 142, 0, 143, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149,
    0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0,
    159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 164, 0, 0, 165, 0, 0, 166, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0,
    0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0,
    0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 204, 0, 0, 205, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 227, 0, 0, 0, 0,
    0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0,
    237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 243,
    0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 0,
    0, 0, 255, 0, 0, 256, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 0, 260, 0, 0, 261, 0, 0, 262, 0, 0, 263, 0, 0, 264, 0, 0,
    265, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 270, 0, 0, 0,
    271, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0,
    0, 280, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283,
    0, 0, 284, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 289, 0,
    0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 292, 0, 0, 293, 0, 0, 294, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 297,
    0, 0, 298, 0, 0, 299, 0, 0, 300, 0, 0, 301, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 305, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0,
    321, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0,
    329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0,
    0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 354, 0, 0, 355, 0, 0, 356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 358, 0, 0,
    359, 0, 0, 360, 0, 0, 361, 0, 0, 362, 0, 0, 363, 0, 0, 0, 0, 364, 0, 0, 365, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0,
    367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0,
    0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 377, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 382, 0, 0,
    0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 386, 0, 0, 387, 0, 0, 0, 388, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 391, 0, 0, 392, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 399, 0, 400, 0, 0, 401, 0, 0, 0, 0, 0, 402, 0,
    0, 0, 403, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0,
    419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0,
    0, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0,
    431, 0, 0, 0, 0, 432, 0, 433, 0, 0, 434, 0, 435, 0, 0, 436, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 441, 0, 0, 0,
    0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0,
    449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451,
};

void unit_0050(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00240000;
    case 2u: goto L_0024000C;
    case 3u: goto L_00240010;
    case 4u: goto L_00240014;
    case 5u: goto L_00240020;
    case 6u: goto L_00240024;
    case 7u: goto L_00240028;
    case 8u: goto L_0024002C;
    case 9u: goto L_00240030;
    case 10u: goto L_00240040;
    case 11u: goto L_00240050;
    case 12u: goto L_00240064;
    case 13u: goto L_00240070;
    case 14u: goto L_00240080;
    case 15u: goto L_00240090;
    case 16u: goto L_002400A0;
    case 17u: goto L_002400B0;
    case 18u: goto L_002400B4;
    case 19u: goto L_002400C0;
    case 20u: goto L_002400D0;
    case 21u: goto L_002400E0;
    case 22u: goto L_002400F0;
    case 23u: goto L_00240100;
    case 24u: goto L_00240110;
    case 25u: goto L_00240134;
    case 26u: goto L_00240154;
    case 27u: goto L_00240160;
    case 28u: goto L_0024016C;
    case 29u: goto L_00240174;
    case 30u: goto L_00240190;
    case 31u: goto L_002401A4;
    case 32u: goto L_002401F0;
    case 33u: goto L_00240204;
    case 34u: goto L_00240210;
    case 35u: goto L_00240220;
    case 36u: goto L_00240230;
    case 37u: goto L_00240238;
    case 38u: goto L_00240240;
    case 39u: goto L_00240244;
    case 40u: goto L_0024024C;
    case 41u: goto L_00240260;
    case 42u: goto L_00240270;
    case 43u: goto L_00240280;
    case 44u: goto L_00240290;
    case 45u: goto L_002402A4;
    case 46u: goto L_002402B0;
    case 47u: goto L_002402B4;
    case 48u: goto L_002402BC;
    case 49u: goto L_002402C4;
    case 50u: goto L_002402D0;
    case 51u: goto L_002402E0;
    case 52u: goto L_002402F4;
    case 53u: goto L_00240300;
    case 54u: goto L_0024030C;
    case 55u: goto L_00240314;
    case 56u: goto L_00240320;
    case 57u: goto L_00240330;
    case 58u: goto L_00240344;
    case 59u: goto L_00240350;
    case 60u: goto L_0024035C;
    case 61u: goto L_00240364;
    case 62u: goto L_00240370;
    case 63u: goto L_00240380;
    case 64u: goto L_00240394;
    case 65u: goto L_002403A0;
    case 66u: goto L_002403AC;
    case 67u: goto L_002403B4;
    case 68u: goto L_002403C0;
    case 69u: goto L_002403D0;
    case 70u: goto L_002403E4;
    case 71u: goto L_002403F0;
    case 72u: goto L_002403FC;
    case 73u: goto L_00240410;
    case 74u: goto L_00240420;
    case 75u: goto L_00240430;
    case 76u: goto L_00240440;
    case 77u: goto L_00240454;
    case 78u: goto L_00240460;
    case 79u: goto L_0024046C;
    case 80u: goto L_00240474;
    case 81u: goto L_00240480;
    case 82u: goto L_00240490;
    case 83u: goto L_002404A4;
    case 84u: goto L_002404B0;
    case 85u: goto L_002404C0;
    case 86u: goto L_002404D0;
    case 87u: goto L_002404E0;
    case 88u: goto L_002404F0;
    case 89u: goto L_00240504;
    case 90u: goto L_00240510;
    case 91u: goto L_0024051C;
    case 92u: goto L_00240530;
    case 93u: goto L_00240540;
    case 94u: goto L_00240550;
    case 95u: goto L_00240560;
    case 96u: goto L_00240574;
    case 97u: goto L_00240580;
    case 98u: goto L_0024058C;
    case 99u: goto L_002405A0;
    case 100u: goto L_002405B0;
    case 101u: goto L_002405C4;
    case 102u: goto L_002405D0;
    case 103u: goto L_002405DC;
    case 104u: goto L_002405E4;
    case 105u: goto L_002405F0;
    case 106u: goto L_00240600;
    case 107u: goto L_00240614;
    case 108u: goto L_00240620;
    case 109u: goto L_00240628;
    case 110u: goto L_00240640;
    case 111u: goto L_00240650;
    case 112u: goto L_00240664;
    case 113u: goto L_0024066C;
    case 114u: goto L_00240680;
    case 115u: goto L_00240690;
    case 116u: goto L_002406A0;
    case 117u: goto L_002406B0;
    case 118u: goto L_002406C0;
    case 119u: goto L_002406D0;
    case 120u: goto L_002406E0;
    case 121u: goto L_002406F0;
    case 122u: goto L_00240700;
    case 123u: goto L_00240710;
    case 124u: goto L_00240720;
    case 125u: goto L_00240730;
    case 126u: goto L_00240744;
    case 127u: goto L_00240750;
    case 128u: goto L_00240760;
    case 129u: goto L_00240770;
    case 130u: goto L_00240780;
    case 131u: goto L_00240790;
    case 132u: goto L_002407A4;
    case 133u: goto L_002407B0;
    case 134u: goto L_002407C0;
    case 135u: goto L_002407D0;
    case 136u: goto L_002407E4;
    case 137u: goto L_002407F0;
    case 138u: goto L_00240800;
    case 139u: goto L_00240810;
    case 140u: goto L_00240824;
    case 141u: goto L_00240830;
    case 142u: goto L_0024083C;
    case 143u: goto L_00240844;
    case 144u: goto L_00240850;
    case 145u: goto L_00240860;
    case 146u: goto L_00240894;
    case 147u: goto L_002408A4;
    case 148u: goto L_002408E8;
    case 149u: goto L_002408FC;
    case 150u: goto L_00240908;
    case 151u: goto L_00240920;
    case 152u: goto L_00240940;
    case 153u: goto L_00240950;
    case 154u: goto L_0024097C;
    case 155u: goto L_002409E0;
    case 156u: goto L_002409F4;
    case 157u: goto L_00240A10;
    case 158u: goto L_00240A70;
    case 159u: goto L_00240A80;
    case 160u: goto L_00240AAC;
    case 161u: goto L_00240B14;
    case 162u: goto L_00240B28;
    case 163u: goto L_00240B40;
    case 164u: goto L_00240B88;
    case 165u: goto L_00240B94;
    case 166u: goto L_00240BA0;
    case 167u: goto L_00240BB0;
    case 168u: goto L_00240BB8;
    case 169u: goto L_00240C10;
    case 170u: goto L_00240C54;
    case 171u: goto L_00240C78;
    case 172u: goto L_00240D10;
    case 173u: goto L_00240D64;
    case 174u: goto L_00240DB0;
    case 175u: goto L_00240E90;
    case 176u: goto L_00240EC0;
    case 177u: goto L_00240F00;
    case 178u: goto L_00240F40;
    case 179u: goto L_00240F7C;
    case 180u: goto L_00240FAC;
    case 181u: goto L_00240FDC;
    case 182u: goto L_00241004;
    case 183u: goto L_00241020;
    case 184u: goto L_002410C0;
    case 185u: goto L_002410CC;
    case 186u: goto L_00241140;
    case 187u: goto L_00241160;
    case 188u: goto L_002411D8;
    case 189u: goto L_00241280;
    case 190u: goto L_002412C0;
    case 191u: goto L_002412F0;
    case 192u: goto L_00241320;
    case 193u: goto L_00241330;
    case 194u: goto L_00241354;
    case 195u: goto L_00241370;
    case 196u: goto L_0024138C;
    case 197u: goto L_002413A0;
    case 198u: goto L_002413F0;
    case 199u: goto L_00241420;
    case 200u: goto L_0024146C;
    case 201u: goto L_0024148C;
    case 202u: goto L_002414A8;
    case 203u: goto L_002414C0;
    case 204u: goto L_00241510;
    case 205u: goto L_0024151C;
    case 206u: goto L_00241524;
    case 207u: goto L_00241544;
    case 208u: goto L_0024154C;
    case 209u: goto L_00241588;
    case 210u: goto L_002415A4;
    case 211u: goto L_002415C0;
    case 212u: goto L_00241640;
    case 213u: goto L_0024164C;
    case 214u: goto L_002416D0;
    case 215u: goto L_002416F0;
    case 216u: goto L_00241720;
    case 217u: goto L_0024172C;
    case 218u: goto L_002417BC;
    case 219u: goto L_002417C8;
    case 220u: goto L_00241804;
    case 221u: goto L_00241810;
    case 222u: goto L_00241890;
    case 223u: goto L_002418C0;
    case 224u: goto L_00241908;
    case 225u: goto L_00241914;
    case 226u: goto L_00241960;
    case 227u: goto L_0024196C;
    case 228u: goto L_00241984;
    case 229u: goto L_00241AE0;
    case 230u: goto L_00241B3C;
    case 231u: goto L_00241B50;
    case 232u: goto L_00241BA4;
    case 233u: goto L_00241BB8;
    case 234u: goto L_00241CB4;
    case 235u: goto L_00241CCC;
    case 236u: goto L_00241CF4;
    case 237u: goto L_00241D00;
    case 238u: goto L_00241D18;
    case 239u: goto L_00241D28;
    case 240u: goto L_00241D38;
    case 241u: goto L_00241D70;
    case 242u: goto L_00241DF0;
    case 243u: goto L_00241DFC;
    case 244u: goto L_00241E18;
    case 245u: goto L_00241E28;
    case 246u: goto L_00241EA0;
    case 247u: goto L_00241EB0;
    case 248u: goto L_00241EC8;
    case 249u: goto L_00241EDC;
    case 250u: goto L_00241F24;
    case 251u: goto L_00241F50;
    case 252u: goto L_00241FB8;
    case 253u: goto L_00241FD8;
    case 254u: goto L_00241FE4;
    case 255u: goto L_00242008;
    case 256u: goto L_00242014;
    case 257u: goto L_00242020;
    case 258u: goto L_0024202C;
    case 259u: goto L_00242038;
    case 260u: goto L_00242044;
    case 261u: goto L_00242050;
    case 262u: goto L_0024205C;
    case 263u: goto L_00242068;
    case 264u: goto L_00242074;
    case 265u: goto L_00242080;
    case 266u: goto L_0024208C;
    case 267u: goto L_00242098;
    case 268u: goto L_002420B4;
    case 269u: goto L_002420E4;
    case 270u: goto L_002420F0;
    case 271u: goto L_00242100;
    case 272u: goto L_0024210C;
    case 273u: goto L_0024212C;
    case 274u: goto L_00242140;
    case 275u: goto L_00242160;
    case 276u: goto L_00242170;
    case 277u: goto L_00242258;
    case 278u: goto L_00242434;
    case 279u: goto L_00242464;
    case 280u: goto L_00242484;
    case 281u: goto L_00242494;
    case 282u: goto L_002424A4;
    case 283u: goto L_002424FC;
    case 284u: goto L_00242508;
    case 285u: goto L_00242514;
    case 286u: goto L_00242538;
    case 287u: goto L_00242570;
    case 288u: goto L_002425D8;
    case 289u: goto L_002425F8;
    case 290u: goto L_00242604;
    case 291u: goto L_00242628;
    case 292u: goto L_00242634;
    case 293u: goto L_00242640;
    case 294u: goto L_0024264C;
    case 295u: goto L_00242658;
    case 296u: goto L_00242670;
    case 297u: goto L_0024267C;
    case 298u: goto L_00242688;
    case 299u: goto L_00242694;
    case 300u: goto L_002426A0;
    case 301u: goto L_002426AC;
    case 302u: goto L_002426B8;
    case 303u: goto L_002426C4;
    case 304u: goto L_002426E0;
    case 305u: goto L_00242710;
    case 306u: goto L_0024271C;
    case 307u: goto L_0024272C;
    case 308u: goto L_0024274C;
    case 309u: goto L_00242760;
    case 310u: goto L_0024277C;
    case 311u: goto L_00242A4C;
    case 312u: goto L_00242A7C;
    case 313u: goto L_00242AAC;
    case 314u: goto L_00242AB8;
    case 315u: goto L_00242AC4;
    case 316u: goto L_00242AE8;
    case 317u: goto L_00242B20;
    case 318u: goto L_00242B50;
    case 319u: goto L_00242B60;
    case 320u: goto L_00242B70;
    case 321u: goto L_00242B80;
    case 322u: goto L_00242B90;
    case 323u: goto L_00242BA0;
    case 324u: goto L_00242BB0;
    case 325u: goto L_00242BC0;
    case 326u: goto L_00242BD0;
    case 327u: goto L_00242BE0;
    case 328u: goto L_00242BF0;
    case 329u: goto L_00242C00;
    case 330u: goto L_00242C10;
    case 331u: goto L_00242C40;
    case 332u: goto L_00242C88;
    case 333u: goto L_00242CB8;
    case 334u: goto L_00242CE8;
    case 335u: goto L_00242D08;
    case 336u: goto L_00242D34;
    case 337u: goto L_00242D70;
    case 338u: goto L_00242D9C;
    case 339u: goto L_00242DC8;
    case 340u: goto L_00242DE8;
    case 341u: goto L_00242E18;
    case 342u: goto L_00242E64;
    case 343u: goto L_00242E94;
    case 344u: goto L_00242EC4;
    case 345u: goto L_00242EE0;
    case 346u: goto L_00242F0C;
    case 347u: goto L_00242F48;
    case 348u: goto L_00242F74;
    case 349u: goto L_00242FA0;
    case 350u: goto L_00242FC0;
    case 351u: goto L_00242FF0;
    case 352u: goto L_00243030;
    case 353u: goto L_00243128;
    case 354u: goto L_00243134;
    case 355u: goto L_00243140;
    case 356u: goto L_0024314C;
    case 357u: goto L_00243168;
    case 358u: goto L_00243174;
    case 359u: goto L_00243180;
    case 360u: goto L_0024318C;
    case 361u: goto L_00243198;
    case 362u: goto L_002431A4;
    case 363u: goto L_002431B0;
    case 364u: goto L_002431C4;
    case 365u: goto L_002431D0;
    case 366u: goto L_002431DC;
    case 367u: goto L_00243200;
    case 368u: goto L_002432BC;
    case 369u: goto L_002432F8;
    case 370u: goto L_00243308;
    case 371u: goto L_00243318;
    case 372u: goto L_00243328;
    case 373u: goto L_00243338;
    case 374u: goto L_00243348;
    case 375u: goto L_00243358;
    case 376u: goto L_00243368;
    case 377u: goto L_00243378;
    case 378u: goto L_002433A0;
    case 379u: goto L_00243408;
    case 380u: goto L_00243420;
    case 381u: goto L_00243468;
    case 382u: goto L_00243474;
    case 383u: goto L_0024348C;
    case 384u: goto L_002435D8;
    case 385u: goto L_002435E8;
    case 386u: goto L_00243610;
    case 387u: goto L_0024361C;
    case 388u: goto L_0024362C;
    case 389u: goto L_00243638;
    case 390u: goto L_0024365C;
    case 391u: goto L_00243684;
    case 392u: goto L_00243690;
    case 393u: goto L_0024369C;
    case 394u: goto L_002436C0;
    case 395u: goto L_002436F0;
    case 396u: goto L_002437E0;
    case 397u: goto L_00243810;
    case 398u: goto L_0024382C;
    case 399u: goto L_0024384C;
    case 400u: goto L_00243854;
    case 401u: goto L_00243860;
    case 402u: goto L_00243878;
    case 403u: goto L_00243888;
    case 404u: goto L_00243894;
    case 405u: goto L_002438A4;
    case 406u: goto L_002438B4;
    case 407u: goto L_002438C0;
    case 408u: goto L_002438EC;
    case 409u: goto L_00243930;
    case 410u: goto L_00243950;
    case 411u: goto L_002439B0;
    case 412u: goto L_002439BC;
    case 413u: goto L_00243A08;
    case 414u: goto L_00243A6C;
    case 415u: goto L_00243AE0;
    case 416u: goto L_00243B58;
    case 417u: goto L_00243B90;
    case 418u: goto L_00243BF0;
    case 419u: goto L_00243C00;
    case 420u: goto L_00243C68;
    case 421u: goto L_00243CA0;
    case 422u: goto L_00243CAC;
    case 423u: goto L_00243CBC;
    case 424u: goto L_00243CF0;
    case 425u: goto L_00243D10;
    case 426u: goto L_00243D20;
    case 427u: goto L_00243D88;
    case 428u: goto L_00243DA8;
    case 429u: goto L_00243DCC;
    case 430u: goto L_00243DF0;
    case 431u: goto L_00243E00;
    case 432u: goto L_00243E14;
    case 433u: goto L_00243E1C;
    case 434u: goto L_00243E28;
    case 435u: goto L_00243E30;
    case 436u: goto L_00243E3C;
    case 437u: goto L_00243E50;
    case 438u: goto L_00243E94;
    case 439u: goto L_00243EA8;
    case 440u: goto L_00243EE4;
    case 441u: goto L_00243EF0;
    case 442u: goto L_00243F08;
    case 443u: goto L_00243F18;
    case 444u: goto L_00243F28;
    case 445u: goto L_00243F38;
    case 446u: goto L_00243F48;
    case 447u: goto L_00243F60;
    case 448u: goto L_00243F70;
    case 449u: goto L_00243F80;
    case 450u: goto L_00243FC8;
    case 451u: goto L_00243FFC;
    default: bad_entry(c, 0x00240000u); return;
    }
L_00240000:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024000C:
    c.budget -= 1;
L_00240010:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 1;
L_00240014:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240024u); set32(c.r[4], c.r[4].w[0] - 24848u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x00240024u) [[unlikely]] return; }
    goto L_00240024;
L_00240020:
    set32(c.r[4], c.r[4].w[0] - 24848u);
    c.budget -= 1;
L_00240024:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.budget -= 1;
L_00240028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240030u); set32(c.r[4], c.r[4].w[0] - 4464u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x00240030u) [[unlikely]] return; }
    goto L_00240030;
L_0024002C:
    set32(c.r[4], c.r[4].w[0] - 4464u);
    c.budget -= 1;
L_00240030:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00240040:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00240050:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240064u); set32(c.r[4], c.r[4].w[0] - 24848u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x00240064u) [[unlikely]] return; }
L_00240064:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00880000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240070u); set32(c.r[4], c.r[4].w[0] + 15920u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x00240070u) [[unlikely]] return; }
L_00240070:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00240080:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00240090:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[4].w[0] - 24848u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D270u | kUnwind; return; } [[clang::musttail]] return unit_004F(c, 72u, depth); }
L_002400A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002400B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    c.budget -= 1;
L_002400B4:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 24848u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D270u | kUnwind; return; } [[clang::musttail]] return unit_004F(c, 72u, depth); }
L_002400C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002400D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[4].w[0] - 24848u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D270u | kUnwind; return; } [[clang::musttail]] return unit_004F(c, 72u, depth); }
L_002400E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002400F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[4].w[0] - 24848u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D270u | kUnwind; return; } [[clang::musttail]] return unit_004F(c, 72u, depth); }
L_00240100:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00240110:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00240148; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240134u);  if (depth < kMaxDepth) unit_0071(c, 75u, depth + 1u); else { c.pc = 0x002C52E0u; return; } if (c.pc != 0x00240134u) [[unlikely]] return; }
L_00240134:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 25u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00240148; } }
    st32((c.r[28].w[0] - 23952u), c.r[2].w[0]);
    c.budget -= 1;
L_00240148:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240154u); set32(c.r[4], c.r[4].w[0] - 24848u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x00240154u) [[unlikely]] return; }
L_00240154:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240160u); set32(c.r[4], c.r[4].w[0] - 4464u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x00240160u) [[unlikely]] return; }
L_00240160:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00880000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024016Cu); set32(c.r[4], c.r[4].w[0] + 15920u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x0024016Cu) [[unlikely]] return; }
L_0024016C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240174u);  if (depth < kMaxDepth) unit_004F(c, 172u, depth + 1u); else { c.pc = 0x0023FC80u; return; } if (c.pc != 0x00240174u) [[unlikely]] return; }
L_00240174:
    st32((c.r[28].w[0] - 23936u), 0u);
    st32((c.r[28].w[0] - 23940u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00240190:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x019A0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002401A4u); c.r[4].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_004F(c, 177u, depth + 1u); else { c.pc = 0x0023FD80u; return; } if (c.pc != 0x002401A4u) [[unlikely]] return; }
L_002401A4:
    c.f[2] = ld32((c.r[28].w[0] - 23940u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[3].d[0] = c.r[3].d[0] | 4719ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[28].w[0] - 23940u), c.f[1]);  if (t) { goto L_002401D8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[28].w[0] - 23940u), c.r[3].w[0]);
    c.budget -= 3;
L_002401D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002401F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240204u); set32(c.r[4], c.r[4].w[0] - 24848u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x00240204u) [[unlikely]] return; }
L_00240204:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240210u); set32(c.r[4], c.r[4].w[0] - 4464u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x00240210u) [[unlikely]] return; }
L_00240210:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00240220:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00240230:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00880000u);
    c.budget -= 2;
L_00240238:
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240244u); set32(c.r[4], c.r[4].w[0] + 15920u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x00240244u) [[unlikely]] return; }
    goto L_00240244;
L_00240240:
    set32(c.r[4], c.r[4].w[0] + 15920u);
    c.budget -= 1;
L_00240244:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024024Cu);  if (depth < kMaxDepth) unit_004F(c, 172u, depth + 1u); else { c.pc = 0x0023FC80u; return; } if (c.pc != 0x0024024Cu) [[unlikely]] return; }
L_0024024C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00240260:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x019A0000u);
    c.budget -= 3;
    { c.r[4].d[0] = c.r[2].d[0] | 4096ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023FD80u | kUnwind; return; } [[clang::musttail]] return unit_004F(c, 177u, depth); }
L_00240270:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[4].w[0] - 24848u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D270u | kUnwind; return; } [[clang::musttail]] return unit_004F(c, 72u, depth); }
L_00240280:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00240290:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002402A4u); set32(c.r[4], c.r[4].w[0] - 24848u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x002402A4u) [[unlikely]] return; }
L_002402A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002402B0u); set32(c.r[4], c.r[4].w[0] - 4464u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x002402B0u) [[unlikely]] return; }
L_002402B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00880000u);
    c.budget -= 1;
L_002402B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002402BCu); set32(c.r[4], c.r[4].w[0] + 15920u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x002402BCu) [[unlikely]] return; }
L_002402BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002402C4u);  if (depth < kMaxDepth) unit_004F(c, 172u, depth + 1u); else { c.pc = 0x0023FC80u; return; } if (c.pc != 0x002402C4u) [[unlikely]] return; }
L_002402C4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002402D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x019A0000u);
    c.budget -= 3;
    { c.r[4].d[0] = c.r[2].d[0] | 4096ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023FD80u | kUnwind; return; } [[clang::musttail]] return unit_004F(c, 177u, depth); }
L_002402E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002402F4u); set32(c.r[4], c.r[4].w[0] - 24848u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x002402F4u) [[unlikely]] return; }
L_002402F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240300u); set32(c.r[4], c.r[4].w[0] - 4464u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x00240300u) [[unlikely]] return; }
L_00240300:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00880000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024030Cu); set32(c.r[4], c.r[4].w[0] + 15920u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x0024030Cu) [[unlikely]] return; }
L_0024030C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240314u);  if (depth < kMaxDepth) unit_004F(c, 172u, depth + 1u); else { c.pc = 0x0023FC80u; return; } if (c.pc != 0x00240314u) [[unlikely]] return; }
L_00240314:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00240320:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x019A0000u);
    c.budget -= 3;
    { c.r[4].d[0] = c.r[2].d[0] | 4096ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023FD80u | kUnwind; return; } [[clang::musttail]] return unit_004F(c, 177u, depth); }
L_00240330:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240344u); set32(c.r[4], c.r[4].w[0] - 24848u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x00240344u) [[unlikely]] return; }
L_00240344:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240350u); set32(c.r[4], c.r[4].w[0] - 4464u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x00240350u) [[unlikely]] return; }
L_00240350:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00880000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024035Cu); set32(c.r[4], c.r[4].w[0] + 15920u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x0024035Cu) [[unlikely]] return; }
L_0024035C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240364u);  if (depth < kMaxDepth) unit_004F(c, 172u, depth + 1u); else { c.pc = 0x0023FC80u; return; } if (c.pc != 0x00240364u) [[unlikely]] return; }
L_00240364:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00240370:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x019A0000u);
    c.budget -= 3;
    { c.r[4].d[0] = c.r[2].d[0] | 4096ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023FD80u | kUnwind; return; } [[clang::musttail]] return unit_004F(c, 177u, depth); }
L_00240380:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240394u); set32(c.r[4], c.r[4].w[0] - 24848u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x00240394u) [[unlikely]] return; }
L_00240394:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002403A0u); set32(c.r[4], c.r[4].w[0] - 4464u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x002403A0u) [[unlikely]] return; }
L_002403A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00880000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002403ACu); set32(c.r[4], c.r[4].w[0] + 15920u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x002403ACu) [[unlikely]] return; }
L_002403AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002403B4u);  if (depth < kMaxDepth) unit_004F(c, 172u, depth + 1u); else { c.pc = 0x0023FC80u; return; } if (c.pc != 0x002403B4u) [[unlikely]] return; }
L_002403B4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002403C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x019A0000u);
    c.budget -= 3;
    { c.r[4].d[0] = c.r[2].d[0] | 4096ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023FD80u | kUnwind; return; } [[clang::musttail]] return unit_004F(c, 177u, depth); }
L_002403D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002403E4u); set32(c.r[4], c.r[4].w[0] - 24848u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x002403E4u) [[unlikely]] return; }
L_002403E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002403F0u); set32(c.r[4], c.r[4].w[0] - 4464u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x002403F0u) [[unlikely]] return; }
L_002403F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00880000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002403FCu); set32(c.r[4], c.r[4].w[0] + 15920u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x002403FCu) [[unlikely]] return; }
L_002403FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00240410:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00240420:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[4].w[0] - 24848u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D270u | kUnwind; return; } [[clang::musttail]] return unit_004F(c, 72u, depth); }
L_00240430:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00240440:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240454u); set32(c.r[4], c.r[4].w[0] - 24848u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x00240454u) [[unlikely]] return; }
L_00240454:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240460u); set32(c.r[4], c.r[4].w[0] - 4464u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x00240460u) [[unlikely]] return; }
L_00240460:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00880000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024046Cu); set32(c.r[4], c.r[4].w[0] + 15920u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x0024046Cu) [[unlikely]] return; }
L_0024046C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240474u);  if (depth < kMaxDepth) unit_004F(c, 172u, depth + 1u); else { c.pc = 0x0023FC80u; return; } if (c.pc != 0x00240474u) [[unlikely]] return; }
L_00240474:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00240480:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x019A0000u);
    c.budget -= 3;
    { c.r[4].d[0] = c.r[2].d[0] | 4096ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023FD80u | kUnwind; return; } [[clang::musttail]] return unit_004F(c, 177u, depth); }
L_00240490:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002404A4u); set32(c.r[4], c.r[4].w[0] - 24848u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x002404A4u) [[unlikely]] return; }
L_002404A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002404B0u); set32(c.r[4], c.r[4].w[0] - 4464u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x002404B0u) [[unlikely]] return; }
L_002404B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002404C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002404D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[4].w[0] - 24848u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D270u | kUnwind; return; } [[clang::musttail]] return unit_004F(c, 72u, depth); }
L_002404E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002404F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240504u); set32(c.r[4], c.r[4].w[0] - 24848u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x00240504u) [[unlikely]] return; }
L_00240504:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240510u); set32(c.r[4], c.r[4].w[0] - 4464u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x00240510u) [[unlikely]] return; }
L_00240510:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00880000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024051Cu); set32(c.r[4], c.r[4].w[0] + 15920u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x0024051Cu) [[unlikely]] return; }
L_0024051C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00240530:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00240540:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[4].w[0] - 4464u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D270u | kUnwind; return; } [[clang::musttail]] return unit_004F(c, 72u, depth); }
L_00240550:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00240560:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240574u); set32(c.r[4], c.r[4].w[0] - 24848u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x00240574u) [[unlikely]] return; }
L_00240574:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240580u); set32(c.r[4], c.r[4].w[0] - 4464u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x00240580u) [[unlikely]] return; }
L_00240580:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00880000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024058Cu); set32(c.r[4], c.r[4].w[0] + 15920u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x0024058Cu) [[unlikely]] return; }
L_0024058C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002405A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002405B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002405C4u); set32(c.r[4], c.r[4].w[0] - 24848u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x002405C4u) [[unlikely]] return; }
L_002405C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002405D0u); set32(c.r[4], c.r[4].w[0] - 4464u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x002405D0u) [[unlikely]] return; }
L_002405D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00880000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002405DCu); set32(c.r[4], c.r[4].w[0] + 15920u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x002405DCu) [[unlikely]] return; }
L_002405DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002405E4u);  if (depth < kMaxDepth) unit_004F(c, 172u, depth + 1u); else { c.pc = 0x0023FC80u; return; } if (c.pc != 0x002405E4u) [[unlikely]] return; }
L_002405E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002405F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x019A0000u);
    c.budget -= 3;
    { c.r[4].d[0] = c.r[2].d[0] | 4096ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023FD80u | kUnwind; return; } [[clang::musttail]] return unit_004F(c, 177u, depth); }
L_00240600:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240614u); set32(c.r[4], c.r[4].w[0] - 24848u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x00240614u) [[unlikely]] return; }
L_00240614:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240620u); set32(c.r[4], c.r[4].w[0] - 4464u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x00240620u) [[unlikely]] return; }
L_00240620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240628u);  if (depth < kMaxDepth) unit_0045(c, 311u, depth + 1u); else { c.pc = 0x00216A10u; return; } if (c.pc != 0x00240628u) [[unlikely]] return; }
L_00240628:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00240640:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00240650:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240664u); set32(c.r[4], c.r[4].w[0] - 24848u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x00240664u) [[unlikely]] return; }
L_00240664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024066Cu);  if (depth < kMaxDepth) unit_0045(c, 311u, depth + 1u); else { c.pc = 0x00216A10u; return; } if (c.pc != 0x0024066Cu) [[unlikely]] return; }
L_0024066C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00240680:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00240690:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[4].w[0] - 4464u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D270u | kUnwind; return; } [[clang::musttail]] return unit_004F(c, 72u, depth); }
L_002406A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002406B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[4].w[0] - 24848u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D270u | kUnwind; return; } [[clang::musttail]] return unit_004F(c, 72u, depth); }
L_002406C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002406D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[4].w[0] - 24848u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D270u | kUnwind; return; } [[clang::musttail]] return unit_004F(c, 72u, depth); }
L_002406E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002406F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[4].w[0] - 24848u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D270u | kUnwind; return; } [[clang::musttail]] return unit_004F(c, 72u, depth); }
L_00240700:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00240710:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[4].w[0] - 24848u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D270u | kUnwind; return; } [[clang::musttail]] return unit_004F(c, 72u, depth); }
L_00240720:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00240730:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240744u); set32(c.r[4], c.r[4].w[0] - 24848u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x00240744u) [[unlikely]] return; }
L_00240744:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00880000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240750u); set32(c.r[4], c.r[4].w[0] + 15920u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x00240750u) [[unlikely]] return; }
L_00240750:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00240760:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00240770:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[4].w[0] - 24848u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D270u | kUnwind; return; } [[clang::musttail]] return unit_004F(c, 72u, depth); }
L_00240780:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00240790:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002407A4u); set32(c.r[4], c.r[4].w[0] - 24848u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x002407A4u) [[unlikely]] return; }
L_002407A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00880000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002407B0u); set32(c.r[4], c.r[4].w[0] + 15920u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x002407B0u) [[unlikely]] return; }
L_002407B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002407C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002407D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002407E4u); set32(c.r[4], c.r[4].w[0] - 24848u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x002407E4u) [[unlikely]] return; }
L_002407E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00880000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002407F0u); set32(c.r[4], c.r[4].w[0] + 15920u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x002407F0u) [[unlikely]] return; }
L_002407F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00240800:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00240810:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240824u); set32(c.r[4], c.r[4].w[0] - 24848u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x00240824u) [[unlikely]] return; }
L_00240824:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240830u); set32(c.r[4], c.r[4].w[0] - 4464u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x00240830u) [[unlikely]] return; }
L_00240830:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00880000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024083Cu); set32(c.r[4], c.r[4].w[0] + 15920u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x0024083Cu) [[unlikely]] return; }
L_0024083C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240844u);  if (depth < kMaxDepth) unit_004F(c, 172u, depth + 1u); else { c.pc = 0x0023FC80u; return; } if (c.pc != 0x00240844u) [[unlikely]] return; }
L_00240844:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00240850:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x019A0000u);
    c.budget -= 3;
    { c.r[4].d[0] = c.r[2].d[0] | 4096ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023FD80u | kUnwind; return; } [[clang::musttail]] return unit_004F(c, 177u, depth); }
L_00240860:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], 0u + 26064u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 608u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240894u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 262u, depth + 1u); else { c.pc = 0x00102A28u; return; } if (c.pc != 0x00240894u) [[unlikely]] return; }
L_00240894:
    set32(c.r[4], c.r[16].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002408A4u); set32(c.r[6], c.r[16].w[0] + 512u);  if (depth < kMaxDepth) unit_0009(c, 117u, depth + 1u); else { c.pc = 0x00125800u; return; } if (c.pc != 0x002408A4u) [[unlikely]] return; }
L_002408A4:
    set32(c.r[4], c.r[16].w[0] + 192u);
    set32(c.r[3], c.r[16].w[0] + 128u);
    set32(c.r[2], c.r[16].w[0] + 544u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[7]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    set32(c.r[6], c.r[16].w[0] + 128u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002408E8u); set32(c.r[5], c.r[2].w[0] + 256u);  if (depth < kMaxDepth) unit_0000(c, 215u, depth + 1u); else { c.pc = 0x00102180u; return; } if (c.pc != 0x002408E8u) [[unlikely]] return; }
L_002408E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    set32(c.r[4], c.r[16].w[0] + 64u);
    set32(c.r[6], c.r[16].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002408FCu); set32(c.r[5], c.r[2].w[0] + 320u);  if (depth < kMaxDepth) unit_0000(c, 215u, depth + 1u); else { c.pc = 0x00102180u; return; } if (c.pc != 0x002408FCu) [[unlikely]] return; }
L_002408FC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240908u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 172u, depth + 1u); else { c.pc = 0x00240D10u; return; } if (c.pc != 0x00240908u) [[unlikely]] return; }
L_00240908:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00240920:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240940u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 262u, depth + 1u); else { c.pc = 0x00102A28u; return; } if (c.pc != 0x00240940u) [[unlikely]] return; }
L_00240940:
    set32(c.r[4], c.r[16].w[0] + 208u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240950u); set32(c.r[6], c.r[16].w[0] + 592u);  if (depth < kMaxDepth) unit_0009(c, 117u, depth + 1u); else { c.pc = 0x00125800u; return; } if (c.pc != 0x00240950u) [[unlikely]] return; }
L_00240950:
    set32(c.r[2], c.r[17].w[0] + 4480u);
    set32(c.r[4], c.r[16].w[0] + 336u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[5], c.r[16].w[0] + 400u);
    set32(c.r[6], c.r[16].w[0] + 464u);
    set32(c.r[7], c.r[16].w[0] + 528u);
    set32(c.r[8], c.r[16].w[0] + 208u);
    set32(c.r[9], c.r[17].w[0] + 4288u);
    set32(c.r[10], c.r[17].w[0] + 4352u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024097Cu); set32(c.r[11], c.r[17].w[0] + 4416u);  if (depth < kMaxDepth) unit_0009(c, 134u, depth + 1u); else { c.pc = 0x00125BB0u; return; } if (c.pc != 0x0024097Cu) [[unlikely]] return; }
L_0024097C:
    set32(c.r[5], c.r[16].w[0] + 272u);
    set32(c.r[4], c.r[16].w[0] + 208u);
    set32(c.r[3], c.r[16].w[0] + 624u);
    set32(c.r[2], c.r[16].w[0] + 608u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[7]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulbc(c.vu0, 15u, 4u, 4u, c.vu0.vf[8].w[0]);
    vu::mulbc(c.vu0, 15u, 5u, 5u, c.vu0.vf[8].w[1]);
    vu::mulbc(c.vu0, 15u, 6u, 6u, c.vu0.vf[8].w[2]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    st128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    set32(c.r[4], c.r[16].w[0] + 80u);
    set32(c.r[6], c.r[16].w[0] + 272u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002409E0u); set32(c.r[5], c.r[2].w[0] + 256u);  if (depth < kMaxDepth) unit_0000(c, 215u, depth + 1u); else { c.pc = 0x00102180u; return; } if (c.pc != 0x002409E0u) [[unlikely]] return; }
L_002409E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    set32(c.r[4], c.r[16].w[0] + 144u);
    set32(c.r[6], c.r[16].w[0] + 272u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002409F4u); set32(c.r[5], c.r[2].w[0] + 320u);  if (depth < kMaxDepth) unit_0000(c, 215u, depth + 1u); else { c.pc = 0x00102180u; return; } if (c.pc != 0x002409F4u) [[unlikely]] return; }
L_002409F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00240A10:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] + 29024u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 27856u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 51u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 9);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240A70u); set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 262u, depth + 1u); else { c.pc = 0x00102A28u; return; } if (c.pc != 0x00240A70u) [[unlikely]] return; }
L_00240A70:
    set32(c.r[4], c.r[17].w[0] + 208u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240A80u); set32(c.r[6], c.r[17].w[0] + 592u);  if (depth < kMaxDepth) unit_0009(c, 117u, depth + 1u); else { c.pc = 0x00125800u; return; } if (c.pc != 0x00240A80u) [[unlikely]] return; }
L_00240A80:
    set32(c.r[2], c.r[16].w[0] + 4480u);
    set32(c.r[4], c.r[17].w[0] + 336u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[5], c.r[17].w[0] + 400u);
    set32(c.r[6], c.r[17].w[0] + 464u);
    set32(c.r[7], c.r[17].w[0] + 528u);
    set32(c.r[8], c.r[17].w[0] + 208u);
    set32(c.r[9], c.r[16].w[0] + 4288u);
    set32(c.r[10], c.r[16].w[0] + 4352u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240AACu); set32(c.r[11], c.r[16].w[0] + 4416u);  if (depth < kMaxDepth) unit_0009(c, 134u, depth + 1u); else { c.pc = 0x00125BB0u; return; } if (c.pc != 0x00240AACu) [[unlikely]] return; }
L_00240AAC:
    set32(c.r[3], c.r[18].w[0] + 32u);
    set32(c.r[5], c.r[17].w[0] + 272u);
    set32(c.r[4], c.r[17].w[0] + 208u);
    set32(c.r[2], c.r[17].w[0] + 608u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[7]);
    vu::move(c.vu0, 1u, 7u, 0u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulbc(c.vu0, 15u, 4u, 4u, c.vu0.vf[8].w[0]);
    vu::mulbc(c.vu0, 15u, 5u, 5u, c.vu0.vf[8].w[1]);
    vu::mulbc(c.vu0, 15u, 6u, 6u, c.vu0.vf[8].w[2]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    st128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    set32(c.r[4], c.r[17].w[0] + 80u);
    set32(c.r[6], c.r[17].w[0] + 272u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240B14u); set32(c.r[5], c.r[2].w[0] + 256u);  if (depth < kMaxDepth) unit_0000(c, 215u, depth + 1u); else { c.pc = 0x00102180u; return; } if (c.pc != 0x00240B14u) [[unlikely]] return; }
L_00240B14:
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    set32(c.r[4], c.r[17].w[0] + 144u);
    set32(c.r[6], c.r[17].w[0] + 272u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240B28u); set32(c.r[5], c.r[2].w[0] + 320u);  if (depth < kMaxDepth) unit_0000(c, 215u, depth + 1u); else { c.pc = 0x00102180u; return; } if (c.pc != 0x00240B28u) [[unlikely]] return; }
L_00240B28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00240B40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], 0u + 26064u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 608u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    set32(c.r[5], c.r[16].w[0] + 32u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[17].w[0] + 544u);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    vu::move(c.vu0, 1u, 4u, 0u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240B88u); set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 143u, depth + 1u); else { c.pc = 0x00125E30u; return; } if (c.pc != 0x00240B88u) [[unlikely]] return; }
L_00240B88:
    st32((c.r[17].w[0] + 512u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240B94u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 143u, depth + 1u); else { c.pc = 0x00125E30u; return; } if (c.pc != 0x00240B94u) [[unlikely]] return; }
L_00240B94:
    st32((c.r[17].w[0] + 516u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240BA0u); set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  if (depth < kMaxDepth) unit_0009(c, 143u, depth + 1u); else { c.pc = 0x00125E30u; return; } if (c.pc != 0x00240BA0u) [[unlikely]] return; }
L_00240BA0:
    st32((c.r[17].w[0] + 520u), c.f[0]);
    set32(c.r[4], c.r[16].w[0] + 1984u);
    set32(c.r[3], ld32((c.r[17].w[0] + 26044u)));
    c.r[6].d[0] = ld8((c.r[3].w[0] + 7u));
    c.budget -= 4;
L_00240BB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[17].w[0] + 576u);  if (t) { goto L_00240BE8; } }
L_00240BB8:
    set32(c.r[3], c.r[5].w[0] + 192u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + 576u);
    set32(c.r[4], c.r[4].w[0] + 64u);
    c.budget -= 12;
L_00240BE8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00240BB8u | kUnwind; return; } goto L_00240BB8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00240C10:
    set32(c.r[3], ld32((c.r[5].w[0] + 26044u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[29], c.r[29].w[0] - 48u);  if (t) { goto L_00240C30; } }
    set32(c.r[3], 0u - 1u);
    mmi::pcpyld(c.r[3], c.r[0], c.r[3]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st64((c.r[5].w[0] + 26032u), c.r[3].d[0]);  if (t) { goto L_00240D08; } }
L_00240C30:
    st64((c.r[5].w[0] + 26032u), 0ull);
    c.r[3].d[0] = ld32((c.r[4].w[0] + 1236u));
    set32(c.r[7], c.r[29].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23776u)));
    set32(c.r[4], c.r[4].w[0] + 384u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[7].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[10], c.r[29].w[0]);
    set32(c.r[11], c.r[29].w[0] + 32u);
    c.budget -= 9;
L_00240C54:
    set32(c.r[4], ld32((c.r[28].w[0] - 23776u)));
    set32(c.r[4], c.r[4].w[0] + 400u);
    ld128((c.r[10].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 15u, 6u, 5u, 4u);
    st128((c.r[11].w[0]) & ~15u, c.vu0.vf[6]);
    c.f[1] = 0u;
    c.f[0] = c.f[1];
    set32(c.r[9], c.r[29].w[0] + 16u);
    c.budget -= 9;
L_00240C78:
    c.r[4].d[0] = ld64((c.r[6].w[0] + 8u));
    c.r[4].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00240CF0; } }
    set32(c.r[7], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[4], c.r[7].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] + 576u);
    set32(c.r[4], c.r[4].w[0] + 240u);
    ld128((c.r[10].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 15u, 6u, 5u, 4u);
    st128((c.r[9].w[0]) & ~15u, c.vu0.vf[6]);
    ld128((c.r[9].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[11].w[0]) & ~15u, c.vu0.vf[5]);
    vu::mul(c.vu0, 14u, 6u, 4u, 5u);
    vu::addbc(c.vu0, 8u, 6u, 6u, c.vu0.vf[6].w[1]);
    vu::addbc(c.vu0, 8u, 6u, 6u, c.vu0.vf[6].w[2]);
    c.r[8] = c.vu0.vf[6];
    c.f[1] = c.r[8].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 22;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00240CF0; } }
    c.r[7].d[0] = ld64((c.r[5].w[0] + 26032u));
    c.r[4].d[0] = ld64((c.r[6].w[0] + 8u));
    c.r[4].d[0] = c.r[7].d[0] | c.r[4].d[0];
    st64((c.r[5].w[0] + 26032u), c.r[4].d[0]);
    c.budget -= 4;
L_00240CF0:
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_00240D08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00240C78u | kUnwind; return; } goto L_00240C78; } }
    c.budget -= 1;
L_00240D08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00240D10:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 433u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00240D38; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 26043u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00240D68; } }
L_00240D38:
    set32(c.r[3], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[16].w[0] + 816u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1608u)));
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240D64u); st32((c.r[29].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x00240D64u) [[unlikely]] return; }
L_00240D64:
    st8((c.r[16].w[0] + 26043u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00240D68:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 26043u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    set32(c.r[5], c.r[29].w[0] + 88u);
    set32(c.r[2], c.r[2].w[0] + 10528u);
    c.r[4].d[0] = c.r[3].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.r[8].d[0] = ld64((c.r[2].w[0]));
    st64((c.r[5].w[0]), c.r[8].d[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    set32(c.r[6], c.r[16].w[0] + 544u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240DB0u); set32(c.r[5], c.r[2].w[0] + 256u);  if (depth < kMaxDepth) unit_0000(c, 212u, depth + 1u); else { c.pc = 0x00102100u; return; } if (c.pc != 0x00240DB0u) [[unlikely]] return; }
L_00240DB0:
    c.f[3] = ld32((c.r[29].w[0] + 60u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[3].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 92u));
    c.f[2] = ld32((c.r[29].w[0] + 88u));
    c.f[0] = 0u;
    fpu_div(c, 3u, c.f[4], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 56u), c.f[1]);  if (t) { goto L_00240E08; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 26043u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    set32(c.r[3], c.r[3].w[0] + 10532u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 56u), c.f[0]);  if (t) { goto L_00240E60; } }
L_00240E08:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 26043u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    set32(c.r[3], c.r[3].w[0] + 10532u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00240E40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 56u), c.f[0]);  if (t) { goto L_00240E60; } }
    c.budget -= 1;
L_00240E40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    set32(c.r[3], c.r[3].w[0] + 10528u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00240E60; } }
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.budget -= 1;
L_00240E60:
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    vu::ftoi(c.vu0, 15u, 4u, 4u, 4);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    st32((c.r[16].w[0] + 560u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00240E90:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 816u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240EC0u); set32(c.r[17], c.r[17].w[0] + 15664u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00240EC0u) [[unlikely]] return; }
L_00240EC0:
    c.f[0] = ld32((c.r[16].w[0] + 244u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 433u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00240EE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_00240F50; } }
L_00240EE0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], 0u + 34u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 32u);  if (t) { goto L_00240F38; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00240F38; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 1;
L_00240F00:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 16u);  if (t) { goto L_00240F38; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00240F38; } }
    set32(c.r[2], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 19u);  if (t) { goto L_00240F38; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00240F38; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00240F38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00240F48; } }
L_00240F38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240F40u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_004F(c, 101u, depth + 1u); else { c.pc = 0x0023DA60u; return; } if (c.pc != 0x00240F40u) [[unlikely]] return; }
L_00240F40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00240F50; } }
L_00240F48:
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 26043u)));
    c.budget -= 2;
L_00240F50:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);  if (t) { goto L_00240F88; } }
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 432u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240F7Cu); set32(c.r[4], c.r[18].w[0] + 25920u);  if (depth < kMaxDepth) unit_0009(c, 128u, depth + 1u); else { c.pc = 0x00125980u; return; } if (c.pc != 0x00240F7Cu) [[unlikely]] return; }
L_00240F7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00241008; } }
    c.budget -= 1;
L_00240F88:
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);  if (t) { goto L_00240FB8; } }
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 640u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240FACu); set32(c.r[4], c.r[18].w[0] + 25920u);  if (depth < kMaxDepth) unit_0009(c, 128u, depth + 1u); else { c.pc = 0x00125980u; return; } if (c.pc != 0x00240FACu) [[unlikely]] return; }
L_00240FAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00241008; } }
    c.budget -= 1;
L_00240FB8:
    set32(c.r[2], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);  if (t) { goto L_00240FE8; } }
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1248u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240FDCu); set32(c.r[4], c.r[18].w[0] + 25920u);  if (depth < kMaxDepth) unit_0009(c, 128u, depth + 1u); else { c.pc = 0x00125980u; return; } if (c.pc != 0x00240FDCu) [[unlikely]] return; }
L_00240FDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00241008; } }
    c.budget -= 1;
L_00240FE8:
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[4], c.r[18].w[0] + 25920u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241004u); set32(c.r[5], c.r[2].w[0] + 4048u);  if (depth < kMaxDepth) unit_0009(c, 128u, depth + 1u); else { c.pc = 0x00125980u; return; } if (c.pc != 0x00241004u) [[unlikely]] return; }
L_00241004:
    c.budget -= 1;
L_00241008:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 64u);  if (t) { goto L_002410A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241020u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0013(c, 50u, depth + 1u); else { c.pc = 0x0014C860u; return; } if (c.pc != 0x00241020u) [[unlikely]] return; }
L_00241020:
    c.f[4] = ld32((c.r[29].w[0] + 68u));
    set32(c.r[3], c.r[16].w[0] << 2);
    c.f[3] = ld32((c.r[29].w[0] + 92u));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.f[2] = ld32((c.r[3].w[0] + 4272u));
    c.f[1] = 0u;
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[18].w[0] + 25968u);  if (t) { goto L_00241060; } }
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[0]);  if (t) { goto L_002410A8; } }
    c.budget -= 1;
L_00241060:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[18].w[0] + 25968u);  if (t) { goto L_002410A8; } }
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    set32(c.r[8], c.f[0]);
    c.vu0.vf[7] = c.r[8];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[7].w[0]);
    vu::mulbc(c.vu0, 14u, 5u, 5u, c.vu0.vf[7].w[0]);
    vu::move(c.vu0, 1u, 4u, 0u);
    vu::move(c.vu0, 1u, 5u, 0u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    c.budget -= 12;
L_002410A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002410C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.budget -= 3;
L_002410CC:
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 433u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + 15664u);  if (t) { goto L_00241100; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_00241168; } }
    c.budget -= 1;
L_00241100:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], 0u + 16u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 34u);  if (t) { goto L_00241138; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00241138; } }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 17u);  if (t) { goto L_00241138; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00241138; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00241158; } }
L_00241138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241140u); set32(c.r[4], c.r[19].w[0] + 240u);  if (depth < kMaxDepth) unit_004F(c, 101u, depth + 1u); else { c.pc = 0x0023DA60u; return; } if (c.pc != 0x00241140u) [[unlikely]] return; }
L_00241140:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00241168; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_00241168; } }
L_00241158:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241160u); set32(c.r[4], c.r[19].w[0] + 240u);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x00241160u) [[unlikely]] return; }
L_00241160:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00241168:
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[18].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] + 4048u);
    set32(c.r[2], c.r[2].w[0] + 4096u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[7]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[8]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[9]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[10]);
    st128((c.r[18].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[18].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    st128((c.r[18].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[7]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[8]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[9]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[10]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 25;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00241260; } }
    set32(c.r[4], c.r[19].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002411D8u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0013(c, 50u, depth + 1u); else { c.pc = 0x0014C860u; return; } if (c.pc != 0x002411D8u) [[unlikely]] return; }
L_002411D8:
    c.f[4] = ld32((c.r[19].w[0] + 244u));
    set32(c.r[2], c.r[16].w[0] << 2);
    c.f[3] = ld32((c.r[29].w[0] + 92u));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.f[2] = ld32((c.r[2].w[0] + 4272u));
    c.f[1] = 0u;
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], c.r[18].w[0] + 48u);  if (t) { goto L_00241218; } }
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[0]);  if (t) { goto L_00241260; } }
    c.budget -= 1;
L_00241218:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], c.r[18].w[0] + 48u);  if (t) { goto L_00241260; } }
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    set32(c.r[8], c.f[0]);
    c.vu0.vf[7] = c.r[8];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[7].w[0]);
    vu::mulbc(c.vu0, 14u, 5u, 5u, c.vu0.vf[7].w[0]);
    vu::move(c.vu0, 1u, 4u, 0u);
    vu::move(c.vu0, 1u, 5u, 0u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    c.budget -= 12;
L_00241260:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00241280:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007E0000u);
    set32(c.r[6], ld32((c.r[1].w[0] - 7744u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007E0000u);
    set32(c.r[4], c.r[4].w[0] + 14212u);
    set32(c.r[3], c.r[3].w[0] + 14208u);
    set32(c.r[5], c.r[6].w[0] << 10);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), 0u);  c.pc = t; return; }
L_002412C0:
    c.r[3].d[0] = c.r[4].d[0] << 36;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[3].d[0] = c.r[3].d[0] >> 36;
    st32((c.r[1].w[0] - 19408u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    set32(c.r[3], 0u + 261u);
    st32((c.r[1].w[0] - 19424u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] - 19456u), c.r[3].w[0]);  c.pc = t; return; }
L_002412F0:
    c.r[3].d[0] = c.r[4].d[0] << 36;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[3].d[0] = c.r[3].d[0] >> 36;
    st32((c.r[1].w[0] - 20464u), c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] << 10);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    set32(c.r[4], c.r[3].w[0] >> 4);
    st32((c.r[1].w[0] - 20448u), c.r[4].w[0]);
    set32(c.r[3], 0u + 256u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] - 20480u), c.r[3].w[0]);  c.pc = t; return; }
L_00241320:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00103B70u | kUnwind; return; } [[clang::musttail]] return unit_0000(c, 346u, depth); }
L_00241330:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[1].w[0] + 8192u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241354u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0050(c, 192u, depth + 1u); else { c.pc = 0x00241320u; return; } if (c.pc != 0x00241354u) [[unlikely]] return; }
L_00241354:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 8192u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] >> 24);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241370u); c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0050(c, 192u, depth + 1u); else { c.pc = 0x00241320u; return; } if (c.pc != 0x00241370u) [[unlikely]] return; }
L_00241370:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024138Cu); st32((c.r[1].w[0] + 8192u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0050(c, 192u, depth + 1u); else { c.pc = 0x00241320u; return; } if (c.pc != 0x0024138Cu) [[unlikely]] return; }
L_0024138C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002413A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[1].d[0] = c.r[1].d[0] | 17472ull;
    set32(c.r[5], c.r[4].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 8u));
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 10u));
    st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 12u));
    st16((c.r[4].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] >> 4);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 10u));
    set32(c.r[3], c.r[3].w[0] >> 4);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002413F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] << 36;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[16].sd[0] <= 0; c.r[17].d[0] = c.r[17].d[0] >> 36;  if (t) { goto L_002414A0; } }
    c.budget -= 1;
L_00241420:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 65520ull;
    c.r[1].d[0] = c.r[16].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);  if (t) { goto L_0024143C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00241440; } }
L_0024143C:
    c.r[19].d[0] = c.r[2].d[0] | 65520ull;
    c.budget -= 1;
L_00241440:
    set32(c.r[3], c.r[19].w[0] + 15u);
    set32(c.r[2], 0u - 16u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[16], c.r[16].w[0] - c.r[19].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[5], c.r[2].w[0] >> 4);  if (t) { goto L_00241478; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024146Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED0u; return; } if (c.pc != 0x0024146Cu) [[unlikely]] return; }
L_0024146C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00241490; } }
    c.budget -= 1;
L_00241478:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024148Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 50u, depth + 1u); else { c.pc = 0x00124F30u; return; } if (c.pc != 0x0024148Cu) [[unlikely]] return; }
L_0024148C:
    c.budget -= 1;
L_00241490:
    set32(c.r[17], c.r[17].w[0] + c.r[19].w[0]);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] > 0; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241420u | kUnwind; return; } goto L_00241420; } }
    c.budget -= 1;
L_002414A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.budget -= 2;
L_002414A8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002414C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 23944u)));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 14u));
    set32(c.r[3], c.r[3].w[0] << 18);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[18], c.r[3].w[0] + 17472u);
    st16((c.r[4].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = ld16((c.r[4].w[0] + 12u));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[17].w[0] + 16448u);  if (t) { goto L_00241530; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241510u);  if (depth < kMaxDepth) unit_0000(c, 352u, depth + 1u); else { c.pc = 0x00103C50u; return; } if (c.pc != 0x00241510u) [[unlikely]] return; }
L_00241510:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024151Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0050(c, 192u, depth + 1u); else { c.pc = 0x00241320u; return; } if (c.pc != 0x0024151Cu) [[unlikely]] return; }
L_0024151C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241524u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 190u, depth + 1u); else { c.pc = 0x002412C0u; return; } if (c.pc != 0x00241524u) [[unlikely]] return; }
L_00241524:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[1].w[0] + 8208u), 0u);
    st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_00241530:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 16u));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 18u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241544u); mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]); c.r[5].d[0] = c.lo.d[0];  if (depth < kMaxDepth) unit_0050(c, 191u, depth + 1u); else { c.pc = 0x002412F0u; return; } if (c.pc != 0x00241544u) [[unlikely]] return; }
L_00241544:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024154Cu);  if (depth < kMaxDepth) unit_0050(c, 193u, depth + 1u); else { c.pc = 0x00241330u; return; } if (c.pc != 0x0024154Cu) [[unlikely]] return; }
L_0024154C:
    set32(c.r[4], 0u - 5u);
    set32(c.r[3], c.r[2].w[0] >> 2);
    c.r[4].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[4], c.r[4].w[0] << 16);
    set32(c.r[3], c.r[2].w[0] << 24);
    st32((c.r[1].w[0] + 8208u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[1].w[0] + 8192u), c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241588u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0050(c, 192u, depth + 1u); else { c.pc = 0x00241320u; return; } if (c.pc != 0x00241588u) [[unlikely]] return; }
L_00241588:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002415A4u); st32((c.r[1].w[0] + 8192u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0050(c, 192u, depth + 1u); else { c.pc = 0x00241320u; return; } if (c.pc != 0x002415A4u) [[unlikely]] return; }
L_002415A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002415C0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[2].d[0] = c.r[6].d[0] & 65535ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 6u)));
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8u)));
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] << 13);
    set32(c.r[2], c.r[2].w[0] << 18);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[21], c.r[3].w[0] + 64u);
    set32(c.r[20], c.r[2].w[0] + 17472u);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 8u));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 10u));
    set32(c.r[5], 0u + 3u);
    set32(c.r[22], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    set32(c.r[30], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241640u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 47u, depth + 1u); else { c.pc = 0x00124E10u; return; } if (c.pc != 0x00241640u) [[unlikely]] return; }
L_00241640:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024164Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0009(c, 53u, depth + 1u); else { c.pc = 0x00125020u; return; } if (c.pc != 0x0024164Cu) [[unlikely]] return; }
L_0024164C:
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[1].d[0] = 0ll < c.r[30].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[18].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 14u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st64((c.r[21].w[0] + 16u), c.r[3].d[0]);
    set32(c.r[4], 0u + 80u);
    st64((c.r[21].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[3], 0u + 16u);
    set32(c.r[21], c.r[21].w[0] + 32u);
    c.r[2].d[0] = c.r[3].d[0] << 32;
    st64((c.r[21].w[0]), c.r[5].d[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st64((c.r[21].w[0] + 8u), c.r[4].d[0]);
    set32(c.r[2], 0u + 82u);
    st64((c.r[21].w[0] + 16u), c.r[3].d[0]);
    st64((c.r[21].w[0] + 24u), c.r[2].d[0]);
    c.budget -= 32;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[21], c.r[21].w[0] + 32u);  if (t) { goto L_002417F0; } }
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002416D0:
    c.r[1].d[0] = 0ll < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002417E0; } }
    c.r[2].d[0] = c.r[23].d[0] << 32;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    st64((c.r[29].w[0] + 176u), c.r[2].d[0]);
    c.budget -= 5;
L_002416F0:
    set32(c.r[2], c.r[30].w[0] - 1u);
    c.r[16].d[0] = c.r[18].d[0] ^ c.r[2].d[0];
    c.r[16].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_00241710; } }
    set32(c.r[2], c.r[22].w[0] - 1u);
    c.r[16].d[0] = c.r[19].d[0] ^ c.r[2].d[0];
    c.r[16].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_00241710:
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241720u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 47u, depth + 1u); else { c.pc = 0x00124E10u; return; } if (c.pc != 0x00241720u) [[unlikely]] return; }
L_00241720:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024172Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0009(c, 53u, depth + 1u); else { c.pc = 0x00125020u; return; } if (c.pc != 0x0024172Cu) [[unlikely]] return; }
L_0024172C:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[2].d[0] << 15;
    set32(c.r[5], 0u + 14u);
    set32(c.r[2], 0u + 2u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[17].d[0] << 32;
    st64((c.r[21].w[0] + 16u), c.r[4].d[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st64((c.r[21].w[0] + 24u), c.r[5].d[0]);
    c.r[4].d[0] = c.r[2].d[0] << 32;
    set32(c.r[21], c.r[21].w[0] + 32u);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 176u));
    set32(c.r[5], 0u + 64u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    st64((c.r[21].w[0]), c.r[4].d[0]);
    set32(c.r[2], 0u + 81u);
    st64((c.r[21].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[4], 0u + 83u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    st64((c.r[21].w[0] + 16u), 0ull);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    st64((c.r[21].w[0] + 24u), c.r[4].d[0]);
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    set32(c.r[21], c.r[21].w[0] + 32u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[16], c.r[21].w[0] + 16u);
    st64((c.r[21].w[0]), c.r[2].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002417BCu); st64((c.r[21].w[0] + 8u), 0ull);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED0u; return; } if (c.pc != 0x002417BCu) [[unlikely]] return; }
L_002417BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002417C8u); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0009(c, 53u, depth + 1u); else { c.pc = 0x00125020u; return; } if (c.pc != 0x002417C8u) [[unlikely]] return; }
L_002417C8:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[21], c.r[21].w[0] + 32u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    set32(c.r[20], c.r[20].w[0] + 1024u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002416F0u | kUnwind; return; } goto L_002416F0; } }
L_002417E0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[23], c.r[23].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002416D0u | kUnwind; return; } goto L_002416D0; } }
L_002417F0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241804u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 47u, depth + 1u); else { c.pc = 0x00124E10u; return; } if (c.pc != 0x00241804u) [[unlikely]] return; }
L_00241804:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241810u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0009(c, 53u, depth + 1u); else { c.pc = 0x00125020u; return; } if (c.pc != 0x00241810u) [[unlikely]] return; }
L_00241810:
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = 0ull | 32769ull;
    c.r[5].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st64((c.r[21].w[0] + 16u), c.r[5].d[0]);
    set32(c.r[3], 0u + 14u);
    st64((c.r[21].w[0] + 24u), c.r[3].d[0]);
    set32(c.r[5], 0u + 63u);
    set32(c.r[21], c.r[21].w[0] + 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[21].w[0]), 0ull);
    set32(c.r[3], c.r[3].w[0] + 12712u);
    st64((c.r[21].w[0] + 8u), c.r[5].d[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st64((c.r[21].w[0] + 16u), 0ull);
    set32(c.r[4], c.r[21].w[0] + 16u);
    st64((c.r[21].w[0] + 24u), 0ull);
    st32((c.r[3].w[0]), c.r[4].w[0]);
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
    c.budget -= 32;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00241890:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 7744u)));
    set32(c.r[2], c.r[2].w[0] + 12712u);
    set32(c.r[5], c.r[3].w[0] << 13);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { set32(c.r[4], c.r[3].w[0] + 64u);  [[clang::musttail]] return unit_006B(c, 149u, depth); }
L_002418C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], c.r[6].w[0] << 1);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[20], c.r[2].w[0] + c.r[6].w[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241908u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 51u, depth + 1u); else { c.pc = 0x00124F90u; return; } if (c.pc != 0x00241908u) [[unlikely]] return; }
L_00241908:
    set32(c.r[5], c.r[20].w[0] + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241914u); set32(c.r[4], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 52u, depth + 1u); else { c.pc = 0x00124FF0u; return; } if (c.pc != 0x00241914u) [[unlikely]] return; }
L_00241914:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[2], 0u + 14u);
    st64((c.r[18].w[0] + 32u), c.r[3].d[0]);
    st64((c.r[18].w[0] + 40u), c.r[2].d[0]);
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 48u);  if (t) { goto L_00241948; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st64((c.r[18].w[0]), c.r[2].d[0]);  if (t) { goto L_00241950; } }
    c.budget -= 1;
L_00241948:
    st64((c.r[18].w[0]), 0ull);
    c.budget -= 2;
L_00241950:
    set32(c.r[2], 0u + 8u);
    st64((c.r[18].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241960u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10u)));  if (depth < kMaxDepth) unit_000B(c, 91u, depth + 1u); else { c.pc = 0x0012DBA0u; return; } if (c.pc != 0x00241960u) [[unlikely]] return; }
L_00241960:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024196Cu); c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 91u, depth + 1u); else { c.pc = 0x0012DBA0u; return; } if (c.pc != 0x0024196Cu) [[unlikely]] return; }
L_0024196C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00241A00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241984u);  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0012CF70u; return; } if (c.pc != 0x00241984u) [[unlikely]] return; }
L_00241984:
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[20].d[0] << 32;
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 6u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[4].d[0] = c.r[3].d[0] << 37;
    c.r[7].d[0] = c.r[2].d[0] << 26;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 24u)));
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[9].d[0] = c.r[9].d[0] << 14;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[8].d[0] = c.r[8].d[0] << 20;
    c.r[6].d[0] = c.r[2].d[0] << 30;
    c.r[9].d[0] = c.r[10].d[0] | c.r[9].d[0];
    set32(c.r[2], 0u + 4u);
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 51;
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 30;
    { const bool t = 0ull == 0ull; st64((c.r[18].w[0] + 16u), c.r[2].d[0]);  if (t) { goto L_00241A70; } }
    c.budget -= 1;
L_00241A00:
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 8u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[20].d[0] << 32;
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 6u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[7].d[0] = c.r[2].d[0] << 26;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 26u)));
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 24u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[9].d[0] = c.r[9].d[0] << 14;
    c.r[6].d[0] = c.r[2].d[0] << 30;
    c.r[8].d[0] = c.r[8].d[0] << 20;
    set32(c.r[2], 0u + 4u);
    c.r[9].d[0] = c.r[10].d[0] | c.r[9].d[0];
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 37;
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 51;
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st64((c.r[18].w[0] + 16u), c.r[2].d[0]);
    c.budget -= 28;
L_00241A70:
    set32(c.r[2], 0u + 6u);
    st64((c.r[18].w[0] + 24u), c.r[2].d[0]);
    c.r[5].d[0] = c.r[17].d[0] << 32;
    set32(c.r[4], 0u + 68u);
    set32(c.r[18], c.r[18].w[0] + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x303E0000u);
    set32(c.r[3], 0u + 66u);
    st64((c.r[18].w[0]), c.r[4].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    st64((c.r[18].w[0] + 8u), c.r[3].d[0]);
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[2], 0u + 1042u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st64((c.r[18].w[0] + 16u), c.r[3].d[0]);
    st64((c.r[18].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[18], c.r[18].w[0] + 32u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 28;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00241AE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[12]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[29].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00241B18; } }
    st32((c.r[29].w[0] + 16u), c.f[1]);
    c.budget -= 2;
L_00241B18:
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = ld32((c.r[29].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00241B30; } }
    st32((c.r[29].w[0] + 16u), c.f[1]);
    c.budget -= 1;
L_00241B30:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241B3Cu); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 253u, depth + 1u); else { c.pc = 0x001028E8u; return; } if (c.pc != 0x00241B3Cu) [[unlikely]] return; }
L_00241B3C:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00241B50:
    set32(c.r[29], c.r[29].w[0] - 320u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[7].d[0] = c.r[10].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241BA4u); c.r[22].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 223u, depth + 1u); else { c.pc = 0x002418C0u; return; } if (c.pc != 0x00241BA4u) [[unlikely]] return; }
L_00241BA4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 316u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00241F10; } }
    c.budget -= 1;
L_00241BB8:
    set32(c.r[2], c.r[29].w[0] + 192u);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[5]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    set32(c.r[6], c.r[29].w[0] + 288u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[4], c.r[21].w[0] + 64u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 317u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 318u)));
    st8((c.r[29].w[0] + 316u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 317u), static_cast<std::uint8_t>(c.r[2].w[0]));
    ld128((c.r[20].w[0]) & ~15u, c.vu0.vf[4]);
    vu::ftoi(c.vu0, 15u, 5u, 4u, 0);
    vu::move(c.vu0, 1u, 4u, 0u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[14]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[15]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[16]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[17]);
    vu::mulabc(c.vu0, 15u, 14u, c.vu0.vf[4].w[0]);
    vu::maddabc(c.vu0, 15u, 15u, c.vu0.vf[4].w[1]);
    vu::maddabc(c.vu0, 15u, 16u, c.vu0.vf[4].w[2]);
    vu::maddbc(c.vu0, 15u, 4u, 17u, c.vu0.vf[4].w[3]);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[5]);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    c.f[0] = ld32((c.r[29].w[0] + 296u));
    c.f[2] = ld32((c.r[29].w[0] + 300u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 30;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[1] = c.f[2] ^ fp::kSign;  if (t) { goto L_00241C78; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00241C78; } }
    c.f[0] = ld32((c.r[29].w[0] + 288u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00241C78; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00241C78; } }
    c.f[0] = ld32((c.r[29].w[0] + 292u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00241C78; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00241C90; } }
    c.budget -= 1;
L_00241C78:
    set32(c.r[2], 0u + 1u);
    st8((c.r[29].w[0] + 318u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = 0ull | 32768ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 44u), c.r[2].w[0]);  if (t) { goto L_00241F00; } }
    c.budget -= 1;
L_00241C90:
    st8((c.r[29].w[0] + 318u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[29].w[0] + 316u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull | 32768ull;  if (t) { goto L_00241CA8; } }
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 2;
L_00241CA8:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241CB4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00241CB4u) [[unlikely]] return; }
L_00241CB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    st32((c.r[29].w[0] + 300u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241CCCu); set32(c.r[6], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_0000(c, 212u, depth + 1u); else { c.pc = 0x00102100u; return; } if (c.pc != 0x00241CCCu) [[unlikely]] return; }
L_00241CCC:
    c.f[0] = ld32((c.r[29].w[0] + 236u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241CF4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0000(c, 243u, depth + 1u); else { c.pc = 0x00102748u; return; } if (c.pc != 0x00241CF4u) [[unlikely]] return; }
L_00241CF4:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241D00u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0000(c, 253u, depth + 1u); else { c.pc = 0x001028E8u; return; } if (c.pc != 0x00241D00u) [[unlikely]] return; }
L_00241D00:
    set32(c.r[2], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 288u);  if (t) { goto L_00241D60; } }
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241D18u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0000(c, 239u, depth + 1u); else { c.pc = 0x00102678u; return; } if (c.pc != 0x00241D18u) [[unlikely]] return; }
L_00241D18:
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241D28u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0000(c, 239u, depth + 1u); else { c.pc = 0x00102678u; return; } if (c.pc != 0x00241D28u) [[unlikely]] return; }
L_00241D28:
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[5], c.r[29].w[0] + 272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241D38u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 218u, depth + 1u); else { c.pc = 0x00102210u; return; } if (c.pc != 0x00241D38u) [[unlikely]] return; }
L_00241D38:
    c.f[2] = ld32((c.r[29].w[0] + 296u));
    c.f[1] = ld32((c.r[20].w[0] + 28u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull | 32768ull;  if (t) { goto L_00241D60; } }
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 2;
L_00241D60:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241D70u); set32(c.r[5], c.r[20].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 316u, depth + 1u); else { c.pc = 0x00103540u; return; } if (c.pc != 0x00241D70u) [[unlikely]] return; }
L_00241D70:
    set32(c.r[3], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[6], c.r[29].w[0] + 256u);
    set32(c.r[2], ld32((c.r[21].w[0] + 560u)));
    set32(c.r[5], c.r[21].w[0] + 256u);
    set32(c.r[4], c.r[21].w[0] + 320u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    ld128((c.r[20].w[0] + 16u) & ~15u, c.vu0.vf[8]);
    vu::move(c.vu0, 1u, 8u, 0u);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 9u, 0u, c.vu0.vf[8].w[3]);
    vu::maxbc(c.vu0, 14u, 8u, 9u, c.vu0.vf[0].w[0]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 9u, 7u, c.vu0.vf[8].w[3]);
    ld128((c.r[20].w[0] + 32u) & ~15u, c.vu0.vf[8]);
    vu::move(c.vu0, 1u, 8u, 0u);
    vu::mul(c.vu0, 14u, 10u, 9u, 8u);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[10]);
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241DF0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00241DF0u) [[unlikely]] return; }
L_00241DF0:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241DFCu); set32(c.r[5], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00241DFCu) [[unlikely]] return; }
L_00241DFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 288u);
    st32((c.r[29].w[0] + 284u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 300u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241E18u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 239u, depth + 1u); else { c.pc = 0x00102678u; return; } if (c.pc != 0x00241E18u) [[unlikely]] return; }
L_00241E18:
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[5], c.r[29].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241E28u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 241u, depth + 1u); else { c.pc = 0x001026E0u; return; } if (c.pc != 0x00241E28u) [[unlikely]] return; }
L_00241E28:
    c.f[1] = ld32((c.r[29].w[0] + 288u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[7] = ld32((c.r[29].w[0] + 292u));
    c.f[6] = ld32((c.r[29].w[0] + 296u));
    c.f[5] = c.r[2].w[0];
    c.f[4] = ld32((c.r[29].w[0] + 272u));
    c.f[3] = ld32((c.r[29].w[0] + 276u));
    c.f[8] = fp::mul(c.f[1], c.f[1]);
    c.f[7] = fp::mul(c.f[7], c.f[7]);
    c.facc = fp::add(c.f[8], c.f[7]);
    c.f[6] = fp::add(c.facc, fp::mul(c.f[6], c.f[6]));
    fpu_div(c, 20u, c.f[5], c.f[6]);
    c.f[2] = ld32((c.r[29].w[0] + 280u));
    c.f[4] = fp::mul(c.f[20], c.f[4]);
    c.f[3] = fp::mul(c.f[20], c.f[3]);
    c.facc = fp::add(c.f[4], c.f[3]);
    c.f[1] = ld32((c.r[19].w[0] + 32u));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[20], c.f[2]));
    c.f[0] = 0u;
    c.f[20] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 24;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00241E90; } }
    c.f[20] = c.f[0];
    c.budget -= 2;
L_00241E90:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241EA0u); set32(c.r[5], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 243u, depth + 1u); else { c.pc = 0x00102748u; return; } if (c.pc != 0x00241EA0u) [[unlikely]] return; }
L_00241EA0:
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241EB0u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 236u, depth + 1u); else { c.pc = 0x00102610u; return; } if (c.pc != 0x00241EB0u) [[unlikely]] return; }
L_00241EB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241EC8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 281u, depth + 1u); else { c.pc = 0x00102E28u; return; } if (c.pc != 0x00241EC8u) [[unlikely]] return; }
L_00241EC8:
    c.f[0] = ld32((c.r[21].w[0] + 572u));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241EDCu); st32((c.r[29].w[0] + 300u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 256u, depth + 1u); else { c.pc = 0x00102938u; return; } if (c.pc != 0x00241EDCu) [[unlikely]] return; }
L_00241EDC:
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[3], c.r[29].w[0] + 160u);
    set32(c.r[2], c.r[29].w[0] + 176u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[6]);
    st128((c.r[18].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[18].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    st128((c.r[18].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    c.budget -= 9;
L_00241F00:
    set32(c.r[18], c.r[18].w[0] + 48u);
    set32(c.r[20], c.r[20].w[0] + 64u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 4;
L_00241F10:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241BB8u | kUnwind; return; } goto L_00241BB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241F24u);  if (depth < kMaxDepth) unit_006B(c, 151u, depth + 1u); else { c.pc = 0x002ADB60u; return; } if (c.pc != 0x00241F24u) [[unlikely]] return; }
L_00241F24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_00241F50:
    set32(c.r[29], c.r[29].w[0] - 496u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[29].w[0] + 180u), c.r[11].w[0]);
    st32((c.r[29].w[0] + 184u), c.r[10].w[0]);
    st32((c.r[29].w[0] + 188u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 204u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[29].w[0] + 192u), c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 184u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241FB8u); st32((c.r[29].w[0] + 176u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_0050(c, 223u, depth + 1u); else { c.pc = 0x002418C0u; return; } if (c.pc != 0x00241FB8u) [[unlikely]] return; }
L_00241FB8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[30].d[0] = 0ull + 0ull;  if (t) { goto L_00242530; } }
    set32(c.r[16], c.r[29].w[0] + 384u);
    set32(c.r[21], c.r[29].w[0] + 236u);
    set32(c.r[22], c.r[29].w[0] + 252u);
    c.budget -= 3;
L_00241FD8:
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241FE4u); set32(c.r[5], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00241FE4u) [[unlikely]] return; }
L_00241FE4:
    c.f[0] = ld32((c.r[20].w[0] + 44u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.f[12] = 0u;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0] + 492u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242008u); st32((c.r[2].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 281u, depth + 1u); else { c.pc = 0x00102E28u; return; } if (c.pc != 0x00242008u) [[unlikely]] return; }
L_00242008:
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242014u); set32(c.r[5], c.r[29].w[0] + 480u);  if (depth < kMaxDepth) unit_0000(c, 256u, depth + 1u); else { c.pc = 0x00102938u; return; } if (c.pc != 0x00242014u) [[unlikely]] return; }
L_00242014:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242020u); set32(c.r[5], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242020u) [[unlikely]] return; }
L_00242020:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024202Cu); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0024202Cu) [[unlikely]] return; }
L_0024202C:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242038u); set32(c.r[5], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242038u) [[unlikely]] return; }
L_00242038:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242044u); set32(c.r[5], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242044u) [[unlikely]] return; }
L_00242044:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242050u); set32(c.r[5], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242050u) [[unlikely]] return; }
L_00242050:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024205Cu); set32(c.r[5], c.r[20].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0024205Cu) [[unlikely]] return; }
L_0024205C:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242068u); set32(c.r[5], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242068u) [[unlikely]] return; }
L_00242068:
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242074u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242074u) [[unlikely]] return; }
L_00242074:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242080u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242080u) [[unlikely]] return; }
L_00242080:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024208Cu); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0024208Cu) [[unlikely]] return; }
L_0024208C:
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242098u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242098u) [[unlikely]] return; }
L_00242098:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[29].w[0] + 492u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002420B4u); set32(c.r[6], c.r[29].w[0] + 480u);  if (depth < kMaxDepth) unit_0000(c, 212u, depth + 1u); else { c.pc = 0x00102100u; return; } if (c.pc != 0x002420B4u) [[unlikely]] return; }
L_002420B4:
    set32(c.r[2], c.r[29].w[0] + 396u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002420E4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0000(c, 243u, depth + 1u); else { c.pc = 0x00102748u; return; } if (c.pc != 0x002420E4u) [[unlikely]] return; }
L_002420E4:
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002420F0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 253u, depth + 1u); else { c.pc = 0x001028E8u; return; } if (c.pc != 0x002420F0u) [[unlikely]] return; }
L_002420F0:
    c.f[12] = c.f[20];
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242100u); set32(c.r[5], c.r[20].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 316u, depth + 1u); else { c.pc = 0x00103540u; return; } if (c.pc != 0x00242100u) [[unlikely]] return; }
L_00242100:
    set32(c.r[4], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024210Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0050(c, 229u, depth + 1u); else { c.pc = 0x00241AE0u; return; } if (c.pc != 0x0024210Cu) [[unlikely]] return; }
L_0024210C:
    set32(c.r[3], c.r[29].w[0] + 428u);
    set32(c.r[4], c.r[29].w[0] + 432u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], c.r[29].w[0] + 428u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024212Cu); st32((c.r[2].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 256u, depth + 1u); else { c.pc = 0x00102938u; return; } if (c.pc != 0x0024212Cu) [[unlikely]] return; }
L_0024212C:
    set32(c.r[2], c.r[29].w[0] + 444u);
    set32(c.r[4], c.r[29].w[0] + 480u);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242140u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242140u) [[unlikely]] return; }
L_00242140:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[29].w[0] + 492u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[6], c.r[29].w[0] + 480u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242160u); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 212u, depth + 1u); else { c.pc = 0x00102100u; return; } if (c.pc != 0x00242160u) [[unlikely]] return; }
L_00242160:
    c.r[2].d[0] = 0ull | 32768ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00242178; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 3u);  if (t) { goto L_002423F8; } }
    goto L_00242174;
L_00242170:
    set32(c.r[18], 0u + 3u);
    c.budget -= 1;
L_00242174:
    c.budget -= 1;
L_00242178:
    set32(c.r[2], c.r[29].w[0] + 220u);
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 216u);
    c.f[5] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[2] = c.f[0] ^ fp::kSign;  if (t) { goto L_00242288; } }
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00242288; } }
    c.f[1] = ld32((c.r[29].w[0] + 208u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00242288; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[29].w[0] + 212u);  if (t) { goto L_00242288; } }
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00242288; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[29].w[0] + 232u);  if (t) { goto L_00242288; } }
    c.f[3] = ld32((c.r[21].w[0]));
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[2] = c.f[3] ^ fp::kSign;  if (t) { goto L_00242288; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[29].w[0] + 224u);  if (t) { goto L_00242288; } }
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00242288; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[29].w[0] + 228u);  if (t) { goto L_00242288; } }
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00242288; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[29].w[0] + 248u);  if (t) { goto L_00242288; } }
    c.f[3] = ld32((c.r[22].w[0]));
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[2] = c.f[3] ^ fp::kSign;  if (t) { goto L_00242288; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[29].w[0] + 240u);  if (t) { goto L_00242288; } }
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[3]));
    c.budget -= 2;
L_00242258:
    c.budget -= 2;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00242288; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[29].w[0] + 244u);  if (t) { goto L_00242288; } }
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00242288; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002423F8; } }
L_00242288:
    c.f[4] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[4]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[18], 0u + 1u);  if (t) { goto L_002422D8; } }
    set32(c.r[2], c.r[29].w[0] + 232u);
    c.f[1] = ld32((c.r[21].w[0]));
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], c.r[29].w[0] + 248u);  if (t) { goto L_002422D8; } }
    c.f[1] = ld32((c.r[22].w[0]));
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002422D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 2u);  if (t) { goto L_002423F8; } }
    c.budget -= 1;
L_002422D8:
    set32(c.r[2], c.r[29].w[0] + 212u);
    c.f[3] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[4]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], c.r[29].w[0] + 228u);  if (t) { goto L_00242328; } }
    c.f[1] = ld32((c.r[21].w[0]));
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00242328; } }
    set32(c.r[2], c.r[29].w[0] + 244u);
    c.f[1] = ld32((c.r[22].w[0]));
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00242328; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 2u);  if (t) { goto L_002423F8; } }
L_00242328:
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[29].w[0] + 228u);  if (t) { goto L_00242368; } }
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[21].w[0]));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00242368; } }
    set32(c.r[2], c.r[29].w[0] + 244u);
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[22].w[0]));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00242368; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 2u);  if (t) { goto L_002423F8; } }
L_00242368:
    c.f[3] = ld32((c.r[29].w[0] + 208u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[4]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], c.r[29].w[0] + 224u);  if (t) { goto L_002423B8; } }
    c.f[1] = ld32((c.r[21].w[0]));
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002423B8; } }
    set32(c.r[2], c.r[29].w[0] + 240u);
    c.f[1] = ld32((c.r[22].w[0]));
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002423B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 2u);  if (t) { goto L_002423F8; } }
    c.budget -= 1;
L_002423B8:
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[29].w[0] + 224u);  if (t) { goto L_002423F8; } }
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = ld32((c.r[21].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002423F8; } }
    set32(c.r[2], c.r[29].w[0] + 240u);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = ld32((c.r[22].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002423F8; } }
    set32(c.r[18], 0u + 2u);
    c.budget -= 2;
L_002423F8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_00242410; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull | 32768ull;  if (t) { goto L_002424D0; } }
    c.budget -= 1;
L_00242410:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_00242470; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[5], c.r[29].w[0] + 304u);
    set32(c.r[6], c.r[29].w[0] + 256u);
    set32(c.r[7], c.r[29].w[0] + 208u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242434u); c.r[17].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0050(c, 317u, depth + 1u); else { c.pc = 0x00242B20u; return; } if (c.pc != 0x00242434u) [[unlikely]] return; }
L_00242434:
    set32(c.r[2], ld32((c.r[28].w[0] - 23932u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002424D0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 192u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[6], c.r[6].w[0] + 14016u);
    set32(c.r[8], ld32((c.r[29].w[0] + 180u)));
    c.r[7].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242464u); set32(c.r[9], 0u + 2u);  if (depth < kMaxDepth) unit_0050(c, 378u, depth + 1u); else { c.pc = 0x002433A0u; return; } if (c.pc != 0x00242464u) [[unlikely]] return; }
L_00242464:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002424D0; } }
    c.budget -= 1;
L_00242470:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 480u);  if (t) { goto L_002424D0; } }
    set32(c.r[5], c.r[29].w[0] + 368u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242484u); set32(c.r[6], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_0000(c, 239u, depth + 1u); else { c.pc = 0x00102678u; return; } if (c.pc != 0x00242484u) [[unlikely]] return; }
L_00242484:
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242494u); set32(c.r[6], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_0000(c, 239u, depth + 1u); else { c.pc = 0x00102678u; return; } if (c.pc != 0x00242494u) [[unlikely]] return; }
L_00242494:
    set32(c.r[4], c.r[29].w[0] + 480u);
    set32(c.r[5], c.r[29].w[0] + 464u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002424A4u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 218u, depth + 1u); else { c.pc = 0x00102210u; return; } if (c.pc != 0x002424A4u) [[unlikely]] return; }
L_002424A4:
    set32(c.r[2], c.r[29].w[0] + 488u);
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[20].w[0] + 28u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002424D0; } }
    c.r[17].d[0] = 0ull | 32768ull;
    c.budget -= 2;
L_002424D0:
    set32(c.r[2], c.r[29].w[0] + 428u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = c.r[2].d[0] | c.r[17].d[0];
    set32(c.r[2], c.r[29].w[0] + 428u);
    c.budget -= 7;
    { const bool t = c.r[18].d[0] == c.r[3].d[0]; st32((c.r[2].w[0]), c.r[4].w[0]);  if (t) { goto L_002424F0; } }
    set32(c.r[23], c.r[23].w[0] + 496u);
    c.budget -= 1;
L_002424F0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002424FCu); set32(c.r[5], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002424FCu) [[unlikely]] return; }
L_002424FC:
    set32(c.r[4], c.r[19].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242508u); set32(c.r[5], c.r[29].w[0] + 400u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242508u) [[unlikely]] return; }
L_00242508:
    set32(c.r[4], c.r[19].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242514u); set32(c.r[5], c.r[29].w[0] + 416u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242514u) [[unlikely]] return; }
L_00242514:
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[30], c.r[30].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 48u);
    c.r[2].d[0] = c.r[30].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241FD8u | kUnwind; return; } goto L_00241FD8; } }
    c.budget -= 1;
L_00242530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242538u); set32(c.r[4], ld32((c.r[29].w[0] + 176u)));  if (depth < kMaxDepth) unit_006B(c, 151u, depth + 1u); else { c.pc = 0x002ADB60u; return; } if (c.pc != 0x00242538u) [[unlikely]] return; }
L_00242538:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 496u);  c.pc = t; return; }
L_00242570:
    set32(c.r[29], c.r[29].w[0] - 480u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[29].w[0] + 180u), c.r[11].w[0]);
    st32((c.r[29].w[0] + 188u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 184u), c.r[10].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 184u)));
    st32((c.r[29].w[0] + 192u), c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 180u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002425D8u); st32((c.r[29].w[0] + 176u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0050(c, 223u, depth + 1u); else { c.pc = 0x002418C0u; return; } if (c.pc != 0x002425D8u) [[unlikely]] return; }
L_002425D8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[30].d[0] = 0ull + 0ull;  if (t) { goto L_00242AE0; } }
    set32(c.r[21], c.r[29].w[0] + 236u);
    set32(c.r[22], c.r[29].w[0] + 252u);
    c.budget -= 3;
L_002425F8:
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242604u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242604u) [[unlikely]] return; }
L_00242604:
    c.f[0] = ld32((c.r[20].w[0] + 572u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.f[12] = 0u;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0] + 476u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242628u); st32((c.r[2].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 281u, depth + 1u); else { c.pc = 0x00102E28u; return; } if (c.pc != 0x00242628u) [[unlikely]] return; }
L_00242628:
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242634u); set32(c.r[5], c.r[29].w[0] + 464u);  if (depth < kMaxDepth) unit_0000(c, 256u, depth + 1u); else { c.pc = 0x00102938u; return; } if (c.pc != 0x00242634u) [[unlikely]] return; }
L_00242634:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242640u); set32(c.r[5], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242640u) [[unlikely]] return; }
L_00242640:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024264Cu); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0024264Cu) [[unlikely]] return; }
L_0024264C:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242658u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242658u) [[unlikely]] return; }
L_00242658:
    c.f[0] = ld32((c.r[20].w[0] + 572u));
    set32(c.r[2], c.r[29].w[0] + 348u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], c.r[29].w[0] + 272u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242670u); st32((c.r[2].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242670u) [[unlikely]] return; }
L_00242670:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024267Cu); set32(c.r[5], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0024267Cu) [[unlikely]] return; }
L_0024267C:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242688u); set32(c.r[5], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242688u) [[unlikely]] return; }
L_00242688:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242694u); set32(c.r[5], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242694u) [[unlikely]] return; }
L_00242694:
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002426A0u); set32(c.r[5], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002426A0u) [[unlikely]] return; }
L_002426A0:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002426ACu); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002426ACu) [[unlikely]] return; }
L_002426AC:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002426B8u); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002426B8u) [[unlikely]] return; }
L_002426B8:
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002426C4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002426C4u) [[unlikely]] return; }
L_002426C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[29].w[0] + 476u);
    set32(c.r[4], c.r[29].w[0] + 384u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002426E0u); set32(c.r[6], c.r[29].w[0] + 464u);  if (depth < kMaxDepth) unit_0000(c, 212u, depth + 1u); else { c.pc = 0x00102100u; return; } if (c.pc != 0x002426E0u) [[unlikely]] return; }
L_002426E0:
    set32(c.r[2], c.r[29].w[0] + 396u);
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242710u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0000(c, 243u, depth + 1u); else { c.pc = 0x00102748u; return; } if (c.pc != 0x00242710u) [[unlikely]] return; }
L_00242710:
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024271Cu); set32(c.r[5], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_0000(c, 253u, depth + 1u); else { c.pc = 0x001028E8u; return; } if (c.pc != 0x0024271Cu) [[unlikely]] return; }
L_0024271C:
    c.f[12] = c.f[20];
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024272Cu); set32(c.r[5], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 316u, depth + 1u); else { c.pc = 0x00103540u; return; } if (c.pc != 0x0024272Cu) [[unlikely]] return; }
L_0024272C:
    set32(c.r[2], c.r[29].w[0] + 428u);
    set32(c.r[4], c.r[29].w[0] + 432u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[3].d[0] = c.r[2].d[0] | 4080ull;
    set32(c.r[2], c.r[29].w[0] + 428u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024274Cu); st32((c.r[2].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 256u, depth + 1u); else { c.pc = 0x00102938u; return; } if (c.pc != 0x0024274Cu) [[unlikely]] return; }
L_0024274C:
    set32(c.r[2], c.r[29].w[0] + 444u);
    set32(c.r[4], c.r[29].w[0] + 464u);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242760u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242760u) [[unlikely]] return; }
L_00242760:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[29].w[0] + 476u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[20].w[0] + 64u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024277Cu); set32(c.r[6], c.r[29].w[0] + 464u);  if (depth < kMaxDepth) unit_0000(c, 212u, depth + 1u); else { c.pc = 0x00102100u; return; } if (c.pc != 0x0024277Cu) [[unlikely]] return; }
L_0024277C:
    c.r[2].d[0] = 0ull | 32768ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00242790; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 3u);  if (t) { goto L_00242A10; } }
L_00242790:
    set32(c.r[2], c.r[29].w[0] + 220u);
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 216u);
    c.f[5] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[2] = c.f[0] ^ fp::kSign;  if (t) { goto L_002428A0; } }
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002428A0; } }
    c.f[1] = ld32((c.r[29].w[0] + 208u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002428A0; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[29].w[0] + 212u);  if (t) { goto L_002428A0; } }
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002428A0; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[29].w[0] + 232u);  if (t) { goto L_002428A0; } }
    c.f[3] = ld32((c.r[21].w[0]));
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[2] = c.f[3] ^ fp::kSign;  if (t) { goto L_002428A0; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[29].w[0] + 224u);  if (t) { goto L_002428A0; } }
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002428A0; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[29].w[0] + 228u);  if (t) { goto L_002428A0; } }
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002428A0; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[29].w[0] + 248u);  if (t) { goto L_002428A0; } }
    c.f[3] = ld32((c.r[22].w[0]));
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[2] = c.f[3] ^ fp::kSign;  if (t) { goto L_002428A0; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[29].w[0] + 240u);  if (t) { goto L_002428A0; } }
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002428A0; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[29].w[0] + 244u);  if (t) { goto L_002428A0; } }
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002428A0; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00242A10; } }
L_002428A0:
    c.f[4] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[4]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[17], 0u + 1u);  if (t) { goto L_002428F0; } }
    set32(c.r[2], c.r[29].w[0] + 232u);
    c.f[1] = ld32((c.r[21].w[0]));
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], c.r[29].w[0] + 248u);  if (t) { goto L_002428F0; } }
    c.f[1] = ld32((c.r[22].w[0]));
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002428F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 2u);  if (t) { goto L_00242A10; } }
    c.budget -= 1;
L_002428F0:
    set32(c.r[2], c.r[29].w[0] + 212u);
    c.f[3] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[4]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], c.r[29].w[0] + 228u);  if (t) { goto L_00242940; } }
    c.f[1] = ld32((c.r[21].w[0]));
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00242940; } }
    set32(c.r[2], c.r[29].w[0] + 244u);
    c.f[1] = ld32((c.r[22].w[0]));
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00242940; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 2u);  if (t) { goto L_00242A10; } }
L_00242940:
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[29].w[0] + 228u);  if (t) { goto L_00242980; } }
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[21].w[0]));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00242980; } }
    set32(c.r[2], c.r[29].w[0] + 244u);
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[22].w[0]));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00242980; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 2u);  if (t) { goto L_00242A10; } }
L_00242980:
    c.f[3] = ld32((c.r[29].w[0] + 208u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[4]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], c.r[29].w[0] + 224u);  if (t) { goto L_002429D0; } }
    c.f[1] = ld32((c.r[21].w[0]));
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002429D0; } }
    set32(c.r[2], c.r[29].w[0] + 240u);
    c.f[1] = ld32((c.r[22].w[0]));
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002429D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 2u);  if (t) { goto L_00242A10; } }
    c.budget -= 1;
L_002429D0:
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[29].w[0] + 224u);  if (t) { goto L_00242A10; } }
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = ld32((c.r[21].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00242A10; } }
    set32(c.r[2], c.r[29].w[0] + 240u);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = ld32((c.r[22].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00242A10; } }
    set32(c.r[17], 0u + 2u);
    c.budget -= 2;
L_00242A10:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00242A28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull | 32768ull;  if (t) { goto L_00242A80; } }
    c.budget -= 1;
L_00242A28:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00242A80; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[5], c.r[29].w[0] + 304u);
    set32(c.r[6], c.r[29].w[0] + 256u);
    set32(c.r[7], c.r[29].w[0] + 208u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242A4Cu); c.r[16].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0050(c, 317u, depth + 1u); else { c.pc = 0x00242B20u; return; } if (c.pc != 0x00242A4Cu) [[unlikely]] return; }
L_00242A4C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23932u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00242A80; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 192u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[6], c.r[6].w[0] + 14016u);
    set32(c.r[8], ld32((c.r[29].w[0] + 180u)));
    c.r[7].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242A7Cu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0050(c, 378u, depth + 1u); else { c.pc = 0x002433A0u; return; } if (c.pc != 0x00242A7Cu) [[unlikely]] return; }
L_00242A7C:
    c.budget -= 1;
L_00242A80:
    set32(c.r[2], c.r[29].w[0] + 428u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = c.r[2].d[0] | c.r[16].d[0];
    set32(c.r[2], c.r[29].w[0] + 428u);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; st32((c.r[2].w[0]), c.r[4].w[0]);  if (t) { goto L_00242AA0; } }
    set32(c.r[23], c.r[23].w[0] + 496u);
    c.budget -= 1;
L_00242AA0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242AACu); set32(c.r[5], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242AACu) [[unlikely]] return; }
L_00242AAC:
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242AB8u); set32(c.r[5], c.r[29].w[0] + 400u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242AB8u) [[unlikely]] return; }
L_00242AB8:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242AC4u); set32(c.r[5], c.r[29].w[0] + 416u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242AC4u) [[unlikely]] return; }
L_00242AC4:
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[30], c.r[30].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 48u);
    c.r[2].d[0] = c.r[30].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002425F8u | kUnwind; return; } goto L_002425F8; } }
    c.budget -= 1;
L_00242AE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242AE8u); set32(c.r[4], ld32((c.r[29].w[0] + 176u)));  if (depth < kMaxDepth) unit_006B(c, 151u, depth + 1u); else { c.pc = 0x002ADB60u; return; } if (c.pc != 0x00242AE8u) [[unlikely]] return; }
L_00242AE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 480u);  c.pc = t; return; }
L_00242B20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 12720u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242B50u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242B50u) [[unlikely]] return; }
L_00242B50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242B60u); set32(c.r[4], c.r[4].w[0] + 12768u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242B60u) [[unlikely]] return; }
L_00242B60:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242B70u); set32(c.r[4], c.r[4].w[0] + 12816u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242B70u) [[unlikely]] return; }
L_00242B70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242B80u); set32(c.r[4], c.r[4].w[0] + 12864u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242B80u) [[unlikely]] return; }
L_00242B80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242B90u); set32(c.r[4], c.r[4].w[0] + 12736u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242B90u) [[unlikely]] return; }
L_00242B90:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242BA0u); set32(c.r[4], c.r[4].w[0] + 12784u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242BA0u) [[unlikely]] return; }
L_00242BA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242BB0u); set32(c.r[4], c.r[4].w[0] + 12832u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242BB0u) [[unlikely]] return; }
L_00242BB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242BC0u); set32(c.r[4], c.r[4].w[0] + 12880u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242BC0u) [[unlikely]] return; }
L_00242BC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242BD0u); set32(c.r[4], c.r[4].w[0] + 12752u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242BD0u) [[unlikely]] return; }
L_00242BD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242BE0u); set32(c.r[4], c.r[4].w[0] + 12800u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242BE0u) [[unlikely]] return; }
L_00242BE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242BF0u); set32(c.r[4], c.r[4].w[0] + 12848u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242BF0u) [[unlikely]] return; }
L_00242BF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242C00u); set32(c.r[4], c.r[4].w[0] + 12896u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242C00u) [[unlikely]] return; }
L_00242C00:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[28].w[0] - 23932u), 0u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] + 12720u);
    c.budget -= 4;
L_00242C10:
    set32(c.r[5], ld32((c.r[28].w[0] - 23932u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 12720u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242C40u); set32(c.r[5], c.r[2].w[0] + 1296u);  if (depth < kMaxDepth) unit_0050(c, 352u, depth + 1u); else { c.pc = 0x00243030u; return; } if (c.pc != 0x00242C40u) [[unlikely]] return; }
L_00242C40:
    set32(c.r[4], ld32((c.r[28].w[0] - 23932u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[16], c.r[16].w[0] + 48u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 23932u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242C10u | kUnwind; return; } goto L_00242C10; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23932u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], c.r[2].w[0] + 12720u);
    set32(c.r[5], c.r[5].w[0] + 14016u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242C88u); set32(c.r[4], c.r[2].w[0] + 1296u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242C88u) [[unlikely]] return; }
L_00242C88:
    set32(c.r[4], ld32((c.r[28].w[0] - 23932u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], c.r[2].w[0] + 12720u);
    set32(c.r[5], c.r[5].w[0] + 14032u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242CB8u); set32(c.r[4], c.r[2].w[0] + 1296u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242CB8u) [[unlikely]] return; }
L_00242CB8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23932u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], c.r[2].w[0] + 12720u);
    set32(c.r[5], c.r[5].w[0] + 14048u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 2u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242CE8u); set32(c.r[4], c.r[2].w[0] + 1296u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242CE8u) [[unlikely]] return; }
L_00242CE8:
    set32(c.r[18], ld32((c.r[28].w[0] - 23932u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.r[1].d[0] = 0ll < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[28].w[0] - 23932u), 0u);  if (t) { goto L_00242D50; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[17], c.r[17].w[0] + 12720u);
    c.budget -= 3;
L_00242D08:
    set32(c.r[5], ld32((c.r[28].w[0] - 23932u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], c.r[17].w[0] + 1296u);
    set32(c.r[2], c.r[2].w[0] + 12720u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242D34u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0050(c, 352u, depth + 1u); else { c.pc = 0x00243030u; return; } if (c.pc != 0x00242D34u) [[unlikely]] return; }
L_00242D34:
    set32(c.r[4], ld32((c.r[28].w[0] - 23932u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 48u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 23932u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242D08u | kUnwind; return; } goto L_00242D08; } }
L_00242D50:
    set32(c.r[3], ld32((c.r[28].w[0] - 23932u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], c.r[5].w[0] + 12720u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242D70u); set32(c.r[4], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242D70u) [[unlikely]] return; }
L_00242D70:
    set32(c.r[4], ld32((c.r[28].w[0] - 23932u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], c.r[2].w[0] + 12720u);
    set32(c.r[5], c.r[5].w[0] + 12736u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242D9Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242D9Cu) [[unlikely]] return; }
L_00242D9C:
    set32(c.r[4], ld32((c.r[28].w[0] - 23932u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], c.r[2].w[0] + 12720u);
    set32(c.r[5], c.r[5].w[0] + 12752u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 2u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242DC8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242DC8u) [[unlikely]] return; }
L_00242DC8:
    set32(c.r[17], ld32((c.r[28].w[0] - 23932u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.r[1].d[0] = 0ll < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[28].w[0] - 23932u), 0u);  if (t) { goto L_00242E38; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[18], c.r[18].w[0] + 12720u);
    c.budget -= 3;
L_00242DE8:
    set32(c.r[5], ld32((c.r[28].w[0] - 23932u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 12720u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242E18u); set32(c.r[5], c.r[2].w[0] + 1296u);  if (depth < kMaxDepth) unit_0050(c, 352u, depth + 1u); else { c.pc = 0x00243030u; return; } if (c.pc != 0x00242E18u) [[unlikely]] return; }
L_00242E18:
    set32(c.r[4], ld32((c.r[28].w[0] - 23932u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 48u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 23932u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242DE8u | kUnwind; return; } goto L_00242DE8; } }
    c.budget -= 1;
L_00242E38:
    set32(c.r[4], ld32((c.r[28].w[0] - 23932u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], c.r[2].w[0] + 12720u);
    set32(c.r[5], c.r[5].w[0] + 14016u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242E64u); set32(c.r[4], c.r[2].w[0] + 1296u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242E64u) [[unlikely]] return; }
L_00242E64:
    set32(c.r[4], ld32((c.r[28].w[0] - 23932u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], c.r[2].w[0] + 12720u);
    set32(c.r[5], c.r[5].w[0] + 14032u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242E94u); set32(c.r[4], c.r[2].w[0] + 1296u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242E94u) [[unlikely]] return; }
L_00242E94:
    set32(c.r[4], ld32((c.r[28].w[0] - 23932u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], c.r[2].w[0] + 12720u);
    set32(c.r[5], c.r[5].w[0] + 14048u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 2u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242EC4u); set32(c.r[4], c.r[2].w[0] + 1296u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242EC4u) [[unlikely]] return; }
L_00242EC4:
    set32(c.r[17], ld32((c.r[28].w[0] - 23932u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.r[1].d[0] = 0ll < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[28].w[0] - 23932u), 0u);  if (t) { goto L_00242F28; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[18], c.r[18].w[0] + 12720u);
    c.budget -= 2;
L_00242EE0:
    set32(c.r[5], ld32((c.r[28].w[0] - 23932u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 12720u);
    set32(c.r[4], c.r[18].w[0] + 1296u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242F0Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0050(c, 352u, depth + 1u); else { c.pc = 0x00243030u; return; } if (c.pc != 0x00242F0Cu) [[unlikely]] return; }
L_00242F0C:
    set32(c.r[4], ld32((c.r[28].w[0] - 23932u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 48u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 23932u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242EE0u | kUnwind; return; } goto L_00242EE0; } }
L_00242F28:
    set32(c.r[3], ld32((c.r[28].w[0] - 23932u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], c.r[5].w[0] + 12720u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242F48u); set32(c.r[4], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242F48u) [[unlikely]] return; }
L_00242F48:
    set32(c.r[4], ld32((c.r[28].w[0] - 23932u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], c.r[2].w[0] + 12720u);
    set32(c.r[5], c.r[5].w[0] + 12736u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242F74u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242F74u) [[unlikely]] return; }
L_00242F74:
    set32(c.r[4], ld32((c.r[28].w[0] - 23932u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], c.r[2].w[0] + 12720u);
    set32(c.r[5], c.r[5].w[0] + 12752u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 2u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242FA0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00242FA0u) [[unlikely]] return; }
L_00242FA0:
    set32(c.r[17], ld32((c.r[28].w[0] - 23932u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.r[1].d[0] = 0ll < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[28].w[0] - 23932u), 0u);  if (t) { goto L_00243010; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[18], c.r[18].w[0] + 12720u);
    c.budget -= 3;
L_00242FC0:
    set32(c.r[5], ld32((c.r[28].w[0] - 23932u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 12720u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242FF0u); set32(c.r[5], c.r[2].w[0] + 1296u);  if (depth < kMaxDepth) unit_0050(c, 352u, depth + 1u); else { c.pc = 0x00243030u; return; } if (c.pc != 0x00242FF0u) [[unlikely]] return; }
L_00242FF0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23932u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 48u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 23932u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242FC0u | kUnwind; return; } goto L_00242FC0; } }
    c.budget -= 1;
L_00243010:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00243030:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[7].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00243098; } }
    set32(c.r[4], c.r[8].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00243078; } }
    c.r[5].d[0] = c.r[5].d[0] | 1ull;
    c.budget -= 2;
L_00243078:
    set32(c.r[3], c.r[4].w[0] + c.r[17].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 48u));
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002430E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] | 2ull;  if (t) { goto L_002430E0; } }
L_00243098:
    set32(c.r[4], c.r[8].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002430C0; } }
    c.r[5].d[0] = c.r[5].d[0] | 1ull;
    c.budget -= 2;
L_002430C0:
    set32(c.r[3], c.r[4].w[0] + c.r[17].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    c.f[1] = ld32((c.r[3].w[0] + 48u));
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002430E0; } }
    c.r[5].d[0] = c.r[5].d[0] | 2ull;
    c.budget -= 1;
L_002430E0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_002431B8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00243158; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_00243118; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00243110; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002431E0; } }
    c.budget -= 1;
L_00243110:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002431E0; } }
L_00243118:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243128u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0050(c, 367u, depth + 1u); else { c.pc = 0x00243200u; return; } if (c.pc != 0x00243128u) [[unlikely]] return; }
L_00243128:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243134u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00243134u) [[unlikely]] return; }
L_00243134:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243140u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00243140u) [[unlikely]] return; }
L_00243140:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024314Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0024314Cu) [[unlikely]] return; }
L_0024314C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002431E0; } }
    c.budget -= 1;
L_00243158:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243168u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0050(c, 367u, depth + 1u); else { c.pc = 0x00243200u; return; } if (c.pc != 0x00243168u) [[unlikely]] return; }
L_00243168:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243174u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00243174u) [[unlikely]] return; }
L_00243174:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243180u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00243180u) [[unlikely]] return; }
L_00243180:
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024318Cu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0024318Cu) [[unlikely]] return; }
L_0024318C:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243198u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00243198u) [[unlikely]] return; }
L_00243198:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002431A4u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002431A4u) [[unlikely]] return; }
L_002431A4:
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002431B0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002431B0u) [[unlikely]] return; }
L_002431B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002431E0; } }
L_002431B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002431C4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002431C4u) [[unlikely]] return; }
L_002431C4:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002431D0u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002431D0u) [[unlikely]] return; }
L_002431D0:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002431DCu); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002431DCu) [[unlikely]] return; }
L_002431DC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002431E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00243200:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 12;
    { const bool t = c.r[7].d[0] != 0ull; c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_00243240; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00243248; } }
L_00243240:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[3] = c.r[2].w[0];
    c.budget -= 2;
L_00243248:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[19].w[0] + 12u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[1] = ld32((c.r[18].w[0] + 12u));
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.f[0] = ld32((c.r[19].w[0]));
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.f[20] = fp::mul(c.f[2], c.f[3]);
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002432BCu); st32((c.r[29].w[0] + 120u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 239u, depth + 1u); else { c.pc = 0x00102678u; return; } if (c.pc != 0x002432BCu) [[unlikely]] return; }
L_002432BC:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 128u));
    c.f[0] = ld32((c.r[2].w[0] + 96u));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    vu::abs(c.vu0, 8u, 4u, 4u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[20] = ld32((c.r[29].w[0] + 112u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002432F8u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 239u, depth + 1u); else { c.pc = 0x00102678u; return; } if (c.pc != 0x002432F8u) [[unlikely]] return; }
L_002432F8:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243308u); set32(c.r[6], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 239u, depth + 1u); else { c.pc = 0x00102678u; return; } if (c.pc != 0x00243308u) [[unlikely]] return; }
L_00243308:
    set32(c.r[5], c.r[18].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243318u); set32(c.r[6], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 239u, depth + 1u); else { c.pc = 0x00102678u; return; } if (c.pc != 0x00243318u) [[unlikely]] return; }
L_00243318:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243328u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 243u, depth + 1u); else { c.pc = 0x00102748u; return; } if (c.pc != 0x00243328u) [[unlikely]] return; }
L_00243328:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243338u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 243u, depth + 1u); else { c.pc = 0x00102748u; return; } if (c.pc != 0x00243338u) [[unlikely]] return; }
L_00243338:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243348u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 243u, depth + 1u); else { c.pc = 0x00102748u; return; } if (c.pc != 0x00243348u) [[unlikely]] return; }
L_00243348:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243358u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 236u, depth + 1u); else { c.pc = 0x00102610u; return; } if (c.pc != 0x00243358u) [[unlikely]] return; }
L_00243358:
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243368u); set32(c.r[6], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 236u, depth + 1u); else { c.pc = 0x00102610u; return; } if (c.pc != 0x00243368u) [[unlikely]] return; }
L_00243368:
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[6], c.r[19].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243378u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0000(c, 236u, depth + 1u); else { c.pc = 0x00102610u; return; } if (c.pc != 0x00243378u) [[unlikely]] return; }
L_00243378:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002433A0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 23932u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[22].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243408u); set32(c.r[5], c.r[2].w[0] + 6u);  if (depth < kMaxDepth) unit_0009(c, 51u, depth + 1u); else { c.pc = 0x00124F90u; return; } if (c.pc != 0x00243408u) [[unlikely]] return; }
L_00243408:
    set32(c.r[3], ld32((c.r[28].w[0] - 23932u)));
    set32(c.r[4], c.r[18].w[0] + 16u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243420u); set32(c.r[5], c.r[2].w[0] + 5u);  if (depth < kMaxDepth) unit_0009(c, 52u, depth + 1u); else { c.pc = 0x00124FF0u; return; } if (c.pc != 0x00243420u) [[unlikely]] return; }
L_00243420:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[2], 0u + 14u);
    st64((c.r[18].w[0] + 32u), c.r[3].d[0]);
    st64((c.r[18].w[0] + 40u), c.r[2].d[0]);
    c.budget -= 9;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 48u);  if (t) { goto L_00243450; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st64((c.r[18].w[0]), c.r[2].d[0]);  if (t) { goto L_00243458; } }
L_00243450:
    st64((c.r[18].w[0]), 0ull);
    c.budget -= 2;
L_00243458:
    set32(c.r[2], 0u + 8u);
    st64((c.r[18].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243468u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));  if (depth < kMaxDepth) unit_000B(c, 91u, depth + 1u); else { c.pc = 0x0012DBA0u; return; } if (c.pc != 0x00243468u) [[unlikely]] return; }
L_00243468:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243474u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 91u, depth + 1u); else { c.pc = 0x0012DBA0u; return; } if (c.pc != 0x00243474u) [[unlikely]] return; }
L_00243474:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00243508; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024348Cu);  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0012CF70u; return; } if (c.pc != 0x0024348Cu) [[unlikely]] return; }
L_0024348C:
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[4].d[0] = c.r[3].d[0] << 37;
    c.r[7].d[0] = c.r[2].d[0] << 26;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.r[2].d[0] = c.r[23].d[0] << 32;
    c.r[9].d[0] = c.r[9].d[0] << 14;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[8].d[0] = c.r[8].d[0] << 20;
    c.r[6].d[0] = c.r[2].d[0] << 30;
    c.r[9].d[0] = c.r[10].d[0] | c.r[9].d[0];
    set32(c.r[2], 0u + 4u);
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 51;
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 30;
    { const bool t = 0ull == 0ull; st64((c.r[18].w[0] + 16u), c.r[2].d[0]);  if (t) { goto L_00243578; } }
    c.budget -= 1;
L_00243508:
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[7].d[0] = c.r[2].d[0] << 26;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    c.r[2].d[0] = c.r[23].d[0] << 32;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[9].d[0] = c.r[9].d[0] << 14;
    c.r[6].d[0] = c.r[2].d[0] << 30;
    c.r[8].d[0] = c.r[8].d[0] << 20;
    set32(c.r[2], 0u + 4u);
    c.r[9].d[0] = c.r[10].d[0] | c.r[9].d[0];
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 37;
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 51;
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st64((c.r[18].w[0] + 16u), c.r[2].d[0]);
    c.budget -= 28;
L_00243578:
    set32(c.r[2], 0u + 6u);
    st64((c.r[18].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[3], 0u + 66u);
    set32(c.r[2], 0u + 68u);
    set32(c.r[18], c.r[18].w[0] + 32u);
    st64((c.r[18].w[0]), c.r[2].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[18].w[0] + 8u), c.r[3].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x303E0000u);
    set32(c.r[5], ld32((c.r[28].w[0] - 23932u)));
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[2], 0u + 1042u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    st64((c.r[18].w[0] + 16u), c.r[3].d[0]);
    st64((c.r[18].w[0] + 24u), c.r[2].d[0]);
    c.budget -= 21;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[18], c.r[18].w[0] + 32u);  if (t) { goto L_002436B8; } }
    set32(c.r[23], c.r[29].w[0] + 188u);
    set32(c.r[16], c.r[29].w[0] + 220u);
    c.budget -= 3;
L_002435D8:
    set32(c.r[5], ld32((c.r[28].w[0] - 23776u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002435E8u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 212u, depth + 1u); else { c.pc = 0x00102100u; return; } if (c.pc != 0x002435E8u) [[unlikely]] return; }
L_002435E8:
    c.f[0] = ld32((c.r[23].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243610u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0000(c, 243u, depth + 1u); else { c.pc = 0x00102748u; return; } if (c.pc != 0x00243610u) [[unlikely]] return; }
L_00243610:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024361Cu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0000(c, 253u, depth + 1u); else { c.pc = 0x001028E8u; return; } if (c.pc != 0x0024361Cu) [[unlikely]] return; }
L_0024361C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[19].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024362Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0000(c, 316u, depth + 1u); else { c.pc = 0x00103540u; return; } if (c.pc != 0x0024362Cu) [[unlikely]] return; }
L_0024362C:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243638u); set32(c.r[5], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 256u, depth + 1u); else { c.pc = 0x00102938u; return; } if (c.pc != 0x00243638u) [[unlikely]] return; }
L_00243638:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[2].d[0];  if (t) { goto L_00243650; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00243668; } }
    c.budget -= 1;
L_00243650:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024365Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0050(c, 229u, depth + 1u); else { c.pc = 0x00241AE0u; return; } if (c.pc != 0x0024365Cu) [[unlikely]] return; }
L_0024365C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00243678; } }
    c.budget -= 1;
L_00243668:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 4080ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_00243678:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243684u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00243684u) [[unlikely]] return; }
L_00243684:
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243690u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00243690u) [[unlikely]] return; }
L_00243690:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024369Cu); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0024369Cu) [[unlikely]] return; }
L_0024369C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23932u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 48u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002435D8u | kUnwind; return; } goto L_002435D8; } }
    c.budget -= 1;
L_002436B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002436C0u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 151u, depth + 1u); else { c.pc = 0x002ADB60u; return; } if (c.pc != 0x002436C0u) [[unlikely]] return; }
L_002436C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_002436F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23776u)));
    set32(c.r[5], c.r[4].w[0] + 192u);
    set32(c.r[7], c.r[4].w[0] + 64u);
    set32(c.r[6], c.r[3].w[0] + 256u);
    set32(c.r[3], c.r[3].w[0] + 320u);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[8]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[9]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[10]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[6].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[6].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[9].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[9].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[9].w[2]);
    vu::maddbc(c.vu0, 15u, 13u, 7u, c.vu0.vf[9].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[10].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[10].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[10].w[2]);
    vu::maddbc(c.vu0, 15u, 14u, 7u, c.vu0.vf[10].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[11].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[11].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[11].w[2]);
    vu::maddbc(c.vu0, 15u, 15u, 7u, c.vu0.vf[11].w[3]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[12]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[13]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[14]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[15]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[9].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[9].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[9].w[2]);
    vu::maddbc(c.vu0, 15u, 13u, 7u, c.vu0.vf[9].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[10].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[10].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[10].w[2]);
    vu::maddbc(c.vu0, 15u, 14u, 7u, c.vu0.vf[10].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[11].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[11].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[11].w[2]);
    vu::maddbc(c.vu0, 15u, 15u, 7u, c.vu0.vf[11].w[3]);
    st128((c.r[7].w[0]) & ~15u, c.vu0.vf[12]);
    st128((c.r[7].w[0] + 16u) & ~15u, c.vu0.vf[13]);
    st128((c.r[7].w[0] + 32u) & ~15u, c.vu0.vf[14]);
    c.budget -= 58;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[7].w[0] + 48u) & ~15u, c.vu0.vf[15]);  c.pc = t; return; }
L_002437E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    set32(c.r[2], c.r[2].w[0] + 384u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 15u, 6u, 5u, 4u);
    vu::mul(c.vu0, 14u, 7u, 6u, 6u);
    vu::addbc(c.vu0, 8u, 7u, 7u, c.vu0.vf[7].w[1]);
    vu::addbc(c.vu0, 8u, 7u, 7u, c.vu0.vf[7].w[2]);
    c.r[8] = c.vu0.vf[7];
    c.f[0] = c.r[8].w[0];
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00243810:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 24528u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024382Cu); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0024382Cu) [[unlikely]] return; }
L_0024382C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st8((c.r[1].w[0] + 24530u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st8((c.r[2].w[0] + 54u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 24530u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024384Cu); c.r[4].d[0] = c.r[2].d[0] | 128ull;  if (depth < kMaxDepth) unit_0048(c, 80u, depth + 1u); else { c.pc = 0x00220EF0u; return; } if (c.pc != 0x0024384Cu) [[unlikely]] return; }
L_0024384C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243854u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00E70000u);  if (depth < kMaxDepth) unit_0050(c, 410u, depth + 1u); else { c.pc = 0x00243950u; return; } if (c.pc != 0x00243854u) [[unlikely]] return; }
L_00243854:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00243860:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00210000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 14480u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243878u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x00243878u) [[unlikely]] return; }
L_00243878:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243888u); set32(c.r[4], c.r[4].w[0] + 20928u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x00243888u) [[unlikely]] return; }
L_00243888:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243894u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 24530u)));  if (depth < kMaxDepth) unit_0048(c, 80u, depth + 1u); else { c.pc = 0x00220EF0u; return; } if (c.pc != 0x00243894u) [[unlikely]] return; }
L_00243894:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002438A4u); set32(c.r[4], c.r[4].w[0] + 20944u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002438A4u) [[unlikely]] return; }
L_002438A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00210000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002438B4u); set32(c.r[4], c.r[4].w[0] + 14496u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002438B4u) [[unlikely]] return; }
L_002438B4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002438C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 54u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 24528u);  if (t) { goto L_002438F8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002438ECu); st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0050(c, 415u, depth + 1u); else { c.pc = 0x00243AE0u; return; } if (c.pc != 0x002438ECu) [[unlikely]] return; }
L_002438EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00243930; } }
    c.budget -= 1;
L_002438F8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00243930; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 30u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243930u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));  if (depth < kMaxDepth) unit_0048(c, 80u, depth + 1u); else { c.pc = 0x00220EF0u; return; } if (c.pc != 0x00243930u) [[unlikely]] return; }
L_00243930:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00243950:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[21], c.r[4].w[0] + 2048u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[20], c.r[4].w[0] + 4u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[19], ld32((c.r[4].w[0])));
    c.r[1].d[0] = 0ll < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[17], 0u + 15744u);  if (t) { goto L_00243AA8; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[22], c.r[29].w[0] + 168u);
    set32(c.r[16], c.r[16].w[0] + 24400u);
    set32(c.r[23], c.r[29].w[0] + 172u);
    set32(c.r[30], c.r[29].w[0] + 174u);
    c.budget -= 6;
L_002439B0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002439BCu); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000A(c, 119u, depth + 1u); else { c.pc = 0x001295C0u; return; } if (c.pc != 0x002439BCu) [[unlikely]] return; }
L_002439BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00243A98; } }
    set32(c.r[2], 0u - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0])));
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[23].w[0])));
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[30].w[0])));
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 176u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243A08u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_000B(c, 71u, depth + 1u); else { c.pc = 0x0012D450u; return; } if (c.pc != 0x00243A08u) [[unlikely]] return; }
L_00243A08:
    st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 178u);
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 14u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[17], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] < 0; st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00243A88; } }
    set32(c.r[2], c.r[29].w[0] + 182u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 184u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[16].w[0] + 30u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 186u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[16].w[0] + 32u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 164u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 30u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 32u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243A6Cu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));  if (depth < kMaxDepth) unit_000B(c, 71u, depth + 1u); else { c.pc = 0x0012D450u; return; } if (c.pc != 0x00243A6Cu) [[unlikely]] return; }
L_00243A6C:
    st16((c.r[16].w[0] + 34u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 1u);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[17].w[0]));
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 34u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);
    c.budget -= 7;
L_00243A88:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[3].w[0] << 11);
    set32(c.r[20], c.r[20].w[0] + 4u);
    set32(c.r[21], c.r[21].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_00243A98:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002439B0u | kUnwind; return; } goto L_002439B0; } }
L_00243AA8:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_00243AE0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    set32(c.r[2], c.r[2].w[0] + 10640u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 20248u), 0u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[16], c.r[16].w[0] + 20224u);
    st32((c.r[1].w[0] + 20260u), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 10352u);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[17].w[0] + 10656u);
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[2].w[0]);
    c.budget -= 30;
L_00243B58:
    st32((c.r[16].w[0] + 20u), c.r[18].w[0]);
    c.r[1].d[0] = c.r[19].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[16].w[0] + 48u), c.r[17].w[0]);  if (t) { goto L_00243B78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], c.r[2].w[0] + 24400u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00243B88; } }
L_00243B78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], c.r[2].w[0] + 24464u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 4;
L_00243B88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243B90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 399u, depth + 1u); else { c.pc = 0x0029B1E0u; return; } if (c.pc != 0x00243B90u) [[unlikely]] return; }
L_00243B90:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 32u);
    c.r[2].d[0] = c.r[19].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243B58u | kUnwind; return; } goto L_00243B58; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 20248u), 0u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] + 10640u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20260u), c.r[2].w[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[16], c.r[16].w[0] + 20224u);
    c.r[23].d[0] = 0ull + 0ull;
    st32((c.r[1].w[0] + 20280u), c.r[2].w[0]);
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[20], 0u + 64u);
    set32(c.r[19], c.r[19].w[0] + 10736u);
    c.budget -= 19;
L_00243BF0:
    c.r[22].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], 0u + 64u);
    c.budget -= 4;
L_00243C00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 10608u), c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 10612u), c.r[21].w[0]);
    set32(c.r[3], c.r[3].w[0] + 10608u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 10720u);
    st32((c.r[1].w[0] + 10624u), c.r[17].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 10628u), c.r[20].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].d[0] = c.r[22].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;  if (t) { goto L_00243C60; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_00243C60; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == c.r[2].d[0];  if (t) { goto L_00243C60; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] != c.r[2].d[0];  if (t) { goto L_00243C68; } }
L_00243C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243C68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 399u, depth + 1u); else { c.pc = 0x0029B1E0u; return; } if (c.pc != 0x00243C68u) [[unlikely]] return; }
L_00243C68:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[2].d[0] = c.r[22].sd[0] < 10ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 64u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243C00u | kUnwind; return; } goto L_00243C00; } }
    set32(c.r[23], c.r[23].w[0] + 1u);
    set32(c.r[21], c.r[21].w[0] + 64u);
    c.r[2].d[0] = c.r[23].sd[0] < 7ll ? 1ull : 0ull;
    set32(c.r[20], c.r[20].w[0] + 64u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243BF0u | kUnwind; return; } goto L_00243BF0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243CA0u); set32(c.r[4], c.r[4].w[0] + 24400u);  if (depth < kMaxDepth) unit_000A(c, 227u, depth + 1u); else { c.pc = 0x0012B5F0u; return; } if (c.pc != 0x00243CA0u) [[unlikely]] return; }
L_00243CA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243CACu); set32(c.r[4], c.r[4].w[0] + 24464u);  if (depth < kMaxDepth) unit_000A(c, 227u, depth + 1u); else { c.pc = 0x0012B5F0u; return; } if (c.pc != 0x00243CACu) [[unlikely]] return; }
L_00243CAC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243CBCu); set32(c.r[4], c.r[4].w[0] - 16176u);  if (depth < kMaxDepth) unit_006B(c, 176u, depth + 1u); else { c.pc = 0x002AE5D0u; return; } if (c.pc != 0x00243CBCu) [[unlikely]] return; }
L_00243CBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00243CF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01CD0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[2].d[0] | 12288ull;
    set32(c.r[5], c.r[5].w[0] + 24368u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243D10u); set32(c.r[6], c.r[29].w[0] + 24u);  if (depth < kMaxDepth) unit_000A(c, 174u, depth + 1u); else { c.pc = 0x0012A2C0u; return; } if (c.pc != 0x00243D10u) [[unlikely]] return; }
L_00243D10:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00243D20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[2], c.r[2].w[0] + 10968u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[1].w[0] + 20248u), 0u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[16], c.r[16].w[0] + 20224u);
    st32((c.r[1].w[0] + 20260u), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 10768u);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[17].w[0] + 24368u);
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[2].w[0]);
    c.budget -= 26;
L_00243D88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 20u), c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] + 10960u);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243DA8u); st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0066(c, 399u, depth + 1u); else { c.pc = 0x0029B1E0u; return; } if (c.pc != 0x00243DA8u) [[unlikely]] return; }
L_00243DA8:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 32u);
    c.r[2].d[0] = c.r[19].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243D88u | kUnwind; return; } goto L_00243D88; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243DCCu); set32(c.r[4], c.r[4].w[0] - 16176u);  if (depth < kMaxDepth) unit_006B(c, 176u, depth + 1u); else { c.pc = 0x002AE5D0u; return; } if (c.pc != 0x00243DCCu) [[unlikely]] return; }
L_00243DCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00243DF0:
    set32(c.r[6], ld32((c.r[28].w[0] - 30372u)));
    set32(c.r[4], 0u + 13u);
    c.budget -= 4;
    { set32(c.r[5], 0u + 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001255F0u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 105u, depth); }
L_00243E00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243E14u); set32(c.r[4], c.r[4].w[0] + 17936u);  if (depth < kMaxDepth) unit_0006(c, 279u, depth + 1u); else { c.pc = 0x0011BDB8u; return; } if (c.pc != 0x00243E14u) [[unlikely]] return; }
L_00243E14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243E1Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 172u, depth + 1u); else { c.pc = 0x00285670u; return; } if (c.pc != 0x00243E1Cu) [[unlikely]] return; }
L_00243E1C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243E28u); set32(c.r[4], c.r[4].w[0] + 17968u);  if (depth < kMaxDepth) unit_0006(c, 279u, depth + 1u); else { c.pc = 0x0011BDB8u; return; } if (c.pc != 0x00243E28u) [[unlikely]] return; }
L_00243E28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243E30u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 154u, depth + 1u); else { c.pc = 0x002853C0u; return; } if (c.pc != 0x00243E30u) [[unlikely]] return; }
L_00243E30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243E3Cu); set32(c.r[4], c.r[4].w[0] + 18000u);  if (depth < kMaxDepth) unit_0006(c, 279u, depth + 1u); else { c.pc = 0x0011BDB8u; return; } if (c.pc != 0x00243E3Cu) [[unlikely]] return; }
L_00243E3C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 26240u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243E50u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00243E50u) [[unlikely]] return; }
L_00243E50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[3].w[0] + 18032u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[1].w[0] + 26240u), c.r[3].w[0]);
    set32(c.r[2], 0u + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], 0u + 1640u);
    st32((c.r[1].w[0] + 26244u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 26240u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[1].w[0] + 26252u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 24576u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243E94u); st32((c.r[1].w[0] + 26248u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0061(c, 162u, depth + 1u); else { c.pc = 0x002854C8u; return; } if (c.pc != 0x00243E94u) [[unlikely]] return; }
L_00243E94:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 26224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243EA8u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00243EA8u) [[unlikely]] return; }
L_00243EA8:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[1].w[0] + 26224u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[1].w[0] + 26228u), c.r[2].w[0]);
    set32(c.r[3], 0u + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], 0u + 24u);
    st32((c.r[1].w[0] + 26232u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 26224u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243EE4u); st32((c.r[1].w[0] + 26236u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0060(c, 327u, depth + 1u); else { c.pc = 0x002829F8u; return; } if (c.pc != 0x00243EE4u) [[unlikely]] return; }
L_00243EE4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00243EF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 6u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243F08u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 105u, depth + 1u); else { c.pc = 0x001255F0u; return; } if (c.pc != 0x00243F08u) [[unlikely]] return; }
L_00243F08:
    set32(c.r[4], 0u + 7u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243F18u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 105u, depth + 1u); else { c.pc = 0x001255F0u; return; } if (c.pc != 0x00243F18u) [[unlikely]] return; }
L_00243F18:
    set32(c.r[4], 0u + 8u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243F28u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 105u, depth + 1u); else { c.pc = 0x001255F0u; return; } if (c.pc != 0x00243F28u) [[unlikely]] return; }
L_00243F28:
    set32(c.r[4], 0u + 9u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243F38u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 105u, depth + 1u); else { c.pc = 0x001255F0u; return; } if (c.pc != 0x00243F38u) [[unlikely]] return; }
L_00243F38:
    set32(c.r[4], 0u + 12u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243F48u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 105u, depth + 1u); else { c.pc = 0x001255F0u; return; } if (c.pc != 0x00243F48u) [[unlikely]] return; }
L_00243F48:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00243F60:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_00B0(c, 299u, depth); }
L_00243F70:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_00B0(c, 314u, depth); }
L_00243F80:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[21], c.r[21].w[0] + 29024u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[20], c.r[20].w[0] - 27856u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[19].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 18;
L_00243FC8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0051(c, 2u, depth); } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 12752u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00243FFCu); c.r[6].d[0] = c.r[22].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00243FFCu) [[unlikely]] return; }
L_00243FFC:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
    [[clang::musttail]] return unit_0051(c, 1u, depth);
}

}
