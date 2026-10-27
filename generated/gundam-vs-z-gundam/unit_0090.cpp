#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0090[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 3, 4, 0, 5, 6, 0, 0, 7, 8, 0, 9, 10, 0, 0, 11, 12, 0, 0, 0, 0, 0, 13, 0,
    14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 17, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0,
    0, 0, 0, 22, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0,
    0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36,
    0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 40, 0, 0, 41, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0,
    50, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 70, 0, 0, 0, 71, 0, 0, 0, 72, 0, 73, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 78, 0, 79, 0, 80, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 91, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105,
    0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111,
    0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 123,
    0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0,
    131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0,
    135, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 139, 0, 140, 0, 0, 141, 0, 0, 142, 0, 143, 0,
    0, 144, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0,
    0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 167, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170,
    0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    177, 0, 0, 0, 0, 178, 0, 179, 0, 180, 0, 181, 0, 0, 0, 0, 182, 0, 183, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0,
    186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204,
    0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 211, 0, 0, 0, 0, 0,
    0, 0, 212, 0, 0, 0, 213, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0, 224, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0,
    0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0,
    230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240,
    0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0,
    252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0,
    0, 0, 255, 0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260,
    0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0,
    268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0,
    0, 283, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0,
    289, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 294, 0, 295, 296, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0,
    0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0,
    308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0,
    314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0,
    0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0,
    0, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    331, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 335, 0, 0, 0, 0,
    336, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0,
    0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0,
    0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0,
    371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373,
    0, 374, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 381, 0, 0,
    0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    384, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 388, 0,
    0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 394, 0, 395, 0, 0, 396, 0,
    397, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    403, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    409, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 417, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    422, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0,
    433, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 440, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0,
    442, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451,
    0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0090(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00340000;
    case 2u: goto L_00340004;
    case 3u: goto L_00340024;
    case 4u: goto L_00340028;
    case 5u: goto L_00340030;
    case 6u: goto L_00340034;
    case 7u: goto L_00340040;
    case 8u: goto L_00340044;
    case 9u: goto L_0034004C;
    case 10u: goto L_00340050;
    case 11u: goto L_0034005C;
    case 12u: goto L_00340060;
    case 13u: goto L_00340078;
    case 14u: goto L_00340080;
    case 15u: goto L_003400CC;
    case 16u: goto L_00340120;
    case 17u: goto L_00340128;
    case 18u: goto L_0034012C;
    case 19u: goto L_00340144;
    case 20u: goto L_00340170;
    case 21u: goto L_00340178;
    case 22u: goto L_0034018C;
    case 23u: goto L_00340190;
    case 24u: goto L_003401A4;
    case 25u: goto L_003401C0;
    case 26u: goto L_0034020C;
    case 27u: goto L_00340218;
    case 28u: goto L_00340260;
    case 29u: goto L_00340270;
    case 30u: goto L_003402C0;
    case 31u: goto L_003402E4;
    case 32u: goto L_00340308;
    case 33u: goto L_00340328;
    case 34u: goto L_00340330;
    case 35u: goto L_00340364;
    case 36u: goto L_0034037C;
    case 37u: goto L_00340390;
    case 38u: goto L_003403D0;
    case 39u: goto L_003403D8;
    case 40u: goto L_003403E4;
    case 41u: goto L_003403F0;
    case 42u: goto L_0034041C;
    case 43u: goto L_00340428;
    case 44u: goto L_00340430;
    case 45u: goto L_00340444;
    case 46u: goto L_00340460;
    case 47u: goto L_00340490;
    case 48u: goto L_003404C8;
    case 49u: goto L_003404E4;
    case 50u: goto L_00340500;
    case 51u: goto L_00340504;
    case 52u: goto L_00340520;
    case 53u: goto L_00340550;
    case 54u: goto L_00340570;
    case 55u: goto L_003405D8;
    case 56u: goto L_00340610;
    case 57u: goto L_00340640;
    case 58u: goto L_00340650;
    case 59u: goto L_00340660;
    case 60u: goto L_003406C0;
    case 61u: goto L_003406C8;
    case 62u: goto L_00340710;
    case 63u: goto L_00340730;
    case 64u: goto L_00340770;
    case 65u: goto L_00340798;
    case 66u: goto L_003407A0;
    case 67u: goto L_003407D0;
    case 68u: goto L_00340810;
    case 69u: goto L_00340820;
    case 70u: goto L_00340828;
    case 71u: goto L_00340838;
    case 72u: goto L_00340848;
    case 73u: goto L_00340850;
    case 74u: goto L_00340858;
    case 75u: goto L_00340868;
    case 76u: goto L_003408B4;
    case 77u: goto L_003408B8;
    case 78u: goto L_00340914;
    case 79u: goto L_0034091C;
    case 80u: goto L_00340924;
    case 81u: goto L_00340934;
    case 82u: goto L_0034093C;
    case 83u: goto L_00340A20;
    case 84u: goto L_00340AA4;
    case 85u: goto L_00340AB8;
    case 86u: goto L_00340AC8;
    case 87u: goto L_00340AD0;
    case 88u: goto L_00340B10;
    case 89u: goto L_00340B28;
    case 90u: goto L_00340B30;
    case 91u: goto L_00340B3C;
    case 92u: goto L_00340B44;
    case 93u: goto L_00340B58;
    case 94u: goto L_00340BB8;
    case 95u: goto L_00340BCC;
    case 96u: goto L_00340BDC;
    case 97u: goto L_00340C18;
    case 98u: goto L_00340C20;
    case 99u: goto L_00340C2C;
    case 100u: goto L_00340C50;
    case 101u: goto L_00340C98;
    case 102u: goto L_00340CBC;
    case 103u: goto L_00340CC8;
    case 104u: goto L_00340CD0;
    case 105u: goto L_00340CFC;
    case 106u: goto L_00340D14;
    case 107u: goto L_00340D28;
    case 108u: goto L_00340D30;
    case 109u: goto L_00340D3C;
    case 110u: goto L_00340D68;
    case 111u: goto L_00340D7C;
    case 112u: goto L_00340D94;
    case 113u: goto L_00340DB0;
    case 114u: goto L_00340E00;
    case 115u: goto L_00340E24;
    case 116u: goto L_00340E34;
    case 117u: goto L_00340E40;
    case 118u: goto L_00340E50;
    case 119u: goto L_00340EA0;
    case 120u: goto L_00340EA8;
    case 121u: goto L_00340EE0;
    case 122u: goto L_00340EE8;
    case 123u: goto L_00340EFC;
    case 124u: goto L_00340F14;
    case 125u: goto L_00340F30;
    case 126u: goto L_00340F40;
    case 127u: goto L_00340F88;
    case 128u: goto L_00340FA8;
    case 129u: goto L_00340FB0;
    case 130u: goto L_00340FEC;
    case 131u: goto L_00341000;
    case 132u: goto L_00341040;
    case 133u: goto L_00341050;
    case 134u: goto L_00341074;
    case 135u: goto L_00341080;
    case 136u: goto L_00341088;
    case 137u: goto L_003410BC;
    case 138u: goto L_003410C4;
    case 139u: goto L_003410D0;
    case 140u: goto L_003410D8;
    case 141u: goto L_003410E4;
    case 142u: goto L_003410F0;
    case 143u: goto L_003410F8;
    case 144u: goto L_00341104;
    case 145u: goto L_00341110;
    case 146u: goto L_00341118;
    case 147u: goto L_00341150;
    case 148u: goto L_00341158;
    case 149u: goto L_00341160;
    case 150u: goto L_0034118C;
    case 151u: goto L_003411B0;
    case 152u: goto L_003411B8;
    case 153u: goto L_003411C0;
    case 154u: goto L_00341220;
    case 155u: goto L_00341248;
    case 156u: goto L_00341254;
    case 157u: goto L_00341270;
    case 158u: goto L_003412D8;
    case 159u: goto L_003412F4;
    case 160u: goto L_00341314;
    case 161u: goto L_00341330;
    case 162u: goto L_00341360;
    case 163u: goto L_003413B0;
    case 164u: goto L_003413F0;
    case 165u: goto L_00341418;
    case 166u: goto L_00341424;
    case 167u: goto L_00341430;
    case 168u: goto L_00341438;
    case 169u: goto L_00341440;
    case 170u: goto L_0034147C;
    case 171u: goto L_00341494;
    case 172u: goto L_003414B4;
    case 173u: goto L_003414CC;
    case 174u: goto L_003414E0;
    case 175u: goto L_00341520;
    case 176u: goto L_00341528;
    case 177u: goto L_00341580;
    case 178u: goto L_00341594;
    case 179u: goto L_0034159C;
    case 180u: goto L_003415A4;
    case 181u: goto L_003415AC;
    case 182u: goto L_003415C0;
    case 183u: goto L_003415C8;
    case 184u: goto L_003415D0;
    case 185u: goto L_003415E0;
    case 186u: goto L_00341600;
    case 187u: goto L_00341624;
    case 188u: goto L_00341650;
    case 189u: goto L_00341690;
    case 190u: goto L_00341700;
    case 191u: goto L_00341754;
    case 192u: goto L_0034179C;
    case 193u: goto L_003417B0;
    case 194u: goto L_003417B8;
    case 195u: goto L_0034180C;
    case 196u: goto L_00341850;
    case 197u: goto L_00341910;
    case 198u: goto L_00341928;
    case 199u: goto L_00341940;
    case 200u: goto L_00341954;
    case 201u: goto L_00341994;
    case 202u: goto L_003419BC;
    case 203u: goto L_003419D4;
    case 204u: goto L_003419FC;
    case 205u: goto L_00341A14;
    case 206u: goto L_00341A2C;
    case 207u: goto L_00341A50;
    case 208u: goto L_00341A60;
    case 209u: goto L_00341AC0;
    case 210u: goto L_00341AE4;
    case 211u: goto L_00341AE8;
    case 212u: goto L_00341B08;
    case 213u: goto L_00341B18;
    case 214u: goto L_00341B24;
    case 215u: goto L_00341B2C;
    case 216u: goto L_00341B4C;
    case 217u: goto L_00341B70;
    case 218u: goto L_00341BC0;
    case 219u: goto L_00341BF4;
    case 220u: goto L_00341C20;
    case 221u: goto L_00341C90;
    case 222u: goto L_00341CBC;
    case 223u: goto L_00341CC8;
    case 224u: goto L_00341CD0;
    case 225u: goto L_00341CD8;
    case 226u: goto L_00341CF4;
    case 227u: goto L_00341D08;
    case 228u: goto L_00341D30;
    case 229u: goto L_00341D60;
    case 230u: goto L_00341D80;
    case 231u: goto L_00341D90;
    case 232u: goto L_00341DEC;
    case 233u: goto L_00341E50;
    case 234u: goto L_00341E98;
    case 235u: goto L_00341EC4;
    case 236u: goto L_00341ED4;
    case 237u: goto L_00341EE0;
    case 238u: goto L_00341F30;
    case 239u: goto L_00341F4C;
    case 240u: goto L_00341F7C;
    case 241u: goto L_00341F94;
    case 242u: goto L_00341FAC;
    case 243u: goto L_00341FC0;
    case 244u: goto L_00342008;
    case 245u: goto L_00342030;
    case 246u: goto L_00342040;
    case 247u: goto L_00342048;
    case 248u: goto L_0034209C;
    case 249u: goto L_003420BC;
    case 250u: goto L_003420D4;
    case 251u: goto L_003420EC;
    case 252u: goto L_00342100;
    case 253u: goto L_00342158;
    case 254u: goto L_00342168;
    case 255u: goto L_00342188;
    case 256u: goto L_00342194;
    case 257u: goto L_003421A0;
    case 258u: goto L_003421CC;
    case 259u: goto L_003421E4;
    case 260u: goto L_003421FC;
    case 261u: goto L_00342220;
    case 262u: goto L_00342234;
    case 263u: goto L_00342250;
    case 264u: goto L_003422D0;
    case 265u: goto L_0034231C;
    case 266u: goto L_00342330;
    case 267u: goto L_00342360;
    case 268u: goto L_00342380;
    case 269u: goto L_00342420;
    case 270u: goto L_00342434;
    case 271u: goto L_00342444;
    case 272u: goto L_00342470;
    case 273u: goto L_0034249C;
    case 274u: goto L_003424B8;
    case 275u: goto L_003424E0;
    case 276u: goto L_0034250C;
    case 277u: goto L_00342524;
    case 278u: goto L_0034256C;
    case 279u: goto L_003425A0;
    case 280u: goto L_003425C4;
    case 281u: goto L_003425D4;
    case 282u: goto L_003425E0;
    case 283u: goto L_00342604;
    case 284u: goto L_00342614;
    case 285u: goto L_00342620;
    case 286u: goto L_00342640;
    case 287u: goto L_00342660;
    case 288u: goto L_00342670;
    case 289u: goto L_00342680;
    case 290u: goto L_00342690;
    case 291u: goto L_003426A0;
    case 292u: goto L_003426B0;
    case 293u: goto L_003426D0;
    case 294u: goto L_00342710;
    case 295u: goto L_00342718;
    case 296u: goto L_0034271C;
    case 297u: goto L_00342730;
    case 298u: goto L_00342790;
    case 299u: goto L_003427B4;
    case 300u: goto L_003427C8;
    case 301u: goto L_003427D4;
    case 302u: goto L_003427F0;
    case 303u: goto L_00342814;
    case 304u: goto L_00342828;
    case 305u: goto L_00342834;
    case 306u: goto L_00342850;
    case 307u: goto L_00342870;
    case 308u: goto L_00342880;
    case 309u: goto L_003428A0;
    case 310u: goto L_00342928;
    case 311u: goto L_00342938;
    case 312u: goto L_00342948;
    case 313u: goto L_00342970;
    case 314u: goto L_00342980;
    case 315u: goto L_003429D8;
    case 316u: goto L_003429E8;
    case 317u: goto L_00342A08;
    case 318u: goto L_00342A18;
    case 319u: goto L_00342A60;
    case 320u: goto L_00342AB0;
    case 321u: goto L_00342AF0;
    case 322u: goto L_00342B28;
    case 323u: goto L_00342B3C;
    case 324u: goto L_00342B50;
    case 325u: goto L_00342B64;
    case 326u: goto L_00342B78;
    case 327u: goto L_00342B8C;
    case 328u: goto L_00342BA0;
    case 329u: goto L_00342BB0;
    case 330u: goto L_00342BC8;
    case 331u: goto L_00342C00;
    case 332u: goto L_00342C14;
    case 333u: goto L_00342C40;
    case 334u: goto L_00342C64;
    case 335u: goto L_00342C6C;
    case 336u: goto L_00342C80;
    case 337u: goto L_00342CA0;
    case 338u: goto L_00342CAC;
    case 339u: goto L_00342CC0;
    case 340u: goto L_00342CD0;
    case 341u: goto L_00342CE0;
    case 342u: goto L_00342CF0;
    case 343u: goto L_00342D10;
    case 344u: goto L_00342D24;
    case 345u: goto L_00342D34;
    case 346u: goto L_00342D50;
    case 347u: goto L_00342D60;
    case 348u: goto L_00342D70;
    case 349u: goto L_00342D84;
    case 350u: goto L_00342D9C;
    case 351u: goto L_00342DB4;
    case 352u: goto L_00342DC8;
    case 353u: goto L_00342DE0;
    case 354u: goto L_00342E4C;
    case 355u: goto L_00342E90;
    case 356u: goto L_00342EA8;
    case 357u: goto L_00342EB8;
    case 358u: goto L_00342ED0;
    case 359u: goto L_00342F10;
    case 360u: goto L_00342F24;
    case 361u: goto L_00342F50;
    case 362u: goto L_00343024;
    case 363u: goto L_00343030;
    case 364u: goto L_00343040;
    case 365u: goto L_00343060;
    case 366u: goto L_0034308C;
    case 367u: goto L_0034309C;
    case 368u: goto L_003430B0;
    case 369u: goto L_003430C0;
    case 370u: goto L_003430E0;
    case 371u: goto L_00343100;
    case 372u: goto L_00343140;
    case 373u: goto L_0034317C;
    case 374u: goto L_00343184;
    case 375u: goto L_00343190;
    case 376u: goto L_003431A4;
    case 377u: goto L_003431C8;
    case 378u: goto L_00343210;
    case 379u: goto L_00343234;
    case 380u: goto L_00343268;
    case 381u: goto L_00343274;
    case 382u: goto L_00343290;
    case 383u: goto L_003432BC;
    case 384u: goto L_00343300;
    case 385u: goto L_00343310;
    case 386u: goto L_00343330;
    case 387u: goto L_00343364;
    case 388u: goto L_00343378;
    case 389u: goto L_0034338C;
    case 390u: goto L_003433A0;
    case 391u: goto L_003433B4;
    case 392u: goto L_003433C8;
    case 393u: goto L_003433DC;
    case 394u: goto L_003433E4;
    case 395u: goto L_003433EC;
    case 396u: goto L_003433F8;
    case 397u: goto L_00343400;
    case 398u: goto L_00343410;
    case 399u: goto L_00343460;
    case 400u: goto L_003434B4;
    case 401u: goto L_003434C0;
    case 402u: goto L_003434D0;
    case 403u: goto L_00343500;
    case 404u: goto L_00343520;
    case 405u: goto L_00343530;
    case 406u: goto L_00343550;
    case 407u: goto L_00343570;
    case 408u: goto L_00343650;
    case 409u: goto L_00343680;
    case 410u: goto L_00343688;
    case 411u: goto L_003436D8;
    case 412u: goto L_00343760;
    case 413u: goto L_003437B0;
    case 414u: goto L_00343830;
    case 415u: goto L_00343838;
    case 416u: goto L_00343870;
    case 417u: goto L_00343878;
    case 418u: goto L_003438C0;
    case 419u: goto L_003438E0;
    case 420u: goto L_00343920;
    case 421u: goto L_00343940;
    case 422u: goto L_00343980;
    case 423u: goto L_0034398C;
    case 424u: goto L_003439A0;
    case 425u: goto L_003439B0;
    case 426u: goto L_00343AA0;
    case 427u: goto L_00343B18;
    case 428u: goto L_00343B28;
    case 429u: goto L_00343B58;
    case 430u: goto L_00343B90;
    case 431u: goto L_00343BC8;
    case 432u: goto L_00343BEC;
    case 433u: goto L_00343C00;
    case 434u: goto L_00343C10;
    case 435u: goto L_00343C30;
    case 436u: goto L_00343C54;
    case 437u: goto L_00343C68;
    case 438u: goto L_00343C90;
    case 439u: goto L_00343CC8;
    case 440u: goto L_00343CD0;
    case 441u: goto L_00343CF0;
    case 442u: goto L_00343D00;
    case 443u: goto L_00343D10;
    case 444u: goto L_00343D50;
    case 445u: goto L_00343D60;
    case 446u: goto L_00343D8C;
    case 447u: goto L_00343DB0;
    case 448u: goto L_00343DD4;
    case 449u: goto L_00343DF0;
    case 450u: goto L_00343E4C;
    case 451u: goto L_00343E7C;
    case 452u: goto L_00343E98;
    case 453u: goto L_00343EB0;
    case 454u: goto L_00343EEC;
    case 455u: goto L_00343F58;
    default: bad_entry(c, 0x00340000u); return;
    }
L_00340000:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.budget -= 1;
L_00340004:
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00340078; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00340050; } }
    goto L_00340028;
L_00340024:
    c.budget -= 1;
L_00340028:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00340038; } }
L_00340030:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003401A8; } }
    goto L_00340038;
L_00340034:
    c.budget -= 1;
L_00340038:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6004u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_003401A8; } }
    goto L_00340044;
L_00340040:
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00340044:
    set32(c.r[5], 0u + 11u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340050u); st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x00340050u) [[unlikely]] return; }
    goto L_00340050;
L_0034004C:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00340050:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6004u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003401A8; } }
L_0034005C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 1;
L_00340060:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340078u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_008F(c, 18u, depth + 1u); else { c.pc = 0x0033C490u; return; } if (c.pc != 0x00340078u) [[unlikely]] return; }
L_00340078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340080u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x00340080u) [[unlikely]] return; }
L_00340080:
    set32(c.r[3], 0u - 252u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[16].w[0] + 6000u), c.r[2].w[0]);  if (t) { goto L_00340180; } }
    set32(c.r[3], 0u - 254u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 253u);  if (t) { goto L_00340150; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00340130; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003401A8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003400C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00340198; } }
    c.budget -= 1;
L_003400C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003400CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0090(c, 385u, depth + 1u); else { c.pc = 0x00343310u; return; } if (c.pc != 0x003400CCu) [[unlikely]] return; }
L_003400CC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 52u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 11);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 2672u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 7u);  if (t) { goto L_00340100; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003401A8; } }
    c.budget -= 1;
L_00340100:
    set32(c.r[2], 0u + 5u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u + 7u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 22u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340120u); st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x00340120u) [[unlikely]] return; }
L_00340120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340128u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0090(c, 313u, depth + 1u); else { c.pc = 0x00342970u; return; } if (c.pc != 0x00340128u) [[unlikely]] return; }
L_00340128:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003401A8; } }
    goto L_00340130;
L_0034012C:
    c.budget -= 1;
L_00340130:
    set32(c.r[2], 0u + 7u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340144u); st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0090(c, 342u, depth + 1u); else { c.pc = 0x00342CF0u; return; } if (c.pc != 0x00340144u) [[unlikely]] return; }
L_00340144:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003401A8; } }
    c.budget -= 1;
L_00340150:
    set32(c.r[2], 0u + 5u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u + 6u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 36u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340170u); st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x00340170u) [[unlikely]] return; }
L_00340170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340178u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0090(c, 313u, depth + 1u); else { c.pc = 0x00342970u; return; } if (c.pc != 0x00340178u) [[unlikely]] return; }
L_00340178:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003401A8; } }
L_00340180:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034018Cu); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_008F(c, 402u, depth + 1u); else { c.pc = 0x0033FC40u; return; } if (c.pc != 0x0034018Cu) [[unlikely]] return; }
L_0034018C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003401A8; } }
    goto L_00340194;
L_00340190:
    c.budget -= 1;
L_00340194:
    c.budget -= 1;
L_00340198:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003401A4u); set32(c.r[5], 0u + 52u);  if (depth < kMaxDepth) unit_008F(c, 402u, depth + 1u); else { c.pc = 0x0033FC40u; return; } if (c.pc != 0x003401A4u) [[unlikely]] return; }
L_003401A4:
    c.budget -= 1;
L_003401A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003401C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00340210; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003401F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003402A8; } }
L_003401F0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6004u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003402A8; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034020Cu); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008E(c, 349u, depth + 1u); else { c.pc = 0x0033BA80u; return; } if (c.pc != 0x0034020Cu) [[unlikely]] return; }
L_0034020C:
    c.budget -= 1;
L_00340210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340218u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 44u)));  if (depth < kMaxDepth) unit_008F(c, 79u, depth + 1u); else { c.pc = 0x0033D2F0u; return; } if (c.pc != 0x00340218u) [[unlikely]] return; }
L_00340218:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00340260; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00340258; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_00340258; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00340248; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00340268; } }
    c.budget -= 1;
L_00340248:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00340268; } }
L_00340258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340260u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 403u, depth + 1u); else { c.pc = 0x0033FC50u; return; } if (c.pc != 0x00340260u) [[unlikely]] return; }
L_00340260:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003402A8; } }
L_00340268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340270u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 314u, depth + 1u); else { c.pc = 0x00342980u; return; } if (c.pc != 0x00340270u) [[unlikely]] return; }
L_00340270:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003402A0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00340290; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003402A8; } }
    c.budget -= 1;
L_00340290:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003402A8; } }
L_003402A0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003402A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003402C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00340328; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00340308; } }
    goto L_003402E8;
L_003402E4:
    c.budget -= 1;
L_003402E8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003402F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00340380; } }
L_003402F8:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340308u); set32(c.r[5], 0u + 37u);  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x00340308u) [[unlikely]] return; }
L_00340308:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6004u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00340380; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340328u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 44u)));  if (depth < kMaxDepth) unit_008F(c, 51u, depth + 1u); else { c.pc = 0x0033CCA0u; return; } if (c.pc != 0x00340328u) [[unlikely]] return; }
L_00340328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340330u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x00340330u) [[unlikely]] return; }
L_00340330:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[16].w[0] + 6000u), c.r[2].w[0]);  if (t) { goto L_00340380; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00340350; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00340370; } }
    c.budget -= 1;
L_00340350:
    set32(c.r[2], 0u + 7u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340364u); st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0090(c, 342u, depth + 1u); else { c.pc = 0x00342CF0u; return; } if (c.pc != 0x00340364u) [[unlikely]] return; }
L_00340364:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00340380; } }
    c.budget -= 1;
L_00340370:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034037Cu); set32(c.r[5], 0u + 38u);  if (depth < kMaxDepth) unit_008F(c, 402u, depth + 1u); else { c.pc = 0x0033FC40u; return; } if (c.pc != 0x0034037Cu) [[unlikely]] return; }
L_0034037C:
    c.budget -= 1;
L_00340380:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00340390:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003403E8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003403C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00340448; } }
    c.budget -= 1;
L_003403C0:
    set32(c.r[2], c.r[5].w[0] + 1u);
    set32(c.r[5], 0u + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003403D0u); st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x003403D0u) [[unlikely]] return; }
L_003403D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003403D8u);  if (depth < kMaxDepth) unit_0090(c, 369u, depth + 1u); else { c.pc = 0x003430C0u; return; } if (c.pc != 0x003403D8u) [[unlikely]] return; }
L_003403D8:
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003403E4u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 44u)));  if (depth < kMaxDepth) unit_008F(c, 28u, depth + 1u); else { c.pc = 0x0033C7E0u; return; } if (c.pc != 0x003403E4u) [[unlikely]] return; }
L_003403E4:
    c.budget -= 1;
L_003403E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003403F0u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x003403F0u) [[unlikely]] return; }
L_003403F0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[16].w[0] + 6000u), c.r[2].w[0]);  if (t) { goto L_00340448; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00340410; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00340438; } }
    c.budget -= 1;
L_00340410:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034041Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0090(c, 385u, depth + 1u); else { c.pc = 0x00343310u; return; } if (c.pc != 0x0034041Cu) [[unlikely]] return; }
L_0034041C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340428u); set32(c.r[5], 0u + 25u);  if (depth < kMaxDepth) unit_008F(c, 402u, depth + 1u); else { c.pc = 0x0033FC40u; return; } if (c.pc != 0x00340428u) [[unlikely]] return; }
L_00340428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340430u);  if (depth < kMaxDepth) unit_0090(c, 306u, depth + 1u); else { c.pc = 0x00342850u; return; } if (c.pc != 0x00340430u) [[unlikely]] return; }
L_00340430:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 23u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00340448; } }
L_00340438:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340444u); set32(c.r[5], 0u + 26u);  if (depth < kMaxDepth) unit_008F(c, 402u, depth + 1u); else { c.pc = 0x0033FC40u; return; } if (c.pc != 0x00340444u) [[unlikely]] return; }
L_00340444:
    c.budget -= 1;
L_00340448:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00340460:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_003404C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00340490; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00340508; } }
L_00340490:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6004u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00340508; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 6000u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003404B0; } }
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_003404B0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_003404C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003404C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 309u, depth + 1u); else { c.pc = 0x003428A0u; return; } if (c.pc != 0x003404C8u) [[unlikely]] return; }
L_003404C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00340508; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 6000u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003404F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003404E4u);  if (depth < kMaxDepth) unit_008F(c, 403u, depth + 1u); else { c.pc = 0x0033FC50u; return; } if (c.pc != 0x003404E4u) [[unlikely]] return; }
L_003404E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00340508; } }
    c.budget -= 1;
L_003404F0:
    set32(c.r[3], 0u + 9u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340504u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x00340504u) [[unlikely]] return; }
    goto L_00340504;
L_00340500:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00340504:
    c.budget -= 1;
L_00340508:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00340520:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 6004u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], 0u + 6u);  if (t) { goto L_00340548; } }
    set32(c.r[3], 0u - 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 6208u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 46u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 53u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_00340548:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00340550:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 18592u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00340000u < 16384u) { entry = entries_0090[(t - 0x00340000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00340570:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 6004u));
    set32(c.r[7], c.r[4].w[0] + 80u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[4].w[0] + 60u);  if (t) { goto L_00340608; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 48u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 49u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 53u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 56u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 19u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 50u)));  if (t) { goto L_003405C8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 51u)));
    c.r[1].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[8].w[0] + 1u);  if (t) { goto L_003405C8; } }
    set32(c.r[3], 0u + 255u);
    st8((c.r[4].w[0] + 50u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 5;
L_003405C8:
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] <= 0; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_00340600; } }
    set32(c.r[3], 0u + 255u);
    c.budget -= 2;
L_003405D8:
    c.r[5].d[0] = ld8((c.r[7].w[0]));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003405F0; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[8], c.r[8].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 3;
L_003405F0:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[8].sd[0] > 0; set32(c.r[7], c.r[7].w[0] + 280u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003405D8u | kUnwind; return; } goto L_003405D8; } }
    c.budget -= 1;
L_00340600:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 6208u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00340608:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00340610:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 53u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 19u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], 0u + 29u);  if (t) { goto L_00340648; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340640u);  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x00340640u) [[unlikely]] return; }
L_00340640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00340650; } }
L_00340648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340650u); set32(c.r[5], 0u + 21u);  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x00340650u) [[unlikely]] return; }
L_00340650:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00340660:
    set32(c.r[29], c.r[29].w[0] - 352u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00340AB0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003406C0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003406A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00340C30; } }
    c.budget -= 1;
L_003406A8:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 6004u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00340C30; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003406C0u); st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008E(c, 349u, depth + 1u); else { c.pc = 0x0033BA80u; return; } if (c.pc != 0x003406C0u) [[unlikely]] return; }
L_003406C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003406C8u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 44u)));  if (depth < kMaxDepth) unit_008F(c, 79u, depth + 1u); else { c.pc = 0x0033D2F0u; return; } if (c.pc != 0x003406C8u) [[unlikely]] return; }
L_003406C8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00340710; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00340708; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_00340708; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003406F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00340718; } }
    c.budget -= 1;
L_003406F8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 19u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00340718; } }
    c.budget -= 1;
L_00340708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340710u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 403u, depth + 1u); else { c.pc = 0x0033FC50u; return; } if (c.pc != 0x00340710u) [[unlikely]] return; }
L_00340710:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00340C30; } }
L_00340718:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 48u)));
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 49u)));
    set32(c.r[2], c.r[17].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340730u); c.r[18].d[0] = ld8((c.r[2].w[0] + 60u));  if (depth < kMaxDepth) unit_0090(c, 279u, depth + 1u); else { c.pc = 0x003425A0u; return; } if (c.pc != 0x00340730u) [[unlikely]] return; }
L_00340730:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00340830; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 19u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 3);  if (t) { goto L_003407A8; } }
    set32(c.r[3], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 80u));
    c.r[2].d[0] = c.r[2].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00340778; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340770u);  if (depth < kMaxDepth) unit_0090(c, 291u, depth + 1u); else { c.pc = 0x003426A0u; return; } if (c.pc != 0x00340770u) [[unlikely]] return; }
L_00340770:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00340C30; } }
L_00340778:
    set32(c.r[2], 0u + 5u);
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], 0u + 3u);
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 31u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340798u); st8((c.r[19].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x00340798u) [[unlikely]] return; }
L_00340798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003407A0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0090(c, 313u, depth + 1u); else { c.pc = 0x00342970u; return; } if (c.pc != 0x003407A0u) [[unlikely]] return; }
L_003407A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00340810; } }
L_003407A8:
    set32(c.r[3], 0u + 255u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[3].d[0];  if (t) { goto L_003407F8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 51u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.r[1].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003407F8; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_003407D0:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 80u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003407E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003407F8; } }
    c.budget -= 1;
L_003407E8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 280u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003407D0u | kUnwind; return; } goto L_003407D0; } }
L_003407F8:
    set32(c.r[2], 0u + 4u);
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340810u); st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x00340810u) [[unlikely]] return; }
L_00340810:
    st8((c.r[19].w[0] + 52u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340820u); st8((c.r[19].w[0] + 53u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0090(c, 285u, depth + 1u); else { c.pc = 0x00342620u; return; } if (c.pc != 0x00340820u) [[unlikely]] return; }
L_00340820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340828u);  if (depth < kMaxDepth) unit_0090(c, 288u, depth + 1u); else { c.pc = 0x00342670u; return; } if (c.pc != 0x00340828u) [[unlikely]] return; }
L_00340828:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00340C30; } }
L_00340830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340838u);  if (depth < kMaxDepth) unit_0090(c, 282u, depth + 1u); else { c.pc = 0x003425E0u; return; } if (c.pc != 0x00340838u) [[unlikely]] return; }
L_00340838:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00340860; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340848u);  if (depth < kMaxDepth) unit_008F(c, 403u, depth + 1u); else { c.pc = 0x0033FC50u; return; } if (c.pc != 0x00340848u) [[unlikely]] return; }
L_00340848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340850u);  if (depth < kMaxDepth) unit_0090(c, 286u, depth + 1u); else { c.pc = 0x00342640u; return; } if (c.pc != 0x00340850u) [[unlikely]] return; }
L_00340850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340858u);  if (depth < kMaxDepth) unit_0090(c, 289u, depth + 1u); else { c.pc = 0x00342680u; return; } if (c.pc != 0x00340858u) [[unlikely]] return; }
L_00340858:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00340C30; } }
L_00340860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340868u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x00340868u) [[unlikely]] return; }
L_00340868:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 19u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_00340948; } }
    c.r[3].d[0] = c.r[5].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00340948; } }
    set32(c.r[2], c.r[18].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] + 80u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 80u));
    c.r[2].d[0] = c.r[2].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003408C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003408B4u);  if (depth < kMaxDepth) unit_0090(c, 291u, depth + 1u); else { c.pc = 0x003426A0u; return; } if (c.pc != 0x003408B4u) [[unlikely]] return; }
L_003408B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00340C30; } }
    goto L_003408BC;
L_003408B8:
    c.budget -= 1;
L_003408BC:
    c.budget -= 1;
L_003408C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 2u)));
    c.r[2].d[0] = c.r[5].d[0] & 256ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[19].w[0] + 52u), static_cast<std::uint8_t>(c.r[18].w[0]));  if (t) { goto L_003408F0; } }
    set32(c.r[3], 0u + 32u);
    set32(c.r[2], c.r[4].w[0] + 52u);
    st32((c.r[19].w[0] + 5976u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 5980u), c.r[2].w[0]);  if (t) { goto L_00340900; } }
    c.budget -= 1;
L_003408F0:
    set32(c.r[3], 0u + 192u);
    set32(c.r[2], c.r[4].w[0] + 85u);
    st32((c.r[19].w[0] + 5976u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 5980u), c.r[2].w[0]);
    c.budget -= 4;
L_00340900:
    c.r[6].d[0] = ld16((c.r[19].w[0] + 5976u));
    set32(c.r[7], ld32((c.r[19].w[0] + 5980u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340914u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_008D(c, 323u, depth + 1u); else { c.pc = 0x003374D0u; return; } if (c.pc != 0x00340914u) [[unlikely]] return; }
L_00340914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034091Cu); set32(c.r[4], c.r[19].w[0] + 5960u);  if (depth < kMaxDepth) unit_00A2(c, 338u, depth + 1u); else { c.pc = 0x0038AE70u; return; } if (c.pc != 0x0034091Cu) [[unlikely]] return; }
L_0034091C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340924u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00A2(c, 336u, depth + 1u); else { c.pc = 0x0038AE10u; return; } if (c.pc != 0x00340924u) [[unlikely]] return; }
L_00340924:
    set32(c.r[4], c.r[19].w[0] + 5960u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340934u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00340934u) [[unlikely]] return; }
L_00340934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034093Cu);  if (depth < kMaxDepth) unit_0090(c, 288u, depth + 1u); else { c.pc = 0x00342670u; return; } if (c.pc != 0x0034093Cu) [[unlikely]] return; }
L_0034093C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00340C30; } }
    c.budget -= 1;
L_00340948:
    c.r[3].d[0] = c.r[5].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 50u)));  if (t) { goto L_00340988; } }
    set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 1u);  if (t) { goto L_00340A80; } }
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00340980; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_00340A80; } }
    c.budget -= 1;
L_00340980:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_00340A80; } }
L_00340988:
    c.r[3].d[0] = c.r[5].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);  if (t) { goto L_003409B8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00340A80; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003409B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { goto L_00340A80; } }
    c.budget -= 1;
L_003409B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] - 1u);  if (t) { goto L_00340A80; } }
L_003409B8:
    c.r[3].d[0] = c.r[5].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00340A38; } }
    set32(c.r[5], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 4u);  if (t) { goto L_00340A80; } }
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_00340A08; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], c.r[4].w[0] - 1u);  if (t) { goto L_003409F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00340A80; } }
    c.budget -= 1;
L_003409F8:
    set32(c.r[17], c.r[4].w[0] - 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 3u);  if (t) { goto L_00340A80; } }
    c.budget -= 1;
L_00340A08:
    set32(c.r[4], c.r[4].w[0] - 4u);
    set32(c.r[3], c.r[17].w[0] + 4u);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00340A30; } }
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_00340A20:
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] - c.r[4].w[0]);  if (t) { goto L_00340A80; } }
    c.budget -= 1;
L_00340A30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { goto L_00340A80; } }
L_00340A38:
    c.r[3].d[0] = c.r[5].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + c.r[16].w[0]);  if (t) { goto L_00340A80; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] - 4u);  if (t) { goto L_00340A80; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0; c.r[1].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;  if (t) { goto L_00340A78; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00340A68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00340A70; } }
    c.budget -= 1;
L_00340A68:
    set32(c.r[16], c.r[4].w[0] - 4u);
    c.budget -= 2;
L_00340A70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00340A80; } }
L_00340A78:
    set32(c.r[17], c.r[17].w[0] - 4u);
    c.budget -= 2;
L_00340A80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_00340A98; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 49u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_00340C30; } }
L_00340A98:
    st8((c.r[19].w[0] + 48u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340AA4u); st8((c.r[19].w[0] + 49u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0090(c, 290u, depth + 1u); else { c.pc = 0x00342690u; return; } if (c.pc != 0x00340AA4u) [[unlikely]] return; }
L_00340AA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00340C30; } }
    c.budget -= 1;
L_00340AB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340AB8u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 44u)));  if (depth < kMaxDepth) unit_008F(c, 79u, depth + 1u); else { c.pc = 0x0033D2F0u; return; } if (c.pc != 0x00340AB8u) [[unlikely]] return; }
L_00340AB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00340AD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340AC8u);  if (depth < kMaxDepth) unit_008F(c, 403u, depth + 1u); else { c.pc = 0x0033FC50u; return; } if (c.pc != 0x00340AC8u) [[unlikely]] return; }
L_00340AC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340AD0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 336u, depth + 1u); else { c.pc = 0x0038AE10u; return; } if (c.pc != 0x00340AD0u) [[unlikely]] return; }
L_00340AD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00340C30; } }
L_00340AD8:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 5960u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st16((c.r[19].w[0] + 5962u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[1].w[0] + 9600u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 9616u));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st16((c.r[19].w[0] + 5960u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 5962u));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 5960u));
    c.r[3].d[0] = ~(c.r[3].d[0] | 0ull);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340B10u); st16((c.r[19].w[0] + 5964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A2(c, 326u, depth + 1u); else { c.pc = 0x0038AD10u; return; } if (c.pc != 0x00340B10u) [[unlikely]] return; }
L_00340B10:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00340C30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340B28u);  if (depth < kMaxDepth) unit_00A2(c, 336u, depth + 1u); else { c.pc = 0x0038AE10u; return; } if (c.pc != 0x00340B28u) [[unlikely]] return; }
L_00340B28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340B30u);  if (depth < kMaxDepth) unit_00A2(c, 335u, depth + 1u); else { c.pc = 0x0038AE00u; return; } if (c.pc != 0x00340B30u) [[unlikely]] return; }
L_00340B30:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340B3Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00340B3Cu) [[unlikely]] return; }
L_00340B3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340B44u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00340B44u) [[unlikely]] return; }
L_00340B44:
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);  if (t) { goto L_00340B90; } }
    set32(c.r[6], c.r[3].w[0] + 80u);
    c.r[3].d[0] = 0ull | 33088ull;
    c.budget -= 2;
L_00340B58:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[5], c.r[5].w[0] << 8);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00340B90; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[6], c.r[6].w[0] - 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00340B58u | kUnwind; return; } goto L_00340B58; } }
    c.budget -= 1;
L_00340B90:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00340BD0; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 5976u)));
    set32(c.r[2], 0u + 32u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00340BC0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340BB8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0090(c, 298u, depth + 1u); else { c.pc = 0x00342790u; return; } if (c.pc != 0x00340BB8u) [[unlikely]] return; }
L_00340BB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00340BD0; } }
L_00340BC0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340BCCu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0090(c, 302u, depth + 1u); else { c.pc = 0x003427F0u; return; } if (c.pc != 0x00340BCCu) [[unlikely]] return; }
L_00340BCC:
    c.budget -= 1;
L_00340BD0:
    set32(c.r[4], ld32((c.r[19].w[0] + 5980u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340BDCu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x00340BDCu) [[unlikely]] return; }
L_00340BDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00340BF8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00340C30; } }
    c.budget -= 1;
L_00340BF8:
    set32(c.r[2], 0u + 5u);
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], 0u + 10u);
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 27u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340C18u); st8((c.r[19].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x00340C18u) [[unlikely]] return; }
L_00340C18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340C20u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0090(c, 313u, depth + 1u); else { c.pc = 0x00342970u; return; } if (c.pc != 0x00340C20u) [[unlikely]] return; }
L_00340C20:
    set32(c.r[4], ld32((c.r[19].w[0] + 5980u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340C2Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00340C2Cu) [[unlikely]] return; }
L_00340C2C:
    c.budget -= 1;
L_00340C30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_00340C50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00340CC8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00340C98; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00340C88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00340D98; } }
L_00340C88:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340C98u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x00340C98u) [[unlikely]] return; }
L_00340C98:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6004u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00340D98; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 52u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340CBCu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));  if (depth < kMaxDepth) unit_008E(c, 337u, depth + 1u); else { c.pc = 0x0033B920u; return; } if (c.pc != 0x00340CBCu) [[unlikely]] return; }
L_00340CBC:
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340CC8u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 44u)));  if (depth < kMaxDepth) unit_008F(c, 11u, depth + 1u); else { c.pc = 0x0033C270u; return; } if (c.pc != 0x00340CC8u) [[unlikely]] return; }
L_00340CC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340CD0u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x00340CD0u) [[unlikely]] return; }
L_00340CD0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[16].w[0] + 6000u), c.r[2].w[0]);  if (t) { goto L_00340D98; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00340CF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00340D88; } }
    c.budget -= 1;
L_00340CF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340CFCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0090(c, 385u, depth + 1u); else { c.pc = 0x00343310u; return; } if (c.pc != 0x00340CFCu) [[unlikely]] return; }
L_00340CFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u - 256u);  if (t) { goto L_00340D20; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 6000u), c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340D14u); set32(c.r[5], 0u + 33u);  if (depth < kMaxDepth) unit_008F(c, 402u, depth + 1u); else { c.pc = 0x0033FC40u; return; } if (c.pc != 0x00340D14u) [[unlikely]] return; }
L_00340D14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00340D98; } }
    c.budget -= 1;
L_00340D20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340D28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 405u, depth + 1u); else { c.pc = 0x00343530u; return; } if (c.pc != 0x00340D28u) [[unlikely]] return; }
L_00340D28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340D30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 306u, depth + 1u); else { c.pc = 0x00342850u; return; } if (c.pc != 0x00340D30u) [[unlikely]] return; }
L_00340D30:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340D3Cu); set32(c.r[5], 0u + 34u);  if (depth < kMaxDepth) unit_008F(c, 402u, depth + 1u); else { c.pc = 0x0033FC40u; return; } if (c.pc != 0x00340D3Cu) [[unlikely]] return; }
L_00340D3C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 48u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] + 10080u);
    set32(c.r[5], c.r[16].w[0] + 60u);
    set32(c.r[6], 0u + 20u);
    st8((c.r[28].w[0] - 22548u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 49u)));
    st8((c.r[28].w[0] - 22552u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 50u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340D68u); st8((c.r[28].w[0] - 22556u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00340D68u) [[unlikely]] return; }
L_00340D68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[5], c.r[16].w[0] + 80u);
    set32(c.r[4], c.r[4].w[0] + 4480u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340D7Cu); set32(c.r[6], 0u + 5600u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00340D7Cu) [[unlikely]] return; }
L_00340D7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00340D98; } }
    c.budget -= 1;
L_00340D88:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340D94u); set32(c.r[5], 0u + 33u);  if (depth < kMaxDepth) unit_008F(c, 402u, depth + 1u); else { c.pc = 0x0033FC40u; return; } if (c.pc != 0x00340D94u) [[unlikely]] return; }
L_00340D94:
    c.budget -= 1;
L_00340D98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00340DB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00340E38; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00340E00; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00340DE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00340F18; } }
L_00340DE8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6004u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_00340F18; } }
    set32(c.r[5], 0u + 11u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340E00u); st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x00340E00u) [[unlikely]] return; }
L_00340E00:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6004u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00340F18; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 52u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340E24u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));  if (depth < kMaxDepth) unit_008E(c, 337u, depth + 1u); else { c.pc = 0x0033B920u; return; } if (c.pc != 0x00340E24u) [[unlikely]] return; }
L_00340E24:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340E34u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008F(c, 18u, depth + 1u); else { c.pc = 0x0033C490u; return; } if (c.pc != 0x00340E34u) [[unlikely]] return; }
L_00340E34:
    c.budget -= 1;
L_00340E38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340E40u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x00340E40u) [[unlikely]] return; }
L_00340E40:
    set32(c.r[3], 0u - 252u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[16].w[0] + 6000u), c.r[2].w[0]);  if (t) { goto L_00340EF0; } }
    set32(c.r[3], 0u - 254u);
    c.budget -= 1;
L_00340E50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 253u);  if (t) { goto L_00340EC0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00340EB0; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00340F18; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00340E80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00340F08; } }
    c.budget -= 1;
L_00340E80:
    set32(c.r[2], 0u + 5u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u + 7u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 22u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340EA0u); st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x00340EA0u) [[unlikely]] return; }
L_00340EA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340EA8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0090(c, 313u, depth + 1u); else { c.pc = 0x00342970u; return; } if (c.pc != 0x00340EA8u) [[unlikely]] return; }
L_00340EA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00340F18; } }
L_00340EB0:
    set32(c.r[3], 0u + 7u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00340F18; } }
L_00340EC0:
    set32(c.r[2], 0u + 5u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u + 6u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 36u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340EE0u); st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x00340EE0u) [[unlikely]] return; }
L_00340EE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340EE8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0090(c, 313u, depth + 1u); else { c.pc = 0x00342970u; return; } if (c.pc != 0x00340EE8u) [[unlikely]] return; }
L_00340EE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00340F18; } }
L_00340EF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340EFCu); set32(c.r[5], 0u + 15u);  if (depth < kMaxDepth) unit_008F(c, 402u, depth + 1u); else { c.pc = 0x0033FC40u; return; } if (c.pc != 0x00340EFCu) [[unlikely]] return; }
L_00340EFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00340F18; } }
    c.budget -= 1;
L_00340F08:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340F14u); set32(c.r[5], 0u + 52u);  if (depth < kMaxDepth) unit_008F(c, 402u, depth + 1u); else { c.pc = 0x0033FC40u; return; } if (c.pc != 0x00340F14u) [[unlikely]] return; }
L_00340F14:
    c.budget -= 1;
L_00340F18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00340F30:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x003401C0u | kUnwind; return; } goto L_003401C0; }
L_00340F40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00340FA8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00340F88; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00340F78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00340FF0; } }
L_00340F78:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340F88u); set32(c.r[5], 0u + 37u);  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x00340F88u) [[unlikely]] return; }
L_00340F88:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6004u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00340FF0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340FA8u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 44u)));  if (depth < kMaxDepth) unit_008F(c, 51u, depth + 1u); else { c.pc = 0x0033CCA0u; return; } if (c.pc != 0x00340FA8u) [[unlikely]] return; }
L_00340FA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340FB0u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x00340FB0u) [[unlikely]] return; }
L_00340FB0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[16].w[0] + 6000u), c.r[2].w[0]);  if (t) { goto L_00340FF0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00340FD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00340FE0; } }
    c.budget -= 1;
L_00340FD0:
    set32(c.r[3], 0u + 7u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00340FF0; } }
L_00340FE0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340FECu); set32(c.r[5], 0u + 38u);  if (depth < kMaxDepth) unit_008F(c, 402u, depth + 1u); else { c.pc = 0x0033FC40u; return; } if (c.pc != 0x00340FECu) [[unlikely]] return; }
L_00340FEC:
    c.budget -= 1;
L_00340FF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00341000:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00341258; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 5088u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00340000u < 16384u) { entry = entries_0090[(t - 0x00340000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00341040:
    set32(c.r[3], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341050u); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x00341050u) [[unlikely]] return; }
L_00341050:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6004u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00341258; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 52u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341074u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));  if (depth < kMaxDepth) unit_008E(c, 337u, depth + 1u); else { c.pc = 0x0033B920u; return; } if (c.pc != 0x00341074u) [[unlikely]] return; }
L_00341074:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341080u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_008F(c, 58u, depth + 1u); else { c.pc = 0x0033CDC0u; return; } if (c.pc != 0x00341080u) [[unlikely]] return; }
L_00341080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341088u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x00341088u) [[unlikely]] return; }
L_00341088:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[16].w[0] + 6000u), c.r[2].w[0]);  if (t) { goto L_00341258; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003410A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003410F8; } }
    c.budget -= 1;
L_003410A8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[17], c.r[16].w[0] + 5680u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 52u)));
    c.budget -= 5;
L_003410BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003410C4u); set32(c.r[4], c.r[17].w[0] + 52u);  if (depth < kMaxDepth) unit_0090(c, 298u, depth + 1u); else { c.pc = 0x00342790u; return; } if (c.pc != 0x003410C4u) [[unlikely]] return; }
L_003410C4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003410D0u); set32(c.r[4], c.r[17].w[0] + 85u);  if (depth < kMaxDepth) unit_0090(c, 302u, depth + 1u); else { c.pc = 0x003427F0u; return; } if (c.pc != 0x003410D0u) [[unlikely]] return; }
L_003410D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003410D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 369u, depth + 1u); else { c.pc = 0x003430C0u; return; } if (c.pc != 0x003410D8u) [[unlikely]] return; }
L_003410D8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003410E4u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));  if (depth < kMaxDepth) unit_008E(c, 337u, depth + 1u); else { c.pc = 0x0033B920u; return; } if (c.pc != 0x003410E4u) [[unlikely]] return; }
L_003410E4:
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003410F0u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 44u)));  if (depth < kMaxDepth) unit_008F(c, 28u, depth + 1u); else { c.pc = 0x0033C7E0u; return; } if (c.pc != 0x003410F0u) [[unlikely]] return; }
L_003410F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00341258; } }
L_003410F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341104u); set32(c.r[5], 0u + 26u);  if (depth < kMaxDepth) unit_008F(c, 402u, depth + 1u); else { c.pc = 0x0033FC40u; return; } if (c.pc != 0x00341104u) [[unlikely]] return; }
L_00341104:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00341258; } }
    c.budget -= 1;
L_00341110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341118u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x00341118u) [[unlikely]] return; }
L_00341118:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[16].w[0] + 6000u), c.r[2].w[0]);  if (t) { goto L_00341258; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00341138; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003410F8u | kUnwind; return; } goto L_003410F8; } }
    c.budget -= 1;
L_00341138:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 44u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341150u); set32(c.r[5], c.r[16].w[0] + 5680u);  if (depth < kMaxDepth) unit_008E(c, 370u, depth + 1u); else { c.pc = 0x0033BF20u; return; } if (c.pc != 0x00341150u) [[unlikely]] return; }
L_00341150:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00341258; } }
L_00341158:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341160u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x00341160u) [[unlikely]] return; }
L_00341160:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[16].w[0] + 6000u), c.r[2].w[0]);  if (t) { goto L_00341258; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00341180; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003410F8u | kUnwind; return; } goto L_003410F8; } }
    c.budget -= 1;
L_00341180:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034118Cu); set32(c.r[5], c.r[16].w[0] + 5680u);  if (depth < kMaxDepth) unit_0090(c, 406u, depth + 1u); else { c.pc = 0x00343550u; return; } if (c.pc != 0x0034118Cu) [[unlikely]] return; }
L_0034118C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003410F8u | kUnwind; return; } goto L_003410F8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 44u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003411B0u); set32(c.r[6], c.r[16].w[0] + 5680u);  if (depth < kMaxDepth) unit_008E(c, 357u, depth + 1u); else { c.pc = 0x0033BC20u; return; } if (c.pc != 0x003411B0u) [[unlikely]] return; }
L_003411B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00341258; } }
L_003411B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003411C0u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x003411C0u) [[unlikely]] return; }
L_003411C0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[16].w[0] + 6000u), c.r[2].w[0]);  if (t) { goto L_00341258; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003411E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003410F8u | kUnwind; return; } goto L_003410F8; } }
    c.budget -= 1;
L_003411E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 48u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 49u)));
    set32(c.r[6], c.r[16].w[0] + 5680u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 52u)));
    set32(c.r[4], 0u + 35u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] + 60u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 52u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], c.r[2].w[0] + 80u);
    c.budget -= 16;
L_00341220:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00341220u | kUnwind; return; } goto L_00341220; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341248u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 306u, depth + 1u); else { c.pc = 0x00342850u; return; } if (c.pc != 0x00341248u) [[unlikely]] return; }
L_00341248:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341254u); set32(c.r[5], 0u + 25u);  if (depth < kMaxDepth) unit_008F(c, 402u, depth + 1u); else { c.pc = 0x0033FC40u; return; } if (c.pc != 0x00341254u) [[unlikely]] return; }
L_00341254:
    st8((c.r[16].w[0] + 23u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00341258:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00341270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_003412D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003412A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00341318; } }
L_003412A0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6004u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00341318; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 6000u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003412C0; } }
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_003412C0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_003412D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003412D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 309u, depth + 1u); else { c.pc = 0x003428A0u; return; } if (c.pc != 0x003412D8u) [[unlikely]] return; }
L_003412D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00341318; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 6000u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00341300; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003412F4u);  if (depth < kMaxDepth) unit_008F(c, 403u, depth + 1u); else { c.pc = 0x0033FC50u; return; } if (c.pc != 0x003412F4u) [[unlikely]] return; }
L_003412F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00341318; } }
    c.budget -= 1;
L_00341300:
    set32(c.r[3], 0u + 9u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341314u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x00341314u) [[unlikely]] return; }
L_00341314:
    c.budget -= 1;
L_00341318:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00341330:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 6004u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], 0u + 6u);  if (t) { goto L_00341358; } }
    set32(c.r[3], 0u - 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 6208u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 46u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 53u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_00341358:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00341360:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003414A0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00341438; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003413B0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003413A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003414D0; } }
L_003413A0:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003413B0u); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x003413B0u) [[unlikely]] return; }
L_003413B0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6004u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003414D0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[5], c.r[16].w[0] + 5680u);
    set32(c.r[4], 0u + 35u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 52u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[6], c.r[2].w[0] + 80u);
    c.budget -= 13;
L_003413F0:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003413F0u | kUnwind; return; } goto L_003413F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341418u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 365u, depth + 1u); else { c.pc = 0x00343060u; return; } if (c.pc != 0x00341418u) [[unlikely]] return; }
L_00341418:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341424u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));  if (depth < kMaxDepth) unit_008E(c, 337u, depth + 1u); else { c.pc = 0x0033B920u; return; } if (c.pc != 0x00341424u) [[unlikely]] return; }
L_00341424:
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341430u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 44u)));  if (depth < kMaxDepth) unit_008F(c, 28u, depth + 1u); else { c.pc = 0x0033C7E0u; return; } if (c.pc != 0x00341430u) [[unlikely]] return; }
L_00341430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341438u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_008F(c, 50u, depth + 1u); else { c.pc = 0x0033CC80u; return; } if (c.pc != 0x00341438u) [[unlikely]] return; }
L_00341438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341440u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x00341440u) [[unlikely]] return; }
L_00341440:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[16].w[0] + 6000u), c.r[2].w[0]);  if (t) { goto L_003414D0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00341460; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00341488; } }
    c.budget -= 1;
L_00341460:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 25u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034147Cu); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x0034147Cu) [[unlikely]] return; }
L_0034147C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003414D0; } }
    c.budget -= 1;
L_00341488:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341494u); set32(c.r[5], 0u + 26u);  if (depth < kMaxDepth) unit_008F(c, 402u, depth + 1u); else { c.pc = 0x0033FC40u; return; } if (c.pc != 0x00341494u) [[unlikely]] return; }
L_00341494:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003414D0; } }
    c.budget -= 1;
L_003414A0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6004u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003414D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003414B4u);  if (depth < kMaxDepth) unit_0090(c, 309u, depth + 1u); else { c.pc = 0x003428A0u; return; } if (c.pc != 0x003414B4u) [[unlikely]] return; }
L_003414B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003414D0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003414CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x003414CCu) [[unlikely]] return; }
L_003414CC:
    c.budget -= 1;
L_003414D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003414E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00341520; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00341510; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003415D0; } }
L_00341510:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341520u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 44u)));  if (depth < kMaxDepth) unit_008E(c, 353u, depth + 1u); else { c.pc = 0x0033BB50u; return; } if (c.pc != 0x00341520u) [[unlikely]] return; }
L_00341520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341528u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x00341528u) [[unlikely]] return; }
L_00341528:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[16].w[0] + 6000u), c.r[2].w[0]);  if (t) { goto L_003415D0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00341548; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003415B8; } }
    c.budget -= 1;
L_00341548:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 6208u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[16].w[0] + 46u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[16].w[0] + 60u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22548u)));
    set32(c.r[5], c.r[5].w[0] + 10080u);
    set32(c.r[6], 0u + 20u);
    st8((c.r[16].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22552u)));
    st8((c.r[16].w[0] + 49u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22556u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341580u); st8((c.r[16].w[0] + 50u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00341580u) [[unlikely]] return; }
L_00341580:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[16].w[0] + 80u);
    set32(c.r[5], c.r[5].w[0] + 4480u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341594u); set32(c.r[6], 0u + 5600u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00341594u) [[unlikely]] return; }
L_00341594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034159Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 59u, depth + 1u); else { c.pc = 0x003447C0u; return; } if (c.pc != 0x0034159Cu) [[unlikely]] return; }
L_0034159C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003415A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 67u, depth + 1u); else { c.pc = 0x003448A0u; return; } if (c.pc != 0x003415A4u) [[unlikely]] return; }
L_003415A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003415ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 56u, depth + 1u); else { c.pc = 0x00340610u; return; } if (c.pc != 0x003415ACu) [[unlikely]] return; }
L_003415AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003415D0; } }
    c.budget -= 1;
L_003415B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003415C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 59u, depth + 1u); else { c.pc = 0x003447C0u; return; } if (c.pc != 0x003415C0u) [[unlikely]] return; }
L_003415C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003415C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 67u, depth + 1u); else { c.pc = 0x003448A0u; return; } if (c.pc != 0x003415C8u) [[unlikely]] return; }
L_003415C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003415D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 403u, depth + 1u); else { c.pc = 0x0033FC50u; return; } if (c.pc != 0x003415D0u) [[unlikely]] return; }
L_003415D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003415E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 18640u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00340000u < 16384u) { entry = entries_0090[(t - 0x00340000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00341600:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] + 16320u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 10112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341624u); st8((c.r[1].w[0] + 10158u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0090(c, 418u, depth + 1u); else { c.pc = 0x003438C0u; return; } if (c.pc != 0x00341624u) [[unlikely]] return; }
L_00341624:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], 0u + 3u);
    st8((c.r[1].w[0] + 10114u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] + 10112u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 11u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] + 10113u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00341650:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_00341690:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_003416C8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003416B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003416F0; } }
L_003416B0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 3u);
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 6208u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[28].w[0] - 22564u), 0u);
    c.budget -= 6;
L_003416C8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_003416F0; } }
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_003416F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00341700:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003417B0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00341788; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00341758; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00341740; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00341A50; } }
L_00341740:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], 0u + 53u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341754u); st8((c.r[16].w[0] + 44u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x00341754u) [[unlikely]] return; }
L_00341754:
    c.budget -= 1;
L_00341758:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6004u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00341A50; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 44u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 6008u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 6009u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 6010u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 6011u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 6012u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
L_00341788:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034179Cu); st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0090(c, 188u, depth + 1u); else { c.pc = 0x00341650u; return; } if (c.pc != 0x0034179Cu) [[unlikely]] return; }
L_0034179C:
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003417B0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_008F(c, 18u, depth + 1u); else { c.pc = 0x0033C490u; return; } if (c.pc != 0x003417B0u) [[unlikely]] return; }
L_003417B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003417B8u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x003417B8u) [[unlikely]] return; }
L_003417B8:
    set32(c.r[3], 0u - 252u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[16].w[0] + 6000u), c.r[2].w[0]);  if (t) { goto L_003418A0; } }
    set32(c.r[3], 0u - 253u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 254u);  if (t) { goto L_00341880; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00341880; } }
    set32(c.r[3], 0u - 255u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 1u);  if (t) { goto L_00341860; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00341858; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00341800; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003418C0; } }
    c.budget -= 1;
L_00341800:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034180Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0090(c, 385u, depth + 1u); else { c.pc = 0x00343310u; return; } if (c.pc != 0x0034180Cu) [[unlikely]] return; }
L_0034180C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u - 256u);  if (t) { goto L_00341820; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 6000u), c.r[3].w[0]);  if (t) { goto L_003418C0; } }
    c.budget -= 1;
L_00341820:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 44u)));
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 6008u));
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 6008u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341850u); set32(c.r[4], c.r[2].w[0] + 5984u);  if (depth < kMaxDepth) unit_008F(c, 86u, depth + 1u); else { c.pc = 0x0033D450u; return; } if (c.pc != 0x00341850u) [[unlikely]] return; }
L_00341850:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003418E0; } }
L_00341858:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00341A50; } }
L_00341860:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 44u)));
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6009u));
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 6009u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003418E0; } }
L_00341880:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 44u)));
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6010u));
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 6010u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003418E0; } }
L_003418A0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 44u)));
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6011u));
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 6011u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003418E0; } }
L_003418C0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 44u)));
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6012u));
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 6012u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_003418E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[3].w[0] + 1u);  if (t) { goto L_00341900; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 44u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00341A50; } }
    c.budget -= 1;
L_00341900:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 6012u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00341960; } }
    c.budget -= 1;
L_00341910:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00341948; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341928u); set32(c.r[5], 0u + 59u);  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x00341928u) [[unlikely]] return; }
L_00341928:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 6012u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341940u); st8((c.r[16].w[0] + 44u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0090(c, 306u, depth + 1u); else { c.pc = 0x00342850u; return; } if (c.pc != 0x00341940u) [[unlikely]] return; }
L_00341940:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00341A30; } }
L_00341948:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341954u); set32(c.r[5], 0u + 60u);  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x00341954u) [[unlikely]] return; }
L_00341954:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00341A30; } }
    c.budget -= 1;
L_00341960:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6008u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_00341978; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00341A50; } }
L_00341978:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 6009u));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003419A0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341994u); set32(c.r[5], 0u + 56u);  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x00341994u) [[unlikely]] return; }
L_00341994:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00341A30; } }
    c.budget -= 1;
L_003419A0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 6010u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_003419E0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003419BCu); st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x003419BCu) [[unlikely]] return; }
L_003419BC:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 6010u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003419D4u); st8((c.r[16].w[0] + 44u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0090(c, 306u, depth + 1u); else { c.pc = 0x00342850u; return; } if (c.pc != 0x003419D4u) [[unlikely]] return; }
L_003419D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00341A50; } }
    c.budget -= 1;
L_003419E0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 6011u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00341910u | kUnwind; return; } goto L_00341910; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00341A20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003419FCu); set32(c.r[5], 0u + 57u);  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x003419FCu) [[unlikely]] return; }
L_003419FC:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 6011u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341A14u); st8((c.r[16].w[0] + 44u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0090(c, 306u, depth + 1u); else { c.pc = 0x00342850u; return; } if (c.pc != 0x00341A14u) [[unlikely]] return; }
L_00341A14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00341A30; } }
    c.budget -= 1;
L_00341A20:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341A2Cu); set32(c.r[5], 0u + 58u);  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x00341A2Cu) [[unlikely]] return; }
L_00341A2C:
    c.budget -= 1;
L_00341A30:
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341A50u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0090(c, 313u, depth + 1u); else { c.pc = 0x00342970u; return; } if (c.pc != 0x00341A50u) [[unlikely]] return; }
L_00341A50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00341A60:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[4].w[0] + 6008u));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00341A98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 44u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00341B10; } }
    c.budget -= 1;
L_00341A98:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00341AB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00341B10; } }
    c.budget -= 1;
L_00341AB0:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[29].w[0] + 80u);
    c.budget -= 4;
L_00341AC0:
    c.r[6].d[0] = ld16((c.r[18].w[0] + 5990u));
    c.r[7].d[0] = ld8((c.r[18].w[0] + 5989u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[8].d[0] = ld8((c.r[18].w[0] + 5988u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = ld8((c.r[18].w[0] + 5987u));
    c.r[10].d[0] = ld8((c.r[18].w[0] + 5986u));
    c.r[11].d[0] = ld8((c.r[18].w[0] + 5985u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341AE8u); set32(c.r[5], c.r[5].w[0] + 5120u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x00341AE8u) [[unlikely]] return; }
    goto L_00341AE8;
L_00341AE4:
    set32(c.r[5], c.r[5].w[0] + 5120u);
    c.budget -= 1;
L_00341AE8:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 8u);
    c.r[2].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00341AC0u | kUnwind; return; } goto L_00341AC0; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341B08u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x00341B08u) [[unlikely]] return; }
L_00341B08:
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    st8((c.r[16].w[0] + 44u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00341B10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341B18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 188u, depth + 1u); else { c.pc = 0x00341650u; return; } if (c.pc != 0x00341B18u) [[unlikely]] return; }
L_00341B18:
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341B24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 405u, depth + 1u); else { c.pc = 0x00343530u; return; } if (c.pc != 0x00341B24u) [[unlikely]] return; }
L_00341B24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341B2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 306u, depth + 1u); else { c.pc = 0x00342850u; return; } if (c.pc != 0x00341B2Cu) [[unlikely]] return; }
L_00341B2C:
    set32(c.r[4], 0u + 4u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], 0u + 54u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341B4Cu); st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x00341B4Cu) [[unlikely]] return; }
L_00341B4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00341B70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00341BB8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00341BA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00341C10; } }
L_00341BA0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6004u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00341C10; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_00341BB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341BC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 314u, depth + 1u); else { c.pc = 0x00342980u; return; } if (c.pc != 0x00341BC0u) [[unlikely]] return; }
L_00341BC0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00341C00; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00341BE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00341C10; } }
    c.budget -= 1;
L_00341BE0:
    set32(c.r[3], 0u + 5u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341BF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x00341BF4u) [[unlikely]] return; }
L_00341BF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00341C10; } }
    c.budget -= 1;
L_00341C00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00341C10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00341C20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 10u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00341D00; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00341CD0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00341C88; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00341C60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00341D18; } }
L_00341C60:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6004u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] + 1u);  if (t) { goto L_00341D18; } }
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6008u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00341C88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00341D18; } }
L_00341C88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341C90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 309u, depth + 1u); else { c.pc = 0x003428A0u; return; } if (c.pc != 0x00341C90u) [[unlikely]] return; }
L_00341C90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);  if (t) { goto L_00341D18; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8617u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00341CE0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341CBCu); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0090(c, 307u, depth + 1u); else { c.pc = 0x00342870u; return; } if (c.pc != 0x00341CBCu) [[unlikely]] return; }
L_00341CBC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341CC8u); set32(c.r[5], 0u + 55u);  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x00341CC8u) [[unlikely]] return; }
L_00341CC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341CD0u);  if (depth < kMaxDepth) unit_008F(c, 80u, depth + 1u); else { c.pc = 0x0033D310u; return; } if (c.pc != 0x00341CD0u) [[unlikely]] return; }
L_00341CD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341CD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 309u, depth + 1u); else { c.pc = 0x003428A0u; return; } if (c.pc != 0x00341CD8u) [[unlikely]] return; }
L_00341CD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00341D18; } }
L_00341CE0:
    set32(c.r[3], 0u + 5u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341CF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x00341CF4u) [[unlikely]] return; }
L_00341CF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00341D18; } }
    c.budget -= 1;
L_00341D00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341D08u);  if (depth < kMaxDepth) unit_0091(c, 72u, depth + 1u); else { c.pc = 0x00344910u; return; } if (c.pc != 0x00341D08u) [[unlikely]] return; }
L_00341D08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00341D18; } }
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00341D18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00341D30:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 6004u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], 0u + 6u);  if (t) { goto L_00341D50; } }
    set32(c.r[3], 0u - 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 6208u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_00341D50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00341D60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 18688u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00340000u < 16384u) { entry = entries_0090[(t - 0x00340000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00341D80:
    set32(c.r[3], 0u + 4u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033EA20u | kUnwind; return; } [[clang::musttail]] return unit_008F(c, 280u, depth); }
L_00341D90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00341DF0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00341DC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00341E38; } }
    c.budget -= 1;
L_00341DC0:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 4u);
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], 0u - 1u);
    st8((c.r[16].w[0] + 6208u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 46u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 22560u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341DECu); st8((c.r[16].w[0] + 44u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0091(c, 59u, depth + 1u); else { c.pc = 0x003447C0u; return; } if (c.pc != 0x00341DECu) [[unlikely]] return; }
L_00341DEC:
    c.budget -= 1;
L_00341DF0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00341E38; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00341E28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00341E30; } }
    c.budget -= 1;
L_00341E28:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00341E30:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00341E38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00341E50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00341ED8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00341E98; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00341E88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00341FB0; } }
L_00341E88:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341E98u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x00341E98u) [[unlikely]] return; }
L_00341E98:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6004u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00341FB0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[6].d[0] = c.r[2].d[0] | 45712ull;
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341EC4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00341EC4u) [[unlikely]] return; }
L_00341EC4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341ED4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_008F(c, 18u, depth + 1u); else { c.pc = 0x0033C490u; return; } if (c.pc != 0x00341ED4u) [[unlikely]] return; }
L_00341ED4:
    c.budget -= 1;
L_00341ED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341EE0u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x00341EE0u) [[unlikely]] return; }
L_00341EE0:
    set32(c.r[3], 0u - 252u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[16].w[0] + 6000u), c.r[2].w[0]);  if (t) { goto L_00341F88; } }
    set32(c.r[3], 0u - 253u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 254u);  if (t) { goto L_00341F88; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00341F88; } }
    set32(c.r[3], 0u - 255u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 1u);  if (t) { goto L_00341F70; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00341FB0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00341F28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00341FA0; } }
    c.budget -= 1;
L_00341F28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341F30u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 44u)));  if (depth < kMaxDepth) unit_008F(c, 81u, depth + 1u); else { c.pc = 0x0033D320u; return; } if (c.pc != 0x00341F30u) [[unlikely]] return; }
L_00341F30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u - 256u);  if (t) { goto L_00341F40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 6000u), c.r[3].w[0]);  if (t) { goto L_00341F88; } }
L_00341F40:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341F4Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0090(c, 385u, depth + 1u); else { c.pc = 0x00343310u; return; } if (c.pc != 0x00341F4Cu) [[unlikely]] return; }
L_00341F4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u - 256u);  if (t) { goto L_00341F60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 6000u), c.r[3].w[0]);  if (t) { goto L_00341FA0; } }
    c.budget -= 1;
L_00341F60:
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00341FB0; } }
L_00341F70:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341F7Cu); set32(c.r[5], 0u + 40u);  if (depth < kMaxDepth) unit_0090(c, 230u, depth + 1u); else { c.pc = 0x00341D80u; return; } if (c.pc != 0x00341F7Cu) [[unlikely]] return; }
L_00341F7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00341FB0; } }
    c.budget -= 1;
L_00341F88:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341F94u); set32(c.r[5], 0u + 41u);  if (depth < kMaxDepth) unit_0090(c, 230u, depth + 1u); else { c.pc = 0x00341D80u; return; } if (c.pc != 0x00341F94u) [[unlikely]] return; }
L_00341F94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00341FB0; } }
    c.budget -= 1;
L_00341FA0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341FACu); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_0090(c, 230u, depth + 1u); else { c.pc = 0x00341D80u; return; } if (c.pc != 0x00341FACu) [[unlikely]] return; }
L_00341FAC:
    c.budget -= 1;
L_00341FB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00341FC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00342040; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00342008; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00341FF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003420F0; } }
L_00341FF8:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342008u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x00342008u) [[unlikely]] return; }
L_00342008:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6004u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003420F0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342030u); set32(c.r[6], 0u + 7148u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00342030u) [[unlikely]] return; }
L_00342030:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342040u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_008F(c, 18u, depth + 1u); else { c.pc = 0x0033C490u; return; } if (c.pc != 0x00342040u) [[unlikely]] return; }
L_00342040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342048u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x00342048u) [[unlikely]] return; }
L_00342048:
    set32(c.r[3], 0u - 252u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[16].w[0] + 6000u), c.r[2].w[0]);  if (t) { goto L_003420C8; } }
    set32(c.r[3], 0u - 253u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 254u);  if (t) { goto L_003420C8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003420C8; } }
    set32(c.r[3], 0u - 255u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 1u);  if (t) { goto L_003420B0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003420F0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00342090; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003420E0; } }
    c.budget -= 1;
L_00342090:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034209Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0090(c, 385u, depth + 1u); else { c.pc = 0x00343310u; return; } if (c.pc != 0x0034209Cu) [[unlikely]] return; }
L_0034209C:
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003420F0; } }
    c.budget -= 1;
L_003420B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003420BCu); set32(c.r[5], 0u + 40u);  if (depth < kMaxDepth) unit_0090(c, 230u, depth + 1u); else { c.pc = 0x00341D80u; return; } if (c.pc != 0x003420BCu) [[unlikely]] return; }
L_003420BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003420F0; } }
    c.budget -= 1;
L_003420C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003420D4u); set32(c.r[5], 0u + 41u);  if (depth < kMaxDepth) unit_0090(c, 230u, depth + 1u); else { c.pc = 0x00341D80u; return; } if (c.pc != 0x003420D4u) [[unlikely]] return; }
L_003420D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003420F0; } }
    c.budget -= 1;
L_003420E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003420ECu); set32(c.r[5], 0u + 49u);  if (depth < kMaxDepth) unit_0090(c, 230u, depth + 1u); else { c.pc = 0x00341D80u; return; } if (c.pc != 0x003420ECu) [[unlikely]] return; }
L_003420EC:
    c.budget -= 1;
L_003420F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00342100:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00342198; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00342168; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00342138; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00342238; } }
L_00342138:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00342160; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342158u); set32(c.r[5], 0u + 44u);  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x00342158u) [[unlikely]] return; }
L_00342158:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00342168; } }
L_00342160:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342168u); set32(c.r[5], 0u + 45u);  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x00342168u) [[unlikely]] return; }
L_00342168:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6004u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00342238; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342188u); st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0090(c, 369u, depth + 1u); else { c.pc = 0x003430C0u; return; } if (c.pc != 0x00342188u) [[unlikely]] return; }
L_00342188:
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342194u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 44u)));  if (depth < kMaxDepth) unit_008F(c, 28u, depth + 1u); else { c.pc = 0x0033C7E0u; return; } if (c.pc != 0x00342194u) [[unlikely]] return; }
L_00342194:
    c.budget -= 1;
L_00342198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003421A0u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x003421A0u) [[unlikely]] return; }
L_003421A0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[16].w[0] + 6000u), c.r[2].w[0]);  if (t) { goto L_00342238; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003421C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00342208; } }
    c.budget -= 1;
L_003421C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003421CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0090(c, 385u, depth + 1u); else { c.pc = 0x00343310u; return; } if (c.pc != 0x003421CCu) [[unlikely]] return; }
L_003421CC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003421F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003421E4u); set32(c.r[5], 0u + 46u);  if (depth < kMaxDepth) unit_0090(c, 230u, depth + 1u); else { c.pc = 0x00341D80u; return; } if (c.pc != 0x003421E4u) [[unlikely]] return; }
L_003421E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00342238; } }
    c.budget -= 1;
L_003421F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003421FCu); set32(c.r[5], 0u + 47u);  if (depth < kMaxDepth) unit_0090(c, 230u, depth + 1u); else { c.pc = 0x00341D80u; return; } if (c.pc != 0x003421FCu) [[unlikely]] return; }
L_003421FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00342238; } }
    c.budget -= 1;
L_00342208:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00342228; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342220u); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_0090(c, 230u, depth + 1u); else { c.pc = 0x00341D80u; return; } if (c.pc != 0x00342220u) [[unlikely]] return; }
L_00342220:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00342238; } }
L_00342228:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342234u); set32(c.r[5], 0u + 49u);  if (depth < kMaxDepth) unit_0090(c, 230u, depth + 1u); else { c.pc = 0x00341D80u; return; } if (c.pc != 0x00342234u) [[unlikely]] return; }
L_00342234:
    c.budget -= 1;
L_00342238:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00342250:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003422A0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00342280; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00342320; } }
L_00342280:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6004u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00342320; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], 0u + 600u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_003422A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 6000u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003422C8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00342308; } }
L_003422C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003422D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 309u, depth + 1u); else { c.pc = 0x003428A0u; return; } if (c.pc != 0x003422D0u) [[unlikely]] return; }
L_003422D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00342320; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00342308; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 6000u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);  if (t) { goto L_00342308; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[1].w[0] - 8617u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 23u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_00342308:
    set32(c.r[3], 0u + 5u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034231Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x0034231Cu) [[unlikely]] return; }
L_0034231C:
    c.budget -= 1;
L_00342320:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00342330:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 6004u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], 0u + 6u);  if (t) { goto L_00342350; } }
    set32(c.r[3], 0u - 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 6208u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_00342350:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00342360:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 18720u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00340000u < 16384u) { entry = entries_0090[(t - 0x00340000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00342380:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 11u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 7;
    { const bool t = c.r[8].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00342538; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_00342528; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[3].d[0]; set32(c.r[7], 0u + 3u);  if (t) { goto L_003424D8; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[7].d[0]; set32(c.r[6], 0u + 2u);  if (t) { goto L_003424C0; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[6].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_00342468; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[5].d[0];  if (t) { goto L_00342450; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_003423D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00342588; } }
L_003423D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 23u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_00342428; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[7].d[0];  if (t) { goto L_00342408; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00342408; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00342528; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00342528; } }
    c.budget -= 1;
L_00342408:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 42u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342420u); st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x00342420u) [[unlikely]] return; }
L_00342420:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00342438; } }
L_00342428:
    set32(c.r[5], 0u + 43u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342434u); st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x00342434u) [[unlikely]] return; }
L_00342434:
    c.budget -= 1;
L_00342438:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342444u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0090(c, 313u, depth + 1u); else { c.pc = 0x00342970u; return; } if (c.pc != 0x00342444u) [[unlikely]] return; }
L_00342444:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00342588; } }
    c.budget -= 1;
L_00342450:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6004u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00342588; } }
    set32(c.r[2], c.r[8].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_00342468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342470u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 314u, depth + 1u); else { c.pc = 0x00342980u; return; } if (c.pc != 0x00342470u) [[unlikely]] return; }
L_00342470:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003424A8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00342490; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00342588; } }
    c.budget -= 1;
L_00342490:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034249Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x0034249Cu) [[unlikely]] return; }
L_0034249C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00342528; } }
    c.budget -= 1;
L_003424A8:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 19u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003424B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 403u, depth + 1u); else { c.pc = 0x0033FC50u; return; } if (c.pc != 0x003424B8u) [[unlikely]] return; }
L_003424B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00342588; } }
L_003424C0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6004u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00342588; } }
    set32(c.r[2], c.r[8].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_003424D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003424E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 314u, depth + 1u); else { c.pc = 0x00342980u; return; } if (c.pc != 0x003424E0u) [[unlikely]] return; }
L_003424E0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00342518; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00342500; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00342588; } }
    c.budget -= 1;
L_00342500:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034250Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x0034250Cu) [[unlikely]] return; }
L_0034250C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00342528; } }
L_00342518:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342524u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008F(c, 280u, depth + 1u); else { c.pc = 0x0033EA20u; return; } if (c.pc != 0x00342524u) [[unlikely]] return; }
L_00342524:
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00342528:
    set32(c.r[3], 0u + 11u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 10u);
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00342538:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00342588; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00342570; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034256Cu);  if (depth < kMaxDepth) unit_0049(c, 164u, depth + 1u); else { c.pc = 0x002251D0u; return; } if (c.pc != 0x0034256Cu) [[unlikely]] return; }
L_0034256C:
    c.budget -= 1;
L_00342570:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 17u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[3], 0u - c.r[3].w[0]);
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_00342588:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003425A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_003425CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003425C4u);  if (depth < kMaxDepth) unit_0049(c, 381u, depth + 1u); else { c.pc = 0x002276D0u; return; } if (c.pc != 0x003425C4u) [[unlikely]] return; }
L_003425C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003425D8; } }
L_003425CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003425D4u);  if (depth < kMaxDepth) unit_0049(c, 380u, depth + 1u); else { c.pc = 0x00227690u; return; } if (c.pc != 0x003425D4u) [[unlikely]] return; }
L_003425D4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003425D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003425E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_0034260C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342604u);  if (depth < kMaxDepth) unit_0049(c, 383u, depth + 1u); else { c.pc = 0x00227750u; return; } if (c.pc != 0x00342604u) [[unlikely]] return; }
L_00342604:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00342618; } }
L_0034260C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342614u);  if (depth < kMaxDepth) unit_0049(c, 382u, depth + 1u); else { c.pc = 0x00227730u; return; } if (c.pc != 0x00342614u) [[unlikely]] return; }
L_00342614:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00342618:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00342620:
    set32(c.r[4], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 630u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 630u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00342640:
    set32(c.r[4], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 630u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 630u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00342660:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 630u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 3ull;  c.pc = t; return; }
L_00342670:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { set32(c.r[5], 0u + 165u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00238E10u | kUnwind; return; } [[clang::musttail]] return unit_004E(c, 84u, depth); }
L_00342680:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { set32(c.r[5], 0u + 167u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00238E10u | kUnwind; return; } [[clang::musttail]] return unit_004E(c, 84u, depth); }
L_00342690:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { set32(c.r[5], 0u + 166u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00238E10u | kUnwind; return; } [[clang::musttail]] return unit_004E(c, 84u, depth); }
L_003426A0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { set32(c.r[5], 0u + 171u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00238E10u | kUnwind; return; } [[clang::musttail]] return unit_004E(c, 84u, depth); }
L_003426B0:
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 19u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 2672u);  if (t) { goto L_003426C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00342708; } }
L_003426C8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003426D0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003426F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00342708; } }
    c.budget -= 1;
L_003426F0:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 14336u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003426D0u | kUnwind; return; } goto L_003426D0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00342708:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00342710:
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[8], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 2;
L_00342718:
    set32(c.r[3], ld32((c.r[5].w[0] + 192u)));
    c.budget -= 1;
L_0034271C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[7], c.r[8].w[0] + 16u);  if (t) { goto L_00342768; } }
    set32(c.r[6], c.r[5].w[0] + 192u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_00342730:
    set32(c.r[3], ld32((c.r[8].w[0] + 2672u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00342758; } }
    set32(c.r[5], ld32((c.r[8].w[0] + 2676u)));
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00342758; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 52u), static_cast<std::uint8_t>(c.r[9].w[0]));  if (t) { goto L_00342788; } }
    c.budget -= 1;
L_00342758:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[3].d[0] = c.r[9].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 14336u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00342730u | kUnwind; return; } goto L_00342730; } }
L_00342768:
    set32(c.r[3], ld32((c.r[7].w[0] + 2488u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0] + 52u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00342788; } }
    st8((c.r[4].w[0] + 52u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00342788:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00342790:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[5].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003427B4u); set32(c.r[5], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_008F(c, 89u, depth + 1u); else { c.pc = 0x0033D4A0u; return; } if (c.pc != 0x003427B4u) [[unlikely]] return; }
L_003427B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 17700u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003427C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x003427C8u) [[unlikely]] return; }
L_003427C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003427D4u); set32(c.r[5], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x003427D4u) [[unlikely]] return; }
L_003427D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003427F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[5].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342814u); set32(c.r[5], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_008F(c, 89u, depth + 1u); else { c.pc = 0x0033D4A0u; return; } if (c.pc != 0x00342814u) [[unlikely]] return; }
L_00342814:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 17700u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342828u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00342828u) [[unlikely]] return; }
L_00342828:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342834u); set32(c.r[5], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x00342834u) [[unlikely]] return; }
L_00342834:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00342850:
    set32(c.r[3], ld32((c.r[28].w[0] - 22564u)));
    st8((c.r[4].w[0] + 47u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 22564u), c.r[3].w[0]);  c.pc = t; return; }
L_00342870:
    set32(c.r[3], ld32((c.r[28].w[0] - 22564u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 22560u), c.r[3].w[0]);  c.pc = t; return; }
L_00342880:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[5].w[0] - 8624u);
    set32(c.r[6], 0u + 64u);
    c.budget -= 6;
    { set32(c.r[4], c.r[2].w[0] + 634u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011A998u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 192u, depth); }
L_003428A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003428E8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003428C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00342950; } }
L_003428C8:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 6004u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00342950; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], 0u + 600u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
L_003428E8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 19u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00342920; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 14u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[4].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00342920; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00342958; } }
    c.budget -= 1;
L_00342920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342928u);  if (depth < kMaxDepth) unit_0090(c, 279u, depth + 1u); else { c.pc = 0x003425A0u; return; } if (c.pc != 0x00342928u) [[unlikely]] return; }
L_00342928:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00342940; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342938u);  if (depth < kMaxDepth) unit_0090(c, 282u, depth + 1u); else { c.pc = 0x003425E0u; return; } if (c.pc != 0x00342938u) [[unlikely]] return; }
L_00342938:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00342950; } }
L_00342940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342948u);  if (depth < kMaxDepth) unit_0090(c, 288u, depth + 1u); else { c.pc = 0x00342670u; return; } if (c.pc != 0x00342948u) [[unlikely]] return; }
L_00342948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00342958; } }
L_00342950:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00342958:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00342970:
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 21u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00342980:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00342AB8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003429D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003429B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00342AD0; } }
L_003429B8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 21u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00342AD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00342AD0; } }
    c.budget -= 1;
L_003429D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003429D8u);  if (depth < kMaxDepth) unit_0090(c, 279u, depth + 1u); else { c.pc = 0x003425A0u; return; } if (c.pc != 0x003429D8u) [[unlikely]] return; }
L_003429D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00342A00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003429E8u);  if (depth < kMaxDepth) unit_0090(c, 288u, depth + 1u); else { c.pc = 0x00342670u; return; } if (c.pc != 0x003429E8u) [[unlikely]] return; }
L_003429E8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 21u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00342AD0; } }
L_00342A00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342A08u);  if (depth < kMaxDepth) unit_0090(c, 282u, depth + 1u); else { c.pc = 0x003425E0u; return; } if (c.pc != 0x00342A08u) [[unlikely]] return; }
L_00342A08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00342A38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342A18u);  if (depth < kMaxDepth) unit_0090(c, 289u, depth + 1u); else { c.pc = 0x00342680u; return; } if (c.pc != 0x00342A18u) [[unlikely]] return; }
L_00342A18:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 21u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00342AD0; } }
L_00342A38:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00342A58; } }
    c.r[2].d[0] = c.r[4].d[0] | 2ull;
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
L_00342A58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342A60u); c.r[4].d[0] = c.r[4].d[0] & 255ull;  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x00342A60u) [[unlikely]] return; }
L_00342A60:
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[4].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00342A80; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 20u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00342AA0; } }
L_00342A80:
    c.r[2].d[0] = c.r[4].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00342AD0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 20u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00342AD0; } }
    c.budget -= 1;
L_00342AA0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342AB0u); st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0090(c, 290u, depth + 1u); else { c.pc = 0x00342690u; return; } if (c.pc != 0x00342AB0u) [[unlikely]] return; }
L_00342AB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00342AD0; } }
L_00342AB8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 21u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00342AD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 20u)));  if (t) { goto L_00342AD8; } }
    c.budget -= 1;
L_00342AD0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00342AD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00342AF0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 8624u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[6], 0u + 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], c.r[20].w[0] + 16u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342B28u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00342B28u) [[unlikely]] return; }
L_00342B28:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], c.r[19].w[0] + 64u);
    set32(c.r[6], 0u + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342B3Cu); set32(c.r[5], c.r[2].w[0] + 155u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00342B3Cu) [[unlikely]] return; }
L_00342B3C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[19].w[0] + 96u);
    set32(c.r[5], c.r[5].w[0] + 7472u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342B50u); set32(c.r[6], 0u + 1732u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00342B50u) [[unlikely]] return; }
L_00342B50:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[4], c.r[19].w[0] + 1828u);
    set32(c.r[5], c.r[5].w[0] + 8176u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342B64u); set32(c.r[6], 0u + 660u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00342B64u) [[unlikely]] return; }
L_00342B64:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], c.r[19].w[0] + 2492u);
    set32(c.r[6], 0u + 21u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342B78u); set32(c.r[5], c.r[2].w[0] + 113u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00342B78u) [[unlikely]] return; }
L_00342B78:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], c.r[19].w[0] + 2513u);
    set32(c.r[6], 0u + 21u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342B8Cu); set32(c.r[5], c.r[2].w[0] + 134u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00342B8Cu) [[unlikely]] return; }
L_00342B8C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], c.r[19].w[0] + 2534u);
    set32(c.r[6], 0u + 21u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342BA0u); set32(c.r[5], c.r[2].w[0] + 92u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00342BA0u) [[unlikely]] return; }
L_00342BA0:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
L_00342BB0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], c.r[16].w[0] + 2555u);
    set32(c.r[6], 0u + 21u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342BC8u); set32(c.r[5], c.r[2].w[0] + 201u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00342BC8u) [[unlikely]] return; }
L_00342BC8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 21u);
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 21u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00342BB0u | kUnwind; return; } goto L_00342BB0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[1].d[0] = 0ull | 45680ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00900000u);
    set32(c.r[4], c.r[20].w[0] + c.r[1].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1760u);
    set32(c.r[6], 0u + 32u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 285u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342C00u); st8((c.r[19].w[0] + 2639u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00342C00u) [[unlikely]] return; }
L_00342C00:
    c.r[1].d[0] = 0ull | 45712ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00E60000u);
    set32(c.r[4], c.r[20].w[0] + c.r[1].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342C14u); c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00342C14u) [[unlikely]] return; }
L_00342C14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00342C40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = c.r[2].d[0] | 45712ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342C64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00342C64u) [[unlikely]] return; }
L_00342C64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342C6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 321u, depth + 1u); else { c.pc = 0x00342AF0u; return; } if (c.pc != 0x00342C6Cu) [[unlikely]] return; }
L_00342C6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00342C80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[2].d[0] | 12288ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342CA0u); c.r[6].d[0] = c.r[2].d[0] | 45712ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00342CA0u) [[unlikely]] return; }
L_00342CA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342CACu); c.r[4].d[0] = c.r[2].d[0] | 12288ull;  if (depth < kMaxDepth) unit_0090(c, 321u, depth + 1u); else { c.pc = 0x00342AF0u; return; } if (c.pc != 0x00342CACu) [[unlikely]] return; }
L_00342CAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[5].d[0] = 0ull | 45680ull;
    c.r[4].d[0] = c.r[2].d[0] | 12288ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342CC0u); set32(c.r[6], 0u + 279u);  if (depth < kMaxDepth) unit_0090(c, 408u, depth + 1u); else { c.pc = 0x00343650u; return; } if (c.pc != 0x00342CC0u) [[unlikely]] return; }
L_00342CC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00342CD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00342CE0:
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { set32(c.r[6], 0u + 7148u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011AB50u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 201u, depth); }
L_00342CF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 18u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 18752u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00340000u < 16384u) { entry = entries_0090[(t - 0x00340000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00342D10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342D24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 321u, depth + 1u); else { c.pc = 0x00342AF0u; return; } if (c.pc != 0x00342D24u) [[unlikely]] return; }
L_00342D24:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull | 45680ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342D34u); set32(c.r[6], 0u + 279u);  if (depth < kMaxDepth) unit_0090(c, 408u, depth + 1u); else { c.pc = 0x00343650u; return; } if (c.pc != 0x00342D34u) [[unlikely]] return; }
L_00342D34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00342D50:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00342D10u | kUnwind; return; } goto L_00342D10; }
L_00342D60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.budget -= 3;
    { c.r[4].d[0] = c.r[2].d[0] | 12288ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00342D10u | kUnwind; return; } goto L_00342D10; }
L_00342D70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342D84u); c.r[4].d[0] = c.r[2].d[0] | 12288ull;  if (depth < kMaxDepth) unit_0090(c, 321u, depth + 1u); else { c.pc = 0x00342AF0u; return; } if (c.pc != 0x00342D84u) [[unlikely]] return; }
L_00342D84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01CF0000u);
    c.r[4].d[0] = c.r[3].d[0] | 57968ull;
    c.r[5].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342D9Cu); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00342D9Cu) [[unlikely]] return; }
L_00342D9C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01CD0000u);
    c.r[4].d[0] = c.r[3].d[0] | 58000ull;
    c.r[5].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342DB4u); c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00342DB4u) [[unlikely]] return; }
L_00342DB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[5].d[0] = 0ull | 45680ull;
    c.r[4].d[0] = c.r[2].d[0] | 12288ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342DC8u); set32(c.r[6], 0u + 279u);  if (depth < kMaxDepth) unit_0090(c, 408u, depth + 1u); else { c.pc = 0x00343650u; return; } if (c.pc != 0x00342DC8u) [[unlikely]] return; }
L_00342DC8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00342DE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[17], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 192u)));
    set32(c.r[5], c.r[5].w[0] << 11);
    set32(c.r[5], c.r[17].w[0] + c.r[5].w[0]);
    set32(c.r[16], c.r[5].w[0] + 2672u);
    c.r[2].d[0] = c.r[2].d[0] << 44;
    c.r[2].d[0] = c.r[2].d[0] >> 44;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 192u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], c.r[2].w[0] << 20);
    set32(c.r[2], ld32((c.r[3].w[0] + 192u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342E4Cu); st32((c.r[3].w[0] + 192u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x00342E4Cu) [[unlikely]] return; }
L_00342E4C:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], c.r[2].w[0] << 24);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 192u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[4].w[0] + 192u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 2504u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 192u)));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 6738u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342E90u); st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C4(c, 108u, depth + 1u); else { c.pc = 0x00411100u; return; } if (c.pc != 0x00342E90u) [[unlikely]] return; }
L_00342E90:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] - 6800u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342EA8u); set32(c.r[6], 0u + 14308u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00342EA8u) [[unlikely]] return; }
L_00342EA8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull | 45680ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342EB8u); set32(c.r[6], 0u + 279u);  if (depth < kMaxDepth) unit_0090(c, 408u, depth + 1u); else { c.pc = 0x00343650u; return; } if (c.pc != 0x00342EB8u) [[unlikely]] return; }
L_00342EB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00342ED0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] | 22528ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[4].w[0] + 28u)));
    c.r[1].d[0] = c.r[1].d[0] | 16ull;
    c.r[6].d[0] = c.r[2].d[0] | 16ull;
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342F10u); set32(c.r[16], c.r[18].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00342F10u) [[unlikely]] return; }
L_00342F10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342F24u); set32(c.r[6], 0u + 257u);  if (depth < kMaxDepth) unit_0090(c, 408u, depth + 1u); else { c.pc = 0x00343650u; return; } if (c.pc != 0x00342F24u) [[unlikely]] return; }
L_00342F24:
    c.r[15].d[0] = 0ull + 0ull;
    c.r[13].d[0] = 0ull + 0ull;
    c.r[12].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 2u);
    set32(c.r[7], 0u + 54u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 21u);
    set32(c.r[4], 0u + 22u);
    set32(c.r[3], 0u + 53u);
    set32(c.r[9], 0u + 29u);
    c.budget -= 11;
L_00342F50:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    set32(c.r[11], c.r[2].w[0] + c.r[13].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[15].w[0]);
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 116u)));
    set32(c.r[2], c.r[11].w[0] + c.r[10].w[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 120u)));
    c.budget -= 9;
    { const bool t = c.r[10].d[0] != c.r[9].d[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 128u)));  if (t) { goto L_00342F88; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[8].d[0];  if (t) { goto L_00342F88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[10], 0u + 51u);  if (t) { goto L_00342FF0; } }
    c.budget -= 1;
L_00342F88:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != c.r[7].d[0];  if (t) { goto L_00342F98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[10], 0u + 52u);  if (t) { goto L_00342FF0; } }
L_00342F98:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != c.r[6].d[0];  if (t) { goto L_00342FB0; } }
    c.budget -= 2;
    { const bool t = c.r[14].d[0] != c.r[5].d[0];  if (t) { goto L_00342FB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[10], 0u + 67u);  if (t) { goto L_00342FF0; } }
L_00342FB0:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != c.r[4].d[0];  if (t) { goto L_00342FC8; } }
    c.budget -= 2;
    { const bool t = c.r[14].d[0] != c.r[5].d[0];  if (t) { goto L_00342FC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[10], 0u + 68u);  if (t) { goto L_00342FF0; } }
L_00342FC8:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != c.r[3].d[0];  if (t) { goto L_00342FE0; } }
    c.budget -= 2;
    { const bool t = c.r[14].d[0] != 0ull;  if (t) { goto L_00342FE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[10], 0u + 69u);  if (t) { goto L_00342FF0; } }
L_00342FE0:
    c.r[2].d[0] = c.r[10].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00342FF0; } }
    set32(c.r[10], c.r[10].w[0] - 10u);
    c.budget -= 1;
L_00342FF0:
    st32((c.r[12].w[0] + 16u), c.r[10].w[0]);
    set32(c.r[15], c.r[15].w[0] + 1u);
    st32((c.r[12].w[0] + 32u), c.r[14].w[0]);
    c.r[2].d[0] = c.r[15].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[13], c.r[13].w[0] + 2u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[12], c.r[12].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00342F50u | kUnwind; return; } goto L_00342F50; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], c.r[16].w[0] + 52u);
    set32(c.r[5], c.r[17].w[0] + 5732u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343024u); st32((c.r[16].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00343024u) [[unlikely]] return; }
L_00343024:
    set32(c.r[5], c.r[17].w[0] + 5765u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343030u); set32(c.r[4], c.r[16].w[0] + 85u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00343030u) [[unlikely]] return; }
L_00343030:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 280u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343040u); set32(c.r[6], 0u + 257u);  if (depth < kMaxDepth) unit_0090(c, 408u, depth + 1u); else { c.pc = 0x00343650u; return; } if (c.pc != 0x00343040u) [[unlikely]] return; }
L_00343040:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00343060:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[1].d[0] = c.r[1].d[0] | 16ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[4].w[0] + 5680u);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[6], 0u + 280u);
    set32(c.r[16], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034308Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0034308Cu) [[unlikely]] return; }
L_0034308C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 280u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034309Cu); set32(c.r[6], 0u + 257u);  if (depth < kMaxDepth) unit_0090(c, 408u, depth + 1u); else { c.pc = 0x00343650u; return; } if (c.pc != 0x0034309Cu) [[unlikely]] return; }
L_0034309C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003430B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003430C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 18u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 18768u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00340000u < 16384u) { entry = entries_0090[(t - 0x00340000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003430E0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - c.r[2].w[0]);  c.pc = t; return; }
L_00343100:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[6], 0u + 279u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].d[0] = 0ull | 45680ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[4].w[0] + 28u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[17], c.r[18].w[0] + 16u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343140u); set32(c.r[16], c.r[18].w[0] + 2672u);  if (depth < kMaxDepth) unit_0090(c, 412u, depth + 1u); else { c.pc = 0x00343760u; return; } if (c.pc != 0x00343140u) [[unlikely]] return; }
L_00343140:
    c.r[4].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 2ull;
    st8((c.r[20].w[0] + 6007u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[20].w[0] + 6006u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00343188; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00343168; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003431F0; } }
    c.budget -= 1;
L_00343168:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034317Cu); c.r[6].d[0] = c.r[2].d[0] | 45712ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0034317Cu) [[unlikely]] return; }
L_0034317C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343184u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 321u, depth + 1u); else { c.pc = 0x00342AF0u; return; } if (c.pc != 0x00343184u) [[unlikely]] return; }
L_00343184:
    c.budget -= 1;
L_00343188:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00343190:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003431B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003431A4u);  if (depth < kMaxDepth) unit_0090(c, 370u, depth + 1u); else { c.pc = 0x003430E0u; return; } if (c.pc != 0x003431A4u) [[unlikely]] return; }
L_003431A4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003431B8; } }
    c.budget -= 1;
L_003431B0:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 2;
L_003431B8:
    set32(c.r[4], c.r[20].w[0] + 6016u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003431C8u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x003431C8u) [[unlikely]] return; }
L_003431C8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] + 64u);
    c.r[2].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 14336u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00343190u | kUnwind; return; } goto L_00343190; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 2488u)));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 188u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
L_003431F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00343210:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 45680ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 279u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343234u); c.r[4].d[0] = c.r[2].d[0] | 12288ull;  if (depth < kMaxDepth) unit_0090(c, 412u, depth + 1u); else { c.pc = 0x00343760u; return; } if (c.pc != 0x00343234u) [[unlikely]] return; }
L_00343234:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00343278; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00343250; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00343280; } }
    c.budget -= 1;
L_00343250:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[4].d[0] = c.r[2].d[0] | 12288ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343268u); c.r[6].d[0] = c.r[2].d[0] | 45712ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00343268u) [[unlikely]] return; }
L_00343268:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343274u); c.r[4].d[0] = c.r[2].d[0] | 12288ull;  if (depth < kMaxDepth) unit_0090(c, 321u, depth + 1u); else { c.pc = 0x00342AF0u; return; } if (c.pc != 0x00343274u) [[unlikely]] return; }
L_00343274:
    c.budget -= 1;
L_00343278:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00343280:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00343290:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], 0u + 257u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003432BCu); c.r[5].d[0] = c.r[2].d[0] | 16ull;  if (depth < kMaxDepth) unit_0090(c, 412u, depth + 1u); else { c.pc = 0x00343760u; return; } if (c.pc != 0x003432BCu) [[unlikely]] return; }
L_003432BC:
    c.r[4].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 2ull;
    st8((c.r[17].w[0] + 6007u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[17].w[0] + 6006u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003432E0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003432E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003432E8; } }
L_003432E0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003432E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00343300:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00343310:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 18u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 18784u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00340000u < 16384u) { entry = entries_0090[(t - 0x00340000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00343330:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[6], 0u + 64u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[19], c.r[2].w[0] + 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[4].w[0] - 8624u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343364u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00343364u) [[unlikely]] return; }
L_00343364:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], c.r[19].w[0] + 64u);
    set32(c.r[6], 0u + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343378u); set32(c.r[4], c.r[2].w[0] + 155u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00343378u) [[unlikely]] return; }
L_00343378:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[5], c.r[19].w[0] + 96u);
    set32(c.r[4], c.r[4].w[0] + 7472u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034338Cu); set32(c.r[6], 0u + 1732u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0034338Cu) [[unlikely]] return; }
L_0034338C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[5], c.r[19].w[0] + 1828u);
    set32(c.r[4], c.r[4].w[0] + 8176u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003433A0u); set32(c.r[6], 0u + 660u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x003433A0u) [[unlikely]] return; }
L_003433A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], c.r[19].w[0] + 2492u);
    set32(c.r[6], 0u + 21u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003433B4u); set32(c.r[4], c.r[2].w[0] + 113u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x003433B4u) [[unlikely]] return; }
L_003433B4:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], c.r[19].w[0] + 2513u);
    set32(c.r[6], 0u + 21u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003433C8u); set32(c.r[4], c.r[2].w[0] + 134u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x003433C8u) [[unlikely]] return; }
L_003433C8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], c.r[19].w[0] + 2534u);
    set32(c.r[6], 0u + 21u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003433DCu); set32(c.r[4], c.r[2].w[0] + 92u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x003433DCu) [[unlikely]] return; }
L_003433DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003433E4u);  if (depth < kMaxDepth) unit_000B(c, 112u, depth + 1u); else { c.pc = 0x0012E170u; return; } if (c.pc != 0x003433E4u) [[unlikely]] return; }
L_003433E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003433ECu);  if (depth < kMaxDepth) unit_000B(c, 107u, depth + 1u); else { c.pc = 0x0012DFD0u; return; } if (c.pc != 0x003433ECu) [[unlikely]] return; }
L_003433EC:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003433F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], c.r[17].w[0] + 2555u);
    c.budget -= 2;
L_00343400:
    set32(c.r[6], 0u + 21u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343410u); set32(c.r[4], c.r[2].w[0] + 201u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00343410u) [[unlikely]] return; }
L_00343410:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 21u);
    c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 21u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003433F8u | kUnwind; return; } goto L_003433F8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 2639u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 285u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 2488u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 188u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00343460:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], 0u + 14308u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 2504u)));
    set32(c.r[5], c.r[7].w[0] << 3);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    set32(c.r[5], c.r[5].w[0] - c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] - 6800u);
    set32(c.r[5], c.r[5].w[0] << 11);
    set32(c.r[5], c.r[16].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] + 2672u);
    st8((c.r[2].w[0] + 188u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003434B4u); set32(c.r[5], c.r[5].w[0] + 16u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x003434B4u) [[unlikely]] return; }
L_003434B4:
    set32(c.r[16], c.r[16].w[0] + 2672u);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003434C0:
    set32(c.r[4], c.r[17].w[0] + 6016u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003434D0u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x003434D0u) [[unlikely]] return; }
L_003434D0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 64u);
    c.r[3].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 14336u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003434C0u | kUnwind; return; } goto L_003434C0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00343500:
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01C90000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[6].d[0] = c.r[2].d[0] | 16ull;
    c.r[4].d[0] = c.r[3].d[0] | 22528ull;
    c.budget -= 7;
    { set32(c.r[5], c.r[5].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011A998u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 192u, depth); }
L_00343520:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00343530:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 18u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 18800u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00340000u < 16384u) { entry = entries_0090[(t - 0x00340000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00343550:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 257u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343570u); set32(c.r[5], 0u + 280u);  if (depth < kMaxDepth) unit_0090(c, 412u, depth + 1u); else { c.pc = 0x00343760u; return; } if (c.pc != 0x00343570u) [[unlikely]] return; }
L_00343570:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00343580; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00343638; } }
L_00343580:
    st8((c.r[16].w[0] + 84u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 6u));
    c.r[1].d[0] = c.r[2].sd[0] < 10000ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003435A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00343638; } }
L_003435A0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 5u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[1].d[0] = c.r[2].sd[0] < 13ll ? 1ull : 0ull;  if (t) { goto L_003435B8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003435C0; } }
    c.budget -= 1;
L_003435B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00343638; } }
L_003435C0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[1].d[0] = c.r[2].sd[0] < 32ll ? 1ull : 0ull;  if (t) { goto L_003435D8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003435E0; } }
    c.budget -= 1;
L_003435D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00343638; } }
L_003435E0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    c.r[1].d[0] = c.r[2].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003435F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00343638; } }
L_003435F8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[1].d[0] = c.r[2].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00343610; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00343638; } }
L_00343610:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[1].d[0] = c.r[2].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00343628; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00343638; } }
L_00343628:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.r[2].d[0] = c.r[2].sd[0] < 7ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
L_00343638:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00343650:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 12;
L_00343680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343688u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x00343688u) [[unlikely]] return; }
L_00343688:
    set32(c.r[19], c.r[19].w[0] + 1u);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00343680u | kUnwind; return; } goto L_00343680; } }
    st16((c.r[17].w[0] + 8u), static_cast<std::uint16_t>(c.r[20].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(0u));
    set32(c.r[10], c.r[17].w[0] + 12u);
    c.r[11].d[0] = ld16((c.r[17].w[0] + 10u));
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));  if (t) { goto L_003436C8; } }
    set32(c.r[3], c.r[16].w[0] + 1u);
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_003436C8:
    c.r[1].d[0] = 0ll < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00343740; } }
    c.r[6].d[0] = 0ull | 65363ull;
    c.budget -= 1;
L_003436D8:
    c.r[7].d[0] = ld16((c.r[10].w[0]));
    c.r[5].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = c.r[11].d[0] & 65535ull;
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    st16((c.r[10].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[4].w[0]));
    c.r[5].d[0] = c.r[5].d[0] ^ c.r[11].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 2u);  if (t) { goto L_00343708; } }
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_00343708:
    c.r[7].d[0] = c.r[11].d[0] & 65535ull;
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    c.r[3].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    mmi::div(c, 0, c.r[5].w[0], c.r[6].w[0]);
    c.r[5].d[0] = c.hi.d[0];
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.r[11].d[0] = c.r[5].d[0] & 65535ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003436D8u | kUnwind; return; } goto L_003436D8; } }
L_00343740:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00343760:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 8u));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; c.r[9].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00343778; } }
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 2;
L_00343778:
    c.r[7].d[0] = ld16((c.r[9].w[0] + 10u));
    set32(c.r[3], c.r[5].w[0] - 16u);
    set32(c.r[4], c.r[9].w[0] + 16u);
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_0034379C; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_0034379C:
    c.r[1].d[0] = 0ll < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00343810; } }
    c.r[6].d[0] = 0ull | 65363ull;
    c.budget -= 2;
L_003437B0:
    c.r[5].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = c.r[7].d[0] & 65535ull;
    c.r[5].d[0] = c.r[5].d[0] ^ c.r[7].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[5], c.r[10].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[10].d[0] = c.r[5].d[0] & 65535ull;  if (t) { goto L_003437D8; } }
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003437D8:
    c.r[7].d[0] = c.r[7].d[0] & 65535ull;
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[11], c.r[11].w[0] + 1u);
    set32(c.r[5], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    c.r[3].d[0] = c.r[11].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    mmi::div(c, 0, c.r[5].w[0], c.r[6].w[0]);
    c.r[5].d[0] = c.hi.d[0];
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.r[7].d[0] = c.r[5].d[0] & 65535ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003437B0u | kUnwind; return; } goto L_003437B0; } }
L_00343810:
    c.r[4].d[0] = ld16((c.r[9].w[0] + 12u));
    c.r[3].d[0] = c.r[10].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00343828; } }
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    c.budget -= 2;
L_00343828:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00343830:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00343838:
    set32(c.r[2], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3197u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_00343850; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00343858; } }
L_00343850:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00343868; } }
L_00343858:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00343838u | kUnwind; return; } goto L_00343838; } }
L_00343868:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00343870:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00343878:
    set32(c.r[3], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[3].w[0] + 3197u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3197u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0; c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_00343898; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003438A0; } }
    c.budget -= 1;
L_00343898:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003438A0:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00343878u | kUnwind; return; } goto L_00343878; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003438C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003438E0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x003438E0u) [[unlikely]] return; }
L_003438E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00343908; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00340000u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 14624u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00340000u);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 18096u);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    c.budget -= 8;
L_00343908:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00343920:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 18816u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00340000u < 16384u) { entry = entries_0090[(t - 0x00340000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00343940:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u - 1u);
    st8((c.r[4].w[0] + 309u), static_cast<std::uint8_t>(0u));
    set32(c.r[16], c.r[4].w[0] + 304u);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] - 19264u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 312u), 0u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343980u); set32(c.r[6], c.r[6].w[0] - 19024u);  if (depth < kMaxDepth) unit_00AC(c, 54u, depth + 1u); else { c.pc = 0x003B0700u; return; } if (c.pc != 0x00343980u) [[unlikely]] return; }
L_00343980:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034398Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x0034398Cu) [[unlikely]] return; }
L_0034398C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003439A0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00343940u | kUnwind; return; } goto L_00343940; }
L_003439B0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 304u));
    set32(c.r[7], 0u + 2u);
    set32(c.r[8], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[7].d[0]; set32(c.r[9], c.r[4].w[0] + 304u);  if (t) { goto L_00343A58; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_00343A18; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003439E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00343A98; } }
L_003439E0:
    c.r[5].d[0] = ld8((c.r[9].w[0] + 1u));
    c.r[4].d[0] = ld8((c.r[8].w[0] + 6005u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_00343A98; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 19u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[7].d[0];  if (t) { goto L_00343A08; } }
    if (c.r[5].d[0] == 0) c.r[7].d[0] = c.r[6].d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_00343A98; } }
L_00343A08:
    if (c.r[4].d[0] == 0) c.r[6].d[0] = c.r[7].d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_00343A98; } }
    c.budget -= 1;
L_00343A18:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00343A98; } }
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 8u);
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[8].w[0] + 6005u));
    st8((c.r[9].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 6004u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00343A98; } }
    c.budget -= 1;
L_00343A58:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00343A98; } }
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[9].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[9].w[0] + 1u));
    c.r[4].d[0] = ld8((c.r[8].w[0] + 6005u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00343A98; } }
    st8((c.r[8].w[0] + 6004u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00343A98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00343AA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 309u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[17], c.r[4].w[0] + 304u);  if (t) { goto L_00343C28; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00343C08; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_00343B60; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00343B20; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00343AF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00343C70; } }
L_00343AF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 21u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00343C70; } }
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[4], c.r[17].w[0] + 16u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343B18u); st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x00343B18u) [[unlikely]] return; }
L_00343B18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00343C70; } }
L_00343B20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343B28u); set32(c.r[4], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_00AC(c, 65u, depth + 1u); else { c.pc = 0x003B0AD0u; return; } if (c.pc != 0x00343B28u) [[unlikely]] return; }
L_00343B28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00343B50; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 21u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00343C70; } }
    c.budget -= 1;
L_00343B50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343B58u); set32(c.r[4], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_00AC(c, 58u, depth + 1u); else { c.pc = 0x003B07A0u; return; } if (c.pc != 0x00343B58u) [[unlikely]] return; }
L_00343B58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.f[0]);  if (t) { goto L_00343C70; } }
L_00343B60:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 21u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00343B78; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00343B98; } }
L_00343B78:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343B90u); st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x00343B90u) [[unlikely]] return; }
L_00343B90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00343C70; } }
L_00343B98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_00343BB0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00343BD0; } }
    c.budget -= 1;
L_00343BB0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343BC8u); st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x00343BC8u) [[unlikely]] return; }
L_00343BC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00343C70; } }
L_00343BD0:
    set32(c.r[3], c.r[2].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00343BF8; } }
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343BECu); set32(c.r[4], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x00343BECu) [[unlikely]] return; }
L_00343BEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00343C70; } }
    c.budget -= 1;
L_00343BF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343C00u); set32(c.r[4], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_00AC(c, 62u, depth + 1u); else { c.pc = 0x003B0A00u; return; } if (c.pc != 0x00343C00u) [[unlikely]] return; }
L_00343C00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00343C70; } }
L_00343C08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343C10u); set32(c.r[4], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_00AC(c, 64u, depth + 1u); else { c.pc = 0x003B0A80u; return; } if (c.pc != 0x00343C10u) [[unlikely]] return; }
L_00343C10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00343C70; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00343C70; } }
L_00343C28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343C30u); set32(c.r[4], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B0B20u; return; } if (c.pc != 0x00343C30u) [[unlikely]] return; }
L_00343C30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00343C60; } }
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[2], 0u - 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[17].w[0] + 16u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343C54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x00343C54u) [[unlikely]] return; }
L_00343C54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 21u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00343C70; } }
    c.budget -= 1;
L_00343C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343C68u); set32(c.r[4], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_00AC(c, 58u, depth + 1u); else { c.pc = 0x003B07A0u; return; } if (c.pc != 0x00343C68u) [[unlikely]] return; }
L_00343C68:
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.budget -= 2;
L_00343C70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00343C90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 16u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00343CC0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00343CD8; } }
L_00343CC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343CC8u);  if (depth < kMaxDepth) unit_0090(c, 425u, depth + 1u); else { c.pc = 0x003439B0u; return; } if (c.pc != 0x00343CC8u) [[unlikely]] return; }
L_00343CC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343CD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 426u, depth + 1u); else { c.pc = 0x00343AA0u; return; } if (c.pc != 0x00343CD0u) [[unlikely]] return; }
L_00343CD0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00343CD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00343CF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00343D00:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_00343D10:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 18832u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 19u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], c.r[5].w[0] + 5272u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343D50u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x00343D50u) [[unlikely]] return; }
L_00343D50:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 48u);  if (t) { goto L_00343D90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343D60u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00343D60u) [[unlikely]] return; }
L_00343D60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[2].w[0] + 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] + 18856u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343D8Cu); set32(c.r[5], c.r[5].w[0] + 5280u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x00343D8Cu) [[unlikely]] return; }
L_00343D8C:
    c.budget -= 1;
L_00343D90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00343DB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00343DD8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 19u)));
    set32(c.r[6], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343DD4u); c.r[5].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 180u, depth + 1u); else { c.pc = 0x00231C90u; return; } if (c.pc != 0x00343DD4u) [[unlikely]] return; }
L_00343DD4:
    c.budget -= 1;
L_00343DD8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00343DF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = c.r[5].d[0] << 48;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 224u);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 14u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = c.r[6].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343E4Cu); c.f[20] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00343E4Cu) [[unlikely]] return; }
L_00343E4C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], c.r[2].w[0] + 10u);
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[12] = fp::sub(c.f[1], c.f[0]);
    c.f[14] = 0u;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343E7Cu); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00343E7Cu) [[unlikely]] return; }
L_00343E7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[4].w[0] - 13264u);
    set32(c.r[5], 0u + 11u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343E98u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 36u, depth + 1u); else { c.pc = 0x002D89F0u; return; } if (c.pc != 0x00343E98u) [[unlikely]] return; }
L_00343E98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00343EB0:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[21].w[0] + 16u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343EECu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x00343EECu) [[unlikely]] return; }
L_00343EEC:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[23].d[0] = ld8((c.r[21].w[0] + 1u));
    set32(c.r[3], c.f[0]);
    c.budget -= 5;
    { const bool t = c.r[23].d[0] == 0ull; st32((c.r[29].w[0] + 176u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_0091(c, 28u, depth); } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0091(c, 28u, depth); } }
    c.r[3].d[0] = ld8((c.r[21].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[21].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].sd[0] < 70ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00343F30; } }
    st8((c.r[21].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00343F30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[23].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 17696u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 192u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { goto L_00343F78; } }
L_00343F58:
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[3].d[0] << 56;
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00343F58u | kUnwind; return; } goto L_00343F58; } }
    c.budget -= 1;
L_00343F78:
    c.r[4].d[0] = c.r[5].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0091(c, 28u, depth); } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 19u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 22u);  if (t) { goto L_00343FD0; } }
    set32(c.r[3], 0u + 448u);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[22], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_00343FC8; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[22], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00343FC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[22].w[0] + 11u);  if (t) { [[clang::musttail]] return unit_0091(c, 2u, depth); } }
L_00343FD0:
    set32(c.r[2], 0u + 100u);
    mmi::div(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[1].d[0] = c.r[2].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 24u);  if (t) { [[clang::musttail]] return unit_0091(c, 1u, depth); } }
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.budget -= 2;
    [[clang::musttail]] return unit_0091(c, 1u, depth);
}

}
