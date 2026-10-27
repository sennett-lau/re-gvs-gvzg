#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00C5[4096] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0,
    0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0,
    0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14,
    0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 31, 0, 0, 0,
    0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0,
    35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 38,
    0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0,
    0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0,
    0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 67, 0,
    0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0,
    77, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 81, 0, 82, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0,
    85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90,
    0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0,
    95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0,
    101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0,
    0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 110, 0, 111, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0,
    0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119,
    0, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 126, 0,
    127, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0,
    0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0,
    139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 151, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0,
    155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 160, 0, 161, 0, 0, 162, 0, 0,
    0, 0, 163, 0, 164, 0, 165, 0, 166, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171,
    0, 0, 172, 0, 173, 0, 174, 0, 175, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0,
    0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 184, 0, 185, 0, 186,
    0, 187, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 199, 0, 0, 0, 200, 0, 0, 0,
    0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0,
    0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0,
    0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0,
    216, 0, 0, 0, 217, 0, 0, 0, 218, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0,
    0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 226, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 235, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 238, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 242, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0,
    0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    260, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 264, 0, 265, 0, 266, 0, 267, 0, 268, 0, 269, 0, 270, 0, 271, 0, 272, 0,
    273, 0, 274, 0, 275, 0, 276, 0, 277, 0, 278, 0, 279, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 282, 0, 0, 283, 0, 0, 0, 284, 0, 285, 0, 0, 286, 0, 0, 287, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    294, 0, 295, 0, 296, 0, 297, 0, 0, 298, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 301, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 305, 0, 0, 306, 0, 307, 0,
    0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0,
    0, 0, 310, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 323, 0, 324, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 327, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 333, 0, 0, 0, 334, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 336, 0, 337, 0, 338, 0, 0,
    0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0,
    347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0,
    362, 0, 0, 0, 0, 0, 0, 363, 0, 364, 0, 365, 0, 366, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0,
    370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0,
    0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 397, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0,
    403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0, 0,
    0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 411, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 0, 418, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00C5(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00414000;
    case 2u: goto L_0041401C;
    case 3u: goto L_00414038;
    case 4u: goto L_00414068;
    case 5u: goto L_0041408C;
    case 6u: goto L_004140BC;
    case 7u: goto L_004140D0;
    case 8u: goto L_004140E4;
    case 9u: goto L_00414108;
    case 10u: goto L_00414138;
    case 11u: goto L_00414144;
    case 12u: goto L_004141B0;
    case 13u: goto L_004141E0;
    case 14u: goto L_004141FC;
    case 15u: goto L_00414214;
    case 16u: goto L_00414228;
    case 17u: goto L_00414244;
    case 18u: goto L_0041424C;
    case 19u: goto L_00414264;
    case 20u: goto L_004142A0;
    case 21u: goto L_00414320;
    case 22u: goto L_00414330;
    case 23u: goto L_00414340;
    case 24u: goto L_00414350;
    case 25u: goto L_00414378;
    case 26u: goto L_004143B4;
    case 27u: goto L_004143D0;
    case 28u: goto L_004143F0;
    case 29u: goto L_00414454;
    case 30u: goto L_00414468;
    case 31u: goto L_00414470;
    case 32u: goto L_00414490;
    case 33u: goto L_0041455C;
    case 34u: goto L_00414564;
    case 35u: goto L_00414580;
    case 36u: goto L_004145E0;
    case 37u: goto L_004145F4;
    case 38u: goto L_004145FC;
    case 39u: goto L_00414610;
    case 40u: goto L_00414640;
    case 41u: goto L_00414690;
    case 42u: goto L_00414698;
    case 43u: goto L_004146B0;
    case 44u: goto L_004146DC;
    case 45u: goto L_004146EC;
    case 46u: goto L_00414770;
    case 47u: goto L_00414778;
    case 48u: goto L_00414790;
    case 49u: goto L_004147BC;
    case 50u: goto L_00414808;
    case 51u: goto L_00414820;
    case 52u: goto L_0041483C;
    case 53u: goto L_00414848;
    case 54u: goto L_00414860;
    case 55u: goto L_00414870;
    case 56u: goto L_00414898;
    case 57u: goto L_004148C8;
    case 58u: goto L_004148D4;
    case 59u: goto L_004148EC;
    case 60u: goto L_004148F8;
    case 61u: goto L_00414914;
    case 62u: goto L_00414920;
    case 63u: goto L_00414930;
    case 64u: goto L_0041494C;
    case 65u: goto L_00414958;
    case 66u: goto L_00414964;
    case 67u: goto L_00414978;
    case 68u: goto L_00414988;
    case 69u: goto L_004149C0;
    case 70u: goto L_00414A40;
    case 71u: goto L_00414A48;
    case 72u: goto L_00414A70;
    case 73u: goto L_00414AB0;
    case 74u: goto L_00414AC0;
    case 75u: goto L_00414AE0;
    case 76u: goto L_00414AE8;
    case 77u: goto L_00414B00;
    case 78u: goto L_00414B10;
    case 79u: goto L_00414B20;
    case 80u: goto L_00414B34;
    case 81u: goto L_00414B3C;
    case 82u: goto L_00414B44;
    case 83u: goto L_00414B50;
    case 84u: goto L_00414B60;
    case 85u: goto L_00414B80;
    case 86u: goto L_00414BC4;
    case 87u: goto L_00414BCC;
    case 88u: goto L_00414BD4;
    case 89u: goto L_00414BDC;
    case 90u: goto L_00414BFC;
    case 91u: goto L_00414C10;
    case 92u: goto L_00414C30;
    case 93u: goto L_00414C40;
    case 94u: goto L_00414C64;
    case 95u: goto L_00414C80;
    case 96u: goto L_00414C98;
    case 97u: goto L_00414CA8;
    case 98u: goto L_00414CCC;
    case 99u: goto L_00414CD8;
    case 100u: goto L_00414CEC;
    case 101u: goto L_00414D00;
    case 102u: goto L_00414D44;
    case 103u: goto L_00414D54;
    case 104u: goto L_00414D70;
    case 105u: goto L_00414D88;
    case 106u: goto L_00414DA4;
    case 107u: goto L_00414DC0;
    case 108u: goto L_00414E10;
    case 109u: goto L_00414E28;
    case 110u: goto L_00414E30;
    case 111u: goto L_00414E38;
    case 112u: goto L_00414E40;
    case 113u: goto L_00414E54;
    case 114u: goto L_00414E68;
    case 115u: goto L_00414E88;
    case 116u: goto L_00414E98;
    case 117u: goto L_00414ECC;
    case 118u: goto L_00414EE0;
    case 119u: goto L_00414EFC;
    case 120u: goto L_00414F08;
    case 121u: goto L_00414F10;
    case 122u: goto L_00414F38;
    case 123u: goto L_00414F40;
    case 124u: goto L_00414F60;
    case 125u: goto L_00414F70;
    case 126u: goto L_00414F78;
    case 127u: goto L_00414F80;
    case 128u: goto L_00414F90;
    case 129u: goto L_00414FA4;
    case 130u: goto L_00414FB0;
    case 131u: goto L_00414FC0;
    case 132u: goto L_004150C0;
    case 133u: goto L_004151C0;
    case 134u: goto L_004151F8;
    case 135u: goto L_00415210;
    case 136u: goto L_0041523C;
    case 137u: goto L_00415250;
    case 138u: goto L_00415260;
    case 139u: goto L_00415280;
    case 140u: goto L_004152A0;
    case 141u: goto L_004152A8;
    case 142u: goto L_004152B0;
    case 143u: goto L_004152B8;
    case 144u: goto L_00415348;
    case 145u: goto L_00415350;
    case 146u: goto L_00415368;
    case 147u: goto L_00415374;
    case 148u: goto L_004153A8;
    case 149u: goto L_00415428;
    case 150u: goto L_00415430;
    case 151u: goto L_00415438;
    case 152u: goto L_00415444;
    case 153u: goto L_0041544C;
    case 154u: goto L_00415468;
    case 155u: goto L_00415480;
    case 156u: goto L_00415490;
    case 157u: goto L_004154B0;
    case 158u: goto L_004154D0;
    case 159u: goto L_004154D8;
    case 160u: goto L_004154E0;
    case 161u: goto L_004154E8;
    case 162u: goto L_004154F4;
    case 163u: goto L_00415508;
    case 164u: goto L_00415510;
    case 165u: goto L_00415518;
    case 166u: goto L_00415520;
    case 167u: goto L_00415528;
    case 168u: goto L_00415540;
    case 169u: goto L_00415550;
    case 170u: goto L_00415564;
    case 171u: goto L_0041557C;
    case 172u: goto L_00415588;
    case 173u: goto L_00415590;
    case 174u: goto L_00415598;
    case 175u: goto L_004155A0;
    case 176u: goto L_004155A8;
    case 177u: goto L_004155B0;
    case 178u: goto L_004155CC;
    case 179u: goto L_004155E0;
    case 180u: goto L_004155F0;
    case 181u: goto L_00415610;
    case 182u: goto L_0041565C;
    case 183u: goto L_00415664;
    case 184u: goto L_0041566C;
    case 185u: goto L_00415674;
    case 186u: goto L_0041567C;
    case 187u: goto L_00415684;
    case 188u: goto L_0041568C;
    case 189u: goto L_00415694;
    case 190u: goto L_00415708;
    case 191u: goto L_00415724;
    case 192u: goto L_00415740;
    case 193u: goto L_0041575C;
    case 194u: goto L_00415770;
    case 195u: goto L_004157A0;
    case 196u: goto L_004157B0;
    case 197u: goto L_004157D0;
    case 198u: goto L_004157D8;
    case 199u: goto L_004157E0;
    case 200u: goto L_004157F0;
    case 201u: goto L_00415814;
    case 202u: goto L_00415830;
    case 203u: goto L_00415864;
    case 204u: goto L_00415874;
    case 205u: goto L_00415884;
    case 206u: goto L_00415894;
    case 207u: goto L_004158E8;
    case 208u: goto L_004158F8;
    case 209u: goto L_00415908;
    case 210u: goto L_00415918;
    case 211u: goto L_00415928;
    case 212u: goto L_00415948;
    case 213u: goto L_00415950;
    case 214u: goto L_00415958;
    case 215u: goto L_00415970;
    case 216u: goto L_00415980;
    case 217u: goto L_00415990;
    case 218u: goto L_004159A0;
    case 219u: goto L_004159A8;
    case 220u: goto L_004159B0;
    case 221u: goto L_004159D0;
    case 222u: goto L_004159F4;
    case 223u: goto L_00415A10;
    case 224u: goto L_00415A40;
    case 225u: goto L_00415A48;
    case 226u: goto L_00415A50;
    case 227u: goto L_00415A58;
    case 228u: goto L_00415A70;
    case 229u: goto L_00415AA0;
    case 230u: goto L_00415AC8;
    case 231u: goto L_00415AE0;
    case 232u: goto L_00415B18;
    case 233u: goto L_00415B28;
    case 234u: goto L_00415B38;
    case 235u: goto L_00415B48;
    case 236u: goto L_00415B50;
    case 237u: goto L_00415B58;
    case 238u: goto L_00415B84;
    case 239u: goto L_00415B94;
    case 240u: goto L_00415BA4;
    case 241u: goto L_00415BB4;
    case 242u: goto L_00415BC0;
    case 243u: goto L_00415BC8;
    case 244u: goto L_00415BE0;
    case 245u: goto L_00415C08;
    case 246u: goto L_00415C28;
    case 247u: goto L_00415C4C;
    case 248u: goto L_00415C80;
    case 249u: goto L_00415CA0;
    case 250u: goto L_00415CF0;
    case 251u: goto L_00415DB0;
    case 252u: goto L_00415DF4;
    case 253u: goto L_00415E7C;
    case 254u: goto L_00415EC0;
    case 255u: goto L_00415EF8;
    case 256u: goto L_00415F1C;
    case 257u: goto L_00415F70;
    case 258u: goto L_00415FC0;
    case 259u: goto L_00416050;
    case 260u: goto L_00416080;
    case 261u: goto L_0041608C;
    case 262u: goto L_004160A0;
    case 263u: goto L_004160B0;
    case 264u: goto L_004160B8;
    case 265u: goto L_004160C0;
    case 266u: goto L_004160C8;
    case 267u: goto L_004160D0;
    case 268u: goto L_004160D8;
    case 269u: goto L_004160E0;
    case 270u: goto L_004160E8;
    case 271u: goto L_004160F0;
    case 272u: goto L_004160F8;
    case 273u: goto L_00416100;
    case 274u: goto L_00416108;
    case 275u: goto L_00416110;
    case 276u: goto L_00416118;
    case 277u: goto L_00416120;
    case 278u: goto L_00416128;
    case 279u: goto L_00416130;
    case 280u: goto L_00416140;
    case 281u: goto L_00416150;
    case 282u: goto L_00416194;
    case 283u: goto L_004161A0;
    case 284u: goto L_004161B0;
    case 285u: goto L_004161B8;
    case 286u: goto L_004161C4;
    case 287u: goto L_004161D0;
    case 288u: goto L_004161DC;
    case 289u: goto L_004161F0;
    case 290u: goto L_00416380;
    case 291u: goto L_004163B4;
    case 292u: goto L_004163C0;
    case 293u: goto L_004163D0;
    case 294u: goto L_00416400;
    case 295u: goto L_00416408;
    case 296u: goto L_00416410;
    case 297u: goto L_00416418;
    case 298u: goto L_00416424;
    case 299u: goto L_00416430;
    case 300u: goto L_00416450;
    case 301u: goto L_00416490;
    case 302u: goto L_0041649C;
    case 303u: goto L_004164B0;
    case 304u: goto L_004164D8;
    case 305u: goto L_004164E4;
    case 306u: goto L_004164F0;
    case 307u: goto L_004164F8;
    case 308u: goto L_00416518;
    case 309u: goto L_00416570;
    case 310u: goto L_00416588;
    case 311u: goto L_00416594;
    case 312u: goto L_004165B8;
    case 313u: goto L_00416638;
    case 314u: goto L_00416640;
    case 315u: goto L_00416690;
    case 316u: goto L_004166C8;
    case 317u: goto L_004166D0;
    case 318u: goto L_00416754;
    case 319u: goto L_00416768;
    case 320u: goto L_004167A0;
    case 321u: goto L_004167B8;
    case 322u: goto L_004167C8;
    case 323u: goto L_004167E8;
    case 324u: goto L_004167F0;
    case 325u: goto L_00416820;
    case 326u: goto L_00416858;
    case 327u: goto L_00416860;
    case 328u: goto L_004168E8;
    case 329u: goto L_00416920;
    case 330u: goto L_00416958;
    case 331u: goto L_004169A0;
    case 332u: goto L_004169DC;
    case 333u: goto L_004169E8;
    case 334u: goto L_004169F8;
    case 335u: goto L_00416A5C;
    case 336u: goto L_00416A64;
    case 337u: goto L_00416A6C;
    case 338u: goto L_00416A74;
    case 339u: goto L_00416A90;
    case 340u: goto L_00416AA8;
    case 341u: goto L_00416AB8;
    case 342u: goto L_00416B00;
    case 343u: goto L_00416B34;
    case 344u: goto L_00416B84;
    case 345u: goto L_00416BB4;
    case 346u: goto L_00416BE0;
    case 347u: goto L_00416C00;
    case 348u: goto L_00416D40;
    case 349u: goto L_00416D98;
    case 350u: goto L_00416DD0;
    case 351u: goto L_00416FC0;
    case 352u: goto L_00417000;
    case 353u: goto L_00417058;
    case 354u: goto L_004170B0;
    case 355u: goto L_00417100;
    case 356u: goto L_00417150;
    case 357u: goto L_004171A0;
    case 358u: goto L_004171F8;
    case 359u: goto L_00417248;
    case 360u: goto L_00417250;
    case 361u: goto L_004172F0;
    case 362u: goto L_00417300;
    case 363u: goto L_0041731C;
    case 364u: goto L_00417324;
    case 365u: goto L_0041732C;
    case 366u: goto L_00417334;
    case 367u: goto L_00417340;
    case 368u: goto L_00417350;
    case 369u: goto L_00417370;
    case 370u: goto L_00417380;
    case 371u: goto L_00417390;
    case 372u: goto L_004173B0;
    case 373u: goto L_004173E8;
    case 374u: goto L_00417550;
    case 375u: goto L_00417570;
    case 376u: goto L_00417840;
    case 377u: goto L_00417868;
    case 378u: goto L_00417888;
    case 379u: goto L_004178AC;
    case 380u: goto L_0041791C;
    case 381u: goto L_0041792C;
    case 382u: goto L_00417950;
    case 383u: goto L_00417970;
    case 384u: goto L_004179B8;
    case 385u: goto L_004179D0;
    case 386u: goto L_004179DC;
    case 387u: goto L_004179F0;
    case 388u: goto L_00417A78;
    case 389u: goto L_00417AAC;
    case 390u: goto L_00417B10;
    case 391u: goto L_00417B44;
    case 392u: goto L_00417B5C;
    case 393u: goto L_00417BA4;
    case 394u: goto L_00417BBC;
    case 395u: goto L_00417C20;
    case 396u: goto L_00417C68;
    case 397u: goto L_00417C70;
    case 398u: goto L_00417CAC;
    case 399u: goto L_00417CE8;
    case 400u: goto L_00417D24;
    case 401u: goto L_00417D3C;
    case 402u: goto L_00417D60;
    case 403u: goto L_00417D80;
    case 404u: goto L_00417DC0;
    case 405u: goto L_00417DD0;
    case 406u: goto L_00417DE4;
    case 407u: goto L_00417DEC;
    case 408u: goto L_00417E08;
    case 409u: goto L_00417E20;
    case 410u: goto L_00417EC0;
    case 411u: goto L_00417F08;
    case 412u: goto L_00417F10;
    case 413u: goto L_00417F28;
    case 414u: goto L_00417F40;
    case 415u: goto L_00417F60;
    case 416u: goto L_00417FA0;
    case 417u: goto L_00417FB0;
    case 418u: goto L_00417FC4;
    case 419u: goto L_00417FCC;
    default: bad_entry(c, 0x00414000u); return;
    }
L_00414000:
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 317u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041401Cu); set32(c.r[23], c.r[21].w[0] + 317u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0041401Cu) [[unlikely]] return; }
L_0041401C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2870000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x430D0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414038u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00414038u) [[unlikely]] return; }
L_00414038:
    c.r[3].d[0] = c.r[16].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + 11824u);
    set32(c.r[20], 0u + 72u);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[17].w[0] + 8075u);
    set32(c.r[22], c.r[29].w[0] + 176u);
    set32(c.r[16], c.r[16].w[0] + 9300u);
    c.budget -= 12;
L_00414068:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] << 2);  if (t) { goto L_00414100; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] + 24928u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041408Cu); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0041408Cu) [[unlikely]] return; }
L_0041408C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004140A0; } }
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_004140A0:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[4], 0u + 143u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] + 1944u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004140BCu); set32(c.r[8], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x004140BCu) [[unlikely]] return; }
L_004140BC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[5], 0u + 13u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004140D0u); set32(c.r[4], c.r[2].w[0] + 480u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x004140D0u) [[unlikely]] return; }
L_004140D0:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2000000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004140E4u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x004140E4u) [[unlikely]] return; }
L_004140E4:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[3], c.r[20].w[0] + 32u);
    c.r[20].d[0] = c.r[3].d[0] << 48;
    c.r[2].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00414068u | kUnwind; return; } goto L_00414068; } }
L_00414100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414108u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00414108u) [[unlikely]] return; }
L_00414108:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x430D0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 318u)));
    c.f[0] = c.r[2].w[0];
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2870000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] << 5);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414138u); c.f[13] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00414138u) [[unlikely]] return; }
L_00414138:
    set32(c.r[4], c.r[21].w[0] + 328u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414144u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_00AC(c, 67u, depth + 1u); else { c.pc = 0x003B0B80u; return; } if (c.pc != 0x00414144u) [[unlikely]] return; }
L_00414144:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[23].w[0])));
    set32(c.r[17], 0u + 1u);
    set32(c.r[4], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] > 0; c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00414160; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00414160:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 319u)));
    set32(c.r[2], c.r[3].w[0] - 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_00414178; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00414180; } }
L_00414178:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00414180:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x88880000u);
    c.r[2].d[0] = c.r[2].d[0] | 34953ull;
    set32(c.r[4], c.r[3].w[0] << 16);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004141B0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x004141B0u) [[unlikely]] return; }
L_004141B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[3] = c.r[3].w[0];
    c.f[1] = ld32((c.r[21].w[0] + 104u));
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; c.f[20] = fp::mul(c.f[1], c.f[0]);  if (t) { goto L_00414218; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004141E0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x004141E0u) [[unlikely]] return; }
L_004141E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42820000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43140000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004141FCu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x004141FCu) [[unlikely]] return; }
L_004141FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[2], ld32((c.r[1].w[0] + 8880u)));
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414214u); set32(c.r[4], c.r[2].w[0] + 5280u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00414214u) [[unlikely]] return; }
L_00414214:
    c.budget -= 1;
L_00414218:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00414268; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414228u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00414228u) [[unlikely]] return; }
L_00414228:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42820000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42380000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414244u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00414244u) [[unlikely]] return; }
L_00414244:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041424Cu); c.r[4].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0041424Cu) [[unlikely]] return; }
L_0041424C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[2], ld32((c.r[1].w[0] + 8880u)));
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414264u); set32(c.r[4], c.r[2].w[0] + 5280u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00414264u) [[unlikely]] return; }
L_00414264:
    c.budget -= 1;
L_00414268:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_004142A0:
    st8((c.r[4].w[0] + 311u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[10], ld32((c.r[1].w[0] + 18040u)));
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[8].d[0] = c.r[6].d[0] << 56;
    set32(c.r[9], c.r[3].w[0] << 3);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[3].d[0] = c.r[7].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    set32(c.r[5], c.r[5].w[0] + 11824u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    c.r[8].d[0] = ld8((c.r[9].w[0] + 1u));
    c.r[8].d[0] = c.r[8].d[0] & 127ull;
    st8((c.r[4].w[0] + 304u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[9].w[0] + 1u));
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 7));
    c.r[8].d[0] = c.r[8].d[0] & 1ull;
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st8((c.r[4].w[0] + 306u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 305u), static_cast<std::uint8_t>(0u));
    c.budget -= 26;
    { const bool t = c.r[3].sd[0] < 0; st8((c.r[4].w[0] + 307u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_00414310; } }
    st8((c.r[4].w[0] + 309u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 314u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00414310:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00414320:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00414330:
    st8((c.r[4].w[0] + 317u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 318u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 319u), static_cast<std::uint8_t>(c.r[7].w[0]));  c.pc = t; return; }
L_00414340:
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 320u), c.r[3].w[0]);  c.pc = t; return; }
L_00414350:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414378u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x00414378u) [[unlikely]] return; }
L_00414378:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004143B8; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 18u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 20u);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[2], c.r[2].w[0] + 17360u);
    st32((c.r[5].w[0] + 24u), c.r[17].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004143B4u); st32((c.r[5].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x004143B4u) [[unlikely]] return; }
L_004143B4:
    c.budget -= 1;
L_004143B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004143D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], c.r[2].w[0] - 32176u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00414000u < 16384u) { entry = entries_00C5[(t - 0x00414000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004143F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] - 32192u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 516u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 562u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 566u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[4].w[0] + 566u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[18].w[0]);
    c.r[2].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414454u); c.r[6].d[0] = c.r[2].d[0] & 127ull;  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x00414454u) [[unlikely]] return; }
L_00414454:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414468u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00414468u) [[unlikely]] return; }
L_00414468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414470u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00414470u) [[unlikely]] return; }
L_00414470:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00414490:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[7], ld32((c.r[4].w[0] + 28u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 498u)));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] > 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004144D0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_004144D0; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00414568; } }
L_004144D0:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004144F0; } }
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_004144F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00414510; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00414510; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00414548; } }
L_00414510:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 8256u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00414548; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 10u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 8258u)));
    set32(c.r[2], 0u + 5u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00414548; } }
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00414548:
    c.r[2].d[0] = ld16((c.r[7].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041455Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0041455Cu) [[unlikely]] return; }
L_0041455C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414564u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00414564u) [[unlikely]] return; }
L_00414564:
    c.budget -= 1;
L_00414568:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00414580:
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004145B0; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 750u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004145B0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004145D0; } }
L_004145B0:
    c.r[1].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004145D0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_004145D0; } }
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_004145D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004145E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004145F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x004145F4u) [[unlikely]] return; }
L_004145F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004145FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x004145FCu) [[unlikely]] return; }
L_004145FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00414610:
    set32(c.r[4], c.r[4].w[0] + 2132u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[2], c.r[2].w[0] - 32160u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00414000u < 16384u) { entry = entries_00C5[(t - 0x00414000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00414640:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004146F8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004146A8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00414680; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00414768; } }
    c.budget -= 1;
L_00414680:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414690u); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_00BE(c, 307u, depth + 1u); else { c.pc = 0x003FB600u; return; } if (c.pc != 0x00414690u) [[unlikely]] return; }
L_00414690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414698u); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_00BE(c, 316u, depth + 1u); else { c.pc = 0x003FB900u; return; } if (c.pc != 0x00414698u) [[unlikely]] return; }
L_00414698:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 9u)));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_004146A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004146B0u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_00BE(c, 114u, depth + 1u); else { c.pc = 0x003F9DE0u; return; } if (c.pc != 0x004146B0u) [[unlikely]] return; }
L_004146B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00414768; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[4], 0u + 10u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] + 8120u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004146DCu); st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00C2(c, 172u, depth + 1u); else { c.pc = 0x00409CF0u; return; } if (c.pc != 0x004146DCu) [[unlikely]] return; }
L_004146DC:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004146ECu); set32(c.r[5], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_00C2(c, 348u, depth + 1u); else { c.pc = 0x0040B5F0u; return; } if (c.pc != 0x004146ECu) [[unlikely]] return; }
L_004146EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00414768; } }
    c.budget -= 1;
L_004146F8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00414740; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[1].w[0] + 8120u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_00414768; } }
    c.budget -= 1;
L_00414740:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[2], ld32((c.r[1].w[0] + 8120u)));
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 104u), c.f[0]);
    c.budget -= 10;
L_00414768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414770u);  if (depth < kMaxDepth) unit_00C5(c, 124u, depth + 1u); else { c.pc = 0x00414F60u; return; } if (c.pc != 0x00414770u) [[unlikely]] return; }
L_00414770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414778u);  if (depth < kMaxDepth) unit_00C5(c, 128u, depth + 1u); else { c.pc = 0x00414F90u; return; } if (c.pc != 0x00414778u) [[unlikely]] return; }
L_00414778:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00414790:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[16], c.r[16].w[0] + 8120u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004147BCu); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00C2(c, 350u, depth + 1u); else { c.pc = 0x0040B6C0u; return; } if (c.pc != 0x004147BCu) [[unlikely]] return; }
L_004147BC:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 11u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004149E0; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 9u);  if (t) { goto L_004149B8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004149A0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00414980; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00414800; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00414A38; } }
L_00414800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414808u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x00414808u) [[unlikely]] return; }
L_00414808:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00414858; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414820u);  if (depth < kMaxDepth) unit_00AB(c, 337u, depth + 1u); else { c.pc = 0x003AFBD0u; return; } if (c.pc != 0x00414820u) [[unlikely]] return; }
L_00414820:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00414858; } }
    set32(c.r[2], 0u + 9u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041483Cu); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x0041483Cu) [[unlikely]] return; }
L_0041483C:
    set32(c.r[4], 0u + 15u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414848u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 172u, depth + 1u); else { c.pc = 0x00409CF0u; return; } if (c.pc != 0x00414848u) [[unlikely]] return; }
L_00414848:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 8075u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00414A38; } }
L_00414858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414860u);  if (depth < kMaxDepth) unit_00BE(c, 240u, depth + 1u); else { c.pc = 0x003FB040u; return; } if (c.pc != 0x00414860u) [[unlikely]] return; }
L_00414860:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004148F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414870u);  if (depth < kMaxDepth) unit_00AB(c, 292u, depth + 1u); else { c.pc = 0x003AF490u; return; } if (c.pc != 0x00414870u) [[unlikely]] return; }
L_00414870:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9u)));
    set32(c.r[2], c.r[2].w[0] + 8064u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 20866u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 129u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414898u); c.r[19].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AB(c, 288u, depth + 1u); else { c.pc = 0x003AF3B0u; return; } if (c.pc != 0x00414898u) [[unlikely]] return; }
L_00414898:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0;  if (t) { goto L_004148E0; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 165u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004148C8u); st8((c.r[18].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x004148C8u) [[unlikely]] return; }
L_004148C8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004148D4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x004148D4u) [[unlikely]] return; }
L_004148D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00414A38; } }
    c.budget -= 1;
L_004148E0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004148ECu); set32(c.r[5], 0u + 171u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x004148ECu) [[unlikely]] return; }
L_004148EC:
    c.budget -= 1;
L_004148F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004148F8u);  if (depth < kMaxDepth) unit_00BE(c, 241u, depth + 1u); else { c.pc = 0x003FB050u; return; } if (c.pc != 0x004148F8u) [[unlikely]] return; }
L_004148F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00414928; } }
    set32(c.r[2], 0u + 10u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414914u); set32(c.r[5], 0u + 167u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x00414914u) [[unlikely]] return; }
L_00414914:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414920u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x00414920u) [[unlikely]] return; }
L_00414920:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00414A38; } }
L_00414928:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414930u); set32(c.r[4], c.r[18].w[0] + 8u);  if (depth < kMaxDepth) unit_00BE(c, 311u, depth + 1u); else { c.pc = 0x003FB660u; return; } if (c.pc != 0x00414930u) [[unlikely]] return; }
L_00414930:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00414970; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9u)));
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041494Cu); set32(c.r[5], c.r[18].w[0] + 8u);  if (depth < kMaxDepth) unit_00C2(c, 348u, depth + 1u); else { c.pc = 0x0040B5F0u; return; } if (c.pc != 0x0041494Cu) [[unlikely]] return; }
L_0041494C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414958u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x00414958u) [[unlikely]] return; }
L_00414958:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414964u); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x00414964u) [[unlikely]] return; }
L_00414964:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00414A38; } }
    c.budget -= 1;
L_00414970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414978u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 62u, depth + 1u); else { c.pc = 0x003B0A00u; return; } if (c.pc != 0x00414978u) [[unlikely]] return; }
L_00414978:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00414A38; } }
L_00414980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414988u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 64u, depth + 1u); else { c.pc = 0x003B0A80u; return; } if (c.pc != 0x00414988u) [[unlikely]] return; }
L_00414988:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00414A38; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00414A38; } }
L_004149A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8075u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00414A38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00414A38; } }
L_004149B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004149C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B0B20u; return; } if (c.pc != 0x004149C0u) [[unlikely]] return; }
L_004149C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00414A38; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1u));
    set32(c.r[2], 0u + 16u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00414A38; } }
L_004149E0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[2], 0u + 4u);  if (t) { goto L_00414A10; } }
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 104u), 0u);  if (t) { goto L_00414A38; } }
    c.budget -= 1;
L_00414A10:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 104u), c.f[0]);
    c.budget -= 10;
L_00414A38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414A40u);  if (depth < kMaxDepth) unit_00C5(c, 124u, depth + 1u); else { c.pc = 0x00414F60u; return; } if (c.pc != 0x00414A40u) [[unlikely]] return; }
L_00414A40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414A48u);  if (depth < kMaxDepth) unit_00C5(c, 128u, depth + 1u); else { c.pc = 0x00414F90u; return; } if (c.pc != 0x00414A48u) [[unlikely]] return; }
L_00414A48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00414A70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_00414AB8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00414AA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00414AD8; } }
L_00414AA0:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414AB0u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x00414AB0u) [[unlikely]] return; }
L_00414AB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00414AD8; } }
L_00414AB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414AC0u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x00414AC0u) [[unlikely]] return; }
L_00414AC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00414AD8; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00414AD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414AE0u);  if (depth < kMaxDepth) unit_00C5(c, 124u, depth + 1u); else { c.pc = 0x00414F60u; return; } if (c.pc != 0x00414AE0u) [[unlikely]] return; }
L_00414AE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414AE8u);  if (depth < kMaxDepth) unit_00C5(c, 128u, depth + 1u); else { c.pc = 0x00414F90u; return; } if (c.pc != 0x00414AE8u) [[unlikely]] return; }
L_00414AE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00414B00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414B10u);  if (depth < kMaxDepth) unit_00C5(c, 84u, depth + 1u); else { c.pc = 0x00414B60u; return; } if (c.pc != 0x00414B10u) [[unlikely]] return; }
L_00414B10:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00414B20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414B34u); set32(c.r[4], ld32((c.r[1].w[0] + 8120u)));  if (depth < kMaxDepth) unit_00BE(c, 305u, depth + 1u); else { c.pc = 0x003FB5D0u; return; } if (c.pc != 0x00414B34u) [[unlikely]] return; }
L_00414B34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414B3Cu);  if (depth < kMaxDepth) unit_00C5(c, 124u, depth + 1u); else { c.pc = 0x00414F60u; return; } if (c.pc != 0x00414B3Cu) [[unlikely]] return; }
L_00414B3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414B44u);  if (depth < kMaxDepth) unit_00C5(c, 128u, depth + 1u); else { c.pc = 0x00414F90u; return; } if (c.pc != 0x00414B44u) [[unlikely]] return; }
L_00414B44:
    set32(c.r[4], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414B50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 154u, depth + 1u); else { c.pc = 0x003FA260u; return; } if (c.pc != 0x00414B50u) [[unlikely]] return; }
L_00414B50:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00414B60:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], c.r[2].w[0] - 32128u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00414000u < 16384u) { entry = entries_00C5[(t - 0x00414000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00414B80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00414C38; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00414C08; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00414BB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00414C68; } }
L_00414BB8:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414BC4u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x00414BC4u) [[unlikely]] return; }
L_00414BC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414BCCu);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x00414BCCu) [[unlikely]] return; }
L_00414BCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414BD4u);  if (depth < kMaxDepth) unit_000B(c, 24u, depth + 1u); else { c.pc = 0x0012C850u; return; } if (c.pc != 0x00414BD4u) [[unlikely]] return; }
L_00414BD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414BDCu); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_00BE(c, 320u, depth + 1u); else { c.pc = 0x003FB9C0u; return; } if (c.pc != 0x00414BDCu) [[unlikely]] return; }
L_00414BDC:
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 9u)));
    set32(c.r[2], ld32((c.r[1].w[0] + 18052u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414BFCu); c.r[4].d[0] = ld8((c.r[2].w[0] + 1u));  if (depth < kMaxDepth) unit_0049(c, 8u, depth + 1u); else { c.pc = 0x002240F0u; return; } if (c.pc != 0x00414BFCu) [[unlikely]] return; }
L_00414BFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00414C68; } }
    c.budget -= 1;
L_00414C08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414C10u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x00414C10u) [[unlikely]] return; }
L_00414C10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00414C68; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 16u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414C30u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x00414C30u) [[unlikely]] return; }
L_00414C30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00414C68; } }
L_00414C38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414C40u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x00414C40u) [[unlikely]] return; }
L_00414C40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00414C58; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00414C58:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414C64u); set32(c.r[4], c.r[4].w[0] + 15648u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x00414C64u) [[unlikely]] return; }
L_00414C64:
    c.budget -= 1;
L_00414C68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00414C80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414C98u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 240u, depth + 1u); else { c.pc = 0x003FB040u; return; } if (c.pc != 0x00414C98u) [[unlikely]] return; }
L_00414C98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00414CB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414CA8u);  if (depth < kMaxDepth) unit_00BE(c, 241u, depth + 1u); else { c.pc = 0x003FB050u; return; } if (c.pc != 0x00414CA8u) [[unlikely]] return; }
L_00414CA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00414CE0; } }
L_00414CB0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 16u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414CCCu); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x00414CCCu) [[unlikely]] return; }
L_00414CCC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414CD8u); set32(c.r[5], 0u + 167u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x00414CD8u) [[unlikely]] return; }
L_00414CD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00414D48; } }
L_00414CE0:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414CECu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_00BE(c, 242u, depth + 1u); else { c.pc = 0x003FB060u; return; } if (c.pc != 0x00414CECu) [[unlikely]] return; }
L_00414CEC:
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 15u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414D00u); set32(c.r[6], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_00BE(c, 243u, depth + 1u); else { c.pc = 0x003FB0D0u; return; } if (c.pc != 0x00414D00u) [[unlikely]] return; }
L_00414D00:
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00414D48; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], c.r[2].w[0] + 8064u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 166u);
    set32(c.r[3], c.r[3].w[0] + 2u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2052u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414D44u); st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x00414D44u) [[unlikely]] return; }
L_00414D44:
    c.budget -= 1;
L_00414D48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414D54u); set32(c.r[4], c.r[4].w[0] + 15648u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x00414D54u) [[unlikely]] return; }
L_00414D54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00414D70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414D88u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x00414D88u) [[unlikely]] return; }
L_00414D88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00414D98; } }
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00414D98:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414DA4u); set32(c.r[4], c.r[4].w[0] + 15648u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x00414DA4u) [[unlikely]] return; }
L_00414DA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00414DC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00414F08; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_00414E90; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00414E60; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00414E08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00414F40; } }
    c.budget -= 1;
L_00414E08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414E10u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x00414E10u) [[unlikely]] return; }
L_00414E10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00414E48; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414E28u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x00414E28u) [[unlikely]] return; }
L_00414E28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414E30u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x00414E30u) [[unlikely]] return; }
L_00414E30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414E38u);  if (depth < kMaxDepth) unit_000B(c, 24u, depth + 1u); else { c.pc = 0x0012C850u; return; } if (c.pc != 0x00414E38u) [[unlikely]] return; }
L_00414E38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414E40u);  if (depth < kMaxDepth) unit_00BE(c, 115u, depth + 1u); else { c.pc = 0x003F9E10u; return; } if (c.pc != 0x00414E40u) [[unlikely]] return; }
L_00414E40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00414F40; } }
L_00414E48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414E54u); set32(c.r[4], c.r[4].w[0] + 15648u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x00414E54u) [[unlikely]] return; }
L_00414E54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00414F40; } }
    c.budget -= 1;
L_00414E60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414E68u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x00414E68u) [[unlikely]] return; }
L_00414E68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00414E90; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414E88u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8068u)));  if (depth < kMaxDepth) unit_00BE(c, 135u, depth + 1u); else { c.pc = 0x003F9FF0u; return; } if (c.pc != 0x00414E88u) [[unlikely]] return; }
L_00414E88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00414F40; } }
L_00414E90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414E98u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_00BE(c, 114u, depth + 1u); else { c.pc = 0x003F9DE0u; return; } if (c.pc != 0x00414E98u) [[unlikely]] return; }
L_00414E98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00414F40; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], ld32((c.r[1].w[0] + 8880u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414ECCu); set32(c.r[7], 0u + 16u);  if (depth < kMaxDepth) unit_004B(c, 96u, depth + 1u); else { c.pc = 0x0022D4F0u; return; } if (c.pc != 0x00414ECCu) [[unlikely]] return; }
L_00414ECC:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[4], 0u + 10u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414EE0u); set32(c.r[17], c.r[17].w[0] + 8120u);  if (depth < kMaxDepth) unit_00C2(c, 172u, depth + 1u); else { c.pc = 0x00409CF0u; return; } if (c.pc != 0x00414EE0u) [[unlikely]] return; }
L_00414EE0:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[2].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414EFCu); set32(c.r[5], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_00C2(c, 348u, depth + 1u); else { c.pc = 0x0040B5F0u; return; } if (c.pc != 0x00414EFCu) [[unlikely]] return; }
L_00414EFC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414F08u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x00414F08u) [[unlikely]] return; }
L_00414F08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414F10u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x00414F10u) [[unlikely]] return; }
L_00414F10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00414F30; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_00414F30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414F38u);  if (depth < kMaxDepth) unit_00C5(c, 124u, depth + 1u); else { c.pc = 0x00414F60u; return; } if (c.pc != 0x00414F38u) [[unlikely]] return; }
L_00414F38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414F40u);  if (depth < kMaxDepth) unit_00C5(c, 128u, depth + 1u); else { c.pc = 0x00414F90u; return; } if (c.pc != 0x00414F40u) [[unlikely]] return; }
L_00414F40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00414F60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414F70u);  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x00414F70u) [[unlikely]] return; }
L_00414F70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414F78u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x00414F78u) [[unlikely]] return; }
L_00414F78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414F80u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x00414F80u) [[unlikely]] return; }
L_00414F80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00414F90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414FA4u); set32(c.r[4], c.r[4].w[0] - 15136u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x00414FA4u) [[unlikely]] return; }
L_00414FA4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00414FB0u); set32(c.r[4], c.r[4].w[0] - 15024u);  if (depth < kMaxDepth) unit_0043(c, 416u, depth + 1u); else { c.pc = 0x0020FEF0u; return; } if (c.pc != 0x00414FB0u) [[unlikely]] return; }
L_00414FB0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00414FC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    st8((c.r[1].w[0] - 25933u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    set32(c.r[7], c.r[7].w[0] + 2816u);
    st8((c.r[1].w[0] - 25934u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], c.r[6].w[0] + 2856u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[1].w[0] - 25935u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st8((c.r[1].w[0] - 25936u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st8((c.r[1].w[0] - 25926u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st8((c.r[1].w[0] - 25925u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st8((c.r[1].w[0] - 25928u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25928u)));
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    st8((c.r[5].w[0] + 81u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[1].w[0] - 25927u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25928u)));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[7], c.r[5].w[0] + 76u);
    st8((c.r[1].w[0] - 25909u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 76u)));
    c.budget -= 38;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_00415070; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    st8((c.r[1].w[0] - 6800u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_00415070:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25928u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004150B0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);  if (t) { goto L_004150A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 25924u), static_cast<std::uint8_t>(0u));  if (t) { goto L_004150B8; } }
    c.budget -= 1;
L_004150A0:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 25924u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004150B8; } }
L_004150B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st8((c.r[1].w[0] - 25924u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_004150B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004150C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[1].w[0] - 25933u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st8((c.r[1].w[0] - 25925u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    st8((c.r[1].w[0] - 25934u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 2096u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[1].w[0] - 25935u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    set32(c.r[3], c.r[3].w[0] + 2448u);
    st8((c.r[1].w[0] - 25936u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    st8((c.r[1].w[0] - 25926u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 2816u);
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st32((c.r[1].w[0] - 25920u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 25920u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    set32(c.r[5], c.r[5].w[0] + 2u);
    st32((c.r[1].w[0] - 25916u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st32((c.r[1].w[0] - 25920u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    set32(c.r[6], ld32((c.r[1].w[0] - 25920u)));
    set32(c.r[5], c.r[6].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st32((c.r[1].w[0] - 25920u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st8((c.r[1].w[0] - 25928u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25928u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[3].w[0] + 81u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25928u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 25920u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st8((c.r[1].w[0] - 25927u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st32((c.r[1].w[0] - 25920u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st8((c.r[1].w[0] - 25909u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.budget -= 62;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[1].w[0] - 25924u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_004151C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    set32(c.r[2], c.r[2].w[0] + 2872u);
    st8((c.r[3].w[0] + 42u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25936u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004151F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004151F8u) [[unlikely]] return; }
L_004151F8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 42u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00415210:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25935u)));
    set32(c.r[2], c.r[2].w[0] + 2888u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0041523Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0041523Cu) [[unlikely]] return; }
L_0041523C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00415250:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415260u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x00415260u) [[unlikely]] return; }
L_00415260:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);  if (t) { goto L_00415288; } }
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25924u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x002A0000u);  if (t) { goto L_00415280; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415280u); set32(c.r[4], c.r[4].w[0] - 22608u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x00415280u) [[unlikely]] return; }
L_00415280:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00415468; } }
L_00415288:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25935u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004152A0u); st8((c.r[1].w[0] - 25935u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x004152A0u) [[unlikely]] return; }
L_004152A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004152A8u);  if (depth < kMaxDepth) unit_006A(c, 136u, depth + 1u); else { c.pc = 0x002A9F70u; return; } if (c.pc != 0x004152A8u) [[unlikely]] return; }
L_004152A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004152B0u);  if (depth < kMaxDepth) unit_0032(c, 47u, depth + 1u); else { c.pc = 0x001C8B00u; return; } if (c.pc != 0x004152B0u) [[unlikely]] return; }
L_004152B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004152B8u);  if (depth < kMaxDepth) unit_005B(c, 76u, depth + 1u); else { c.pc = 0x0026CAB0u; return; } if (c.pc != 0x004152B8u) [[unlikely]] return; }
L_004152B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[4], 0u + 2u);
    st8((c.r[1].w[0] + 18776u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st16((c.r[28].w[0] - 23844u), static_cast<std::uint16_t>(0u));
    st8((c.r[1].w[0] + 18777u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st16((c.r[28].w[0] - 23848u), static_cast<std::uint16_t>(0u));
    st8((c.r[1].w[0] + 18778u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st8((c.r[1].w[0] + 18779u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st8((c.r[1].w[0] + 18780u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st8((c.r[1].w[0] + 18781u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st8((c.r[1].w[0] + 18782u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st8((c.r[1].w[0] + 18783u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st16((c.r[1].w[0] + 18774u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st16((c.r[1].w[0] + 18772u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st16((c.r[1].w[0] + 18770u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st16((c.r[1].w[0] + 18768u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st32((c.r[1].w[0] + 18764u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st32((c.r[1].w[0] + 18760u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st32((c.r[1].w[0] + 18756u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415348u); st32((c.r[1].w[0] + 18752u), 0u);  if (depth < kMaxDepth) unit_0009(c, 167u, depth + 1u); else { c.pc = 0x00126260u; return; } if (c.pc != 0x00415348u) [[unlikely]] return; }
L_00415348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415350u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00415350u) [[unlikely]] return; }
L_00415350:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[4], c.r[4].w[0] - 25952u);
    set32(c.r[5], c.r[5].w[0] + 2800u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415368u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x00127690u; return; } if (c.pc != 0x00415368u) [[unlikely]] return; }
L_00415368:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415374u); set32(c.r[4], c.r[4].w[0] - 9584u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00415374u) [[unlikely]] return; }
L_00415374:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[5], c.r[5].w[0] - 9584u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[2].w[0] + 64u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st32((c.r[2].w[0] + 60u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 69u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004153A8u); st8((c.r[2].w[0] + 68u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0009(c, 167u, depth + 1u); else { c.pc = 0x00126260u; return; } if (c.pc != 0x004153A8u) [[unlikely]] return; }
L_004153A8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    set32(c.r[3], c.r[3].w[0] - 22960u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25928u)));
    set32(c.r[2], 0u + 6u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 81u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st32((c.r[1].w[0] + 18752u), c.r[3].w[0]);  if (t) { goto L_004153F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[2], c.r[2].w[0] + 8832u);
    st32((c.r[1].w[0] + 18752u), c.r[2].w[0]);
    c.budget -= 5;
L_004153F0:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);  if (t) { goto L_00415408; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[2], c.r[2].w[0] + 8864u);
    st32((c.r[1].w[0] + 18752u), c.r[2].w[0]);
    c.budget -= 3;
L_00415408:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);  if (t) { goto L_00415420; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[2], c.r[2].w[0] + 8896u);
    st32((c.r[1].w[0] + 18752u), c.r[2].w[0]);
    c.budget -= 3;
L_00415420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415428u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 229u, depth + 1u); else { c.pc = 0x002E2990u; return; } if (c.pc != 0x00415428u) [[unlikely]] return; }
L_00415428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415430u);  if (depth < kMaxDepth) unit_00C5(c, 290u, depth + 1u); else { c.pc = 0x00416380u; return; } if (c.pc != 0x00415430u) [[unlikely]] return; }
L_00415430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415438u);  if (depth < kMaxDepth) unit_0045(c, 85u, depth + 1u); else { c.pc = 0x00214BD0u; return; } if (c.pc != 0x00415438u) [[unlikely]] return; }
L_00415438:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415444u); set32(c.r[4], c.r[4].w[0] + 15664u);  if (depth < kMaxDepth) unit_005B(c, 89u, depth + 1u); else { c.pc = 0x0026CD50u; return; } if (c.pc != 0x00415444u) [[unlikely]] return; }
L_00415444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041544Cu);  if (depth < kMaxDepth) unit_004F(c, 62u, depth + 1u); else { c.pc = 0x0023D100u; return; } if (c.pc != 0x0041544Cu) [[unlikely]] return; }
L_0041544C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25924u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x002A0000u);  if (t) { goto L_00415468; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415468u); set32(c.r[4], c.r[4].w[0] - 22608u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x00415468u) [[unlikely]] return; }
L_00415468:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00415480:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415490u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x00415490u) [[unlikely]] return; }
L_00415490:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);  if (t) { goto L_004154B8; } }
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25924u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x002A0000u);  if (t) { goto L_004154B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004154B0u); set32(c.r[4], c.r[4].w[0] - 22608u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x004154B0u) [[unlikely]] return; }
L_004154B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004155D0; } }
L_004154B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25935u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004154D0u); st8((c.r[1].w[0] - 25935u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x004154D0u) [[unlikely]] return; }
L_004154D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004154D8u);  if (depth < kMaxDepth) unit_000B(c, 24u, depth + 1u); else { c.pc = 0x0012C850u; return; } if (c.pc != 0x004154D8u) [[unlikely]] return; }
L_004154D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004154E0u);  if (depth < kMaxDepth) unit_004D(c, 130u, depth + 1u); else { c.pc = 0x002362E0u; return; } if (c.pc != 0x004154E0u) [[unlikely]] return; }
L_004154E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004154E8u);  if (depth < kMaxDepth) unit_005B(c, 73u, depth + 1u); else { c.pc = 0x0026CA70u; return; } if (c.pc != 0x004154E8u) [[unlikely]] return; }
L_004154E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004154F4u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25928u)));  if (depth < kMaxDepth) unit_00C5(c, 289u, depth + 1u); else { c.pc = 0x004161F0u; return; } if (c.pc != 0x004154F4u) [[unlikely]] return; }
L_004154F4:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415508u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25927u)));  if (depth < kMaxDepth) unit_0048(c, 212u, depth + 1u); else { c.pc = 0x00223020u; return; } if (c.pc != 0x00415508u) [[unlikely]] return; }
L_00415508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415510u);  if (depth < kMaxDepth) unit_0048(c, 83u, depth + 1u); else { c.pc = 0x00220F40u; return; } if (c.pc != 0x00415510u) [[unlikely]] return; }
L_00415510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415518u);  if (depth < kMaxDepth) unit_0048(c, 148u, depth + 1u); else { c.pc = 0x00222230u; return; } if (c.pc != 0x00415518u) [[unlikely]] return; }
L_00415518:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415520u);  if (depth < kMaxDepth) unit_0048(c, 136u, depth + 1u); else { c.pc = 0x00221FB0u; return; } if (c.pc != 0x00415520u) [[unlikely]] return; }
L_00415520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415528u);  if (depth < kMaxDepth) unit_0048(c, 170u, depth + 1u); else { c.pc = 0x00222740u; return; } if (c.pc != 0x00415528u) [[unlikely]] return; }
L_00415528:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25925u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00415580; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415540u);  if (depth < kMaxDepth) unit_0048(c, 275u, depth + 1u); else { c.pc = 0x00223E50u; return; } if (c.pc != 0x00415540u) [[unlikely]] return; }
L_00415540:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00210000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415550u); set32(c.r[4], c.r[4].w[0] + 9776u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x00415550u) [[unlikely]] return; }
L_00415550:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 9984u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415564u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x00415564u) [[unlikely]] return; }
L_00415564:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[6], 0u + 20u);
    set32(c.r[4], c.r[4].w[0] + 12432u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041557Cu); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0041557Cu) [[unlikely]] return; }
L_0041557C:
    c.budget -= 1;
L_00415580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415588u);  if (depth < kMaxDepth) unit_0046(c, 207u, depth + 1u); else { c.pc = 0x0021B5B0u; return; } if (c.pc != 0x00415588u) [[unlikely]] return; }
L_00415588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415590u);  if (depth < kMaxDepth) unit_0078(c, 152u, depth + 1u); else { c.pc = 0x002E1870u; return; } if (c.pc != 0x00415590u) [[unlikely]] return; }
L_00415590:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415598u);  if (depth < kMaxDepth) unit_0078(c, 17u, depth + 1u); else { c.pc = 0x002E0080u; return; } if (c.pc != 0x00415598u) [[unlikely]] return; }
L_00415598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004155A0u);  if (depth < kMaxDepth) unit_0078(c, 224u, depth + 1u); else { c.pc = 0x002E2910u; return; } if (c.pc != 0x004155A0u) [[unlikely]] return; }
L_004155A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004155A8u);  if (depth < kMaxDepth) unit_004B(c, 22u, depth + 1u); else { c.pc = 0x0022C4E0u; return; } if (c.pc != 0x004155A8u) [[unlikely]] return; }
L_004155A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004155B0u);  if (depth < kMaxDepth) unit_004B(c, 77u, depth + 1u); else { c.pc = 0x0022CFE0u; return; } if (c.pc != 0x004155B0u) [[unlikely]] return; }
L_004155B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25924u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x002A0000u);  if (t) { goto L_004155D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004155CCu); set32(c.r[4], c.r[4].w[0] - 22608u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x004155CCu) [[unlikely]] return; }
L_004155CC:
    c.budget -= 1;
L_004155D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004155E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004155F0u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x004155F0u) [[unlikely]] return; }
L_004155F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);  if (t) { goto L_00415618; } }
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25924u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x002A0000u);  if (t) { goto L_00415610; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415610u); set32(c.r[4], c.r[4].w[0] - 22608u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x00415610u) [[unlikely]] return; }
L_00415610:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00415760; } }
L_00415618:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25936u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25925u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[1].w[0] - 25936u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00415650; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25936u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st8((c.r[1].w[0] - 25936u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_00415650:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041565Cu); st8((c.r[1].w[0] - 25935u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00213EC0u; return; } if (c.pc != 0x0041565Cu) [[unlikely]] return; }
L_0041565C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415664u);  if (depth < kMaxDepth) unit_0048(c, 24u, depth + 1u); else { c.pc = 0x002203B0u; return; } if (c.pc != 0x00415664u) [[unlikely]] return; }
L_00415664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041566Cu);  if (depth < kMaxDepth) unit_0048(c, 93u, depth + 1u); else { c.pc = 0x002211A0u; return; } if (c.pc != 0x0041566Cu) [[unlikely]] return; }
L_0041566C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415674u);  if (depth < kMaxDepth) unit_0048(c, 9u, depth + 1u); else { c.pc = 0x00220020u; return; } if (c.pc != 0x00415674u) [[unlikely]] return; }
L_00415674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041567Cu);  if (depth < kMaxDepth) unit_0048(c, 217u, depth + 1u); else { c.pc = 0x002230D0u; return; } if (c.pc != 0x0041567Cu) [[unlikely]] return; }
L_0041567C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415684u);  if (depth < kMaxDepth) unit_000B(c, 35u, depth + 1u); else { c.pc = 0x0012CB40u; return; } if (c.pc != 0x00415684u) [[unlikely]] return; }
L_00415684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041568Cu);  if (depth < kMaxDepth) unit_0078(c, 23u, depth + 1u); else { c.pc = 0x002E01A0u; return; } if (c.pc != 0x0041568Cu) [[unlikely]] return; }
L_0041568C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415694u);  if (depth < kMaxDepth) unit_0078(c, 154u, depth + 1u); else { c.pc = 0x002E18C0u; return; } if (c.pc != 0x00415694u) [[unlikely]] return; }
L_00415694:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25928u)));
    set32(c.r[2], c.r[2].w[0] + 2832u);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[1].w[0] - 25932u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 25932u)));
    c.budget -= 13;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_004156F0; } }
    set32(c.r[2], c.r[2].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st16((c.r[1].w[0] - 25932u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 25932u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_004156F0; } }
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st16((c.r[1].w[0] - 25932u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_004156F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25924u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00415710; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415708u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x00415708u) [[unlikely]] return; }
L_00415708:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00415728; } }
L_00415710:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415724u); c.r[6].d[0] = c.r[2].d[0] | 65535ull;  if (depth < kMaxDepth) unit_0046(c, 196u, depth + 1u); else { c.pc = 0x0021B320u; return; } if (c.pc != 0x00415724u) [[unlikely]] return; }
L_00415724:
    c.budget -= 1;
L_00415728:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25909u)));
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_00415740; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415740u);  if (depth < kMaxDepth) unit_004E(c, 35u, depth + 1u); else { c.pc = 0x002382B0u; return; } if (c.pc != 0x00415740u) [[unlikely]] return; }
L_00415740:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25924u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x002A0000u);  if (t) { goto L_00415760; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041575Cu); set32(c.r[4], c.r[4].w[0] - 22608u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x0041575Cu) [[unlikely]] return; }
L_0041575C:
    c.budget -= 1;
L_00415760:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00415770:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25935u)));
    set32(c.r[2], c.r[2].w[0] + 2912u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00414000u < 16384u) { entry = entries_00C5[(t - 0x00414000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004157A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004157B0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x004157B0u) [[unlikely]] return; }
L_004157B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);  if (t) { goto L_004157C8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25935u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st8((c.r[1].w[0] - 25935u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_004157C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004157D0u);  if (depth < kMaxDepth) unit_0079(c, 110u, depth + 1u); else { c.pc = 0x002E6490u; return; } if (c.pc != 0x004157D0u) [[unlikely]] return; }
L_004157D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004157D8u);  if (depth < kMaxDepth) unit_00C5(c, 262u, depth + 1u); else { c.pc = 0x004160A0u; return; } if (c.pc != 0x004157D8u) [[unlikely]] return; }
L_004157D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004157E0u);  if (depth < kMaxDepth) unit_00C5(c, 280u, depth + 1u); else { c.pc = 0x00416140u; return; } if (c.pc != 0x004157E0u) [[unlikely]] return; }
L_004157E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004157F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 6u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 3u);  if (t) { goto L_00415828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415814u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x00415814u) [[unlikely]] return; }
L_00415814:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 32864ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_00415840; } }
    c.budget -= 1;
L_00415828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415830u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x00415830u) [[unlikely]] return; }
L_00415830:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 32832ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
L_00415840:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);  if (t) { goto L_004158A0; } }
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25935u)));
    set32(c.r[5], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415864u); st8((c.r[1].w[0] - 25935u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x00415864u) [[unlikely]] return; }
L_00415864:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415874u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x00415874u) [[unlikely]] return; }
L_00415874:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415884u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x00415884u) [[unlikely]] return; }
L_00415884:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415894u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x00415894u) [[unlikely]] return; }
L_00415894:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00415940; } }
    c.budget -= 1;
L_004158A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 25932u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00415920; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st16((c.r[1].w[0] - 25932u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);  if (t) { goto L_00415940; } }
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25935u)));
    set32(c.r[5], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004158E8u); st8((c.r[1].w[0] - 25935u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x004158E8u) [[unlikely]] return; }
L_004158E8:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004158F8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x004158F8u) [[unlikely]] return; }
L_004158F8:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415908u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x00415908u) [[unlikely]] return; }
L_00415908:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415918u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x00415918u) [[unlikely]] return; }
L_00415918:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00415940; } }
L_00415920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415928u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_004E(c, 55u, depth + 1u); else { c.pc = 0x00238800u; return; } if (c.pc != 0x00415928u) [[unlikely]] return; }
L_00415928:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);  if (t) { goto L_00415940; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25935u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st8((c.r[1].w[0] - 25935u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00415940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415948u);  if (depth < kMaxDepth) unit_0079(c, 110u, depth + 1u); else { c.pc = 0x002E6490u; return; } if (c.pc != 0x00415948u) [[unlikely]] return; }
L_00415948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415950u);  if (depth < kMaxDepth) unit_00C5(c, 262u, depth + 1u); else { c.pc = 0x004160A0u; return; } if (c.pc != 0x00415950u) [[unlikely]] return; }
L_00415950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415958u);  if (depth < kMaxDepth) unit_00C5(c, 280u, depth + 1u); else { c.pc = 0x00416140u; return; } if (c.pc != 0x00415958u) [[unlikely]] return; }
L_00415958:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00415970:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415980u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x00415980u) [[unlikely]] return; }
L_00415980:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);  if (t) { goto L_00415998; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415990u); st16((c.r[1].w[0] - 25932u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_004E(c, 5u, depth + 1u); else { c.pc = 0x00238040u; return; } if (c.pc != 0x00415990u) [[unlikely]] return; }
L_00415990:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004159B8; } }
L_00415998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004159A0u);  if (depth < kMaxDepth) unit_0079(c, 110u, depth + 1u); else { c.pc = 0x002E6490u; return; } if (c.pc != 0x004159A0u) [[unlikely]] return; }
L_004159A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004159A8u);  if (depth < kMaxDepth) unit_00C5(c, 262u, depth + 1u); else { c.pc = 0x004160A0u; return; } if (c.pc != 0x004159A8u) [[unlikely]] return; }
L_004159A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004159B0u);  if (depth < kMaxDepth) unit_00C5(c, 280u, depth + 1u); else { c.pc = 0x00416140u; return; } if (c.pc != 0x004159B0u) [[unlikely]] return; }
L_004159B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004159B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004159D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 6u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 3u);  if (t) { goto L_00415A08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004159F4u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x004159F4u) [[unlikely]] return; }
L_004159F4:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 32864ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_00415A20; } }
    c.budget -= 1;
L_00415A08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415A10u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x00415A10u) [[unlikely]] return; }
L_00415A10:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 32832ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
L_00415A20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00415A40; } }
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    set32(c.r[4], 0u + 1u);
    st8((c.r[1].w[0] - 25935u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415A40u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x00415A40u) [[unlikely]] return; }
L_00415A40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415A48u);  if (depth < kMaxDepth) unit_0079(c, 110u, depth + 1u); else { c.pc = 0x002E6490u; return; } if (c.pc != 0x00415A48u) [[unlikely]] return; }
L_00415A48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415A50u);  if (depth < kMaxDepth) unit_00C5(c, 262u, depth + 1u); else { c.pc = 0x004160A0u; return; } if (c.pc != 0x00415A50u) [[unlikely]] return; }
L_00415A50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415A58u);  if (depth < kMaxDepth) unit_00C5(c, 280u, depth + 1u); else { c.pc = 0x00416140u; return; } if (c.pc != 0x00415A58u) [[unlikely]] return; }
L_00415A58:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00415A70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25935u)));
    set32(c.r[2], c.r[2].w[0] + 2928u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00414000u < 16384u) { entry = entries_00C5[(t - 0x00414000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00415AA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 6u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00415AD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415AC8u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x00415AC8u) [[unlikely]] return; }
L_00415AC8:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 32864ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_00415AF0; } }
L_00415AD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415AE0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x00415AE0u) [[unlikely]] return; }
L_00415AE0:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 32832ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
L_00415AF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);  if (t) { goto L_00415B48; } }
    set32(c.r[16], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25935u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415B18u); st8((c.r[1].w[0] - 25935u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x00415B18u) [[unlikely]] return; }
L_00415B18:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415B28u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x00415B28u) [[unlikely]] return; }
L_00415B28:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415B38u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x00415B38u) [[unlikely]] return; }
L_00415B38:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415B48u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x00415B48u) [[unlikely]] return; }
L_00415B48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415B50u);  if (depth < kMaxDepth) unit_0079(c, 110u, depth + 1u); else { c.pc = 0x002E6490u; return; } if (c.pc != 0x00415B50u) [[unlikely]] return; }
L_00415B50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415B58u);  if (depth < kMaxDepth) unit_00C5(c, 244u, depth + 1u); else { c.pc = 0x00415BE0u; return; } if (c.pc != 0x00415B58u) [[unlikely]] return; }
L_00415B58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00415BB8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);  if (t) { goto L_00415BB8; } }
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25935u)));
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415B84u); st8((c.r[1].w[0] - 25935u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x00415B84u) [[unlikely]] return; }
L_00415B84:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 60u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415B94u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x00415B94u) [[unlikely]] return; }
L_00415B94:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 60u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415BA4u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x00415BA4u) [[unlikely]] return; }
L_00415BA4:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 60u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415BB4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x00415BB4u) [[unlikely]] return; }
L_00415BB4:
    c.budget -= 1;
L_00415BB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415BC0u);  if (depth < kMaxDepth) unit_00C5(c, 262u, depth + 1u); else { c.pc = 0x004160A0u; return; } if (c.pc != 0x00415BC0u) [[unlikely]] return; }
L_00415BC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415BC8u);  if (depth < kMaxDepth) unit_00C5(c, 280u, depth + 1u); else { c.pc = 0x00416140u; return; } if (c.pc != 0x00415BC8u) [[unlikely]] return; }
L_00415BC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00415BE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 25920u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00415C00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00415C68; } }
L_00415C00:
    st32((c.r[29].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 2;
L_00415C08:
    set32(c.r[3], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00415C30; } }
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415C28u);  if (depth < kMaxDepth) unit_0044(c, 347u, depth + 1u); else { c.pc = 0x00213080u; return; } if (c.pc != 0x00415C28u) [[unlikely]] return; }
L_00415C28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00415C68; } }
L_00415C30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 2944u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00415C4Cu); set32(c.r[4], c.r[29].w[0] + 28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00415C4Cu) [[unlikely]] return; }
L_00415C4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00415C08u | kUnwind; return; } goto L_00415C08; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 28u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[1].w[0] - 25920u), c.r[3].w[0]);
    c.budget -= 5;
L_00415C68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00415C80:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00415CA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 25932u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st16((c.r[1].w[0] - 25932u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00415CD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00415CE0; } }
    c.budget -= 1;
L_00415CD0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_00415CE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00415CF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], 0u + 3u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25933u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], 0u + 1u);  if (t) { goto L_00415E40; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00415E00; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_00415D60; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00415D40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00415EC8; } }
L_00415D40:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st8((c.r[1].w[0] - 25933u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25911u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st16((c.r[1].w[0] - 25932u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
L_00415D60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 25932u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st16((c.r[1].w[0] - 25932u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);  if (t) { goto L_00415DB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25933u)));
    c.f[12] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 25930u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st8((c.r[1].w[0] - 25933u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415DB0u); st16((c.r[1].w[0] - 25932u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0044(c, 347u, depth + 1u); else { c.pc = 0x00213080u; return; } if (c.pc != 0x00415DB0u) [[unlikely]] return; }
L_00415DB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00415ED0; } }
L_00415DB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25911u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 25932u)));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415DF4u); c.f[12] = fp::sub(c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_0044(c, 347u, depth + 1u); else { c.pc = 0x00213080u; return; } if (c.pc != 0x00415DF4u) [[unlikely]] return; }
L_00415DF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00415ED0; } }
    c.budget -= 1;
L_00415E00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 25932u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st16((c.r[1].w[0] - 25932u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);  if (t) { goto L_00415ED0; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25910u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st8((c.r[1].w[0] - 25933u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] - 25932u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00415ED0; } }
L_00415E40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 25932u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st16((c.r[1].w[0] - 25932u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00415E88; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st8((c.r[1].w[0] - 25933u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415E7Cu); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 347u, depth + 1u); else { c.pc = 0x00213080u; return; } if (c.pc != 0x00415E7Cu) [[unlikely]] return; }
L_00415E7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00415ED0; } }
    c.budget -= 1;
L_00415E88:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25910u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 25932u)));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415EC0u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0044(c, 347u, depth + 1u); else { c.pc = 0x00213080u; return; } if (c.pc != 0x00415EC0u) [[unlikely]] return; }
L_00415EC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00415ED0; } }
L_00415EC8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00415ED0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);  if (t) { goto L_00415F38; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25912u)));
    set32(c.r[17], 0u + 370u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[1].w[0] - 25916u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 8;
L_00415EF8:
    set32(c.r[8], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] << 48;  if (t) { goto L_00415F30; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[4], 0u + 30u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00415F1Cu); set32(c.r[7], c.r[7].w[0] + 22000u);  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x00415F1Cu) [[unlikely]] return; }
L_00415F1C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 22u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00415EF8u | kUnwind; return; } goto L_00415EF8; } }
L_00415F30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00415F50; } }
L_00415F38:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st8((c.r[1].w[0] - 25933u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_00415F50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00415F70:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[1].w[0] - 25932u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00415FC0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st8((c.r[1].w[0] - 25912u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    set32(c.r[3], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st8((c.r[1].w[0] - 25911u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    set32(c.r[3], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[6].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    st8((c.r[1].w[0] - 25910u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.budget -= 35;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[1].w[0] - 25930u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00416050:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416080u); st8((c.r[1].w[0] - 25909u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 43u, depth + 1u); else { c.pc = 0x00238470u; return; } if (c.pc != 0x00416080u) [[unlikely]] return; }
L_00416080:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041608Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25909u)));  if (depth < kMaxDepth) unit_004E(c, 35u, depth + 1u); else { c.pc = 0x002382B0u; return; } if (c.pc != 0x0041608Cu) [[unlikely]] return; }
L_0041608C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004160A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004160B0u);  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x004160B0u) [[unlikely]] return; }
L_004160B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004160B8u);  if (depth < kMaxDepth) unit_006A(c, 139u, depth + 1u); else { c.pc = 0x002AA020u; return; } if (c.pc != 0x004160B8u) [[unlikely]] return; }
L_004160B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004160C0u);  if (depth < kMaxDepth) unit_0078(c, 23u, depth + 1u); else { c.pc = 0x002E01A0u; return; } if (c.pc != 0x004160C0u) [[unlikely]] return; }
L_004160C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004160C8u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x004160C8u) [[unlikely]] return; }
L_004160C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004160D0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x004160D0u) [[unlikely]] return; }
L_004160D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004160D8u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x004160D8u) [[unlikely]] return; }
L_004160D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004160E0u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x004160E0u) [[unlikely]] return; }
L_004160E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004160E8u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x004160E8u) [[unlikely]] return; }
L_004160E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004160F0u);  if (depth < kMaxDepth) unit_004A(c, 360u, depth + 1u); else { c.pc = 0x0022B860u; return; } if (c.pc != 0x004160F0u) [[unlikely]] return; }
L_004160F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004160F8u);  if (depth < kMaxDepth) unit_004B(c, 49u, depth + 1u); else { c.pc = 0x0022C9B0u; return; } if (c.pc != 0x004160F8u) [[unlikely]] return; }
L_004160F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416100u);  if (depth < kMaxDepth) unit_006B(c, 20u, depth + 1u); else { c.pc = 0x002AC480u; return; } if (c.pc != 0x00416100u) [[unlikely]] return; }
L_00416100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416108u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x00416108u) [[unlikely]] return; }
L_00416108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416110u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x00416110u) [[unlikely]] return; }
L_00416110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416118u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x00416118u) [[unlikely]] return; }
L_00416118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416120u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x00416120u) [[unlikely]] return; }
L_00416120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416128u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x00416128u) [[unlikely]] return; }
L_00416128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416130u);  if (depth < kMaxDepth) unit_0078(c, 154u, depth + 1u); else { c.pc = 0x002E18C0u; return; } if (c.pc != 0x00416130u) [[unlikely]] return; }
L_00416130:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00416140:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416150u);  if (depth < kMaxDepth) unit_0045(c, 90u, depth + 1u); else { c.pc = 0x00214EF0u; return; } if (c.pc != 0x00416150u) [[unlikely]] return; }
L_00416150:
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[3], c.r[3].w[0] + 29024u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[4].w[0] - 16432u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 51u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0] + 64u), 0u);
    st32((c.r[3].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 72u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416194u); st8((c.r[2].w[0] + 433u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x00416194u) [[unlikely]] return; }
L_00416194:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004161A0u); set32(c.r[4], c.r[4].w[0] - 15136u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x004161A0u) [[unlikely]] return; }
L_004161A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004161B0u); set32(c.r[4], c.r[4].w[0] - 15024u);  if (depth < kMaxDepth) unit_0043(c, 416u, depth + 1u); else { c.pc = 0x0020FEF0u; return; } if (c.pc != 0x004161B0u) [[unlikely]] return; }
L_004161B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004161B8u);  if (depth < kMaxDepth) unit_0046(c, 204u, depth + 1u); else { c.pc = 0x0021B570u; return; } if (c.pc != 0x004161B8u) [[unlikely]] return; }
L_004161B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004161C4u); set32(c.r[4], c.r[4].w[0] - 928u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x004161C4u) [[unlikely]] return; }
L_004161C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004161D0u); set32(c.r[4], c.r[4].w[0] - 912u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x004161D0u) [[unlikely]] return; }
L_004161D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004161DCu); set32(c.r[4], c.r[4].w[0] - 944u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x004161DCu) [[unlikely]] return; }
L_004161DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004161F0:
    c.r[6].d[0] = c.r[4].d[0] << 56;
    set32(c.r[7], ld32((c.r[28].w[0] - 23784u)));
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[3], 0u - 1u);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] - 23056u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] - 23008u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st8((c.r[7].w[0] + 59u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[6].w[0] + 65u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[6].w[0] + 94u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[6].w[0] + 60u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[6].w[0] + 66u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[6].w[0] + 95u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[6].w[0] + 61u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[6].w[0] + 67u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[6].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[6].w[0] + 62u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[6].w[0] + 68u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[6].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[6].w[0] + 63u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[6].w[0] + 69u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[6].w[0] + 98u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[6].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[6].w[0] + 70u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[6].w[0] + 99u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[6].w[0] + 59u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[6].w[0] + 65u), static_cast<std::uint8_t>(0u));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[6].w[0] + 94u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[5], c.r[5].w[0] + 2u);
    st8((c.r[6].w[0] + 60u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[6].w[0] + 66u), static_cast<std::uint8_t>(0u));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], c.r[4].w[0] + 2u);
    st8((c.r[6].w[0] + 95u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[6].w[0] + 61u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[6].w[0] + 67u), static_cast<std::uint8_t>(0u));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[6].w[0] + 96u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[5], c.r[5].w[0] + 2u);
    st8((c.r[6].w[0] + 62u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[6].w[0] + 68u), static_cast<std::uint8_t>(0u));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], c.r[4].w[0] + 2u);
    st8((c.r[6].w[0] + 97u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 63u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 69u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[4].w[0] + 98u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[4].w[0] + 71u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[4].w[0] + 71u);
    st8((c.r[4].w[0] + 72u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 99;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00416380:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 14224u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 81u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004163B4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 86u, depth + 1u); else { c.pc = 0x0026CCF0u; return; } if (c.pc != 0x004163B4u) [[unlikely]] return; }
L_004163B4:
    set32(c.r[4], c.r[16].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004163C0u); set32(c.r[5], c.r[16].w[0] + 112u);  if (depth < kMaxDepth) unit_0047(c, 41u, depth + 1u); else { c.pc = 0x0021C270u; return; } if (c.pc != 0x004163C0u) [[unlikely]] return; }
L_004163C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004163D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 2968u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00416400u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00416400u) [[unlikely]] return; }
L_00416400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416408u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x00416408u) [[unlikely]] return; }
L_00416408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416410u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x00416410u) [[unlikely]] return; }
L_00416410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416418u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x00416418u) [[unlikely]] return; }
L_00416418:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416424u); set32(c.r[4], c.r[4].w[0] - 15136u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x00416424u) [[unlikely]] return; }
L_00416424:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416430u); set32(c.r[4], c.r[4].w[0] - 15024u);  if (depth < kMaxDepth) unit_0043(c, 416u, depth + 1u); else { c.pc = 0x0020FEF0u; return; } if (c.pc != 0x00416430u) [[unlikely]] return; }
L_00416430:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00416450:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[5].w[0] + 3u);  if (t) { goto L_00416678; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 22016u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00414000u < 16384u) { entry = entries_00C5[(t - 0x00414000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00416490:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041649Cu); st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0044(c, 107u, depth + 1u); else { c.pc = 0x00210910u; return; } if (c.pc != 0x0041649Cu) [[unlikely]] return; }
L_0041649C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BC0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 6800u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004164B0u); set32(c.r[6], 0u + 14308u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x004164B0u) [[unlikely]] return; }
L_004164B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 600u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00416678; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004164D8u); st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0044(c, 110u, depth + 1u); else { c.pc = 0x00210940u; return; } if (c.pc != 0x004164D8u) [[unlikely]] return; }
L_004164D8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004164E4u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x004164E4u) [[unlikely]] return; }
L_004164E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00416678; } }
    c.budget -= 1;
L_004164F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004164F8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x004164F8u) [[unlikely]] return; }
L_004164F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00416678; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00416678; } }
    c.budget -= 1;
L_00416518:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 600u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_00416678; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[28].w[0] - 23780u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 188u)));
    c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    st32((c.r[2].w[0] + 604u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    st32((c.r[2].w[0] + 616u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    st8((c.r[2].w[0] + 630u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416570u); st8((c.r[2].w[0] + 629u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_009B(c, 57u, depth + 1u); else { c.pc = 0x0036CC50u; return; } if (c.pc != 0x00416570u) [[unlikely]] return; }
L_00416570:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 629u)));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00416678; } }
    c.budget -= 1;
L_00416588:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416594u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 57u, depth + 1u); else { c.pc = 0x0036CC50u; return; } if (c.pc != 0x00416594u) [[unlikely]] return; }
L_00416594:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 629u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00416588u | kUnwind; return; } goto L_00416588; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00416678; } }
    c.budget -= 1;
L_004165B8:
    set32(c.r[4], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[2] = ld32((c.r[4].w[0] + 616u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[4].w[0] + 616u), c.f[1]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.f[1] = ld32((c.r[2].w[0] + 616u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[2].w[0] + 616u);  if (t) { goto L_004165F8; } }
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 2;
L_004165F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 629u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00416678; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], 0u + 3u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[6].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    st32((c.r[2].w[0] + 616u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416638u); st8((c.r[2].w[0] + 630u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009B(c, 57u, depth + 1u); else { c.pc = 0x0036CC50u; return; } if (c.pc != 0x00416638u) [[unlikely]] return; }
L_00416638:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00416678; } }
L_00416640:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 630u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00416678; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 630u)));
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    st8((c.r[3].w[0] + 630u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
L_00416678:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00416690:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006D0000u);  if (t) { goto L_00416988; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 22048u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00414000u < 16384u) { entry = entries_00C5[(t - 0x00414000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004166C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004166D0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x004166D0u) [[unlikely]] return; }
L_004166D0:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00416760; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 604u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00416718; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 601u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00416738; } }
    c.budget -= 1;
L_00416718:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 4u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 85u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_00416738:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 165u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 630u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416754u); st8((c.r[3].w[0] + 630u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x00416754u) [[unlikely]] return; }
L_00416754:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00416988; } }
    c.budget -= 1;
L_00416760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416768u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x00416768u) [[unlikely]] return; }
L_00416768:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004167A8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 5u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 167u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 630u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004167A0u); st8((c.r[3].w[0] + 630u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x004167A0u) [[unlikely]] return; }
L_004167A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00416988; } }
L_004167A8:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 604u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004167B8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x004167B8u) [[unlikely]] return; }
L_004167B8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004167C8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 388u, depth + 1u); else { c.pc = 0x002278D0u; return; } if (c.pc != 0x004167C8u) [[unlikely]] return; }
L_004167C8:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    st32((c.r[3].w[0] + 604u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 604u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00416988; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004167E8u); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x004167E8u) [[unlikely]] return; }
L_004167E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00416988; } }
L_004167F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 630u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00416988; } }
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00416988; } }
    c.budget -= 1;
L_00416820:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[3].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00416988; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00416988; } }
L_00416858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416860u);  if (depth < kMaxDepth) unit_008F(c, 192u, depth + 1u); else { c.pc = 0x0033E160u; return; } if (c.pc != 0x00416860u) [[unlikely]] return; }
L_00416860:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_00416988; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_004168C0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00416880; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00416988; } }
L_00416880:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u - 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 85u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    st8((c.r[3].w[0] + 601u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 630u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 630u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00416988; } }
L_004168C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 6u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 601u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00416988; } }
    c.budget -= 1;
L_004168E8:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 630u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00416988; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 630u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00416988; } }
    c.budget -= 1;
L_00416920:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 630u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00416988; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00416988; } }
L_00416958:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[3].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00416988; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(0u));
    c.budget -= 5;
L_00416988:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004169A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], c.r[2].w[0] + 3u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_004169F0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004169D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00416A78; } }
L_004169D0:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004169DCu); st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00C5(c, 339u, depth + 1u); else { c.pc = 0x00416A90u; return; } if (c.pc != 0x004169DCu) [[unlikely]] return; }
L_004169DC:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004169E8u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x004169E8u) [[unlikely]] return; }
L_004169E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00416A78; } }
L_004169F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004169F8u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x004169F8u) [[unlikely]] return; }
L_004169F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00416A78; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00416A18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00416A80; } }
L_00416A18:
    set32(c.r[2], 0u + 2u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416A5Cu); st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x00416A5Cu) [[unlikely]] return; }
L_00416A5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416A64u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x00416A64u) [[unlikely]] return; }
L_00416A64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416A6Cu);  if (depth < kMaxDepth) unit_000B(c, 24u, depth + 1u); else { c.pc = 0x0012C850u; return; } if (c.pc != 0x00416A6Cu) [[unlikely]] return; }
L_00416A6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416A74u);  if (depth < kMaxDepth) unit_0043(c, 413u, depth + 1u); else { c.pc = 0x0020FEA0u; return; } if (c.pc != 0x00416A74u) [[unlikely]] return; }
L_00416A74:
    c.budget -= 1;
L_00416A78:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00416A80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00416A90:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] + 11984u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
L_00416AA8:
    set32(c.r[4], ld32((c.r[7].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00416AD8; } }
L_00416AB8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00416AC8; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_00416AC8:
    set32(c.r[4], c.r[4].w[0] + 30u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00416AB8u | kUnwind; return; } goto L_00416AB8; } }
L_00416AD8:
    set32(c.r[4], ld32((c.r[28].w[0] - 24264u)));
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.r[3].d[0] = c.r[9].sd[0] < 61ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st8((c.r[4].w[0] + 14183u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00416AA8u | kUnwind; return; } goto L_00416AA8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00416B00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 8u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416B34u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x00416B34u) [[unlikely]] return; }
L_00416B34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00416BB8; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u + 18u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 21u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], c.r[3].w[0] + 27616u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[2], c.r[2].w[0] + 29440u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[19].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416B84u); st32((c.r[16].w[0] + 28u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x00416B84u) [[unlikely]] return; }
L_00416B84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[6], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 4736u);
    set32(c.r[5], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[3], c.r[2].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], c.r[2].w[0] + 4737u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[3].w[0]));
    c.r[7].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00416BB4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x00416BB4u) [[unlikely]] return; }
L_00416BB4:
    c.budget -= 1;
L_00416BB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00416BE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], c.r[2].w[0] + 4752u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00414000u < 16384u) { entry = entries_00C5[(t - 0x00414000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00416C00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], 0u + 13u);
    set32(c.r[8], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 839u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[7], c.r[4].w[0] + 304u);  if (t) { goto L_00416CC8; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 11u);  if (t) { goto L_00416CC8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00416CA0; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 9u);  if (t) { goto L_00416C78; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00416C58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00416CD0; } }
    c.budget -= 1;
L_00416C58:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 27300u);  if (t) { goto L_00416C70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_00416CD8; } }
    c.budget -= 1;
L_00416C70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 100u), 0u);  if (t) { goto L_00416CD8; } }
L_00416C78:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00416C90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 100u), 0u);  if (t) { goto L_00416CD8; } }
    c.budget -= 1;
L_00416C90:
    set32(c.r[2], 0u - 27300u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_00416CD8; } }
    c.budget -= 1;
L_00416CA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 27300u);  if (t) { goto L_00416CB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_00416CD8; } }
L_00416CB8:
    set32(c.r[2], 0u - 27300u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_00416CD8; } }
    c.budget -= 1;
L_00416CC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 100u), 0u);  if (t) { goto L_00416CD8; } }
L_00416CD0:
    st32((c.r[4].w[0] + 100u), 0u);
    c.budget -= 2;
L_00416CD8:
    set32(c.r[2], ld32((c.r[4].w[0] + 100u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x008D0000u);
    set32(c.r[6], 0u + 21728u);
    set32(c.r[5], c.r[5].w[0] - 1360u);
    st32((c.r[4].w[0] + 88u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 839u)));
    st8((c.r[7].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[7].w[0]), 0u);
    set32(c.r[3], ld32((c.r[8].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 188u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 4u));
    mmi::mult(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 96u));
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 100u));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 104u));
    c.budget -= 25;
    { st32((c.r[4].w[0] + 40u), c.f[0]);  goto L_00416D40; }
L_00416D40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00416D78; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00416DB8; } }
L_00416D78:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], c.r[2].w[0] + 4768u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00416D98u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00416D98u) [[unlikely]] return; }
L_00416D98:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00416DB8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00416DB8; } }
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00416DB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00416DD0:
    set32(c.r[6], ld32((c.r[4].w[0] + 28u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 7u)));
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 839u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 308u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[7].d[0]; set32(c.r[3], c.r[4].w[0] + 304u);  if (t) { goto L_00416EF8; } }
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], 0u + 13u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 839u)));
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == c.r[6].d[0]; set32(c.r[6], 0u + 12u);  if (t) { goto L_00416EE8; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_00416EE8; } }
    set32(c.r[6], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[6].d[0]; set32(c.r[6], 0u + 10u);  if (t) { goto L_00416EB8; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_00416E70; } }
    set32(c.r[6], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_00416E30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00416EF8; } }
L_00416E30:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[7], 0u + 2u);  if (t) { goto L_00416E50; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x40800000u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[6].w[0]);  if (t) { goto L_00416EF8; } }
    c.budget -= 1;
L_00416E50:
    set32(c.r[6], 0u + 5u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], 0u - 9100u);
    st32((c.r[4].w[0] + 100u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[6].w[0]);  if (t) { goto L_00416EF8; } }
    c.budget -= 1;
L_00416E70:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[6], 0u + 6u);  if (t) { goto L_00416E98; } }
    set32(c.r[7], 0u + 8190u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x41100000u);
    st32((c.r[4].w[0] + 100u), c.r[7].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[6].w[0]);  if (t) { goto L_00416EF8; } }
    c.budget -= 1;
L_00416E98:
    set32(c.r[6], 0u + 7u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], 0u - 9100u);
    st32((c.r[4].w[0] + 100u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[6].w[0]);  if (t) { goto L_00416EF8; } }
    c.budget -= 1;
L_00416EB8:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[6], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0]; set32(c.r[6], 0u + 1u);  if (t) { goto L_00416ED0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_00416EF8; } }
L_00416ED0:
    set32(c.r[6], 0u - 27300u);
    st32((c.r[4].w[0] + 100u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[6].w[0]);  if (t) { goto L_00416EF8; } }
    c.budget -= 1;
L_00416EE8:
    st32((c.r[4].w[0] + 100u), 0u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x41000000u);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.budget -= 4;
L_00416EF8:
    c.f[2] = ld32((c.r[5].w[0] + 8252u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00416F98; } }
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00416F98; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00416F88; } }
    fpu_div(c, 0u, c.f[1], c.f[2]);
    set32(c.r[7], ld32((c.r[4].w[0] + 100u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[7], c.r[7].w[0] - c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] << 16);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 16));
    c.f[1] = c.r[7].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[4].w[0] + 88u), c.r[6].w[0]);
    c.f[1] = ld32((c.r[5].w[0] + 8252u));
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { goto L_00416F98; } }
    c.budget -= 1;
L_00416F88:
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 100u)));
    st32((c.r[4].w[0] + 88u), c.r[6].w[0]);
    c.budget -= 4;
L_00416F98:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x006D0000u);  if (t) { goto L_00417248; } }
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + 22080u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[6].w[0];  c.pc = t; if (t - 0x00414000u < 16384u) { entry = entries_00C5[(t - 0x00414000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00416FC0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8286u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00416FE8; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8256u)));
    set32(c.r[6], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_00416FE8; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8258u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00417248; } }
L_00416FE8:
    set32(c.r[5], 0u + 27300u);
    st32((c.r[4].w[0] + 100u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41000000u);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00417248; } }
L_00417000:
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00417038; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8256u)));
    set32(c.r[6], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_00417038; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8258u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00417248; } }
    c.budget -= 1;
L_00417038:
    set32(c.r[5], 0u + 20020u);
    st32((c.r[4].w[0] + 100u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00417248; } }
L_00417058:
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00417090; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8256u)));
    set32(c.r[6], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_00417090; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8258u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00417248; } }
    c.budget -= 1;
L_00417090:
    set32(c.r[5], 0u + 25480u);
    st32((c.r[4].w[0] + 100u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40800000u);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00417248; } }
L_004170B0:
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004170E8; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8256u)));
    set32(c.r[6], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_004170E8; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8258u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00417248; } }
    c.budget -= 1;
L_004170E8:
    set32(c.r[5], 0u + 27300u);
    st32((c.r[4].w[0] + 100u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00417248; } }
L_00417100:
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00417138; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8256u)));
    set32(c.r[6], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_00417138; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8258u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00417248; } }
    c.budget -= 1;
L_00417138:
    st32((c.r[4].w[0] + 100u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00417248; } }
    c.budget -= 1;
L_00417150:
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00417188; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8256u)));
    set32(c.r[6], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_00417188; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8258u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00417248; } }
    c.budget -= 1;
L_00417188:
    st32((c.r[4].w[0] + 100u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41000000u);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00417248; } }
    c.budget -= 1;
L_004171A0:
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004171D8; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8256u)));
    set32(c.r[6], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_004171D8; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8258u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00417248; } }
    c.budget -= 1;
L_004171D8:
    set32(c.r[5], 0u - 23660u);
    st32((c.r[4].w[0] + 100u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00417248; } }
L_004171F8:
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00417230; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8256u)));
    set32(c.r[6], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_00417230; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8258u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00417248; } }
    c.budget -= 1;
L_00417230:
    set32(c.r[5], 0u - 27300u);
    st32((c.r[4].w[0] + 100u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41000000u);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_00417248:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00417250:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[5], ld32((c.r[4].w[0] + 24u)));  if (t) { goto L_004172A0; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 750u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00417278; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004172E8; } }
L_00417278:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_004172E8; } }
    set32(c.r[5], c.r[6].w[0] + 1u);
    set32(c.r[3], 0u + 60u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004172E8; } }
    c.budget -= 1;
L_004172A0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_004172D0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004172E8; } }
    c.budget -= 1;
L_004172D0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_004172E8; } }
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_004172E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004172F0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_00417300:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041731Cu); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0041731Cu) [[unlikely]] return; }
L_0041731C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417324u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x00417324u) [[unlikely]] return; }
L_00417324:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041732Cu); set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0041732Cu) [[unlikely]] return; }
L_0041732C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417334u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00417334u) [[unlikely]] return; }
L_00417334:
    set32(c.r[5], ld32((c.r[16].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417340u); set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  if (depth < kMaxDepth) unit_0068(c, 89u, depth + 1u); else { c.pc = 0x002A25C0u; return; } if (c.pc != 0x00417340u) [[unlikely]] return; }
L_00417340:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00417350:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], c.r[2].w[0] + 4784u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00414000u < 16384u) { entry = entries_00C5[(t - 0x00414000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00417370:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00417380:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_00417390:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], c.r[2].w[0] + 5280u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00414000u < 16384u) { entry = entries_00C5[(t - 0x00414000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004173B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 28840u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[17].w[0] + 304u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004173E8u); st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x004173E8u) [[unlikely]] return; }
L_004173E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], c.r[2].w[0] + 30784u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[6], c.r[6].w[0] + 4832u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[5].w[0] + 4848u);
    set32(c.r[4], c.r[4].w[0] + 5040u);
    set32(c.r[3], c.r[3].w[0] + 5120u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], c.r[2].w[0] + 5216u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    st32((c.r[16].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 68;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00417548; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 64u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 4u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 68u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 6u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 72u), c.f[0]);
    c.budget -= 20;
L_00417548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417550u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 375u, depth + 1u); else { c.pc = 0x00417570u; return; } if (c.pc != 0x00417550u) [[unlikely]] return; }
L_00417550:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00417570:
    set32(c.r[5], ld32((c.r[4].w[0] + 352u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] <= 0; set32(c.r[3], c.r[4].w[0] + 304u);  if (t) { goto L_00417678; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { goto L_00417668; } }
    set32(c.r[6], ld32((c.r[3].w[0] + 48u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[5].d[0] = c.r[5].d[0] | 55050ull;
    c.f[1] = c.r[5].w[0];
    set32(c.r[5], c.r[6].w[0] + 2u);
    st32((c.r[3].w[0] + 48u), c.r[5].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[6], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[5], c.r[6].w[0] + 2u);
    st32((c.r[3].w[0] + 48u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 48u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.budget -= 22;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_00417608; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00417838; } }
    c.budget -= 1;
L_00417608:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_00417678; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 48u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2u)));
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 60u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    set32(c.r[5], c.r[5].w[0] - c.r[7].w[0]);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 60u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 108u), c.f[0]);  if (t) { goto L_00417678; } }
L_00417668:
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.budget -= 4;
L_00417678:
    set32(c.r[5], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00417830; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_00417830; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { goto L_00417800; } }
    set32(c.r[6], ld32((c.r[3].w[0] + 56u)));
    set32(c.r[5], c.r[6].w[0] + 2u);
    st32((c.r[3].w[0] + 56u), c.r[5].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[6], ld32((c.r[3].w[0] + 56u)));
    set32(c.r[5], c.r[6].w[0] + 2u);
    st32((c.r[3].w[0] + 56u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0] + 64u), c.f[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 56u)));
    set32(c.r[5], c.r[6].w[0] + 2u);
    st32((c.r[3].w[0] + 56u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0] + 68u), c.f[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 56u)));
    set32(c.r[5], c.r[6].w[0] + 2u);
    st32((c.r[3].w[0] + 56u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0] + 72u), c.f[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 56u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 34;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_00417748; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00417838; } }
    c.budget -= 1;
L_00417748:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_00417830; } }
    set32(c.r[5], c.r[5].w[0] - c.r[7].w[0]);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[3].w[0] + 56u)));
    c.f[1] = ld32((c.r[3].w[0] + 64u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = c.r[6].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 76u), c.f[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 56u)));
    c.f[1] = ld32((c.r[3].w[0] + 68u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 4u)));
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = c.r[6].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 80u), c.f[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 56u)));
    c.f[1] = ld32((c.r[3].w[0] + 72u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 6u)));
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = c.r[6].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 44;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 84u), c.f[0]);  if (t) { goto L_00417830; } }
L_00417800:
    c.f[1] = ld32((c.r[3].w[0] + 76u));
    c.f[0] = ld32((c.r[3].w[0] + 64u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 64u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 80u));
    c.f[0] = ld32((c.r[3].w[0] + 68u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 68u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 84u));
    c.f[0] = ld32((c.r[3].w[0] + 72u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 72u), c.f[0]);
    c.budget -= 12;
L_00417830:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00417838:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00417840:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[18].w[0] + 304u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x008F0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417868u); set32(c.r[16], c.r[16].w[0] + 7840u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00417868u) [[unlikely]] return; }
L_00417868:
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004178B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = ld32((c.r[18].w[0] + 36u));
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417888u); c.f[12] = ld32((c.r[18].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00417888u) [[unlikely]] return; }
L_00417888:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.f[12] = ld32((c.r[18].w[0] + 104u));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004178ACu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x004178ACu) [[unlikely]] return; }
L_004178AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00417930; } }
    c.budget -= 1;
L_004178B8:
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 64u));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 68u));
    st32((c.r[29].w[0] + 108u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 72u));
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    c.f[13] = ld32((c.r[18].w[0] + 36u));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041791Cu); c.f[12] = ld32((c.r[18].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0041791Cu) [[unlikely]] return; }
L_0041791C:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0041792Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0041792Cu) [[unlikely]] return; }
L_0041792C:
    c.budget -= 1;
L_00417930:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00417950:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], c.r[2].w[0] + 5296u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00414000u < 16384u) { entry = entries_00C5[(t - 0x00414000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00417970:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 5312u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 32u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 28832u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004179B8u); st8((c.r[4].w[0] + 304u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x004179B8u) [[unlikely]] return; }
L_004179B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 31776u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004179D0u); st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x004179D0u) [[unlikely]] return; }
L_004179D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004179DCu); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00C5(c, 387u, depth + 1u); else { c.pc = 0x004179F0u; return; } if (c.pc != 0x004179DCu) [[unlikely]] return; }
L_004179DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004179F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_00417BC8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00417B68; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00417AB0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00417A38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00417C00; } }
L_00417A38:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42340000u);
    set32(c.r[2], 0u + 150u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[17].w[0] + 128u);
    st32((c.r[16].w[0] + 16u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    st32((c.r[16].w[0] + 20u), 0u);
    set32(c.r[6], c.r[16].w[0] + 16u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 128u), 0u);
    st32((c.r[17].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417A78u); st32((c.r[17].w[0] + 136u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00417A78u) [[unlikely]] return; }
L_00417A78:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417AACu);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00417AACu) [[unlikely]] return; }
L_00417AAC:
    c.budget -= 1;
L_00417AB0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00417B50; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[7], 0u + 1130u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[5], c.r[17].w[0] + 128u);
    set32(c.r[6], c.r[16].w[0] + 16u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 128u), 0u);
    st32((c.r[17].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417B10u); st32((c.r[17].w[0] + 136u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00417B10u) [[unlikely]] return; }
L_00417B10:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417B44u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00417B44u) [[unlikely]] return; }
L_00417B44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00417C00; } }
    c.budget -= 1;
L_00417B50:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417B5Cu); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00417B5Cu) [[unlikely]] return; }
L_00417B5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00417C00; } }
    c.budget -= 1;
L_00417B68:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00417BB0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[2], 0u + 320u);
    set32(c.r[4], c.r[16].w[0] + 16u);
    set32(c.r[5], c.r[17].w[0] + 128u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417BA4u); st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00417BA4u) [[unlikely]] return; }
L_00417BA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00417C00; } }
    c.budget -= 1;
L_00417BB0:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417BBCu); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00417BBCu) [[unlikely]] return; }
L_00417BBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00417C00; } }
    c.budget -= 1;
L_00417BC8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00417C00; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 7;
L_00417C00:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00417C20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_00417D40; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00417D40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417C68u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00417C68u) [[unlikely]] return; }
L_00417C68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417C70u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x00417C70u) [[unlikely]] return; }
L_00417C70:
    c.f[2] = ld32((c.r[16].w[0] + 24u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[3] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417CACu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x00417CACu) [[unlikely]] return; }
L_00417CAC:
    c.f[2] = ld32((c.r[16].w[0] + 20u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[3] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417CE8u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00417CE8u) [[unlikely]] return; }
L_00417CE8:
    c.f[2] = ld32((c.r[16].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[3] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417D24u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x00417D24u) [[unlikely]] return; }
L_00417D24:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417D3Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x00417D3Cu) [[unlikely]] return; }
L_00417D3C:
    c.budget -= 1;
L_00417D40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00417D60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], c.r[2].w[0] + 5328u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00414000u < 16384u) { entry = entries_00C5[(t - 0x00414000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00417D80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[5].w[0] - 28832u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[17].w[0] + 304u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417DC0u); st8((c.r[4].w[0] + 304u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x00417DC0u) [[unlikely]] return; }
L_00417DC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], c.r[2].w[0] + 32448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417DD0u); st32((c.r[17].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00417DD0u) [[unlikely]] return; }
L_00417DD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417DE4u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00417DE4u) [[unlikely]] return; }
L_00417DE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417DECu); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00417DECu) [[unlikely]] return; }
L_00417DEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE2A0000u);
    st32((c.r[16].w[0] + 24u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 43691ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417E08u); st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00C5(c, 409u, depth + 1u); else { c.pc = 0x00417E20u; return; } if (c.pc != 0x00417E08u) [[unlikely]] return; }
L_00417E08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00417E20:
    c.f[2] = ld32((c.r[4].w[0] + 344u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[0] = ld32((c.r[4].w[0] + 328u));
    set32(c.r[5], c.r[4].w[0] + 304u);
    c.f[1] = c.r[3].w[0];
    c.f[2] = fp::add(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 328u), c.f[2]);  if (t) { goto L_00417E58; } }
    c.f[0] = fp::sub(c.f[2], c.f[1]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 24u), c.f[0]);  if (t) { goto L_00417E70; } }
    c.budget -= 1;
L_00417E58:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = fp::add(c.f[2], c.f[1]);  if (t) { goto L_00417E70; } }
    st32((c.r[5].w[0] + 24u), c.f[0]);
    c.budget -= 1;
L_00417E70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[2] = ld32((c.r[5].w[0] + 24u));
    c.f[1] = c.r[3].w[0];
    set32(c.r[3], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[3] = c.r[5].w[0];
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    st32((c.r[4].w[0] + 88u), c.r[5].w[0]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00417EC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_00417F28; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[17].w[0] + 192u);  if (t) { goto L_00417F28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417F08u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00417F08u) [[unlikely]] return; }
L_00417F08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417F10u); set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x00417F10u) [[unlikely]] return; }
L_00417F10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417F28u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x00417F28u) [[unlikely]] return; }
L_00417F28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00417F40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], c.r[2].w[0] + 5344u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00414000u < 16384u) { entry = entries_00C5[(t - 0x00414000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00417F60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], 0u + 2u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[5].w[0] - 28832u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[17].w[0] + 304u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417FA0u); st8((c.r[4].w[0] + 304u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x00417FA0u) [[unlikely]] return; }
L_00417FA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 32384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417FB0u); st32((c.r[17].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00417FB0u) [[unlikely]] return; }
L_00417FB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417FC4u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00417FC4u) [[unlikely]] return; }
L_00417FC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00417FCCu); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00417FCCu) [[unlikely]] return; }
L_00417FCC:
    st32((c.r[17].w[0] + 36u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st32((c.r[17].w[0] + 32u), 0u);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F550000u);
    c.r[3].d[0] = c.r[2].d[0] | 21845ull;
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D9D0000u);
    st32((c.r[17].w[0] + 56u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 874ull;
    st32((c.r[17].w[0] + 52u), 0u);
    c.budget -= 13;
    [[clang::musttail]] return unit_00C6(c, 1u, depth);
}

}
