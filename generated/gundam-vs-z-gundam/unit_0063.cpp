#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0063[4096] = {
    1, 0, 0, 0, 0, 0, 2, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    5, 0, 6, 0, 0, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0,
    0, 0, 12, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 15, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0,
    0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29,
    0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0,
    0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0,
    0, 0, 0, 39, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 45, 0,
    0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 58, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0,
    0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0,
    0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0,
    71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0,
    0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0,
    0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 92, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0,
    0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0,
    0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 102, 0, 0, 0, 0, 0, 103, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0,
    0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0,
    0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132,
    0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0,
    137, 0, 0, 138, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0,
    0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0,
    0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 174, 175, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0,
    0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0,
    0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 197, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0,
    0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0,
    204, 205, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217,
    0, 218, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0,
    0, 0, 223, 0, 224, 0, 225, 0, 226, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0,
    0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0,
    0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 239, 0, 240, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 244, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0,
    0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 258, 0, 259, 0, 260, 0, 261, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 267, 0, 268, 0, 269, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 274, 0,
    0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 279, 0, 280, 0, 281, 0, 0, 282, 0,
    0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 287, 0,
    0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    294, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0,
    300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 306, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 312, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 319, 320, 0, 321, 0, 0, 0, 322, 0,
    323, 0, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 0,
    329, 0, 330, 0, 331, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 337, 338, 0, 339, 0, 0, 0, 340, 0, 341, 0,
    0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0,
    346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 374, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0,
    378, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 380, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0,
    0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0,
    0, 0, 0, 387, 0, 388, 0, 0, 0, 0, 389, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 392,
    0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 396, 0, 0,
    0, 0, 397, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0,
    0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 406, 407, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0,
    0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0,
    0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 415, 0, 416, 0, 0, 417, 0, 0, 418, 0, 0, 0, 0, 419, 0, 420, 0,
    421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0,
    0, 0, 0, 0, 426, 0, 427, 0, 0, 428, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0,
    434, 0, 435, 0, 436, 0, 0, 0, 437, 0, 0, 438, 0, 0, 0, 0, 439, 0, 440, 0, 441, 0, 442, 0, 0, 0, 443, 0, 444, 0, 0, 445,
    0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 450, 0, 0, 0,
    0, 451, 0, 0, 0, 452, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0,
    0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0,
    0, 0, 459, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 461, 462, 0, 0, 0, 0, 0, 0, 463, 0, 464, 0, 0, 0, 0, 0, 465, 0, 0,
    0, 466, 0, 0, 467, 0, 0, 0, 0, 0, 0, 468, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 472, 0, 473, 0, 0, 474, 0,
    0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0,
    0, 479, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 481, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 487, 0, 488, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 491, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 494, 0, 495, 0, 496, 0, 497, 0, 498, 0, 499, 0, 0, 0, 0, 0,
};

void unit_0063(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0028C000;
    case 2u: goto L_0028C018;
    case 3u: goto L_0028C01C;
    case 4u: goto L_0028C030;
    case 5u: goto L_0028C080;
    case 6u: goto L_0028C088;
    case 7u: goto L_0028C0A0;
    case 8u: goto L_0028C0A8;
    case 9u: goto L_0028C0C8;
    case 10u: goto L_0028C0DC;
    case 11u: goto L_0028C0E8;
    case 12u: goto L_0028C108;
    case 13u: goto L_0028C118;
    case 14u: goto L_0028C124;
    case 15u: goto L_0028C184;
    case 16u: goto L_0028C194;
    case 17u: goto L_0028C1A4;
    case 18u: goto L_0028C1C0;
    case 19u: goto L_0028C210;
    case 20u: goto L_0028C23C;
    case 21u: goto L_0028C26C;
    case 22u: goto L_0028C274;
    case 23u: goto L_0028C288;
    case 24u: goto L_0028C2C0;
    case 25u: goto L_0028C2C8;
    case 26u: goto L_0028C2DC;
    case 27u: goto L_0028C320;
    case 28u: goto L_0028C350;
    case 29u: goto L_0028C37C;
    case 30u: goto L_0028C388;
    case 31u: goto L_0028C39C;
    case 32u: goto L_0028C3C0;
    case 33u: goto L_0028C3D4;
    case 34u: goto L_0028C3F8;
    case 35u: goto L_0028C40C;
    case 36u: goto L_0028C430;
    case 37u: goto L_0028C444;
    case 38u: goto L_0028C478;
    case 39u: goto L_0028C48C;
    case 40u: goto L_0028C494;
    case 41u: goto L_0028C4A0;
    case 42u: goto L_0028C4B8;
    case 43u: goto L_0028C4E0;
    case 44u: goto L_0028C4E8;
    case 45u: goto L_0028C4F8;
    case 46u: goto L_0028C508;
    case 47u: goto L_0028C518;
    case 48u: goto L_0028C52C;
    case 49u: goto L_0028C540;
    case 50u: goto L_0028C698;
    case 51u: goto L_0028C6C8;
    case 52u: goto L_0028C718;
    case 53u: goto L_0028C780;
    case 54u: goto L_0028C7B8;
    case 55u: goto L_0028C7F0;
    case 56u: goto L_0028C818;
    case 57u: goto L_0028C82C;
    case 58u: goto L_0028C834;
    case 59u: goto L_0028C840;
    case 60u: goto L_0028C850;
    case 61u: goto L_0028C878;
    case 62u: goto L_0028C89C;
    case 63u: goto L_0028C8C4;
    case 64u: goto L_0028C8E0;
    case 65u: goto L_0028C8F0;
    case 66u: goto L_0028C90C;
    case 67u: goto L_0028C914;
    case 68u: goto L_0028C930;
    case 69u: goto L_0028C954;
    case 70u: goto L_0028C964;
    case 71u: goto L_0028C980;
    case 72u: goto L_0028C988;
    case 73u: goto L_0028C9A8;
    case 74u: goto L_0028C9C4;
    case 75u: goto L_0028C9D0;
    case 76u: goto L_0028C9EC;
    case 77u: goto L_0028C9F4;
    case 78u: goto L_0028CA10;
    case 79u: goto L_0028CA24;
    case 80u: goto L_0028CA2C;
    case 81u: goto L_0028CA48;
    case 82u: goto L_0028CA50;
    case 83u: goto L_0028CA68;
    case 84u: goto L_0028CA8C;
    case 85u: goto L_0028CA9C;
    case 86u: goto L_0028CAB8;
    case 87u: goto L_0028CAC0;
    case 88u: goto L_0028CAE0;
    case 89u: goto L_0028CB20;
    case 90u: goto L_0028CB48;
    case 91u: goto L_0028CB68;
    case 92u: goto L_0028CB94;
    case 93u: goto L_0028CB98;
    case 94u: goto L_0028CBE4;
    case 95u: goto L_0028CC08;
    case 96u: goto L_0028CC48;
    case 97u: goto L_0028CC60;
    case 98u: goto L_0028CC78;
    case 99u: goto L_0028CC90;
    case 100u: goto L_0028CCB0;
    case 101u: goto L_0028CCC8;
    case 102u: goto L_0028CD04;
    case 103u: goto L_0028CD1C;
    case 104u: goto L_0028CD20;
    case 105u: goto L_0028CD58;
    case 106u: goto L_0028CD70;
    case 107u: goto L_0028CD98;
    case 108u: goto L_0028CDCC;
    case 109u: goto L_0028CDE0;
    case 110u: goto L_0028CDF8;
    case 111u: goto L_0028CE10;
    case 112u: goto L_0028CE60;
    case 113u: goto L_0028CE68;
    case 114u: goto L_0028CE90;
    case 115u: goto L_0028CEA4;
    case 116u: goto L_0028CF48;
    case 117u: goto L_0028CF6C;
    case 118u: goto L_0028CF88;
    case 119u: goto L_0028CFCC;
    case 120u: goto L_0028CFE8;
    case 121u: goto L_0028D014;
    case 122u: goto L_0028D038;
    case 123u: goto L_0028D04C;
    case 124u: goto L_0028D060;
    case 125u: goto L_0028D070;
    case 126u: goto L_0028D0A0;
    case 127u: goto L_0028D0A8;
    case 128u: goto L_0028D0CC;
    case 129u: goto L_0028D0EC;
    case 130u: goto L_0028D120;
    case 131u: goto L_0028D144;
    case 132u: goto L_0028D17C;
    case 133u: goto L_0028D190;
    case 134u: goto L_0028D1CC;
    case 135u: goto L_0028D1D4;
    case 136u: goto L_0028D1F0;
    case 137u: goto L_0028D200;
    case 138u: goto L_0028D20C;
    case 139u: goto L_0028D214;
    case 140u: goto L_0028D220;
    case 141u: goto L_0028D250;
    case 142u: goto L_0028D268;
    case 143u: goto L_0028D278;
    case 144u: goto L_0028D2D0;
    case 145u: goto L_0028D2E8;
    case 146u: goto L_0028D328;
    case 147u: goto L_0028D338;
    case 148u: goto L_0028D350;
    case 149u: goto L_0028D370;
    case 150u: goto L_0028D3A4;
    case 151u: goto L_0028D408;
    case 152u: goto L_0028D494;
    case 153u: goto L_0028D4C8;
    case 154u: goto L_0028D4E0;
    case 155u: goto L_0028D524;
    case 156u: goto L_0028D53C;
    case 157u: goto L_0028D554;
    case 158u: goto L_0028D5A0;
    case 159u: goto L_0028D5C8;
    case 160u: goto L_0028D5D0;
    case 161u: goto L_0028D5E4;
    case 162u: goto L_0028D608;
    case 163u: goto L_0028D618;
    case 164u: goto L_0028D628;
    case 165u: goto L_0028D68C;
    case 166u: goto L_0028D6A0;
    case 167u: goto L_0028D6F4;
    case 168u: goto L_0028D720;
    case 169u: goto L_0028D738;
    case 170u: goto L_0028D76C;
    case 171u: goto L_0028D788;
    case 172u: goto L_0028D7C8;
    case 173u: goto L_0028D7D4;
    case 174u: goto L_0028D7E4;
    case 175u: goto L_0028D7E8;
    case 176u: goto L_0028D820;
    case 177u: goto L_0028D878;
    case 178u: goto L_0028D8B8;
    case 179u: goto L_0028D8CC;
    case 180u: goto L_0028D8F0;
    case 181u: goto L_0028D928;
    case 182u: goto L_0028D938;
    case 183u: goto L_0028D998;
    case 184u: goto L_0028D9A8;
    case 185u: goto L_0028D9D0;
    case 186u: goto L_0028D9F8;
    case 187u: goto L_0028DA18;
    case 188u: goto L_0028DA20;
    case 189u: goto L_0028DA34;
    case 190u: goto L_0028DA58;
    case 191u: goto L_0028DA74;
    case 192u: goto L_0028DA88;
    case 193u: goto L_0028DAAC;
    case 194u: goto L_0028DAB8;
    case 195u: goto L_0028DAD8;
    case 196u: goto L_0028DAEC;
    case 197u: goto L_0028DAF8;
    case 198u: goto L_0028DB60;
    case 199u: goto L_0028DB84;
    case 200u: goto L_0028DB8C;
    case 201u: goto L_0028DBB8;
    case 202u: goto L_0028DBC8;
    case 203u: goto L_0028DBF0;
    case 204u: goto L_0028DC00;
    case 205u: goto L_0028DC04;
    case 206u: goto L_0028DC28;
    case 207u: goto L_0028DC4C;
    case 208u: goto L_0028DC60;
    case 209u: goto L_0028DC74;
    case 210u: goto L_0028DCA0;
    case 211u: goto L_0028DCB8;
    case 212u: goto L_0028DCCC;
    case 213u: goto L_0028DCE8;
    case 214u: goto L_0028DD30;
    case 215u: goto L_0028DD54;
    case 216u: goto L_0028DD74;
    case 217u: goto L_0028DD7C;
    case 218u: goto L_0028DD84;
    case 219u: goto L_0028DD8C;
    case 220u: goto L_0028DD98;
    case 221u: goto L_0028DDB8;
    case 222u: goto L_0028DDE8;
    case 223u: goto L_0028DE08;
    case 224u: goto L_0028DE10;
    case 225u: goto L_0028DE18;
    case 226u: goto L_0028DE20;
    case 227u: goto L_0028DE2C;
    case 228u: goto L_0028DE50;
    case 229u: goto L_0028DE64;
    case 230u: goto L_0028DE88;
    case 231u: goto L_0028DE98;
    case 232u: goto L_0028DEC0;
    case 233u: goto L_0028DEE0;
    case 234u: goto L_0028DF30;
    case 235u: goto L_0028DF50;
    case 236u: goto L_0028DF64;
    case 237u: goto L_0028DF84;
    case 238u: goto L_0028DFA4;
    case 239u: goto L_0028DFAC;
    case 240u: goto L_0028DFB4;
    case 241u: goto L_0028DFBC;
    case 242u: goto L_0028DFC8;
    case 243u: goto L_0028DFE0;
    case 244u: goto L_0028DFE8;
    case 245u: goto L_0028E068;
    case 246u: goto L_0028E094;
    case 247u: goto L_0028E0C0;
    case 248u: goto L_0028E0DC;
    case 249u: goto L_0028E158;
    case 250u: goto L_0028E174;
    case 251u: goto L_0028E190;
    case 252u: goto L_0028E1F0;
    case 253u: goto L_0028E220;
    case 254u: goto L_0028E280;
    case 255u: goto L_0028E2A0;
    case 256u: goto L_0028E2B0;
    case 257u: goto L_0028E2D0;
    case 258u: goto L_0028E2D8;
    case 259u: goto L_0028E2E0;
    case 260u: goto L_0028E2E8;
    case 261u: goto L_0028E2F0;
    case 262u: goto L_0028E338;
    case 263u: goto L_0028E340;
    case 264u: goto L_0028E358;
    case 265u: goto L_0028E3B4;
    case 266u: goto L_0028E3C8;
    case 267u: goto L_0028E3D0;
    case 268u: goto L_0028E3D8;
    case 269u: goto L_0028E3E0;
    case 270u: goto L_0028E40C;
    case 271u: goto L_0028E438;
    case 272u: goto L_0028E454;
    case 273u: goto L_0028E470;
    case 274u: goto L_0028E478;
    case 275u: goto L_0028E494;
    case 276u: goto L_0028E518;
    case 277u: goto L_0028E534;
    case 278u: goto L_0028E554;
    case 279u: goto L_0028E55C;
    case 280u: goto L_0028E564;
    case 281u: goto L_0028E56C;
    case 282u: goto L_0028E578;
    case 283u: goto L_0028E59C;
    case 284u: goto L_0028E5C0;
    case 285u: goto L_0028E5D0;
    case 286u: goto L_0028E5F0;
    case 287u: goto L_0028E5F8;
    case 288u: goto L_0028E610;
    case 289u: goto L_0028E688;
    case 290u: goto L_0028E698;
    case 291u: goto L_0028E6A8;
    case 292u: goto L_0028E6B8;
    case 293u: goto L_0028E6D8;
    case 294u: goto L_0028E700;
    case 295u: goto L_0028E724;
    case 296u: goto L_0028E738;
    case 297u: goto L_0028E740;
    case 298u: goto L_0028E750;
    case 299u: goto L_0028E764;
    case 300u: goto L_0028E780;
    case 301u: goto L_0028E7B8;
    case 302u: goto L_0028E7DC;
    case 303u: goto L_0028E7E8;
    case 304u: goto L_0028E810;
    case 305u: goto L_0028E834;
    case 306u: goto L_0028E840;
    case 307u: goto L_0028E848;
    case 308u: goto L_0028E860;
    case 309u: goto L_0028E874;
    case 310u: goto L_0028E8A8;
    case 311u: goto L_0028E918;
    case 312u: goto L_0028E98C;
    case 313u: goto L_0028E994;
    case 314u: goto L_0028EA40;
    case 315u: goto L_0028EA90;
    case 316u: goto L_0028EAA4;
    case 317u: goto L_0028EAC4;
    case 318u: goto L_0028EAD4;
    case 319u: goto L_0028EADC;
    case 320u: goto L_0028EAE0;
    case 321u: goto L_0028EAE8;
    case 322u: goto L_0028EAF8;
    case 323u: goto L_0028EB00;
    case 324u: goto L_0028EB0C;
    case 325u: goto L_0028EB28;
    case 326u: goto L_0028EB44;
    case 327u: goto L_0028EB58;
    case 328u: goto L_0028EB6C;
    case 329u: goto L_0028EB80;
    case 330u: goto L_0028EB88;
    case 331u: goto L_0028EB90;
    case 332u: goto L_0028EB98;
    case 333u: goto L_0028EBA8;
    case 334u: goto L_0028EBC8;
    case 335u: goto L_0028EC18;
    case 336u: goto L_0028EC4C;
    case 337u: goto L_0028EC54;
    case 338u: goto L_0028EC58;
    case 339u: goto L_0028EC60;
    case 340u: goto L_0028EC70;
    case 341u: goto L_0028EC78;
    case 342u: goto L_0028EC84;
    case 343u: goto L_0028EC9C;
    case 344u: goto L_0028ECCC;
    case 345u: goto L_0028ECE0;
    case 346u: goto L_0028ED00;
    case 347u: goto L_0028ED40;
    case 348u: goto L_0028ED68;
    case 349u: goto L_0028EDA0;
    case 350u: goto L_0028EDE8;
    case 351u: goto L_0028EE10;
    case 352u: goto L_0028EE68;
    case 353u: goto L_0028EE90;
    case 354u: goto L_0028EEB8;
    case 355u: goto L_0028EEF4;
    case 356u: goto L_0028EF24;
    case 357u: goto L_0028EF40;
    case 358u: goto L_0028EF80;
    case 359u: goto L_0028EF98;
    case 360u: goto L_0028EFB8;
    case 361u: goto L_0028EFE4;
    case 362u: goto L_0028F018;
    case 363u: goto L_0028F030;
    case 364u: goto L_0028F03C;
    case 365u: goto L_0028F064;
    case 366u: goto L_0028F074;
    case 367u: goto L_0028F0AC;
    case 368u: goto L_0028F0B8;
    case 369u: goto L_0028F0F0;
    case 370u: goto L_0028F138;
    case 371u: goto L_0028F150;
    case 372u: goto L_0028F178;
    case 373u: goto L_0028F1DC;
    case 374u: goto L_0028F214;
    case 375u: goto L_0028F220;
    case 376u: goto L_0028F258;
    case 377u: goto L_0028F268;
    case 378u: goto L_0028F280;
    case 379u: goto L_0028F2A0;
    case 380u: goto L_0028F31C;
    case 381u: goto L_0028F324;
    case 382u: goto L_0028F34C;
    case 383u: goto L_0028F378;
    case 384u: goto L_0028F390;
    case 385u: goto L_0028F3C0;
    case 386u: goto L_0028F3F0;
    case 387u: goto L_0028F40C;
    case 388u: goto L_0028F414;
    case 389u: goto L_0028F428;
    case 390u: goto L_0028F430;
    case 391u: goto L_0028F458;
    case 392u: goto L_0028F47C;
    case 393u: goto L_0028F488;
    case 394u: goto L_0028F4A0;
    case 395u: goto L_0028F4D8;
    case 396u: goto L_0028F4F4;
    case 397u: goto L_0028F508;
    case 398u: goto L_0028F514;
    case 399u: goto L_0028F540;
    case 400u: goto L_0028F5A0;
    case 401u: goto L_0028F5C4;
    case 402u: goto L_0028F5CC;
    case 403u: goto L_0028F5F8;
    case 404u: goto L_0028F608;
    case 405u: goto L_0028F630;
    case 406u: goto L_0028F640;
    case 407u: goto L_0028F644;
    case 408u: goto L_0028F668;
    case 409u: goto L_0028F68C;
    case 410u: goto L_0028F6A0;
    case 411u: goto L_0028F6B4;
    case 412u: goto L_0028F6E0;
    case 413u: goto L_0028F6F8;
    case 414u: goto L_0028F71C;
    case 415u: goto L_0028F73C;
    case 416u: goto L_0028F744;
    case 417u: goto L_0028F750;
    case 418u: goto L_0028F75C;
    case 419u: goto L_0028F770;
    case 420u: goto L_0028F778;
    case 421u: goto L_0028F780;
    case 422u: goto L_0028F798;
    case 423u: goto L_0028F7A8;
    case 424u: goto L_0028F7C0;
    case 425u: goto L_0028F7F0;
    case 426u: goto L_0028F810;
    case 427u: goto L_0028F818;
    case 428u: goto L_0028F824;
    case 429u: goto L_0028F830;
    case 430u: goto L_0028F85C;
    case 431u: goto L_0028F89C;
    case 432u: goto L_0028F8D4;
    case 433u: goto L_0028F8F0;
    case 434u: goto L_0028F900;
    case 435u: goto L_0028F908;
    case 436u: goto L_0028F910;
    case 437u: goto L_0028F920;
    case 438u: goto L_0028F92C;
    case 439u: goto L_0028F940;
    case 440u: goto L_0028F948;
    case 441u: goto L_0028F950;
    case 442u: goto L_0028F958;
    case 443u: goto L_0028F968;
    case 444u: goto L_0028F970;
    case 445u: goto L_0028F97C;
    case 446u: goto L_0028F998;
    case 447u: goto L_0028F9B8;
    case 448u: goto L_0028F9D4;
    case 449u: goto L_0028F9E4;
    case 450u: goto L_0028F9F0;
    case 451u: goto L_0028FA04;
    case 452u: goto L_0028FA14;
    case 453u: goto L_0028FA20;
    case 454u: goto L_0028FA40;
    case 455u: goto L_0028FA50;
    case 456u: goto L_0028FA78;
    case 457u: goto L_0028FA98;
    case 458u: goto L_0028FAE8;
    case 459u: goto L_0028FB08;
    case 460u: goto L_0028FB18;
    case 461u: goto L_0028FB34;
    case 462u: goto L_0028FB38;
    case 463u: goto L_0028FB54;
    case 464u: goto L_0028FB5C;
    case 465u: goto L_0028FB74;
    case 466u: goto L_0028FB84;
    case 467u: goto L_0028FB90;
    case 468u: goto L_0028FBAC;
    case 469u: goto L_0028FBB4;
    case 470u: goto L_0028FC20;
    case 471u: goto L_0028FC50;
    case 472u: goto L_0028FC64;
    case 473u: goto L_0028FC6C;
    case 474u: goto L_0028FC78;
    case 475u: goto L_0028FC9C;
    case 476u: goto L_0028FCD0;
    case 477u: goto L_0028FCEC;
    case 478u: goto L_0028FD68;
    case 479u: goto L_0028FD84;
    case 480u: goto L_0028FDA0;
    case 481u: goto L_0028FE04;
    case 482u: goto L_0028FE18;
    case 483u: goto L_0028FE4C;
    case 484u: goto L_0028FE50;
    case 485u: goto L_0028FE94;
    case 486u: goto L_0028FEAC;
    case 487u: goto L_0028FECC;
    case 488u: goto L_0028FED4;
    case 489u: goto L_0028FEEC;
    case 490u: goto L_0028FF24;
    case 491u: goto L_0028FF30;
    case 492u: goto L_0028FF34;
    case 493u: goto L_0028FFAC;
    case 494u: goto L_0028FFC0;
    case 495u: goto L_0028FFC8;
    case 496u: goto L_0028FFD0;
    case 497u: goto L_0028FFD8;
    case 498u: goto L_0028FFE0;
    case 499u: goto L_0028FFE8;
    default: bad_entry(c, 0x0028C000u); return;
    }
L_0028C000:
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] - 29284u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_0028C018:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0028C01C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028C030:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = ld8((c.r[17].w[0] + 2u));  if (t) { goto L_0028C0AC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 4u), 0u);  goto L_0028C0AC; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 31472u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0028C000u < 16384u) { entry = entries_0063[(t - 0x0028C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0028C080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C088u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 448u, depth + 1u); else { c.pc = 0x0028BAF8u; return; } if (c.pc != 0x0028C088u) [[unlikely]] return; }
L_0028C088:
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] - 29284u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_0028C0A0:
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0028C0A8:
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 1;
L_0028C0AC:
    set32(c.r[2], c.r[4].w[0] << 24);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], c.r[4].w[0] << 24);  goto L_0028C16C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C0C8u); set32(c.r[4], 0u + 8192u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028C0C8u) [[unlikely]] return; }
L_0028C0C8:
    c.r[5].d[0] = ld64((c.r[17].w[0] + 40u));
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C0DCu); c.r[5].d[0] = c.r[5].d[0] << 11;  if (depth < kMaxDepth) unit_0063(c, 61u, depth + 1u); else { c.pc = 0x0028C878u; return; } if (c.pc != 0x0028C0DCu) [[unlikely]] return; }
L_0028C0DC:
    set32(c.r[4], 0u + 8193u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C0E8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028C0E8u) [[unlikely]] return; }
L_0028C0E8:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[2], 0u + 9u);  if (t) { goto L_0028C100; } }
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 4;
L_0028C100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C108u); set32(c.r[4], 0u + 8448u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028C108u) [[unlikely]] return; }
L_0028C108:
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C118u); set32(c.r[6], ld32((c.r[17].w[0] + 32u)));  if (depth < kMaxDepth) unit_0063(c, 83u, depth + 1u); else { c.pc = 0x0028CA68u; return; } if (c.pc != 0x0028C118u) [[unlikely]] return; }
L_0028C118:
    set32(c.r[4], 0u + 8449u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C124u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028C124u) [[unlikely]] return; }
L_0028C124:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0; set32(c.r[2], 0u + 2u);  if (t) { goto L_0028C150; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] - 29288u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] << 24);  if (t) { goto L_0028C16C; } }
L_0028C150:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], 0u + 9u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 9u);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] << 24);
    c.budget -= 7;
L_0028C16C:
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0028C1EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C184u); set32(c.r[4], 0u + 8704u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028C184u) [[unlikely]] return; }
L_0028C184:
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C194u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 68u, depth + 1u); else { c.pc = 0x0028C930u; return; } if (c.pc != 0x0028C194u) [[unlikely]] return; }
L_0028C194:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0028C1B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C1A4u); set32(c.r[4], 0u + 8705u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028C1A4u) [[unlikely]] return; }
L_0028C1A4:
    set32(c.r[2], 0u + 9u);
    set32(c.r[3], 0u - 1u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_0028C1E8; } }
L_0028C1B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C1C0u); set32(c.r[4], 0u + 8706u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028C1C0u) [[unlikely]] return; }
L_0028C1C0:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0028C1EC; } }
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] - 29284u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 7;
L_0028C1E8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0028C1EC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0028C210:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[19].w[0] - 29316u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C23Cu); set32(c.r[17], c.r[2].w[0] - 29376u);  if (depth < kMaxDepth) unit_0065(c, 273u, depth + 1u); else { c.pc = 0x00297328u; return; } if (c.pc != 0x0028C23Cu) [[unlikely]] return; }
L_0028C23C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028C2E0; } }
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));  if (t) { goto L_0028C28C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[18], c.r[2].w[0] - 29312u);
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_0028C26C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C26Cu);  if (depth < kMaxDepth) unit_0065(c, 206u, depth + 1u); else { c.pc = 0x002968C8u; return; } if (c.pc != 0x0028C26Cu) [[unlikely]] return; }
L_0028C26C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C274u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 478u, depth + 1u); else { c.pc = 0x0028BE60u; return; } if (c.pc != 0x0028C274u) [[unlikely]] return; }
L_0028C274:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[16].d[0]) { c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));  goto L_0028C28C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C288u);  if (depth < kMaxDepth) unit_0065(c, 208u, depth + 1u); else { c.pc = 0x00296940u; return; } if (c.pc != 0x0028C288u) [[unlikely]] return; }
L_0028C288:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    c.budget -= 1;
L_0028C28C:
    set32(c.r[2], c.r[3].w[0] << 24);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[19].w[0] - 29316u), 0u);  goto L_0028C2E0; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[18], 0u + 1u);
    set32(c.r[16], c.r[3].w[0] - 29308u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_0028C2C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C2C0u);  if (depth < kMaxDepth) unit_0065(c, 206u, depth + 1u); else { c.pc = 0x002968C8u; return; } if (c.pc != 0x0028C2C0u) [[unlikely]] return; }
L_0028C2C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C2C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 4u, depth + 1u); else { c.pc = 0x0028C030u; return; } if (c.pc != 0x0028C2C8u) [[unlikely]] return; }
L_0028C2C8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { st32((c.r[19].w[0] - 29316u), 0u);  goto L_0028C2E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C2DCu);  if (depth < kMaxDepth) unit_0065(c, 208u, depth + 1u); else { c.pc = 0x00296940u; return; } if (c.pc != 0x0028C2DCu) [[unlikely]] return; }
L_0028C2DC:
    st32((c.r[19].w[0] - 29316u), 0u);
    c.budget -= 1;
L_0028C2E0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0028C320:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[2].w[0] - 29296u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[2].w[0]), 0u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[7], 0u + 1u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x19640000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], ld32((c.r[8].w[0] - 29316u)));
    c.budget -= 12;
L_0028C350:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[7].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0028C380; } }
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[8].w[0] - 29316u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028C350u | kUnwind; return; } goto L_0028C350; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C37Cu); set32(c.r[4], c.r[4].w[0] + 31512u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028C37Cu) [[unlikely]] return; }
L_0028C37C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0028C380:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028C388:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C39Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 27u, depth + 1u); else { c.pc = 0x0028C320u; return; } if (c.pc != 0x0028C39Cu) [[unlikely]] return; }
L_0028C39C:
    set32(c.r[16], c.r[16].w[0] << 24);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 29312u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 24));
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028C3C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C3D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 27u, depth + 1u); else { c.pc = 0x0028C320u; return; } if (c.pc != 0x0028C3D4u) [[unlikely]] return; }
L_0028C3D4:
    set32(c.r[16], c.r[16].w[0] << 24);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 29308u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 24));
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028C3F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C40Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 27u, depth + 1u); else { c.pc = 0x0028C320u; return; } if (c.pc != 0x0028C40Cu) [[unlikely]] return; }
L_0028C40C:
    set32(c.r[16], c.r[16].w[0] << 24);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 29304u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 24));
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028C430:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C444u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 27u, depth + 1u); else { c.pc = 0x0028C320u; return; } if (c.pc != 0x0028C444u) [[unlikely]] return; }
L_0028C444:
    set32(c.r[16], c.r[16].w[0] << 24);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 29300u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 24));
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028C478:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C48Cu); set32(c.r[4], 0u + 8960u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028C48Cu) [[unlikely]] return; }
L_0028C48C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C494u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0073(c, 295u, depth + 1u); else { c.pc = 0x002CE098u; return; } if (c.pc != 0x0028C494u) [[unlikely]] return; }
L_0028C494:
    set32(c.r[4], 0u + 8961u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C4A0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028C4A0u) [[unlikely]] return; }
L_0028C4A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028C4B8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] - 29376u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_0028C540; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C4E0u);  if (depth < kMaxDepth) unit_0065(c, 203u, depth + 1u); else { c.pc = 0x00296868u; return; } if (c.pc != 0x0028C4E0u) [[unlikely]] return; }
L_0028C4E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C4E8u); set32(c.r[4], 0u + 9216u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028C4E8u) [[unlikely]] return; }
L_0028C4E8:
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C4F8u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 68u, depth + 1u); else { c.pc = 0x0028C930u; return; } if (c.pc != 0x0028C4F8u) [[unlikely]] return; }
L_0028C4F8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], 0u + 9218u);  if (t) { goto L_0028C510; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C508u); set32(c.r[4], 0u + 9217u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028C508u) [[unlikely]] return; }
L_0028C508:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028C538; } }
L_0028C510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C518u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028C518u) [[unlikely]] return; }
L_0028C518:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028C538; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C52Cu);  if (depth < kMaxDepth) unit_0065(c, 204u, depth + 1u); else { c.pc = 0x00296880u; return; } if (c.pc != 0x0028C52Cu) [[unlikely]] return; }
L_0028C52C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028C544; } }
    c.budget -= 1;
L_0028C538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C540u);  if (depth < kMaxDepth) unit_0065(c, 204u, depth + 1u); else { c.pc = 0x00296880u; return; } if (c.pc != 0x0028C540u) [[unlikely]] return; }
L_0028C540:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028C544:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028C698:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] - 29268u);
    set32(c.r[2], c.r[2].w[0] - 29272u);
    set32(c.r[5], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[4].w[0]);  c.pc = t; return; }
L_0028C6C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[2].w[0] - 29264u), c.r[4].w[0]);  if (t) { goto L_0028C6F8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 31768u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00106508u | kUnwind; return; } [[clang::musttail]] return unit_0001(c, 350u, depth); }
L_0028C6F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028C718:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[4].w[0] << 24);
    set32(c.r[3], c.r[3].w[0] - 29308u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != c.r[5].d[0]; st32((c.r[6].w[0] - 29260u), c.r[2].w[0]);  if (t) { goto L_0028C760; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 31800u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00106508u | kUnwind; return; } [[clang::musttail]] return unit_0001(c, 350u, depth); }
L_0028C760:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028C780:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] - 29260u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0028C7A8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0065(c, 206u, depth); }
L_0028C7A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028C7B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] - 29260u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0028C7E0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0065(c, 208u, depth); }
L_0028C7E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028C7F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], c.r[2].w[0] - 29316u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C818u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 273u, depth + 1u); else { c.pc = 0x00297328u; return; } if (c.pc != 0x0028C818u) [[unlikely]] return; }
L_0028C818:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull | 38400ull;  if (t) { goto L_0028C85C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C82Cu);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028C82Cu) [[unlikely]] return; }
L_0028C82C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C834u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 382u, depth + 1u); else { c.pc = 0x002CEC88u; return; } if (c.pc != 0x0028C834u) [[unlikely]] return; }
L_0028C834:
    c.r[4].d[0] = 0ull | 38401ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C840u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028C840u) [[unlikely]] return; }
L_0028C840:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { st32((c.r[18].w[0]), 0u);  goto L_0028C858; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C850u);  if (depth < kMaxDepth) unit_0073(c, 393u, depth + 1u); else { c.pc = 0x002CEE08u; return; } if (c.pc != 0x0028C850u) [[unlikely]] return; }
L_0028C850:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0]), 0u);
    c.budget -= 2;
L_0028C858:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0028C85C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028C878:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C89Cu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 53u, depth + 1u); else { c.pc = 0x0028C780u; return; } if (c.pc != 0x0028C89Cu) [[unlikely]] return; }
L_0028C89C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[7], ld32((c.r[2].w[0] - 29264u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 8;
    { const bool t = c.r[7].d[0] != c.r[3].d[0]; c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0028C8E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C8C4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 357u, depth + 1u); else { c.pc = 0x0010ACD0u; return; } if (c.pc != 0x0028C8C4u) [[unlikely]] return; }
L_0028C8C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 31824u);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] >= 0; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0028C90C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C8E0u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028C8E0u) [[unlikely]] return; }
L_0028C8E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028C90C; } }
L_0028C8E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C8F0u);  if (depth < kMaxDepth) unit_0002(c, 92u, depth + 1u); else { c.pc = 0x00108B38u; return; } if (c.pc != 0x0028C8F0u) [[unlikely]] return; }
L_0028C8F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 31856u);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] >= 0; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0028C90C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C90Cu);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028C90Cu) [[unlikely]] return; }
L_0028C90C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C914u);  if (depth < kMaxDepth) unit_0063(c, 54u, depth + 1u); else { c.pc = 0x0028C7B8u; return; } if (c.pc != 0x0028C914u) [[unlikely]] return; }
L_0028C914:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028C930:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C954u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 53u, depth + 1u); else { c.pc = 0x0028C780u; return; } if (c.pc != 0x0028C954u) [[unlikely]] return; }
L_0028C954:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C964u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 150u, depth + 1u); else { c.pc = 0x00109290u; return; } if (c.pc != 0x0028C964u) [[unlikely]] return; }
L_0028C964:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 31888u);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] >= 0; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0028C980; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C980u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028C980u) [[unlikely]] return; }
L_0028C980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C988u);  if (depth < kMaxDepth) unit_0063(c, 54u, depth + 1u); else { c.pc = 0x0028C7B8u; return; } if (c.pc != 0x0028C988u) [[unlikely]] return; }
L_0028C988:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028C9A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C9C4u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 53u, depth + 1u); else { c.pc = 0x0028C780u; return; } if (c.pc != 0x0028C9C4u) [[unlikely]] return; }
L_0028C9C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C9D0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 58u, depth + 1u); else { c.pc = 0x00108730u; return; } if (c.pc != 0x0028C9D0u) [[unlikely]] return; }
L_0028C9D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 31920u);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] >= 0; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0028C9EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C9ECu);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028C9ECu) [[unlikely]] return; }
L_0028C9EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C9F4u);  if (depth < kMaxDepth) unit_0063(c, 54u, depth + 1u); else { c.pc = 0x0028C7B8u; return; } if (c.pc != 0x0028C9F4u) [[unlikely]] return; }
L_0028C9F4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028CA10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CA24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 53u, depth + 1u); else { c.pc = 0x0028C780u; return; } if (c.pc != 0x0028CA24u) [[unlikely]] return; }
L_0028CA24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CA2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 79u, depth + 1u); else { c.pc = 0x001089B8u; return; } if (c.pc != 0x0028CA2Cu) [[unlikely]] return; }
L_0028CA2C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 31952u);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] >= 0; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0028CA48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CA48u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028CA48u) [[unlikely]] return; }
L_0028CA48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CA50u);  if (depth < kMaxDepth) unit_0063(c, 54u, depth + 1u); else { c.pc = 0x0028C7B8u; return; } if (c.pc != 0x0028CA50u) [[unlikely]] return; }
L_0028CA50:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028CA68:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CA8Cu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 53u, depth + 1u); else { c.pc = 0x0028C780u; return; } if (c.pc != 0x0028CA8Cu) [[unlikely]] return; }
L_0028CA8C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CA9Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 109u, depth + 1u); else { c.pc = 0x00108D70u; return; } if (c.pc != 0x0028CA9Cu) [[unlikely]] return; }
L_0028CA9C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 31984u);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] >= 0; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0028CAB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CAB8u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028CAB8u) [[unlikely]] return; }
L_0028CAB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CAC0u);  if (depth < kMaxDepth) unit_0063(c, 54u, depth + 1u); else { c.pc = 0x0028C7B8u; return; } if (c.pc != 0x0028CAC0u) [[unlikely]] return; }
L_0028CAC0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028CAE0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 80u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    c.budget -= 11;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0028CE44; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; c.r[3].d[0] = ld8((c.r[18].w[0] + 2u));  if (t) { goto L_0028CBBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CB20u); set32(c.r[4], ld32((c.r[18].w[0] + 44u)));  if (depth < kMaxDepth) unit_0001(c, 94u, depth + 1u); else { c.pc = 0x00104680u; return; } if (c.pc != 0x0028CB20u) [[unlikely]] return; }
L_0028CB20:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[3].d[0] = ld8((c.r[18].w[0] + 2u));  goto L_0028CBBC; }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[16], c.r[18].w[0] + 12u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CB48u); set32(c.r[17], c.r[18].w[0] + 20u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028CB48u) [[unlikely]] return; }
L_0028CB48:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[5], 0u + 1u);
    st32((c.r[18].w[0] + 16u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CB68u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028CB68u) [[unlikely]] return; }
L_0028CB68:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    st32((c.r[18].w[0] + 24u), 0u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[18].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_0028CBB8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CB94u); set32(c.r[4], c.r[4].w[0] + 32064u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028CB94u) [[unlikely]] return; }
L_0028CB94:
    c.budget -= 1;
L_0028CB98:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028CB98u | kUnwind; return; } goto L_0028CB98; } }
    c.budget -= 1;
L_0028CBB8:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028CBBC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0028CE44; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CBE4u); c.r[6].d[0] = c.r[6].d[0] | 65535ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028CBE4u) [[unlikely]] return; }
L_0028CBE4:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[19], c.r[29].w[0] + 32u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CC08u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028CC08u) [[unlikely]] return; }
L_0028CC08:
    set32(c.r[5], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[17], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[16], c.r[29].w[0] + 16u);
    set32(c.r[8], ld32((c.r[29].w[0] + 4u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[8].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[5].d[0] == 0ull) { breakpoint(c, 0x0028CC2Cu);  goto L_0028CC30; }
L_0028CC30:
    if (c.r[3].d[0] != 0) c.r[17].d[0] = c.r[8].d[0];
    mmi::div(c, 0, c.r[17].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CC48u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 129u, depth + 1u); else { c.pc = 0x00295978u; return; } if (c.pc != 0x0028CC48u) [[unlikely]] return; }
L_0028CC48:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CC60u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028CC60u) [[unlikely]] return; }
L_0028CC60:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CC78u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 129u, depth + 1u); else { c.pc = 0x00295978u; return; } if (c.pc != 0x0028CC78u) [[unlikely]] return; }
L_0028CC78:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CC90u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028CC90u) [[unlikely]] return; }
L_0028CC90:
    c.budget -= 2;
    if (c.r[17].sd[0] <= 0) { c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0028CE44; }
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & 63ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_0028CCE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CCB0u); set32(c.r[4], c.r[4].w[0] + 32096u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028CCB0u) [[unlikely]] return; }
L_0028CCB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[4], c.r[4].w[0] + 32136u);
    set32(c.r[6], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CCC8u); set32(c.r[7], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028CCC8u) [[unlikely]] return; }
L_0028CCC8:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028CCC8u | kUnwind; return; } goto L_0028CCC8; } }
    c.budget -= 1;
L_0028CCE8:
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[4].d[0] & 63ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 32u)));  goto L_0028CD40; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CD04u); set32(c.r[4], c.r[4].w[0] + 32184u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028CD04u) [[unlikely]] return; }
L_0028CD04:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[4], c.r[4].w[0] + 32136u);
    set32(c.r[6], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CD1Cu); set32(c.r[7], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028CD1Cu) [[unlikely]] return; }
L_0028CD1C:
    c.budget -= 1;
L_0028CD20:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028CD20u | kUnwind; return; } goto L_0028CD20; } }
    c.budget -= 1;
L_0028CD40:
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_0028CD90; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CD58u); set32(c.r[4], c.r[4].w[0] + 32224u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028CD58u) [[unlikely]] return; }
L_0028CD58:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[4], c.r[4].w[0] + 32136u);
    set32(c.r[6], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CD70u); set32(c.r[7], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028CD70u) [[unlikely]] return; }
L_0028CD70:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028CD70u | kUnwind; return; } goto L_0028CD70; } }
    c.budget -= 1;
L_0028CD90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CD98u); set32(c.r[5], c.r[5].w[0] - 1u);  if (depth < kMaxDepth) unit_0001(c, 153u, depth + 1u); else { c.pc = 0x00104BD8u; return; } if (c.pc != 0x0028CD98u) [[unlikely]] return; }
L_0028CD98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[4], c.r[18].w[0] + 28u);
    set32(c.r[7], ld32((c.r[29].w[0] + 32u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[18].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[18].w[0] + 32u), c.r[7].w[0]);
    st32((c.r[18].w[0] + 36u), c.r[6].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CDCCu); st32((c.r[18].w[0] + 40u), 0u);  if (depth < kMaxDepth) unit_0001(c, 96u, depth + 1u); else { c.pc = 0x001046A0u; return; } if (c.pc != 0x0028CDCCu) [[unlikely]] return; }
L_0028CDCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0] + 44u), c.r[2].w[0]);  if (t) { goto L_0028CE18; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CDE0u); set32(c.r[4], c.r[4].w[0] + 32264u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028CDE0u) [[unlikely]] return; }
L_0028CDE0:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CDF8u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028CDF8u) [[unlikely]] return; }
L_0028CDF8:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CE10u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028CE10u) [[unlikely]] return; }
L_0028CE10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0028CE44; } }
L_0028CE18:
    ldl(c.r[4], (c.r[29].w[0] + 7u));
    ldr(c.r[4], (c.r[29].w[0]));
    sdl(c.r[4], (c.r[18].w[0] + 19u));
    sdr(c.r[4], (c.r[18].w[0] + 12u));
    set32(c.r[2], 0u + 1u);
    ldl(c.r[4], (c.r[19].w[0] + 7u));
    ldr(c.r[4], (c.r[19].w[0]));
    sdl(c.r[4], (c.r[18].w[0] + 27u));
    sdr(c.r[4], (c.r[18].w[0] + 20u));
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 11;
L_0028CE44:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0028CE60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));  c.pc = t; return; }
L_0028CE68:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] - 29248u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 31u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 1u);
    c.budget -= 10;
L_0028CE90:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_0028CEA8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CEA4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 88u, depth + 1u); else { c.pc = 0x0028CAE0u; return; } if (c.pc != 0x0028CEA4u) [[unlikely]] return; }
L_0028CEA4:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_0028CEA8:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028CE90u | kUnwind; return; } goto L_0028CE90; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_0028D9F8; }
L_0028CF48:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CF6Cu); c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 26u, depth + 1u); else { c.pc = 0x002943F0u; return; } if (c.pc != 0x0028CF6Cu) [[unlikely]] return; }
L_0028CF6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[17], c.r[2].w[0] - 29248u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0028CFAC; } }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0028CF88:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 64u);
    c.r[2].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] << 6);  if (t) { goto L_0028CFAC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[3].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028CF88u | kUnwind; return; } goto L_0028CF88; } }
L_0028CFAC:
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028CFD8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[5], 0u + 32u);
    set32(c.r[4], c.r[4].w[0] + 32344u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CFCCu); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028CFCCu) [[unlikely]] return; }
L_0028CFCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0028D00C; } }
    c.budget -= 1;
L_0028CFD8:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CFE8u); set32(c.r[16], 0u + 64u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0028CFE8u) [[unlikely]] return; }
L_0028CFE8:
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 56u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[19].w[0]);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 52u), 0u);
    c.budget -= 9;
L_0028D00C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D014u);  if (depth < kMaxDepth) unit_0065(c, 27u, depth + 1u); else { c.pc = 0x00294408u; return; } if (c.pc != 0x0028D014u) [[unlikely]] return; }
L_0028D014:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0028D038:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D04Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 26u, depth + 1u); else { c.pc = 0x002943F0u; return; } if (c.pc != 0x0028D04Cu) [[unlikely]] return; }
L_0028D04C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0065(c, 27u, depth); }
L_0028D060:
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 60u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  c.pc = t; return; }
L_0028D070:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0028D10C; } }
    c.budget -= 1;
L_0028D0A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D0A8u); set32(c.r[4], ld32((c.r[18].w[0] + 44u)));  if (depth < kMaxDepth) unit_0001(c, 94u, depth + 1u); else { c.pc = 0x00104680u; return; } if (c.pc != 0x0028D0A8u) [[unlikely]] return; }
L_0028D0A8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[16], c.r[18].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028D0A0u | kUnwind; return; } goto L_0028D0A0; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D0CCu); set32(c.r[17], c.r[18].w[0] + 20u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028D0CCu) [[unlikely]] return; }
L_0028D0CC:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[5], 0u + 1u);
    st32((c.r[18].w[0] + 16u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D0ECu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028D0ECu) [[unlikely]] return; }
L_0028D0EC:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 24u), 0u);
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
L_0028D10C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028D120:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D144u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 26u, depth + 1u); else { c.pc = 0x002943F0u; return; } if (c.pc != 0x0028D144u) [[unlikely]] return; }
L_0028D144:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;  if (t) { goto L_0028D168; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0028D1CC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[16].w[0] - 1024u);  if (t) { goto L_0028D188; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] << 2);  if (t) { goto L_0028D198; } }
L_0028D168:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D17Cu); set32(c.r[7], ld32((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_0063(c, 151u, depth + 1u); else { c.pc = 0x0028D408u; return; } if (c.pc != 0x0028D17Cu) [[unlikely]] return; }
L_0028D17C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0028D1CC; } }
    c.budget -= 1;
L_0028D188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D190u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0063(c, 158u, depth + 1u); else { c.pc = 0x0028D5A0u; return; } if (c.pc != 0x0028D190u) [[unlikely]] return; }
L_0028D190:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028D1CC; } }
L_0028D198:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(64ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028D1CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] - 25712u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[18].w[0] >> 2);  if (t) { goto L_0028D1CC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] - 25456u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D1CCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028D1CCu) [[unlikely]] return; }
L_0028D1CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D1D4u);  if (depth < kMaxDepth) unit_0065(c, 27u, depth + 1u); else { c.pc = 0x00294408u; return; } if (c.pc != 0x0028D1D4u) [[unlikely]] return; }
L_0028D1D4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028D1F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D200u);  if (depth < kMaxDepth) unit_0001(c, 38u, depth + 1u); else { c.pc = 0x001041D0u; return; } if (c.pc != 0x0028D200u) [[unlikely]] return; }
L_0028D200:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D20Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 474u, depth + 1u); else { c.pc = 0x001078E0u; return; } if (c.pc != 0x0028D20Cu) [[unlikely]] return; }
L_0028D20C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D214u);  if (depth < kMaxDepth) unit_0001(c, 38u, depth + 1u); else { c.pc = 0x001041D0u; return; } if (c.pc != 0x0028D214u) [[unlikely]] return; }
L_0028D214:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D220u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 474u, depth + 1u); else { c.pc = 0x001078E0u; return; } if (c.pc != 0x0028D220u) [[unlikely]] return; }
L_0028D220:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00290000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 27196u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[6], c.r[6].w[0] - 12000u);
    set32(c.r[7], c.r[7].w[0] - 25968u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D250u); set32(c.r[4], c.r[4].w[0] - 26040u);  if (depth < kMaxDepth) unit_0001(c, 477u, depth + 1u); else { c.pc = 0x00107978u; return; } if (c.pc != 0x0028D250u) [[unlikely]] return; }
L_0028D250:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 27192u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D268u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 504u, depth + 1u); else { c.pc = 0x00107D90u; return; } if (c.pc != 0x0028D268u) [[unlikely]] return; }
L_0028D268:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0028D278:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00920000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00920000u);
    set32(c.r[2], c.r[2].w[0] - 5248u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[16], c.r[16].w[0] - 4992u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] - 26080u);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[5], 0u + 2u);
    st32((c.r[2].w[0] + 8u), c.r[6].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 16u);
    set32(c.r[10], 0u + 4u);
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D2D0u); st32((c.r[29].w[0]), 0u);  if (depth < kMaxDepth) unit_0001(c, 459u, depth + 1u); else { c.pc = 0x001076A8u; return; } if (c.pc != 0x0028D2D0u) [[unlikely]] return; }
L_0028D2D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028D2E8:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00920000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[7], c.r[7].w[0] - 5248u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00920000u);
    st32((c.r[7].w[0]), c.r[4].w[0]);
    set32(c.r[4], c.r[2].w[0] - 26080u);
    set32(c.r[9], c.r[9].w[0] - 4992u);
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D328u); st32((c.r[29].w[0]), 0u);  if (depth < kMaxDepth) unit_0001(c, 459u, depth + 1u); else { c.pc = 0x001076A8u; return; } if (c.pc != 0x0028D328u) [[unlikely]] return; }
L_0028D328:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028D338:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] - 27184u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_0028D350:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[6].sd[0] <= 0; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_0028D38C; } }
    set32(c.r[7], 0u - 86u);
    c.budget -= 2;
L_0028D370:
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028D370u | kUnwind; return; } goto L_0028D370; } }
L_0028D38C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[16], c.r[16].w[0] - 27180u);
    set32(c.r[5], c.r[5].w[0] + 32416u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D3A4u); set32(c.r[6], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0028D3A4u) [[unlikely]] return; }
L_0028D3A4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028D408:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].d[0] & 63ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_0028D448; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 32440u);  if (t) { goto L_0028D4D8; } }
    c.budget -= 1;
L_0028D448:
    c.r[2].d[0] = c.r[19].d[0] & 31ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] & 63ull;  if (t) { goto L_0028D460; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 32472u);  if (t) { goto L_0028D4D8; } }
L_0028D460:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;  if (t) { goto L_0028D478; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 32504u);  if (t) { goto L_0028D48C; } }
L_0028D478:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[8].w[0] << 4);  if (t) { goto L_0028D4A0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[5].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 32528u);
    c.budget -= 3;
L_0028D48C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D494u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028D494u) [[unlikely]] return; }
L_0028D494:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028D584; } }
    c.budget -= 1;
L_0028D4A0:
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[16], c.r[16].w[0] - 27168u);
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 8;
    { const bool t = c.r[8].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028D584; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D4C8u);  if (depth < kMaxDepth) unit_0063(c, 143u, depth + 1u); else { c.pc = 0x0028D278u; return; } if (c.pc != 0x0028D4C8u) [[unlikely]] return; }
L_0028D4C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0028D4E8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[4], c.r[4].w[0] + 32552u);
    c.budget -= 2;
L_0028D4D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D4E0u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028D4E0u) [[unlikely]] return; }
L_0028D4E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028D584; } }
L_0028D4E8:
    set32(c.r[3], c.r[17].w[0] - 64u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[2], c.r[18].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), c.r[18].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D524u); st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0028D524u) [[unlikely]] return; }
L_0028D524:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D53Cu); set32(c.r[5], c.r[5].w[0] + 63u);  if (depth < kMaxDepth) unit_0001(c, 153u, depth + 1u); else { c.pc = 0x00104BD8u; return; } if (c.pc != 0x0028D53Cu) [[unlikely]] return; }
L_0028D53C:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D554u); set32(c.r[5], c.r[5].w[0] + 63u);  if (depth < kMaxDepth) unit_0001(c, 160u, depth + 1u); else { c.pc = 0x00104D18u; return; } if (c.pc != 0x0028D554u) [[unlikely]] return; }
L_0028D554:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00290000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 11440u);
    set32(c.r[2], c.r[2].w[0] - 11464u);
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 12;
L_0028D584:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0028D5A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[17], 0u + 1u);  if (t) { goto L_0028D5DC; } }
L_0028D5C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D5D0u);  if (depth < kMaxDepth) unit_0063(c, 186u, depth + 1u); else { c.pc = 0x0028D9F8u; return; } if (c.pc != 0x0028D5D0u) [[unlikely]] return; }
L_0028D5D0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028D5C8u | kUnwind; return; } goto L_0028D5C8; } }
L_0028D5DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D5E4u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0063(c, 145u, depth + 1u); else { c.pc = 0x0028D2E8u; return; } if (c.pc != 0x0028D5E4u) [[unlikely]] return; }
L_0028D5E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[6], 0u + 68u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011AB50u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 201u, depth); }
L_0028D608:
    st32((c.r[4].w[0] + 36u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 32u), c.r[5].w[0]);  c.pc = t; return; }
L_0028D618:
    st32((c.r[4].w[0] + 44u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 40u), c.r[5].w[0]);  c.pc = t; return; }
L_0028D628:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[3], c.r[3].w[0] - 27176u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_0028D6B0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 60u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  goto L_0028D6B4; }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D68Cu); set32(c.r[5], c.r[5].w[0] - 1u);  if (depth < kMaxDepth) unit_0001(c, 160u, depth + 1u); else { c.pc = 0x00104D18u; return; } if (c.pc != 0x0028D68Cu) [[unlikely]] return; }
L_0028D68C:
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D6A0u); set32(c.r[6], ld32((c.r[16].w[0] + 16u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028D6A0u) [[unlikely]] return; }
L_0028D6A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 60u)));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_0028D6B0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_0028D6B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65280ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[4].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0028D778; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[17], ld32((c.r[2].w[0] - 27188u)));
    c.budget -= 5;
    if (c.r[17].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0028D778; }
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D6F4u); set32(c.r[5], ld32((c.r[16].w[0] + 12u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028D6F4u) [[unlikely]] return; }
L_0028D6F4:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D720u); set32(c.r[5], c.r[5].w[0] - 1u);  if (depth < kMaxDepth) unit_0001(c, 153u, depth + 1u); else { c.pc = 0x00104BD8u; return; } if (c.pc != 0x0028D720u) [[unlikely]] return; }
L_0028D720:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D738u); set32(c.r[5], c.r[5].w[0] + 63u);  if (depth < kMaxDepth) unit_0001(c, 160u, depth + 1u); else { c.pc = 0x00104D18u; return; } if (c.pc != 0x0028D738u) [[unlikely]] return; }
L_0028D738:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 52u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[5].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D76Cu); st32((c.r[16].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0001(c, 96u, depth + 1u); else { c.pc = 0x001046A0u; return; } if (c.pc != 0x0028D76Cu) [[unlikely]] return; }
L_0028D76C:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_0028D778:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028D788:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[19].w[0] - 27172u)));
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 40u), c.r[31].d[0]);  if (t) { goto L_0028D848; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[17], c.r[16].w[0] - 26080u);
    set32(c.r[5], ld32((c.r[18].w[0] - 27196u)));
    c.budget -= 6;
L_0028D7C8:
    set32(c.r[4], c.r[16].w[0] - 26080u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D7D4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 447u, depth + 1u); else { c.pc = 0x001074D8u; return; } if (c.pc != 0x0028D7D4u) [[unlikely]] return; }
L_0028D7D4:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[17].w[0] + 36u)));  goto L_0028D808; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D7E4u); set32(c.r[4], c.r[20].w[0] + 32592u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028D7E4u) [[unlikely]] return; }
L_0028D7E4:
    c.budget -= 1;
L_0028D7E8:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028D7E8u | kUnwind; return; } goto L_0028D7E8; } }
    c.budget -= 1;
L_0028D808:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[19].w[0] - 27172u);  if (t) { goto L_0028D84C; } }
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = 0ull | 65535ull;
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 4;
L_0028D820:
    c.budget -= 7;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], c.r[2].w[0] - 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028D820u | kUnwind; return; } goto L_0028D820; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[18].w[0] - 27196u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028D7C8u | kUnwind; return; } goto L_0028D7C8; } }
    c.budget -= 1;
L_0028D848:
    set32(c.r[3], c.r[19].w[0] - 27172u);
    c.budget -= 1;
L_0028D84C:
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0028D878:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[3].w[0] - 27172u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_0028D8D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[18], 0u + 1u);
    set32(c.r[16], c.r[2].w[0] - 27168u);
    set32(c.r[17], 0u + 7u);
    c.budget -= 5;
L_0028D8B8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_0028D8D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D8CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 158u, depth + 1u); else { c.pc = 0x0028D5A0u; return; } if (c.pc != 0x0028D8CCu) [[unlikely]] return; }
L_0028D8CC:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_0028D8D0:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 68u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028D8B8u | kUnwind; return; } goto L_0028D8B8; } }
L_0028D8D8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028D8F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D928u); c.r[20].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 203u, depth + 1u); else { c.pc = 0x00296868u; return; } if (c.pc != 0x0028D928u) [[unlikely]] return; }
L_0028D928:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0028D960; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00920000u);
    set32(c.r[8], c.r[7].w[0] - 5248u);
    c.budget -= 2;
L_0028D938:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.r[6].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[2].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028D938u | kUnwind; return; } goto L_0028D938; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].sd[0] = static_cast<std::int32_t>(0x00920000u);  if (t) { goto L_0028D968; } }
L_0028D960:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00920000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00920000u);
    c.budget -= 2;
L_0028D968:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[18], c.r[21].w[0] - 4992u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 26080u);
    set32(c.r[5], c.r[19].w[0] + 1024u);
    set32(c.r[7], c.r[7].w[0] - 5248u);
    set32(c.r[8], c.r[16].w[0] << 2);
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[10], c.r[17].w[0] << 2);
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D998u); st32((c.r[29].w[0]), 0u);  if (depth < kMaxDepth) unit_0001(c, 459u, depth + 1u); else { c.pc = 0x001076A8u; return; } if (c.pc != 0x0028D998u) [[unlikely]] return; }
L_0028D998:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0028D9C8; } }
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_0028D9A8:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.r[6].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[2].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028D9A8u | kUnwind; return; } goto L_0028D9A8; } }
L_0028D9C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D9D0u);  if (depth < kMaxDepth) unit_0065(c, 204u, depth + 1u); else { c.pc = 0x00296880u; return; } if (c.pc != 0x0028D9D0u) [[unlikely]] return; }
L_0028D9D0:
    set32(c.r[2], ld32((c.r[21].w[0] - 4992u)));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0028D9F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 7u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DA18u); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_0065(c, 26u, depth + 1u); else { c.pc = 0x002943F0u; return; } if (c.pc != 0x0028DA18u) [[unlikely]] return; }
L_0028DA18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[16], c.r[2].w[0] - 27168u);
    c.budget -= 2;
L_0028DA20:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_0028DA38; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DA34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 164u, depth + 1u); else { c.pc = 0x0028D628u; return; } if (c.pc != 0x0028DA34u) [[unlikely]] return; }
L_0028DA34:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_0028DA38:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 68u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028DA20u | kUnwind; return; } goto L_0028DA20; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_0065(c, 27u, depth); }
L_0028DA58:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 25200u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DA74u); set32(c.r[3], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0063(c, 379u, depth + 1u); else { c.pc = 0x0028F2A0u; return; } if (c.pc != 0x0028DA74u) [[unlikely]] return; }
L_0028DA74:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 25176u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028DA88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] - 25196u)));
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0028DAAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DAACu); set32(c.r[4], ld32((c.r[2].w[0] - 25192u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028DAACu) [[unlikely]] return; }
L_0028DAAC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028DAB8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = 0ull | 32768ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DAD8u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028DAD8u) [[unlikely]] return; }
L_0028DAD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[6], ld32((c.r[2].w[0] - 25188u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DAECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 253u, depth + 1u); else { c.pc = 0x002CDB58u; return; } if (c.pc != 0x0028DAECu) [[unlikely]] return; }
L_0028DAEC:
    c.r[4].d[0] = 0ull | 32769ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DAF8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028DAF8u) [[unlikely]] return; }
L_0028DAF8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028DB60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0028DC18; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DB84u);  if (depth < kMaxDepth) unit_0065(c, 205u, depth + 1u); else { c.pc = 0x00296898u; return; } if (c.pc != 0x0028DB84u) [[unlikely]] return; }
L_0028DB84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DB8Cu); set32(c.r[4], ld32((c.r[16].w[0] + 28u)));  if (depth < kMaxDepth) unit_0062(c, 442u, depth + 1u); else { c.pc = 0x0028BA98u; return; } if (c.pc != 0x0028DB8Cu) [[unlikely]] return; }
L_0028DB8C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0028DC08; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 32688u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0028C000u < 16384u) { entry = entries_0063[(t - 0x0028C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0028DBB8:
    set32(c.r[2], 0u + 3u);
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0028DBF8; } }
L_0028DBC8:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[16].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0028DBF8; } }
    c.budget -= 1;
L_0028DBF0:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 2;
L_0028DBF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DC00u);  if (depth < kMaxDepth) unit_0062(c, 428u, depth + 1u); else { c.pc = 0x0028B858u; return; } if (c.pc != 0x0028DC00u) [[unlikely]] return; }
L_0028DC00:
    st32((c.r[16].w[0] + 28u), 0u);
    c.budget -= 1;
L_0028DC04:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0028DC08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0065(c, 207u, depth); }
L_0028DC18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028DC28:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DC4Cu); set32(c.r[4], c.r[19].w[0] - 25184u);  if (depth < kMaxDepth) unit_0065(c, 273u, depth + 1u); else { c.pc = 0x00297328u; return; } if (c.pc != 0x0028DC4Cu) [[unlikely]] return; }
L_0028DC4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0028DC84; } }
    set32(c.r[18], 0u + 1u);
    set32(c.r[16], c.r[2].w[0] - 25072u);
    set32(c.r[17], 0u + 39u);
    c.budget -= 3;
L_0028DC60:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_0028DC78; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DC74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 198u, depth + 1u); else { c.pc = 0x0028DB60u; return; } if (c.pc != 0x0028DC74u) [[unlikely]] return; }
L_0028DC74:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_0028DC78:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 72u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028DC60u | kUnwind; return; } goto L_0028DC60; } }
    st32((c.r[19].w[0] - 25184u), 0u);
    c.budget -= 1;
L_0028DC84:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0028DCA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[2].w[0] - 25196u), c.r[4].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 25192u), c.r[5].w[0]);  c.pc = t; return; }
L_0028DCB8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DCCCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0028DCCCu) [[unlikely]] return; }
L_0028DCCC:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0028DD20; } }
    set32(c.r[9], 0u + 47u);
    set32(c.r[8], 0u + 92u);
    set32(c.r[4], c.r[16].w[0] + c.r[6].w[0]);
    c.budget -= 4;
L_0028DCE8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[5].d[0] = c.r[6].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[9].d[0]; c.r[3].d[0] = ld8((c.r[4].w[0]));  if (t) { goto L_0028DD04; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[3].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 2;
L_0028DD04:
    set32(c.r[2], c.r[3].w[0] - 97u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] - 32u);  if (t) { goto L_0028DD18; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0028DD18:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028DCE8u | kUnwind; return; } goto L_0028DCE8; } }
L_0028DD20:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028DD30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 64u), c.r[31].d[0]);  if (t) { goto L_0028DDA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DD54u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 353u, depth + 1u); else { c.pc = 0x0028EE90u; return; } if (c.pc != 0x0028DD54u) [[unlikely]] return; }
L_0028DD54:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[17], c.r[3].w[0] - 22192u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028DDA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DD74u);  if (depth < kMaxDepth) unit_0063(c, 293u, depth + 1u); else { c.pc = 0x0028E6D8u; return; } if (c.pc != 0x0028DD74u) [[unlikely]] return; }
L_0028DD74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DD7Cu); c.r[4].d[0] = 0ull | 33024ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028DD7Cu) [[unlikely]] return; }
L_0028DD7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DD84u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 295u, depth + 1u); else { c.pc = 0x002CE098u; return; } if (c.pc != 0x0028DD84u) [[unlikely]] return; }
L_0028DD84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DD8Cu); c.r[4].d[0] = 0ull | 33025ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028DD8Cu) [[unlikely]] return; }
L_0028DD8C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DD98u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 194u, depth + 1u); else { c.pc = 0x0028DAB8u; return; } if (c.pc != 0x0028DD98u) [[unlikely]] return; }
L_0028DD98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0028DDA8; } }
L_0028DDA0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028DDA4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0028DDA8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0028DDB8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 64u), c.r[31].d[0]);  if (t) { goto L_0028DDE0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 32728u);  if (t) { goto L_0028DE5C; } }
    c.budget -= 1;
L_0028DDE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DDE8u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 353u, depth + 1u); else { c.pc = 0x0028EE90u; return; } if (c.pc != 0x0028DDE8u) [[unlikely]] return; }
L_0028DDE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[17], c.r[3].w[0] - 22192u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028DE74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DE08u);  if (depth < kMaxDepth) unit_0063(c, 293u, depth + 1u); else { c.pc = 0x0028E6D8u; return; } if (c.pc != 0x0028DE08u) [[unlikely]] return; }
L_0028DE08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DE10u); c.r[4].d[0] = 0ull | 33280ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028DE10u) [[unlikely]] return; }
L_0028DE10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DE18u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 295u, depth + 1u); else { c.pc = 0x002CE098u; return; } if (c.pc != 0x0028DE18u) [[unlikely]] return; }
L_0028DE18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DE20u); c.r[4].d[0] = 0ull | 33281ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028DE20u) [[unlikely]] return; }
L_0028DE20:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DE2Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 194u, depth + 1u); else { c.pc = 0x0028DAB8u; return; } if (c.pc != 0x0028DE2Cu) [[unlikely]] return; }
L_0028DE2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_0028DE70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21864u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0028DE50; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DE50u); set32(c.r[4], c.r[4].w[0] - 32760u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028DE50u) [[unlikely]] return; }
L_0028DE50:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] - 32720u);
    c.budget -= 3;
L_0028DE5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DE64u);  if (depth < kMaxDepth) unit_0063(c, 192u, depth + 1u); else { c.pc = 0x0028DA88u; return; } if (c.pc != 0x0028DE64u) [[unlikely]] return; }
L_0028DE64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028DE74; } }
    c.budget -= 1;
L_0028DE70:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 1;
L_0028DE74:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0028DE88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] - 25072u);
    set32(c.r[4], 0u + 39u);
    c.budget -= 4;
L_0028DE98:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], c.r[3].w[0] + 72u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028DE98u | kUnwind; return; } goto L_0028DE98; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; return; }
L_0028DEC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u + 72u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011AB50u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 201u, depth); }
L_0028DEE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.budget -= 8;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_0028DF10; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 32672u);  if (t) { goto L_0028DF48; } }
    c.budget -= 1;
L_0028DF10:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0028DF28; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 32632u);  if (t) { goto L_0028DF48; } }
    c.budget -= 1;
L_0028DF28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DF30u);  if (depth < kMaxDepth) unit_0063(c, 230u, depth + 1u); else { c.pc = 0x0028DE88u; return; } if (c.pc != 0x0028DF30u) [[unlikely]] return; }
L_0028DF30:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[18], c.r[16].w[0] + 32u);  if (t) { goto L_0028DF58; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] - 32592u);
    c.budget -= 3;
L_0028DF48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DF50u);  if (depth < kMaxDepth) unit_0063(c, 192u, depth + 1u); else { c.pc = 0x0028DA88u; return; } if (c.pc != 0x0028DF50u) [[unlikely]] return; }
L_0028DF50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028E048; } }
L_0028DF58:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DF64u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 353u, depth + 1u); else { c.pc = 0x0028EE90u; return; } if (c.pc != 0x0028DF64u) [[unlikely]] return; }
L_0028DF64:
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0028DFF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] - 22192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DF84u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 293u, depth + 1u); else { c.pc = 0x0028E6D8u; return; } if (c.pc != 0x0028DF84u) [[unlikely]] return; }
L_0028DF84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 21864u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028DFA4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DFA4u); set32(c.r[4], c.r[4].w[0] - 32544u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028DFA4u) [[unlikely]] return; }
L_0028DFA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DFACu); c.r[4].d[0] = 0ull | 33536ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028DFACu) [[unlikely]] return; }
L_0028DFAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DFB4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 295u, depth + 1u); else { c.pc = 0x002CE098u; return; } if (c.pc != 0x0028DFB4u) [[unlikely]] return; }
L_0028DFB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DFBCu); c.r[4].d[0] = 0ull | 33537ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028DFBCu) [[unlikely]] return; }
L_0028DFBC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DFC8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 194u, depth + 1u); else { c.pc = 0x0028DAB8u; return; } if (c.pc != 0x0028DFC8u) [[unlikely]] return; }
L_0028DFC8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));  goto L_0028DFF0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DFE0u); set32(c.r[5], c.r[5].w[0] - 32504u);  if (depth < kMaxDepth) unit_0063(c, 192u, depth + 1u); else { c.pc = 0x0028DA88u; return; } if (c.pc != 0x0028DFE0u) [[unlikely]] return; }
L_0028DFE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DFE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 232u, depth + 1u); else { c.pc = 0x0028DEC0u; return; } if (c.pc != 0x0028DFE8u) [[unlikely]] return; }
L_0028DFE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028E048; } }
L_0028DFF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 36u)));  if (t) { goto L_0028E000; } }
L_0028DFF8:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0028E000:
    set32(c.r[2], c.r[5].w[0] + 2047u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] >> 11);
    set32(c.r[4], 0u + 1u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
    { const bool t = c.r[19].d[0] != c.r[4].d[0]; st32((c.r[16].w[0] + 28u), 0u);  if (t) { goto L_0028E044; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
L_0028E044:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0028E048:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0028E068:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_0028E0B0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  goto L_0028E098; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E094u);  if (depth < kMaxDepth) unit_0063(c, 262u, depth + 1u); else { c.pc = 0x0028E338u; return; } if (c.pc != 0x0028E094u) [[unlikely]] return; }
L_0028E094:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0028E098:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028DEC0u | kUnwind; return; } goto L_0028DEC0; }
L_0028E0B0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028E0C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0028E0E8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E0DCu); set32(c.r[5], c.r[5].w[0] - 32456u);  if (depth < kMaxDepth) unit_0063(c, 192u, depth + 1u); else { c.pc = 0x0028DA88u; return; } if (c.pc != 0x0028E0DCu) [[unlikely]] return; }
L_0028E0DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028E148; } }
    c.budget -= 1;
L_0028E0E8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0028E0F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0028E128; } }
L_0028E0F8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028E110; } }
    set32(c.r[4], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0028E12C; } }
L_0028E110:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[4], ld32((c.r[7].w[0] + 8u)));  if (t) { goto L_0028E12C; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0028E12C; } }
L_0028E128:
    set32(c.r[4], ld32((c.r[7].w[0] + 8u)));
    c.budget -= 1;
L_0028E12C:
    set32(c.r[2], ld32((c.r[7].w[0] + 12u)));
    st32((c.r[7].w[0] + 20u), 0u);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    c.r[4].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[4].d[0] != 0) c.r[2].d[0] = 0ull;
    st32((c.r[7].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 7;
L_0028E148:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028E158:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0028E180; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E174u); set32(c.r[5], c.r[5].w[0] - 32456u);  if (depth < kMaxDepth) unit_0063(c, 192u, depth + 1u); else { c.pc = 0x0028DA88u; return; } if (c.pc != 0x0028E174u) [[unlikely]] return; }
L_0028E174:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028E184; } }
    c.budget -= 1;
L_0028E180:
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 1;
L_0028E184:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028E190:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.budget -= 10;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_0028E1C8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 32456u);  if (t) { goto L_0028E1E8; } }
    c.budget -= 1;
L_0028E1C8:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0028E1D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 32432u);  if (t) { goto L_0028E1E8; } }
L_0028E1D8:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));  goto L_0028E1F8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], c.r[5].w[0] - 32400u);
    c.budget -= 2;
L_0028E1E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E1F0u);  if (depth < kMaxDepth) unit_0063(c, 192u, depth + 1u); else { c.pc = 0x0028DA88u; return; } if (c.pc != 0x0028E1F0u) [[unlikely]] return; }
L_0028E1F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028E318; } }
L_0028E1F8:
    set32(c.r[19], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[19].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028E318; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0028E218; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0028E318; } }
    c.budget -= 1;
L_0028E218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E220u);  if (depth < kMaxDepth) unit_0062(c, 424u, depth + 1u); else { c.pc = 0x0028B7D0u; return; } if (c.pc != 0x0028E220u) [[unlikely]] return; }
L_0028E220:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0] + 28u), c.r[3].w[0]);  if (t) { goto L_0028E318; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[6], c.r[6].w[0] - 21872u);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = ld8((c.r[6].w[0]));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[7].d[0] = c.r[3].d[0];
    c.r[8].d[0] = ld8((c.r[6].w[0] + 1u));
    set32(c.r[5], c.r[7].w[0] << 11);
    set32(c.r[5], c.r[17].w[0] + c.r[5].w[0]);
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[2].d[0] = ld8((c.r[6].w[0] + 2u));
    st32((c.r[16].w[0] + 16u), c.r[7].w[0]);
    st8((c.r[16].w[0] + 70u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E280u); st32((c.r[16].w[0] + 24u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0001(c, 160u, depth + 1u); else { c.pc = 0x00104D18u; return; } if (c.pc != 0x0028E280u) [[unlikely]] return; }
L_0028E280:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[8], c.r[16].w[0] + 68u);
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E2A0u); set32(c.r[7], ld32((c.r[16].w[0] + 24u)));  if (depth < kMaxDepth) unit_0062(c, 433u, depth + 1u); else { c.pc = 0x0028B8F8u; return; } if (c.pc != 0x0028E2A0u) [[unlikely]] return; }
L_0028E2A0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_0028E2B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E2B0u); set32(c.r[4], ld32((c.r[16].w[0] + 28u)));  if (depth < kMaxDepth) unit_0062(c, 428u, depth + 1u); else { c.pc = 0x0028B858u; return; } if (c.pc != 0x0028E2B0u) [[unlikely]] return; }
L_0028E2B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028E318; } }
L_0028E2B8:
    set32(c.r[3], 0u + 1u);
    set32(c.r[17], ld32((c.r[2].w[0] - 21868u)));
    c.budget -= 4;
    if (c.r[17].d[0] != c.r[3].d[0]) { st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[19].w[0]));  goto L_0028E310; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E2D0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 295u, depth + 1u); else { c.pc = 0x002CE098u; return; } if (c.pc != 0x0028E2D0u) [[unlikely]] return; }
L_0028E2D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E2D8u);  if (depth < kMaxDepth) unit_0063(c, 27u, depth + 1u); else { c.pc = 0x0028C320u; return; } if (c.pc != 0x0028E2D8u) [[unlikely]] return; }
L_0028E2D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E2E0u);  if (depth < kMaxDepth) unit_0063(c, 19u, depth + 1u); else { c.pc = 0x0028C210u; return; } if (c.pc != 0x0028E2E0u) [[unlikely]] return; }
L_0028E2E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E2E8u); set32(c.r[4], ld32((c.r[16].w[0] + 28u)));  if (depth < kMaxDepth) unit_0062(c, 455u, depth + 1u); else { c.pc = 0x0028BBC8u; return; } if (c.pc != 0x0028E2E8u) [[unlikely]] return; }
L_0028E2E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E2F0u); set32(c.r[4], ld32((c.r[16].w[0] + 28u)));  if (depth < kMaxDepth) unit_0062(c, 428u, depth + 1u); else { c.pc = 0x0028B858u; return; } if (c.pc != 0x0028E2F0u) [[unlikely]] return; }
L_0028E2F0:
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[16].w[0] + 20u), c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0028E314; } }
L_0028E310:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_0028E314:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0028E318:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0028E338:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 2;
L_0028E340:
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.budget -= 6;
L_0028E358:
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 48u), c.r[31].d[0]);  if (t) { goto L_0028E390; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], c.r[5].w[0] - 32456u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028DA88u | kUnwind; return; } goto L_0028DA88; }
L_0028E390:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0028E418; }
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x00090000u);  if (t) { goto L_0028E3B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E3B4u);  if (depth < kMaxDepth) unit_0062(c, 464u, depth + 1u); else { c.pc = 0x0028BCF8u; return; } if (c.pc != 0x0028E3B4u) [[unlikely]] return; }
L_0028E3B4:
    set32(c.r[19], 0u + 2u);
    c.r[17].d[0] = c.r[17].d[0] | 65535ull;
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 5;
L_0028E3C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E3D0u);  if (depth < kMaxDepth) unit_0063(c, 19u, depth + 1u); else { c.pc = 0x0028C210u; return; } if (c.pc != 0x0028E3D0u) [[unlikely]] return; }
L_0028E3D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E3D8u);  if (depth < kMaxDepth) unit_0063(c, 206u, depth + 1u); else { c.pc = 0x0028DC28u; return; } if (c.pc != 0x0028E3D8u) [[unlikely]] return; }
L_0028E3D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E3E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 271u, depth + 1u); else { c.pc = 0x0028E438u; return; } if (c.pc != 0x0028E3E0u) [[unlikely]] return; }
L_0028E3E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[19].d[0]) { st32((c.r[16].w[0] + 20u), 0u);  goto L_0028E410; }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[20].w[0] - 21864u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E3C8u | kUnwind; return; } goto L_0028E3C8; } }
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[3].d[0]) { st32((c.r[16].w[0] + 20u), 0u);  goto L_0028E410; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E40Cu); set32(c.r[4], c.r[21].w[0] - 32360u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028E40Cu) [[unlikely]] return; }
L_0028E40C:
    st32((c.r[16].w[0] + 20u), 0u);
    c.budget -= 1;
L_0028E410:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0028E418:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0028E438:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0028E460; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E454u); set32(c.r[5], c.r[5].w[0] - 32456u);  if (depth < kMaxDepth) unit_0063(c, 192u, depth + 1u); else { c.pc = 0x0028DA88u; return; } if (c.pc != 0x0028E454u) [[unlikely]] return; }
L_0028E454:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028E464; } }
    c.budget -= 1;
L_0028E460:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 1;
L_0028E464:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028E470:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 2048u);  c.pc = t; return; }
L_0028E478:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0028E4A0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E494u); set32(c.r[5], c.r[5].w[0] - 32456u);  if (depth < kMaxDepth) unit_0063(c, 192u, depth + 1u); else { c.pc = 0x0028DA88u; return; } if (c.pc != 0x0028E494u) [[unlikely]] return; }
L_0028E494:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028E4B8; } }
    c.budget -= 1;
L_0028E4A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0028E4B8; }
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] << 11);
    c.budget -= 2;
L_0028E4B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028E518:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E534u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 353u, depth + 1u); else { c.pc = 0x0028EE90u; return; } if (c.pc != 0x0028E534u) [[unlikely]] return; }
L_0028E534:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[17], c.r[3].w[0] - 22192u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028E5AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E554u);  if (depth < kMaxDepth) unit_0063(c, 293u, depth + 1u); else { c.pc = 0x0028E6D8u; return; } if (c.pc != 0x0028E554u) [[unlikely]] return; }
L_0028E554:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E55Cu); c.r[4].d[0] = 0ull | 33792ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028E55Cu) [[unlikely]] return; }
L_0028E55C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E564u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 295u, depth + 1u); else { c.pc = 0x002CE098u; return; } if (c.pc != 0x0028E564u) [[unlikely]] return; }
L_0028E564:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E56Cu); c.r[4].d[0] = 0ull | 33793ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028E56Cu) [[unlikely]] return; }
L_0028E56C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E578u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 194u, depth + 1u); else { c.pc = 0x0028DAB8u; return; } if (c.pc != 0x0028E578u) [[unlikely]] return; }
L_0028E578:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_0028E5A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21864u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028E59C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E59Cu); set32(c.r[4], c.r[4].w[0] - 32760u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028E59Cu) [[unlikely]] return; }
L_0028E59C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028E5AC; } }
    c.budget -= 1;
L_0028E5A8:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 1;
L_0028E5AC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0028E5C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] << 11;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  c.pc = t; return; }
L_0028E5D0:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] << 11;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  c.pc = t; return; }
L_0028E5F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0028E5F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E518u | kUnwind; return; } goto L_0028E518; }
L_0028E610:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028E6C8; } }
    set32(c.r[2], 0u + 203u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[5].sd[0] < 204ll ? 1ull : 0ull;  if (t) { goto L_0028E6B0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 205u);  if (t) { goto L_0028E660; } }
    set32(c.r[2], 0u + 201u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[5].sd[0] < 202ll ? 1ull : 0ull;  if (t) { goto L_0028E690; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 200u);  if (t) { goto L_0028E6A0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0028E680; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0028E6CC; } }
    c.budget -= 1;
L_0028E660:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[5].sd[0] < 205ll ? 1ull : 0ull;  if (t) { goto L_0028E6B0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 299u);  if (t) { goto L_0028E6A0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0028E6C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0028E6CC; } }
L_0028E680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E688u);  if (depth < kMaxDepth) unit_0063(c, 284u, depth + 1u); else { c.pc = 0x0028E5C0u; return; } if (c.pc != 0x0028E688u) [[unlikely]] return; }
L_0028E688:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0028E6C4; } }
L_0028E690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E698u);  if (depth < kMaxDepth) unit_0063(c, 285u, depth + 1u); else { c.pc = 0x0028E5D0u; return; } if (c.pc != 0x0028E698u) [[unlikely]] return; }
L_0028E698:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0028E6C4; } }
L_0028E6A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E6A8u);  if (depth < kMaxDepth) unit_0063(c, 286u, depth + 1u); else { c.pc = 0x0028E5F0u; return; } if (c.pc != 0x0028E6A8u) [[unlikely]] return; }
L_0028E6A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0028E6C4; } }
L_0028E6B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E6B8u);  if (depth < kMaxDepth) unit_0063(c, 287u, depth + 1u); else { c.pc = 0x0028E5F8u; return; } if (c.pc != 0x0028E6B8u) [[unlikely]] return; }
L_0028E6B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0028E6C4; } }
L_0028E6C0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0028E6C4:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0028E6C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0028E6CC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028E6D8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[5], c.r[5].w[0] - 21856u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E700u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0028E700u) [[unlikely]] return; }
L_0028E700:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], 0u + 47u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 92u);  if (t) { goto L_0028E724; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0028E724; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E724u); set32(c.r[5], c.r[5].w[0] - 32320u);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x0028E724u) [[unlikely]] return; }
L_0028E724:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E738u); set32(c.r[16], c.r[16].w[0] - 32312u);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x0028E738u) [[unlikely]] return; }
L_0028E738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E740u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0028E740u) [[unlikely]] return; }
L_0028E740:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E750u); set32(c.r[4], c.r[2].w[0] - 2u);  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x0028E750u) [[unlikely]] return; }
L_0028E750:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0028E768; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E764u);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x0028E764u) [[unlikely]] return; }
L_0028E764:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0028E768:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028DCB8u | kUnwind; return; } goto L_0028DCB8; }
L_0028E780:
    set32(c.r[4], c.r[4].w[0] << 24);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 24));
    set32(c.r[2], c.r[4].w[0] - 97u);
    set32(c.r[3], c.r[4].w[0] - 32u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    set32(c.r[5], c.r[3].w[0] << 24);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0028E7A4; } }
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 24));
    c.budget -= 1;
L_0028E7A4:
    c.r[3].d[0] = c.r[3].d[0] ^ 92ull;
    set32(c.r[2], 0u + 47u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];  c.pc = t; return; }
L_0028E7B8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], c.r[4].w[0] << 24);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[5].w[0] << 24);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 24));
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E7DCu); set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 24));  if (depth < kMaxDepth) unit_0063(c, 300u, depth + 1u); else { c.pc = 0x0028E780u; return; } if (c.pc != 0x0028E7DCu) [[unlikely]] return; }
L_0028E7DC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E7E8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 300u, depth + 1u); else { c.pc = 0x0028E780u; return; } if (c.pc != 0x0028E7E8u) [[unlikely]] return; }
L_0028E7E8:
    set32(c.r[3], 0u - 1u);
    c.r[16].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = 0ull + 0ull;
    if (c.r[16].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028E810:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E834u); c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0028E834u) [[unlikely]] return; }
L_0028E834:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E840u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0028E840u) [[unlikely]] return; }
L_0028E840:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0028E850; } }
L_0028E848:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0028E888; } }
L_0028E850:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0028E884; } }
    set32(c.r[3], c.r[18].w[0] + c.r[16].w[0]);
    c.budget -= 2;
L_0028E860:
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E874u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0063(c, 301u, depth + 1u); else { c.pc = 0x0028E7B8u; return; } if (c.pc != 0x0028E874u) [[unlikely]] return; }
L_0028E874:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E848u | kUnwind; return; } goto L_0028E848; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[18].w[0] + c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E860u | kUnwind; return; } goto L_0028E860; } }
L_0028E884:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028E888:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0028E8A8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 21;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 4u), c.r[6].w[0]);  if (t) { goto L_0028E9E0; } }
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[22].w[0] << 3);
    set32(c.r[20], 0u + 10u);
    set32(c.r[30], 0u + 13u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 7;
L_0028E918:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[20].d[0]) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));  goto L_0028E92C; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[18].w[0] + 1u);  if (t) { goto L_0028E9BC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.budget -= 1;
L_0028E92C:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[20].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0028E940; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] - 1u);  if (t) { goto L_0028E948; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0028E940:
    set32(c.r[5], c.r[19].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[5].w[0] - 1u);
    c.budget -= 2;
L_0028E948:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[20].d[0]; set32(c.r[17], c.r[18].w[0] - c.r[4].w[0]);  if (t) { goto L_0028E95C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[30].d[0]; set32(c.r[2], c.r[5].w[0] - 2u);  if (t) { goto L_0028E964; } }
L_0028E95C:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[5].w[0] - 2u);
    c.budget -= 2;
L_0028E964:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[20].d[0]) { st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  goto L_0028E97C; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[30].d[0]; set32(c.r[5], c.r[19].w[0] + c.r[4].w[0]);  if (t) { goto L_0028E980; } }
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0028E97C:
    set32(c.r[5], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 1;
L_0028E980:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E98Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0028E98Cu) [[unlikely]] return; }
L_0028E98C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E994u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 211u, depth + 1u); else { c.pc = 0x0028DCB8u; return; } if (c.pc != 0x0028E994u) [[unlikely]] return; }
L_0028E994:
    set32(c.r[6], c.r[16].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] - 1u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));  goto L_0028E9A4; }
L_0028E9A4:
    set32(c.r[3], c.r[18].w[0] + 1u);
    set32(c.r[2], c.r[23].w[0] + c.r[16].w[0]);
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[16], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[21].d[0] == c.r[22].d[0]; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0028E9E0; } }
L_0028E9BC:
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0028E9E0; } }
    set32(c.r[2], c.r[19].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E918u | kUnwind; return; } goto L_0028E918; }
L_0028E9E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 21888u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[21].d[0] + 0ull;  goto L_0028EA0C; }
    st32((c.r[2].w[0] + 12u), c.r[23].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0])));
    st32((c.r[2].w[0] + 8u), c.r[22].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[21].w[0]);
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
L_0028EA0C:
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
L_0028EA40:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st64((c.r[29].w[0] + 88u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[16].d[0]);
    set32(c.r[2], c.r[29].w[0] + 64u);
    st64((c.r[29].w[0] + 104u), c.r[19].d[0]);
    set32(c.r[5], c.r[3].w[0] - 32304u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    lwl(c.r[3], (c.r[17].w[0] + 3u));
    lwr(c.r[3], (c.r[17].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    swl(c.r[3], (c.r[2].w[0] + 3u));
    swr(c.r[3], (c.r[2].w[0]));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EA90u); st8((c.r[29].w[0] + 68u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0007(c, 105u, depth + 1u); else { c.pc = 0x0011D7A8u; return; } if (c.pc != 0x0028EA90u) [[unlikely]] return; }
L_0028EA90:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[19].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_0028EAB0; }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EAA4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 66u, depth + 1u); else { c.pc = 0x002906D0u; return; } if (c.pc != 0x0028EAA4u) [[unlikely]] return; }
L_0028EAA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0028EBB0; } }
    c.budget -= 1;
L_0028EAB0:
    set32(c.r[6], 0u + 128u);
    set32(c.r[16], c.r[19].w[0] - 21592u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EAC4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0028EAC4u) [[unlikely]] return; }
L_0028EAC4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EAD4u); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_0063(c, 293u, depth + 1u); else { c.pc = 0x0028E6D8u; return; } if (c.pc != 0x0028EAD4u) [[unlikely]] return; }
L_0028EAD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EADCu); c.r[4].d[0] = 0ull | 36864ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028EADCu) [[unlikely]] return; }
L_0028EADC:
    c.budget -= 1;
L_0028EAE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EAE8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0073(c, 295u, depth + 1u); else { c.pc = 0x002CE098u; return; } if (c.pc != 0x0028EAE8u) [[unlikely]] return; }
L_0028EAE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028EAE0u | kUnwind; return; } goto L_0028EAE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EAF8u); c.r[4].d[0] = 0ull | 36865ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028EAF8u) [[unlikely]] return; }
L_0028EAF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EB00u); c.r[4].d[0] = 0ull | 37120ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028EB00u) [[unlikely]] return; }
L_0028EB00:
    set32(c.r[5], c.r[19].w[0] - 21592u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EB0Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 194u, depth + 1u); else { c.pc = 0x0028DAB8u; return; } if (c.pc != 0x0028EB0Cu) [[unlikely]] return; }
L_0028EB0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028EB20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull | 37121ull;  if (t) { goto L_0028EB64; } }
    c.budget -= 1;
L_0028EB20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EB28u); c.r[4].d[0] = 0ull | 37122ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028EB28u) [[unlikely]] return; }
L_0028EB28:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull | 37376ull;
    st8((c.r[29].w[0] + 49u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 48u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 50u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EB44u); st8((c.r[29].w[0] + 51u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028EB44u) [[unlikely]] return; }
L_0028EB44:
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[7], c.r[29].w[0] + 48u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EB58u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0073(c, 371u, depth + 1u); else { c.pc = 0x002CEAA8u; return; } if (c.pc != 0x0028EB58u) [[unlikely]] return; }
L_0028EB58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028EB78; } }
    c.r[4].d[0] = 0ull | 37377ull;
    c.budget -= 1;
L_0028EB64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EB6Cu);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028EB6Cu) [[unlikely]] return; }
L_0028EB6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028EBAC; } }
    c.budget -= 1;
L_0028EB78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EB80u); c.r[4].d[0] = 0ull | 37378ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028EB80u) [[unlikely]] return; }
L_0028EB80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EB88u); c.r[4].d[0] = 0ull | 37632ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028EB88u) [[unlikely]] return; }
L_0028EB88:
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_0028EB90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EB98u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0073(c, 295u, depth + 1u); else { c.pc = 0x002CE098u; return; } if (c.pc != 0x0028EB98u) [[unlikely]] return; }
L_0028EB98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028EB90u | kUnwind; return; } goto L_0028EB90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EBA8u); c.r[4].d[0] = 0ull | 37633ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028EBA8u) [[unlikely]] return; }
L_0028EBA8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028EBAC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0028EBB0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 104u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0028EBC8:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 104u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[30].d[0]);
    c.r[30].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 136u), c.r[31].d[0]);
    c.budget -= 17;
    { const bool t = c.r[22].sd[0] <= 0; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_0028ED1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[18].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[23], c.r[2].w[0] - 21888u);
    c.budget -= 3;
L_0028EC18:
    set32(c.r[2], ld32((c.r[23].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[23].w[0] + 8u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[4].w[0] + c.r[20].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[21].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0028ED0C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EC4Cu); set32(c.r[5], c.r[19].w[0] - 21592u);  if (depth < kMaxDepth) unit_0063(c, 293u, depth + 1u); else { c.pc = 0x0028E6D8u; return; } if (c.pc != 0x0028EC4Cu) [[unlikely]] return; }
L_0028EC4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EC54u); c.r[4].d[0] = 0ull | 37888ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028EC54u) [[unlikely]] return; }
L_0028EC54:
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_0028EC58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EC60u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0073(c, 295u, depth + 1u); else { c.pc = 0x002CE098u; return; } if (c.pc != 0x0028EC60u) [[unlikely]] return; }
L_0028EC60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028EC58u | kUnwind; return; } goto L_0028EC58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EC70u); c.r[4].d[0] = 0ull | 37889ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028EC70u) [[unlikely]] return; }
L_0028EC70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EC78u); c.r[4].d[0] = 0ull | 38144ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028EC78u) [[unlikely]] return; }
L_0028EC78:
    set32(c.r[5], c.r[19].w[0] - 21592u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EC84u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 194u, depth + 1u); else { c.pc = 0x0028DAB8u; return; } if (c.pc != 0x0028EC84u) [[unlikely]] return; }
L_0028EC84:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0028ECD8; } }
    c.r[4].d[0] = 0ull | 38145ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EC9Cu); set32(c.r[30], c.r[30].w[0] + 1u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028EC9Cu) [[unlikely]] return; }
L_0028EC9C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] - 21864u)));
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_0028ED10; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028ECCCu); set32(c.r[4], c.r[2].w[0] - 32296u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028ECCCu) [[unlikely]] return; }
L_0028ECCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { goto L_0028ED10; } }
    c.budget -= 1;
L_0028ECD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028ECE0u); c.r[4].d[0] = 0ull | 38146ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028ECE0u) [[unlikely]] return; }
L_0028ECE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 21864u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 48u)));  goto L_0028ED04; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028ED00u); set32(c.r[4], c.r[2].w[0] - 32272u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028ED00u) [[unlikely]] return; }
L_0028ED00:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_0028ED04:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    c.budget -= 2;
L_0028ED0C:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0028ED10:
    c.r[2].d[0] = c.r[20].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028EC18u | kUnwind; return; } goto L_0028EC18; } }
L_0028ED1C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[16], c.r[4].w[0] - 21864u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 48u)));  goto L_0028ED44; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028ED40u); set32(c.r[4], c.r[4].w[0] - 32248u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028ED40u) [[unlikely]] return; }
L_0028ED40:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_0028ED44:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[30].d[0] + 0ull;  if (t) { goto L_0028ED6C; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 10u);  if (t) { goto L_0028ED68; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028ED68u); set32(c.r[4], c.r[4].w[0] - 32224u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028ED68u) [[unlikely]] return; }
L_0028ED68:
    c.r[2].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 1;
L_0028ED6C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 104u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 120u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 136u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0028EDA0:
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
    { const bool t = c.r[20].sd[0] <= 0; st64((c.r[29].w[0] + 56u), c.r[31].d[0]);  if (t) { goto L_0028EE38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[21], c.r[2].w[0] - 21888u);
    c.budget -= 3;
L_0028EDE8:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EE10u); set32(c.r[5], c.r[18].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_0063(c, 304u, depth + 1u); else { c.pc = 0x0028E810u; return; } if (c.pc != 0x0028EE10u) [[unlikely]] return; }
L_0028EE10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[16].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;  if (t) { goto L_0028EE30; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0028EE40; } }
    c.budget -= 1;
L_0028EE30:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028EDE8u | kUnwind; return; } goto L_0028EDE8; } }
L_0028EE38:
    st32((c.r[19].w[0] + 4u), 0u);
    st32((c.r[19].w[0]), 0u);
    c.budget -= 2;
L_0028EE40:
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
L_0028EE68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 21888u);
    set32(c.r[6], 0u + 16u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011AB50u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 201u, depth); }
L_0028EE90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[4], c.r[4].w[0] - 32176u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EEB8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x0028EEB8u) [[unlikely]] return; }
L_0028EEB8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] - 21888u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_0028EF00; } }
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21864u)));
    c.budget -= 7;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0028EF28; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], 0u + 46u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EEF4u); set32(c.r[4], c.r[4].w[0] - 32168u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028EEF4u) [[unlikely]] return; }
L_0028EEF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028EF28; } }
    c.budget -= 1;
L_0028EF00:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0028EF24; } }
    set32(c.r[7], ld32((c.r[3].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EF24u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 349u, depth + 1u); else { c.pc = 0x0028EDA0u; return; } if (c.pc != 0x0028EF24u) [[unlikely]] return; }
L_0028EF24:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028EF28:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028EF40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00920000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], 0u + 4096u);
    set32(c.r[4], c.r[20].w[0] - 4736u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EF80u); c.r[19].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0028EF80u) [[unlikely]] return; }
L_0028EF80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 21888u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028EF98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EF98u);  if (depth < kMaxDepth) unit_0063(c, 352u, depth + 1u); else { c.pc = 0x0028EE68u; return; } if (c.pc != 0x0028EF98u) [[unlikely]] return; }
L_0028EF98:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0028EFB0; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0028EFB0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0028EFB8; } }
L_0028EFB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EFB8u);  if (depth < kMaxDepth) unit_0063(c, 352u, depth + 1u); else { c.pc = 0x0028EE68u; return; } if (c.pc != 0x0028EFB8u) [[unlikely]] return; }
L_0028EFB8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028F0CC; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0028EFF0; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 21864u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0028F0CC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EFE4u); set32(c.r[4], c.r[4].w[0] - 32128u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028EFE4u) [[unlikely]] return; }
L_0028EFE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028F0CC; } }
    c.budget -= 1;
L_0028EFF0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0028F020; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21864u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0028F0CC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F018u); set32(c.r[4], c.r[4].w[0] - 32080u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028F018u) [[unlikely]] return; }
L_0028F018:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028F0CC; } }
L_0028F020:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[20], c.r[20].w[0] - 4736u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F030u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0028F030u) [[unlikely]] return; }
L_0028F030:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F03Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 314u, depth + 1u); else { c.pc = 0x0028EA40u; return; } if (c.pc != 0x0028F03Cu) [[unlikely]] return; }
L_0028F03C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[19].w[0] + 9u);  goto L_0028F080; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21864u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0028F068; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F064u); set32(c.r[4], c.r[4].w[0] - 32032u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028F064u) [[unlikely]] return; }
L_0028F064:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 1;
L_0028F068:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F074u); set32(c.r[5], c.r[5].w[0] - 31992u);  if (depth < kMaxDepth) unit_0063(c, 192u, depth + 1u); else { c.pc = 0x0028DA88u; return; } if (c.pc != 0x0028F074u) [[unlikely]] return; }
L_0028F074:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028F0CC; } }
    c.budget -= 1;
L_0028F080:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    mmi::divu(c, 0, c.r[17].w[0], c.r[16].w[0]);
    set32(c.r[6], 0u + 4096u);
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x0028F098u);  goto L_0028F09C; }
L_0028F09C:
    c.r[17].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F0ACu); set32(c.r[17], c.r[17].w[0] << 3);  if (depth < kMaxDepth) unit_0063(c, 310u, depth + 1u); else { c.pc = 0x0028E8A8u; return; } if (c.pc != 0x0028F0ACu) [[unlikely]] return; }
L_0028F0AC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F0B8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 334u, depth + 1u); else { c.pc = 0x0028EBC8u; return; } if (c.pc != 0x0028F0B8u) [[unlikely]] return; }
L_0028F0B8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x0028F0BCu);  goto L_0028F0C0; }
L_0028F0C0:
    set32(c.r[3], c.r[19].w[0] + 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_0028F0CC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0028F0F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00920000u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 4096u);
    set32(c.r[4], c.r[2].w[0] - 4736u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F138u); c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0028F138u) [[unlikely]] return; }
L_0028F138:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 21888u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028F150; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F150u);  if (depth < kMaxDepth) unit_0063(c, 352u, depth + 1u); else { c.pc = 0x0028EE68u; return; } if (c.pc != 0x0028F150u) [[unlikely]] return; }
L_0028F150:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0028F170; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0028F170; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0028F170; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0028F178; } }
L_0028F170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F178u);  if (depth < kMaxDepth) unit_0063(c, 352u, depth + 1u); else { c.pc = 0x0028EE68u; return; } if (c.pc != 0x0028F178u) [[unlikely]] return; }
L_0028F178:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028F234; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0028F1A8; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 21864u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028F234; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - 32128u);  if (t) { goto L_0028F1D4; } }
    c.budget -= 1;
L_0028F1A8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[3], ld32((c.r[2].w[0] - 21864u)));  if (t) { goto L_0028F1C0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[16], c.r[21].w[0] + 9u);  if (t) { goto L_0028F1E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21864u)));
    c.budget -= 2;
L_0028F1C0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028F234; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 32080u);
    c.budget -= 3;
L_0028F1D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F1DCu);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028F1DCu) [[unlikely]] return; }
L_0028F1DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028F234; } }
    c.budget -= 1;
L_0028F1E8:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    mmi::divu(c, 0, c.r[17].w[0], c.r[16].w[0]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x0028F200u);  goto L_0028F204; }
L_0028F204:
    c.r[17].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F214u); set32(c.r[17], c.r[17].w[0] << 3);  if (depth < kMaxDepth) unit_0063(c, 310u, depth + 1u); else { c.pc = 0x0028E8A8u; return; } if (c.pc != 0x0028F214u) [[unlikely]] return; }
L_0028F214:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F220u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 334u, depth + 1u); else { c.pc = 0x0028EBC8u; return; } if (c.pc != 0x0028F220u) [[unlikely]] return; }
L_0028F220:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x0028F224u);  goto L_0028F228; }
L_0028F228:
    set32(c.r[3], c.r[21].w[0] + 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_0028F234:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0028F258:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F268u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 353u, depth + 1u); else { c.pc = 0x0028EE90u; return; } if (c.pc != 0x0028F268u) [[unlikely]] return; }
L_0028F268:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0028F280:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 21872u);
    st32((c.r[3].w[0] - 21868u), c.r[7].w[0]);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_0028F2A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_0028F2C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] - 21856u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0028F354; } }
L_0028F2C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], 0u + 47u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 92u);  if (t) { goto L_0028F308; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0028F308; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[8], c.r[2].w[0] - 32320u);
    set32(c.r[7], c.r[4].w[0] - 21856u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[4].w[0] - 21856u);  if (t) { goto L_0028F314; } }
    c.budget -= 1;
L_0028F308:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st8((c.r[4].w[0] - 21856u), static_cast<std::uint8_t>(0u));
    set32(c.r[17], c.r[4].w[0] - 21856u);
    c.budget -= 3;
L_0028F314:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F31Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x0028F31Cu) [[unlikely]] return; }
L_0028F31C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F324u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0028F324u) [[unlikely]] return; }
L_0028F324:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], 0u + 47u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] - 1u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 92u);  if (t) { goto L_0028F344; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0028F358; } }
L_0028F344:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F34Cu);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0028F34Cu) [[unlikely]] return; }
L_0028F34C:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st8((c.r[2].w[0] - 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0028F354:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0028F358:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028F378:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028C7F0u | kUnwind; return; } goto L_0028C7F0; }
L_0028F390:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028C6C8u | kUnwind; return; } goto L_0028C6C8; }
L_0028F3C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028C718u | kUnwind; return; } goto L_0028C718; }
L_0028F3F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 21464u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F40Cu); set32(c.r[3], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0064(c, 135u, depth + 1u); else { c.pc = 0x00290EA8u; return; } if (c.pc != 0x0028F40Cu) [[unlikely]] return; }
L_0028F40C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F414u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 136u, depth + 1u); else { c.pc = 0x00290F38u; return; } if (c.pc != 0x0028F414u) [[unlikely]] return; }
L_0028F414:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] - 21448u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028F428:
    set32(c.r[2], 0u + 8191u);
    set32(c.r[2], c.r[2].w[0] - 32u);
    c.budget -= 2;
L_0028F430:
    c.budget -= 7;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], c.r[2].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F430u | kUnwind; return; } goto L_0028F430; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028F458:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21460u)));
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0028F47C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F47Cu); set32(c.r[4], ld32((c.r[2].w[0] - 21456u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028F47Cu) [[unlikely]] return; }
L_0028F47C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028F488:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[2].w[0] - 21344u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 6;
L_0028F4A0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[7].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_0028F4BC; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028F4D0; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0028F4BC:
    c.r[2].d[0] = c.r[5].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F4A0u | kUnwind; return; } goto L_0028F4A0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028F4D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028F4D8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F4F4u); set32(c.r[4], 0u + 16384u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028F4F4u) [[unlikely]] return; }
L_0028F4F4:
    set32(c.r[17], c.r[16].w[0] + 20u);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F508u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 68u, depth + 1u); else { c.pc = 0x0028C930u; return; } if (c.pc != 0x0028F508u) [[unlikely]] return; }
L_0028F508:
    set32(c.r[4], 0u + 16385u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F514u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028F514u) [[unlikely]] return; }
L_0028F514:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028F528; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0028F528:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028F540:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 28u)));
    c.r[3].d[0] = ld64((c.r[5].w[0] + 8u));
    set32(c.r[7], c.r[4].w[0] << 11);
    c.r[2].d[0] = c.r[2].d[0] + c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 11;
    c.r[4].d[0] = c.r[2].d[0] - c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0028F598; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 32u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] - c.r[2].w[0]);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011AB50u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 201u, depth); }
L_0028F598:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028F5A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0028F658; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F5C4u);  if (depth < kMaxDepth) unit_0065(c, 205u, depth + 1u); else { c.pc = 0x00296898u; return; } if (c.pc != 0x0028F5C4u) [[unlikely]] return; }
L_0028F5C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F5CCu); set32(c.r[4], ld32((c.r[16].w[0] + 44u)));  if (depth < kMaxDepth) unit_0062(c, 442u, depth + 1u); else { c.pc = 0x0028BA98u; return; } if (c.pc != 0x0028F5CCu) [[unlikely]] return; }
L_0028F5CC:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0028F648; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] - 31872u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0028C000u < 16384u) { entry = entries_0063[(t - 0x0028C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0028F5F8:
    set32(c.r[2], 0u + 3u);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0028F638; } }
L_0028F608:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    st32((c.r[16].w[0] + 40u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_0028F638; } }
    c.budget -= 1;
L_0028F630:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 2;
L_0028F638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F640u);  if (depth < kMaxDepth) unit_0062(c, 428u, depth + 1u); else { c.pc = 0x0028B858u; return; } if (c.pc != 0x0028F640u) [[unlikely]] return; }
L_0028F640:
    st32((c.r[16].w[0] + 44u), 0u);
    c.budget -= 1;
L_0028F644:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0028F648:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_0065(c, 207u, depth); }
L_0028F658:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028F668:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F68Cu); set32(c.r[4], c.r[19].w[0] - 21452u);  if (depth < kMaxDepth) unit_0065(c, 273u, depth + 1u); else { c.pc = 0x00297328u; return; } if (c.pc != 0x0028F68Cu) [[unlikely]] return; }
L_0028F68C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0028F6C4; } }
    set32(c.r[18], 0u + 1u);
    set32(c.r[16], c.r[2].w[0] - 21344u);
    set32(c.r[17], 0u + 12u);
    c.budget -= 3;
L_0028F6A0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_0028F6B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F6B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 400u, depth + 1u); else { c.pc = 0x0028F5A0u; return; } if (c.pc != 0x0028F6B4u) [[unlikely]] return; }
L_0028F6B4:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_0028F6B8:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F6A0u | kUnwind; return; } goto L_0028F6A0; } }
    st32((c.r[19].w[0] - 21452u), 0u);
    c.budget -= 1;
L_0028F6C4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0028F6E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[2].w[0] - 21460u), c.r[4].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 21456u), c.r[5].w[0]);  c.pc = t; return; }
L_0028F6F8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_0028F784; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F71Cu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 119u, depth + 1u); else { c.pc = 0x00290C78u; return; } if (c.pc != 0x0028F71Cu) [[unlikely]] return; }
L_0028F71C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[17], c.r[2].w[0] - 20720u);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028F780; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F73Cu);  if (depth < kMaxDepth) unit_0064(c, 42u, depth + 1u); else { c.pc = 0x00290310u; return; } if (c.pc != 0x0028F73Cu) [[unlikely]] return; }
L_0028F73C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F744u); set32(c.r[4], 0u + 16896u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028F744u) [[unlikely]] return; }
L_0028F744:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F750u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0063(c, 73u, depth + 1u); else { c.pc = 0x0028C9A8u; return; } if (c.pc != 0x0028F750u) [[unlikely]] return; }
L_0028F750:
    set32(c.r[4], 0u + 16897u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F75Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028F75Cu) [[unlikely]] return; }
L_0028F75C:
    set32(c.r[4], 0u + 17152u);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] < 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028F784; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F770u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028F770u) [[unlikely]] return; }
L_0028F770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F778u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 78u, depth + 1u); else { c.pc = 0x0028CA10u; return; } if (c.pc != 0x0028F778u) [[unlikely]] return; }
L_0028F778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F780u); set32(c.r[4], 0u + 17153u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028F780u) [[unlikely]] return; }
L_0028F780:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028F784:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0028F798:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F7A8u);  if (depth < kMaxDepth) unit_0063(c, 424u, depth + 1u); else { c.pc = 0x0028F7C0u; return; } if (c.pc != 0x0028F7A8u) [[unlikely]] return; }
L_0028F7A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028F7C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_0028F7E8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 31832u);  if (t) { goto L_0028F990; } }
    c.budget -= 1;
L_0028F7E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F7F0u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 119u, depth + 1u); else { c.pc = 0x00290C78u; return; } if (c.pc != 0x0028F7F0u) [[unlikely]] return; }
L_0028F7F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_0028F9A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] - 20720u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F810u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 42u, depth + 1u); else { c.pc = 0x00290310u; return; } if (c.pc != 0x0028F810u) [[unlikely]] return; }
L_0028F810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F818u); set32(c.r[4], 0u + 17408u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028F818u) [[unlikely]] return; }
L_0028F818:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F824u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0063(c, 73u, depth + 1u); else { c.pc = 0x0028C9A8u; return; } if (c.pc != 0x0028F824u) [[unlikely]] return; }
L_0028F824:
    set32(c.r[4], 0u + 17409u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F830u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028F830u) [[unlikely]] return; }
L_0028F830:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0028F870; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], ld32((c.r[2].w[0] - 20396u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0028F860; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F85Cu); set32(c.r[4], c.r[4].w[0] - 31784u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028F85Cu) [[unlikely]] return; }
L_0028F85C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 1;
L_0028F860:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 31752u);  if (t) { goto L_0028F990; } }
    c.budget -= 1;
L_0028F870:
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 19u);  if (t) { goto L_0028F8B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], ld32((c.r[2].w[0] - 20396u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0028F8A0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F89Cu); set32(c.r[4], c.r[4].w[0] - 31712u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028F89Cu) [[unlikely]] return; }
L_0028F89C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 1;
L_0028F8A0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 31656u);  if (t) { goto L_0028F990; } }
    c.budget -= 1;
L_0028F8B0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0028F8E8; } }
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], ld32((c.r[2].w[0] - 20396u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0028F8D8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F8D4u); set32(c.r[4], c.r[4].w[0] - 31616u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028F8D4u) [[unlikely]] return; }
L_0028F8D4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 1;
L_0028F8D8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 31656u);  if (t) { goto L_0028F990; } }
    c.budget -= 1;
L_0028F8E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F8F0u); set32(c.r[4], 0u + 17920u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028F8F0u) [[unlikely]] return; }
L_0028F8F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F900u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0063(c, 61u, depth + 1u); else { c.pc = 0x0028C878u; return; } if (c.pc != 0x0028F900u) [[unlikely]] return; }
L_0028F900:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F908u); set32(c.r[4], 0u + 17921u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028F908u) [[unlikely]] return; }
L_0028F908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F910u); set32(c.r[4], 0u + 17920u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028F910u) [[unlikely]] return; }
L_0028F910:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F920u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0063(c, 61u, depth + 1u); else { c.pc = 0x0028C878u; return; } if (c.pc != 0x0028F920u) [[unlikely]] return; }
L_0028F920:
    set32(c.r[4], 0u + 17921u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F92Cu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028F92Cu) [[unlikely]] return; }
L_0028F92C:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0028F960; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F940u); set32(c.r[5], c.r[5].w[0] - 31560u);  if (depth < kMaxDepth) unit_0063(c, 391u, depth + 1u); else { c.pc = 0x0028F458u; return; } if (c.pc != 0x0028F940u) [[unlikely]] return; }
L_0028F940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F948u); set32(c.r[4], 0u + 17664u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028F948u) [[unlikely]] return; }
L_0028F948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F950u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 78u, depth + 1u); else { c.pc = 0x0028CA10u; return; } if (c.pc != 0x0028F950u) [[unlikely]] return; }
L_0028F950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F958u); set32(c.r[4], 0u + 17665u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028F958u) [[unlikely]] return; }
L_0028F958:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028F9A4; } }
L_0028F960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F968u); set32(c.r[4], 0u + 20480u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028F968u) [[unlikely]] return; }
L_0028F968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F970u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 78u, depth + 1u); else { c.pc = 0x0028CA10u; return; } if (c.pc != 0x0028F970u) [[unlikely]] return; }
L_0028F970:
    set32(c.r[4], 0u + 20481u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F97Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028F97Cu) [[unlikely]] return; }
L_0028F97C:
    c.budget -= 2;
    if (c.r[16].sd[0] >= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0028F9A4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] - 31512u);
    c.budget -= 3;
L_0028F990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F998u);  if (depth < kMaxDepth) unit_0063(c, 391u, depth + 1u); else { c.pc = 0x0028F458u; return; } if (c.pc != 0x0028F998u) [[unlikely]] return; }
L_0028F998:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028F9A4; } }
L_0028F9A0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0028F9A4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0028F9B8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F9D4u); set32(c.r[4], 0u + 18176u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028F9D4u) [[unlikely]] return; }
L_0028F9D4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F9E4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0063(c, 61u, depth + 1u); else { c.pc = 0x0028C878u; return; } if (c.pc != 0x0028F9E4u) [[unlikely]] return; }
L_0028F9E4:
    set32(c.r[4], 0u + 18177u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F9F0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028F9F0u) [[unlikely]] return; }
L_0028F9F0:
    set32(c.r[4], 0u + 18432u);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] < 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028FA2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FA04u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028FA04u) [[unlikely]] return; }
L_0028FA04:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FA14u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0063(c, 61u, depth + 1u); else { c.pc = 0x0028C878u; return; } if (c.pc != 0x0028FA14u) [[unlikely]] return; }
L_0028FA14:
    set32(c.r[4], 0u + 18433u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FA20u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028FA20u) [[unlikely]] return; }
L_0028FA20:
    c.r[3].d[0] = c.r[16].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[16].d[0];
    c.budget -= 3;
L_0028FA2C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028FA40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] - 21344u);
    set32(c.r[4], 0u + 12u);
    c.budget -= 4;
L_0028FA50:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], c.r[3].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028FA50u | kUnwind; return; } goto L_0028FA50; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; return; }
L_0028FA78:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u + 48u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011AB50u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 201u, depth); }
L_0028FA98:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 8;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[29].w[0]), 0ull);  if (t) { goto L_0028FAC8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 31464u);  if (t) { goto L_0028FB00; } }
    c.budget -= 1;
L_0028FAC8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0028FAE0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 31424u);  if (t) { goto L_0028FB00; } }
    c.budget -= 1;
L_0028FAE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FAE8u);  if (depth < kMaxDepth) unit_0063(c, 454u, depth + 1u); else { c.pc = 0x0028FA40u; return; } if (c.pc != 0x0028FAE8u) [[unlikely]] return; }
L_0028FAE8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0028FB10; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] - 31384u);
    c.budget -= 3;
L_0028FB00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FB08u);  if (depth < kMaxDepth) unit_0063(c, 391u, depth + 1u); else { c.pc = 0x0028F458u; return; } if (c.pc != 0x0028FB08u) [[unlikely]] return; }
L_0028FB08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028FC08; } }
L_0028FB10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FB18u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 119u, depth + 1u); else { c.pc = 0x00290C78u; return; } if (c.pc != 0x0028FB18u) [[unlikely]] return; }
L_0028FB18:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028FBC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[18], c.r[2].w[0] - 20720u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FB38u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 42u, depth + 1u); else { c.pc = 0x00290310u; return; } if (c.pc != 0x0028FB38u) [[unlikely]] return; }
    goto L_0028FB38;
L_0028FB34:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0028FB38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 20396u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0028FB54; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FB54u); set32(c.r[4], c.r[4].w[0] - 31336u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028FB54u) [[unlikely]] return; }
L_0028FB54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FB5Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 424u, depth + 1u); else { c.pc = 0x0028F7C0u; return; } if (c.pc != 0x0028FB5Cu) [[unlikely]] return; }
L_0028FB5C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[16].w[0] + 8u), c.r[3].d[0]);  if (t) { goto L_0028FC08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FB74u); set32(c.r[4], 0u + 18688u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028FB74u) [[unlikely]] return; }
L_0028FB74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 20400u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FB84u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 73u, depth + 1u); else { c.pc = 0x0028C9A8u; return; } if (c.pc != 0x0028FB84u) [[unlikely]] return; }
L_0028FB84:
    set32(c.r[4], 0u + 18689u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FB90u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028FB90u) [[unlikely]] return; }
L_0028FB90:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].sd[0] >= 0) { st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));  goto L_0028FBD4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FBACu); set32(c.r[5], c.r[5].w[0] - 31296u);  if (depth < kMaxDepth) unit_0063(c, 391u, depth + 1u); else { c.pc = 0x0028F458u; return; } if (c.pc != 0x0028FBACu) [[unlikely]] return; }
L_0028FBAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FBB4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 456u, depth + 1u); else { c.pc = 0x0028FA78u; return; } if (c.pc != 0x0028FBB4u) [[unlikely]] return; }
L_0028FBB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028FC08; } }
    c.budget -= 1;
L_0028FBC0:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0])));
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 5;
L_0028FBD4:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 8u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 28u), 0u);
    c.r[3].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(2047ll);
    st32((c.r[16].w[0] + 32u), 0u);
    c.r[3].d[0] = c.r[3].d[0] << 21;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 20u), 0u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 13;
L_0028FC08:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0028FC20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_0028FCB8; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));  goto L_0028FC54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FC50u);  if (depth < kMaxDepth) unit_0063(c, 491u, depth + 1u); else { c.pc = 0x0028FF30u; return; } if (c.pc != 0x0028FC50u) [[unlikely]] return; }
L_0028FC50:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 1;
L_0028FC54:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));  goto L_0028FCA0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FC64u); set32(c.r[4], 0u + 20480u);  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028FC64u) [[unlikely]] return; }
L_0028FC64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FC6Cu); set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  if (depth < kMaxDepth) unit_0063(c, 78u, depth + 1u); else { c.pc = 0x0028CA10u; return; } if (c.pc != 0x0028FC6Cu) [[unlikely]] return; }
L_0028FC6C:
    set32(c.r[4], 0u + 20481u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FC78u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 50u, depth + 1u); else { c.pc = 0x0028C698u; return; } if (c.pc != 0x0028FC78u) [[unlikely]] return; }
L_0028FC78:
    c.budget -= 2;
    if (c.r[16].sd[0] >= 0) { st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));  goto L_0028FCA0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 20396u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));  goto L_0028FCA0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FC9Cu); set32(c.r[4], c.r[4].w[0] - 31256u);  if (depth < kMaxDepth) unit_0001(c, 350u, depth + 1u); else { c.pc = 0x00106508u; return; } if (c.pc != 0x0028FC9Cu) [[unlikely]] return; }
L_0028FC9C:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0028FCA0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028FA78u | kUnwind; return; } goto L_0028FA78; }
L_0028FCB8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028FCD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0028FCF8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FCECu); set32(c.r[5], c.r[5].w[0] - 31232u);  if (depth < kMaxDepth) unit_0063(c, 391u, depth + 1u); else { c.pc = 0x0028F458u; return; } if (c.pc != 0x0028FCECu) [[unlikely]] return; }
L_0028FCEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028FD58; } }
    c.budget -= 1;
L_0028FCF8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0028FD08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 28u), c.r[5].w[0]);  if (t) { goto L_0028FD38; } }
L_0028FD08:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028FD20; } }
    set32(c.r[4], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_0028FD3C; } }
L_0028FD20:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[4], ld32((c.r[7].w[0] + 16u)));  if (t) { goto L_0028FD3C; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_0028FD3C; } }
L_0028FD38:
    set32(c.r[4], ld32((c.r[7].w[0] + 16u)));
    c.budget -= 1;
L_0028FD3C:
    set32(c.r[2], ld32((c.r[7].w[0] + 28u)));
    st32((c.r[7].w[0] + 40u), 0u);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    c.r[4].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[4].d[0] != 0) c.r[2].d[0] = 0ull;
    st32((c.r[7].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 7;
L_0028FD58:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028FD68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0028FD90; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FD84u); set32(c.r[5], c.r[5].w[0] - 31232u);  if (depth < kMaxDepth) unit_0063(c, 391u, depth + 1u); else { c.pc = 0x0028F458u; return; } if (c.pc != 0x0028FD84u) [[unlikely]] return; }
L_0028FD84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028FD94; } }
    c.budget -= 1;
L_0028FD90:
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 1;
L_0028FD94:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028FDA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.budget -= 12;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[29].w[0] + 48u), c.r[31].d[0]);  if (t) { goto L_0028FDE0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 31232u);  if (t) { goto L_0028FDFC; } }
    c.budget -= 1;
L_0028FDE0:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0028FDF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 31208u);  if (t) { goto L_0028FDFC; } }
L_0028FDF0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0028FE10; } }
    set32(c.r[5], c.r[5].w[0] - 31176u);
    c.budget -= 1;
L_0028FDFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FE04u);  if (depth < kMaxDepth) unit_0063(c, 391u, depth + 1u); else { c.pc = 0x0028F458u; return; } if (c.pc != 0x0028FE04u) [[unlikely]] return; }
L_0028FE04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028FF0C; } }
    c.budget -= 1;
L_0028FE10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FE18u); set32(c.r[20], 0u + 1u);  if (depth < kMaxDepth) unit_0063(c, 393u, depth + 1u); else { c.pc = 0x0028F488u; return; } if (c.pc != 0x0028FE18u) [[unlikely]] return; }
L_0028FE18:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[20].d[0]) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));  goto L_0028FE28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028FF0C; } }
L_0028FE28:
    set32(c.r[21], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[21].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028FF0C; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0028FE48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[20].w[0]));  if (t) { goto L_0028FF0C; } }
    c.budget -= 1;
L_0028FE48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FE50u);  if (depth < kMaxDepth) unit_0062(c, 424u, depth + 1u); else { c.pc = 0x0028B7D0u; return; } if (c.pc != 0x0028FE50u) [[unlikely]] return; }
    goto L_0028FE50;
L_0028FE4C:
    c.budget -= 1;
L_0028FE50:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[17].w[0] + 44u), c.r[3].w[0]);  if (t) { goto L_0028FF0C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[16], c.r[18].w[0] << 11);
    c.r[7].d[0] = ld64((c.r[17].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[17].w[0] + 32u), c.r[19].w[0]);
    c.r[3].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[7].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[5].d[0] = c.r[2].d[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 36u), c.r[5].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FE94u); if (c.r[6].d[0] != 0) c.r[16].d[0] = c.r[7].d[0];  if (depth < kMaxDepth) unit_0063(c, 399u, depth + 1u); else { c.pc = 0x0028F540u; return; } if (c.pc != 0x0028FE94u) [[unlikely]] return; }
L_0028FE94:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FEACu); c.r[8].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 439u, depth + 1u); else { c.pc = 0x0028B9E8u; return; } if (c.pc != 0x0028FEACu) [[unlikely]] return; }
L_0028FEAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0028FF10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[16], ld32((c.r[2].w[0] - 20400u)));
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[20].d[0]) { st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[21].w[0]));  goto L_0028FF00; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FECCu);  if (depth < kMaxDepth) unit_0063(c, 27u, depth + 1u); else { c.pc = 0x0028C320u; return; } if (c.pc != 0x0028FECCu) [[unlikely]] return; }
L_0028FECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FED4u);  if (depth < kMaxDepth) unit_0063(c, 19u, depth + 1u); else { c.pc = 0x0028C210u; return; } if (c.pc != 0x0028FED4u) [[unlikely]] return; }
L_0028FED4:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FEECu); st32((c.r[17].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0062(c, 428u, depth + 1u); else { c.pc = 0x0028B858u; return; } if (c.pc != 0x0028FEECu) [[unlikely]] return; }
L_0028FEEC:
    st32((c.r[17].w[0] + 44u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (t) { goto L_0028FF08; } }
L_0028FF00:
    st32((c.r[17].w[0] + 40u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 2;
L_0028FF08:
    st32((c.r[17].w[0] + 20u), 0u);
    c.budget -= 1;
L_0028FF0C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0028FF10:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 5;
L_0028FF24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0028FF30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.budget -= 1;
L_0028FF34:
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.budget -= 10;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 48u), c.r[31].d[0]);  if (t) { goto L_0028FF88; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], c.r[5].w[0] - 31136u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F458u | kUnwind; return; } goto L_0028F458; }
L_0028FF88:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  [[clang::musttail]] return unit_0064(c, 7u, depth); }
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x00630000u);  if (t) { goto L_0028FFAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FFACu);  if (depth < kMaxDepth) unit_0062(c, 464u, depth + 1u); else { c.pc = 0x0028BCF8u; return; } if (c.pc != 0x0028FFACu) [[unlikely]] return; }
L_0028FFAC:
    set32(c.r[19], 0u + 2u);
    c.r[17].d[0] = c.r[17].d[0] | 65526ull;
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[21].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0028FFC8; } }
L_0028FFC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FFC8u);  if (depth < kMaxDepth) unit_0063(c, 389u, depth + 1u); else { c.pc = 0x0028F428u; return; } if (c.pc != 0x0028FFC8u) [[unlikely]] return; }
L_0028FFC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FFD0u);  if (depth < kMaxDepth) unit_0063(c, 19u, depth + 1u); else { c.pc = 0x0028C210u; return; } if (c.pc != 0x0028FFD0u) [[unlikely]] return; }
L_0028FFD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FFD8u);  if (depth < kMaxDepth) unit_0063(c, 408u, depth + 1u); else { c.pc = 0x0028F668u; return; } if (c.pc != 0x0028FFD8u) [[unlikely]] return; }
L_0028FFD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FFE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 11u, depth + 1u); else { c.pc = 0x00290038u; return; } if (c.pc != 0x0028FFE0u) [[unlikely]] return; }
L_0028FFE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[19].d[0]) { st32((c.r[16].w[0] + 40u), 0u);  [[clang::musttail]] return unit_0064(c, 5u, depth); }
    goto L_0028FFEC;
L_0028FFE8:
    st32((c.r[16].w[0] + 40u), 0u);
    c.budget -= 1;
L_0028FFEC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[20].w[0] - 20396u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028FFC0u | kUnwind; return; } goto L_0028FFC0; } }
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[3].d[0]) { st32((c.r[16].w[0] + 40u), 0u);  [[clang::musttail]] return unit_0064(c, 5u, depth); }
    [[clang::musttail]] return unit_0064(c, 2u, depth);
}

}
