#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00AF[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 5, 0, 0, 6, 0, 0, 0, 0, 7, 0,
    8, 0, 9, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0,
    0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0,
    0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 0,
    0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31,
    0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35,
    0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0,
    0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0,
    0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0,
    0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 64, 0, 0, 0, 0, 65, 0, 66, 0, 67, 0,
    68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0,
    0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0,
    77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0,
    85, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0,
    0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 93, 0, 94, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101,
    0, 102, 0, 103, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0,
    0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 124, 0,
    0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0,
    137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 141, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0,
    0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 152,
    0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0,
    0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0,
    167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 187, 0, 188, 0,
    0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 192, 0, 193, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0,
    208, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0,
    0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 223,
    0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 235, 0, 0, 236, 0, 0, 237, 0, 238, 0, 0, 239, 0, 0, 240, 0,
    0, 241, 0, 0, 242, 0, 0, 243, 0, 0, 244, 0, 245, 0, 246, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 0, 250, 0,
    0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 256, 0, 0, 257, 0, 0, 0, 0, 258, 0,
    0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 266,
    0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0,
    0, 274, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 281,
    0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0,
    0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0,
    0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0,
    0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0,
    0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 316, 0, 0, 317, 0, 0, 318, 0, 0, 319, 0, 0, 320, 0, 0, 321, 0, 0, 0, 0,
    0, 0, 0, 322, 0, 0, 323, 0, 0, 324, 0, 0, 325, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0,
    0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    336, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0,
    0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 359, 0,
    0, 360, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 365,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    367, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 376, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0,
    0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 381, 0, 382, 0, 0, 383, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 385, 0, 386, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 393, 0, 0,
    394, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0,
    398, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 0, 403, 0,
    0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 406, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 410, 0,
    0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0,
    0, 0, 0, 0, 0, 420, 0, 421, 0, 422, 0, 423, 0, 424, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 427,
    0, 428, 0, 429, 0, 430, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 433, 0, 434, 0, 435, 0, 436, 0, 0, 0, 437, 0, 0, 0,
    438, 0, 0, 0, 0, 0, 0, 0, 439, 0, 440, 0, 441, 0, 0, 0, 442, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 446, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0,
    0, 452, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 457, 0,
    0, 0, 458, 0, 459, 0, 0, 0, 0, 0, 0, 0, 460, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0,
    463, 0, 464, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 467, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 470, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0,
    0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 476, 0, 0, 0, 477, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 482, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 484, 485, 0,
    486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 490, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 494, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0,
    0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0,
    0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 507, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 509, 510, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 513, 0, 0, 0, 514, 0, 0, 515, 0, 0, 516, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 517, 0, 0, 518, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 521, 522, 0, 0, 0, 0,
};

void unit_00AF(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003BC000;
    case 2u: goto L_003BC020;
    case 3u: goto L_003BC048;
    case 4u: goto L_003BC050;
    case 5u: goto L_003BC058;
    case 6u: goto L_003BC064;
    case 7u: goto L_003BC078;
    case 8u: goto L_003BC080;
    case 9u: goto L_003BC088;
    case 10u: goto L_003BC09C;
    case 11u: goto L_003BC0A4;
    case 12u: goto L_003BC0C0;
    case 13u: goto L_003BC0EC;
    case 14u: goto L_003BC13C;
    case 15u: goto L_003BC150;
    case 16u: goto L_003BC170;
    case 17u: goto L_003BC190;
    case 18u: goto L_003BC1D0;
    case 19u: goto L_003BC1FC;
    case 20u: goto L_003BC224;
    case 21u: goto L_003BC264;
    case 22u: goto L_003BC270;
    case 23u: goto L_003BC290;
    case 24u: goto L_003BC2C8;
    case 25u: goto L_003BC324;
    case 26u: goto L_003BC340;
    case 27u: goto L_003BC358;
    case 28u: goto L_003BC360;
    case 29u: goto L_003BC384;
    case 30u: goto L_003BC38C;
    case 31u: goto L_003BC3FC;
    case 32u: goto L_003BC414;
    case 33u: goto L_003BC430;
    case 34u: goto L_003BC454;
    case 35u: goto L_003BC47C;
    case 36u: goto L_003BC488;
    case 37u: goto L_003BC4A0;
    case 38u: goto L_003BC4BC;
    case 39u: goto L_003BC4E4;
    case 40u: goto L_003BC4F8;
    case 41u: goto L_003BC504;
    case 42u: goto L_003BC510;
    case 43u: goto L_003BC528;
    case 44u: goto L_003BC54C;
    case 45u: goto L_003BC58C;
    case 46u: goto L_003BC5D4;
    case 47u: goto L_003BC5F0;
    case 48u: goto L_003BC610;
    case 49u: goto L_003BC634;
    case 50u: goto L_003BC648;
    case 51u: goto L_003BC654;
    case 52u: goto L_003BC660;
    case 53u: goto L_003BC674;
    case 54u: goto L_003BC6E4;
    case 55u: goto L_003BC708;
    case 56u: goto L_003BC788;
    case 57u: goto L_003BC7B0;
    case 58u: goto L_003BC7C0;
    case 59u: goto L_003BC7D0;
    case 60u: goto L_003BC804;
    case 61u: goto L_003BC81C;
    case 62u: goto L_003BC840;
    case 63u: goto L_003BC848;
    case 64u: goto L_003BC854;
    case 65u: goto L_003BC868;
    case 66u: goto L_003BC870;
    case 67u: goto L_003BC878;
    case 68u: goto L_003BC880;
    case 69u: goto L_003BC8A0;
    case 70u: goto L_003BC8B0;
    case 71u: goto L_003BC8F8;
    case 72u: goto L_003BC914;
    case 73u: goto L_003BC928;
    case 74u: goto L_003BC938;
    case 75u: goto L_003BC94C;
    case 76u: goto L_003BC960;
    case 77u: goto L_003BC980;
    case 78u: goto L_003BC9B0;
    case 79u: goto L_003BCA20;
    case 80u: goto L_003BCAA0;
    case 81u: goto L_003BCABC;
    case 82u: goto L_003BCAC4;
    case 83u: goto L_003BCADC;
    case 84u: goto L_003BCAE8;
    case 85u: goto L_003BCB00;
    case 86u: goto L_003BCB08;
    case 87u: goto L_003BCB18;
    case 88u: goto L_003BCB34;
    case 89u: goto L_003BCB44;
    case 90u: goto L_003BCB70;
    case 91u: goto L_003BCB94;
    case 92u: goto L_003BCB9C;
    case 93u: goto L_003BCBB0;
    case 94u: goto L_003BCBB8;
    case 95u: goto L_003BCBC4;
    case 96u: goto L_003BCBCC;
    case 97u: goto L_003BCC00;
    case 98u: goto L_003BCC14;
    case 99u: goto L_003BCC2C;
    case 100u: goto L_003BCC50;
    case 101u: goto L_003BCC7C;
    case 102u: goto L_003BCC84;
    case 103u: goto L_003BCC8C;
    case 104u: goto L_003BCC94;
    case 105u: goto L_003BCCA0;
    case 106u: goto L_003BCCC0;
    case 107u: goto L_003BCD10;
    case 108u: goto L_003BCD1C;
    case 109u: goto L_003BCD60;
    case 110u: goto L_003BCD70;
    case 111u: goto L_003BCDA0;
    case 112u: goto L_003BCDC8;
    case 113u: goto L_003BCE20;
    case 114u: goto L_003BCE28;
    case 115u: goto L_003BCE48;
    case 116u: goto L_003BCE58;
    case 117u: goto L_003BCE70;
    case 118u: goto L_003BCE8C;
    case 119u: goto L_003BCE98;
    case 120u: goto L_003BCEB0;
    case 121u: goto L_003BCECC;
    case 122u: goto L_003BCED8;
    case 123u: goto L_003BCEE4;
    case 124u: goto L_003BCEF8;
    case 125u: goto L_003BCF14;
    case 126u: goto L_003BCF20;
    case 127u: goto L_003BCF2C;
    case 128u: goto L_003BCF44;
    case 129u: goto L_003BCF54;
    case 130u: goto L_003BCF60;
    case 131u: goto L_003BCF70;
    case 132u: goto L_003BCFBC;
    case 133u: goto L_003BCFC8;
    case 134u: goto L_003BCFD4;
    case 135u: goto L_003BCFE8;
    case 136u: goto L_003BCFF8;
    case 137u: goto L_003BD000;
    case 138u: goto L_003BD028;
    case 139u: goto L_003BD058;
    case 140u: goto L_003BD068;
    case 141u: goto L_003BD070;
    case 142u: goto L_003BD0D0;
    case 143u: goto L_003BD0F8;
    case 144u: goto L_003BD110;
    case 145u: goto L_003BD174;
    case 146u: goto L_003BD1B4;
    case 147u: goto L_003BD1DC;
    case 148u: goto L_003BD24C;
    case 149u: goto L_003BD2B0;
    case 150u: goto L_003BD2DC;
    case 151u: goto L_003BD2E4;
    case 152u: goto L_003BD2FC;
    case 153u: goto L_003BD30C;
    case 154u: goto L_003BD380;
    case 155u: goto L_003BD39C;
    case 156u: goto L_003BD3A8;
    case 157u: goto L_003BD3C0;
    case 158u: goto L_003BD3DC;
    case 159u: goto L_003BD3F0;
    case 160u: goto L_003BD410;
    case 161u: goto L_003BD41C;
    case 162u: goto L_003BD430;
    case 163u: goto L_003BD438;
    case 164u: goto L_003BD44C;
    case 165u: goto L_003BD458;
    case 166u: goto L_003BD474;
    case 167u: goto L_003BD480;
    case 168u: goto L_003BD49C;
    case 169u: goto L_003BD4A8;
    case 170u: goto L_003BD4D0;
    case 171u: goto L_003BD4EC;
    case 172u: goto L_003BD52C;
    case 173u: goto L_003BD538;
    case 174u: goto L_003BD544;
    case 175u: goto L_003BD5CC;
    case 176u: goto L_003BD5D8;
    case 177u: goto L_003BD5E0;
    case 178u: goto L_003BD74C;
    case 179u: goto L_003BD758;
    case 180u: goto L_003BD768;
    case 181u: goto L_003BD778;
    case 182u: goto L_003BD7DC;
    case 183u: goto L_003BD7E8;
    case 184u: goto L_003BD810;
    case 185u: goto L_003BD858;
    case 186u: goto L_003BD864;
    case 187u: goto L_003BD870;
    case 188u: goto L_003BD878;
    case 189u: goto L_003BD888;
    case 190u: goto L_003BD8B4;
    case 191u: goto L_003BD8CC;
    case 192u: goto L_003BD908;
    case 193u: goto L_003BD910;
    case 194u: goto L_003BD91C;
    case 195u: goto L_003BD930;
    case 196u: goto L_003BD958;
    case 197u: goto L_003BD97C;
    case 198u: goto L_003BD9A4;
    case 199u: goto L_003BD9BC;
    case 200u: goto L_003BD9D0;
    case 201u: goto L_003BD9E0;
    case 202u: goto L_003BDA10;
    case 203u: goto L_003BDA20;
    case 204u: goto L_003BDA40;
    case 205u: goto L_003BDA50;
    case 206u: goto L_003BDA60;
    case 207u: goto L_003BDA70;
    case 208u: goto L_003BDA80;
    case 209u: goto L_003BDA90;
    case 210u: goto L_003BDAA0;
    case 211u: goto L_003BDAB0;
    case 212u: goto L_003BDAC0;
    case 213u: goto L_003BDAD0;
    case 214u: goto L_003BDAF8;
    case 215u: goto L_003BDB08;
    case 216u: goto L_003BDB88;
    case 217u: goto L_003BDB90;
    case 218u: goto L_003BDBB0;
    case 219u: goto L_003BDBC0;
    case 220u: goto L_003BDBCC;
    case 221u: goto L_003BDBE0;
    case 222u: goto L_003BDBF0;
    case 223u: goto L_003BDBFC;
    case 224u: goto L_003BDC10;
    case 225u: goto L_003BDC34;
    case 226u: goto L_003BDC54;
    case 227u: goto L_003BDC98;
    case 228u: goto L_003BDCC0;
    case 229u: goto L_003BDD00;
    case 230u: goto L_003BDD50;
    case 231u: goto L_003BDD68;
    case 232u: goto L_003BDD74;
    case 233u: goto L_003BDDA8;
    case 234u: goto L_003BDDB4;
    case 235u: goto L_003BDDC0;
    case 236u: goto L_003BDDCC;
    case 237u: goto L_003BDDD8;
    case 238u: goto L_003BDDE0;
    case 239u: goto L_003BDDEC;
    case 240u: goto L_003BDDF8;
    case 241u: goto L_003BDE04;
    case 242u: goto L_003BDE10;
    case 243u: goto L_003BDE1C;
    case 244u: goto L_003BDE28;
    case 245u: goto L_003BDE30;
    case 246u: goto L_003BDE38;
    case 247u: goto L_003BDE44;
    case 248u: goto L_003BDE58;
    case 249u: goto L_003BDE64;
    case 250u: goto L_003BDE78;
    case 251u: goto L_003BDE84;
    case 252u: goto L_003BDEA0;
    case 253u: goto L_003BDEA8;
    case 254u: goto L_003BDEB4;
    case 255u: goto L_003BDED0;
    case 256u: goto L_003BDED8;
    case 257u: goto L_003BDEE4;
    case 258u: goto L_003BDEF8;
    case 259u: goto L_003BDF10;
    case 260u: goto L_003BDF20;
    case 261u: goto L_003BDF30;
    case 262u: goto L_003BDF40;
    case 263u: goto L_003BDF50;
    case 264u: goto L_003BDF60;
    case 265u: goto L_003BDF70;
    case 266u: goto L_003BDF7C;
    case 267u: goto L_003BDF8C;
    case 268u: goto L_003BDF9C;
    case 269u: goto L_003BDFAC;
    case 270u: goto L_003BDFBC;
    case 271u: goto L_003BDFCC;
    case 272u: goto L_003BDFDC;
    case 273u: goto L_003BDFEC;
    case 274u: goto L_003BE004;
    case 275u: goto L_003BE014;
    case 276u: goto L_003BE024;
    case 277u: goto L_003BE034;
    case 278u: goto L_003BE044;
    case 279u: goto L_003BE05C;
    case 280u: goto L_003BE06C;
    case 281u: goto L_003BE07C;
    case 282u: goto L_003BE08C;
    case 283u: goto L_003BE09C;
    case 284u: goto L_003BE0AC;
    case 285u: goto L_003BE0BC;
    case 286u: goto L_003BE0CC;
    case 287u: goto L_003BE0DC;
    case 288u: goto L_003BE0F4;
    case 289u: goto L_003BE104;
    case 290u: goto L_003BE118;
    case 291u: goto L_003BE12C;
    case 292u: goto L_003BE144;
    case 293u: goto L_003BE15C;
    case 294u: goto L_003BE174;
    case 295u: goto L_003BE1A4;
    case 296u: goto L_003BE1B4;
    case 297u: goto L_003BE1C4;
    case 298u: goto L_003BE1D4;
    case 299u: goto L_003BE1E4;
    case 300u: goto L_003BE1F4;
    case 301u: goto L_003BE204;
    case 302u: goto L_003BE214;
    case 303u: goto L_003BE22C;
    case 304u: goto L_003BE23C;
    case 305u: goto L_003BE24C;
    case 306u: goto L_003BE264;
    case 307u: goto L_003BE274;
    case 308u: goto L_003BE284;
    case 309u: goto L_003BE29C;
    case 310u: goto L_003BE2B0;
    case 311u: goto L_003BE2BC;
    case 312u: goto L_003BE2E8;
    case 313u: goto L_003BE2F4;
    case 314u: goto L_003BE310;
    case 315u: goto L_003BE324;
    case 316u: goto L_003BE330;
    case 317u: goto L_003BE33C;
    case 318u: goto L_003BE348;
    case 319u: goto L_003BE354;
    case 320u: goto L_003BE360;
    case 321u: goto L_003BE36C;
    case 322u: goto L_003BE38C;
    case 323u: goto L_003BE398;
    case 324u: goto L_003BE3A4;
    case 325u: goto L_003BE3B0;
    case 326u: goto L_003BE3BC;
    case 327u: goto L_003BE3E0;
    case 328u: goto L_003BE430;
    case 329u: goto L_003BE494;
    case 330u: goto L_003BE4A4;
    case 331u: goto L_003BE4C8;
    case 332u: goto L_003BE4F4;
    case 333u: goto L_003BE518;
    case 334u: goto L_003BE528;
    case 335u: goto L_003BE540;
    case 336u: goto L_003BE580;
    case 337u: goto L_003BE588;
    case 338u: goto L_003BE5AC;
    case 339u: goto L_003BE5F0;
    case 340u: goto L_003BE620;
    case 341u: goto L_003BE638;
    case 342u: goto L_003BE6E8;
    case 343u: goto L_003BE6F8;
    case 344u: goto L_003BE728;
    case 345u: goto L_003BE738;
    case 346u: goto L_003BE760;
    case 347u: goto L_003BE770;
    case 348u: goto L_003BE790;
    case 349u: goto L_003BE7C0;
    case 350u: goto L_003BE7D8;
    case 351u: goto L_003BE7EC;
    case 352u: goto L_003BE820;
    case 353u: goto L_003BE830;
    case 354u: goto L_003BE850;
    case 355u: goto L_003BE880;
    case 356u: goto L_003BE8D0;
    case 357u: goto L_003BE938;
    case 358u: goto L_003BE958;
    case 359u: goto L_003BE978;
    case 360u: goto L_003BE984;
    case 361u: goto L_003BE9A4;
    case 362u: goto L_003BEA08;
    case 363u: goto L_003BEA88;
    case 364u: goto L_003BEAE0;
    case 365u: goto L_003BEAFC;
    case 366u: goto L_003BEB30;
    case 367u: goto L_003BEB80;
    case 368u: goto L_003BEBA0;
    case 369u: goto L_003BEBD0;
    case 370u: goto L_003BEC20;
    case 371u: goto L_003BEC28;
    case 372u: goto L_003BECE8;
    case 373u: goto L_003BED1C;
    case 374u: goto L_003BED2C;
    case 375u: goto L_003BEDA8;
    case 376u: goto L_003BEDB0;
    case 377u: goto L_003BEDD0;
    case 378u: goto L_003BEDF8;
    case 379u: goto L_003BEE10;
    case 380u: goto L_003BEE28;
    case 381u: goto L_003BEE30;
    case 382u: goto L_003BEE38;
    case 383u: goto L_003BEE44;
    case 384u: goto L_003BEE60;
    case 385u: goto L_003BEE88;
    case 386u: goto L_003BEE90;
    case 387u: goto L_003BEE98;
    case 388u: goto L_003BEEB0;
    case 389u: goto L_003BEEC0;
    case 390u: goto L_003BEEEC;
    case 391u: goto L_003BEF40;
    case 392u: goto L_003BEF58;
    case 393u: goto L_003BEF74;
    case 394u: goto L_003BEF80;
    case 395u: goto L_003BEF98;
    case 396u: goto L_003BEFA8;
    case 397u: goto L_003BEFE0;
    case 398u: goto L_003BF000;
    case 399u: goto L_003BF00C;
    case 400u: goto L_003BF0C4;
    case 401u: goto L_003BF0D0;
    case 402u: goto L_003BF0EC;
    case 403u: goto L_003BF0F8;
    case 404u: goto L_003BF108;
    case 405u: goto L_003BF11C;
    case 406u: goto L_003BF128;
    case 407u: goto L_003BF134;
    case 408u: goto L_003BF148;
    case 409u: goto L_003BF158;
    case 410u: goto L_003BF178;
    case 411u: goto L_003BF188;
    case 412u: goto L_003BF1B8;
    case 413u: goto L_003BF250;
    case 414u: goto L_003BF264;
    case 415u: goto L_003BF2B0;
    case 416u: goto L_003BF2D0;
    case 417u: goto L_003BF2F0;
    case 418u: goto L_003BF348;
    case 419u: goto L_003BF370;
    case 420u: goto L_003BF394;
    case 421u: goto L_003BF39C;
    case 422u: goto L_003BF3A4;
    case 423u: goto L_003BF3AC;
    case 424u: goto L_003BF3B4;
    case 425u: goto L_003BF3BC;
    case 426u: goto L_003BF3F4;
    case 427u: goto L_003BF3FC;
    case 428u: goto L_003BF404;
    case 429u: goto L_003BF40C;
    case 430u: goto L_003BF414;
    case 431u: goto L_003BF41C;
    case 432u: goto L_003BF440;
    case 433u: goto L_003BF448;
    case 434u: goto L_003BF450;
    case 435u: goto L_003BF458;
    case 436u: goto L_003BF460;
    case 437u: goto L_003BF470;
    case 438u: goto L_003BF480;
    case 439u: goto L_003BF4A0;
    case 440u: goto L_003BF4A8;
    case 441u: goto L_003BF4B0;
    case 442u: goto L_003BF4C0;
    case 443u: goto L_003BF4CC;
    case 444u: goto L_003BF4FC;
    case 445u: goto L_003BF530;
    case 446u: goto L_003BF550;
    case 447u: goto L_003BF558;
    case 448u: goto L_003BF570;
    case 449u: goto L_003BF5B8;
    case 450u: goto L_003BF5D0;
    case 451u: goto L_003BF5F8;
    case 452u: goto L_003BF604;
    case 453u: goto L_003BF620;
    case 454u: goto L_003BF630;
    case 455u: goto L_003BF644;
    case 456u: goto L_003BF664;
    case 457u: goto L_003BF678;
    case 458u: goto L_003BF688;
    case 459u: goto L_003BF690;
    case 460u: goto L_003BF6B0;
    case 461u: goto L_003BF6B8;
    case 462u: goto L_003BF6F4;
    case 463u: goto L_003BF700;
    case 464u: goto L_003BF708;
    case 465u: goto L_003BF720;
    case 466u: goto L_003BF73C;
    case 467u: goto L_003BF788;
    case 468u: goto L_003BF7A0;
    case 469u: goto L_003BF7DC;
    case 470u: goto L_003BF7F0;
    case 471u: goto L_003BF820;
    case 472u: goto L_003BF8F0;
    case 473u: goto L_003BF910;
    case 474u: goto L_003BF93C;
    case 475u: goto L_003BF950;
    case 476u: goto L_003BF960;
    case 477u: goto L_003BF970;
    case 478u: goto L_003BF9D0;
    case 479u: goto L_003BF9D8;
    case 480u: goto L_003BFA84;
    case 481u: goto L_003BFAB4;
    case 482u: goto L_003BFAB8;
    case 483u: goto L_003BFADC;
    case 484u: goto L_003BFAF4;
    case 485u: goto L_003BFAF8;
    case 486u: goto L_003BFB00;
    case 487u: goto L_003BFB30;
    case 488u: goto L_003BFB3C;
    case 489u: goto L_003BFB70;
    case 490u: goto L_003BFB78;
    case 491u: goto L_003BFBC0;
    case 492u: goto L_003BFBC8;
    case 493u: goto L_003BFC3C;
    case 494u: goto L_003BFC48;
    case 495u: goto L_003BFC60;
    case 496u: goto L_003BFCB0;
    case 497u: goto L_003BFCB8;
    case 498u: goto L_003BFD40;
    case 499u: goto L_003BFD48;
    case 500u: goto L_003BFD78;
    case 501u: goto L_003BFD84;
    case 502u: goto L_003BFDCC;
    case 503u: goto L_003BFDF0;
    case 504u: goto L_003BFE08;
    case 505u: goto L_003BFE30;
    case 506u: goto L_003BFE38;
    case 507u: goto L_003BFE98;
    case 508u: goto L_003BFEA0;
    case 509u: goto L_003BFF04;
    case 510u: goto L_003BFF08;
    case 511u: goto L_003BFF10;
    case 512u: goto L_003BFF34;
    case 513u: goto L_003BFF3C;
    case 514u: goto L_003BFF4C;
    case 515u: goto L_003BFF58;
    case 516u: goto L_003BFF64;
    case 517u: goto L_003BFF8C;
    case 518u: goto L_003BFF98;
    case 519u: goto L_003BFFB0;
    case 520u: goto L_003BFFE0;
    case 521u: goto L_003BFFE8;
    case 522u: goto L_003BFFEC;
    default: bad_entry(c, 0x003BC000u); return;
    }
L_003BC000:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003BC020:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC048u); set32(c.r[4], c.r[6].w[0] + 2048u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003BC048u) [[unlikely]] return; }
L_003BC048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC050u); set32(c.r[4], c.r[17].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x003BC050u) [[unlikely]] return; }
L_003BC050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC058u); set32(c.r[4], ld32((c.r[18].w[0] + 96u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x003BC058u) [[unlikely]] return; }
L_003BC058:
    set32(c.r[2], ld32((c.r[18].w[0] + 92u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC064u); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x003BC064u) [[unlikely]] return; }
L_003BC064:
    c.f[12] = ld32((c.r[18].w[0] + 104u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC078u); set32(c.r[5], c.r[5].w[0] + 16784u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x003BC078u) [[unlikely]] return; }
L_003BC078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC080u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x003BC080u) [[unlikely]] return; }
L_003BC080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC088u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x003BC088u) [[unlikely]] return; }
L_003BC088:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] << 15);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC09Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x003BC09Cu) [[unlikely]] return; }
L_003BC09C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC0A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x003BC0A4u) [[unlikely]] return; }
L_003BC0A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003BC0C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC0ECu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x003BC0ECu) [[unlikely]] return; }
L_003BC0EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003BC150; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[7], 0u + 17u);
    set32(c.r[6], 0u + 24u);
    set32(c.r[3], c.r[3].w[0] - 16016u);
    set32(c.r[2], c.r[2].w[0] - 14384u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[16].w[0] + 24u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC13Cu); st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x003BC13Cu) [[unlikely]] return; }
L_003BC13C:
    set32(c.r[5], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC150u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x003BC150u) [[unlikely]] return; }
L_003BC150:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003BC170:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] + 18080u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003BC000u < 16384u) { entry = entries_00AF[(t - 0x003BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003BC190:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 8192u);
    set32(c.r[2], 0u + 16384u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 562u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 566u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 88u), 0u);
    c.budget -= 15;
    { st16((c.r[4].w[0] + 560u), static_cast<std::uint16_t>(0u));  goto L_003BC1D0; }
L_003BC1D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[18].w[0] + 32u);
    set32(c.r[17], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[16], c.r[18].w[0] + 304u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC1FCu); set32(c.r[4], c.r[18].w[0] + 128u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003BC1FCu) [[unlikely]] return; }
L_003BC1FC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] + 18096u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC224u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BC224u) [[unlikely]] return; }
L_003BC224:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BC250; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BC278; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BC278; } }
    c.budget -= 1;
L_003BC250:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC264u); st32((c.r[18].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 251u, depth + 1u); else { c.pc = 0x00102880u; return; } if (c.pc != 0x003BC264u) [[unlikely]] return; }
L_003BC264:
    set32(c.r[4], c.r[18].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC270u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003BC270u) [[unlikely]] return; }
L_003BC270:
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003BC278:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003BC290:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003BC330; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC2C8u); st8((c.r[18].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x003BC2C8u) [[unlikely]] return; }
L_003BC2C8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BC308; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_003BC308; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003BC300; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003BC300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BC488; } }
L_003BC308:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC324u); st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AF(c, 90u, depth + 1u); else { c.pc = 0x003BCB70u; return; } if (c.pc != 0x003BC324u) [[unlikely]] return; }
L_003BC324:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BC488; } }
    c.budget -= 1;
L_003BC330:
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC340u); set32(c.r[4], c.r[16].w[0] + 2112u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003BC340u) [[unlikely]] return; }
L_003BC340:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] + 17888u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC358u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x003BC358u) [[unlikely]] return; }
L_003BC358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC360u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x003BC360u) [[unlikely]] return; }
L_003BC360:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] + 18020u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC384u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x003BC384u) [[unlikely]] return; }
L_003BC384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC38Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x003BC38Cu) [[unlikely]] return; }
L_003BC38C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 336u));
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BC488; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], 0u + 18u);
    set32(c.r[2], 0u + 16u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[18].w[0] + 516u), static_cast<std::uint8_t>(0u));
    st16((c.r[18].w[0] + 500u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 496u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 498u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 504u)));
    st32((c.r[18].w[0] + 504u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 508u)));
    st32((c.r[18].w[0] + 508u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 80u), 0u);
    st32((c.r[17].w[0] + 84u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 504u)));
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[16].w[0] + 1296u);  if (t) { goto L_003BC408; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC3FCu); set32(c.r[4], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003BC3FCu) [[unlikely]] return; }
L_003BC3FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BC418; } }
    c.budget -= 1;
L_003BC408:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC414u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 69u, depth + 1u); else { c.pc = 0x003BC8A0u; return; } if (c.pc != 0x003BC414u) [[unlikely]] return; }
L_003BC414:
    c.budget -= 1;
L_003BC418:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003BC460; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC430u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 80u, depth + 1u); else { c.pc = 0x003BCAA0u; return; } if (c.pc != 0x003BC430u) [[unlikely]] return; }
L_003BC430:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BC460; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC454u); st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AF(c, 90u, depth + 1u); else { c.pc = 0x003BCB70u; return; } if (c.pc != 0x003BC454u) [[unlikely]] return; }
L_003BC454:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BC488; } }
    c.budget -= 1;
L_003BC460:
    set32(c.r[5], 0u + 3u);
    st32((c.r[18].w[0] + 104u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D800000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC47Cu); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x003BC47Cu) [[unlikely]] return; }
L_003BC47C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC488u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_001F(c, 353u, depth + 1u); else { c.pc = 0x0017FCB0u; return; } if (c.pc != 0x003BC488u) [[unlikely]] return; }
L_003BC488:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003BC4A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC4BCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 79u, depth + 1u); else { c.pc = 0x003BCA20u; return; } if (c.pc != 0x003BC4BCu) [[unlikely]] return; }
L_003BC4BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BC4D8; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 512u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 504u), 0u);  if (t) { goto L_003BC4E8; } }
    c.budget -= 1;
L_003BC4D8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC4E4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 69u, depth + 1u); else { c.pc = 0x003BC8A0u; return; } if (c.pc != 0x003BC4E4u) [[unlikely]] return; }
L_003BC4E4:
    c.budget -= 1;
L_003BC4E8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC4F8u); set32(c.r[6], 0u + 1024u);  if (depth < kMaxDepth) unit_00AF(c, 70u, depth + 1u); else { c.pc = 0x003BC8B0u; return; } if (c.pc != 0x003BC4F8u) [[unlikely]] return; }
L_003BC4F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC504u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 78u, depth + 1u); else { c.pc = 0x003BC9B0u; return; } if (c.pc != 0x003BC504u) [[unlikely]] return; }
L_003BC504:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC510u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x003BC510u) [[unlikely]] return; }
L_003BC510:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003BC558; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC528u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 80u, depth + 1u); else { c.pc = 0x003BCAA0u; return; } if (c.pc != 0x003BC528u) [[unlikely]] return; }
L_003BC528:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BC558; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC54Cu); st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AF(c, 90u, depth + 1u); else { c.pc = 0x003BCB70u; return; } if (c.pc != 0x003BC54Cu) [[unlikely]] return; }
L_003BC54C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BC5D8; } }
    c.budget -= 1;
L_003BC558:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 560u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BC570; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_003BC598; } }
L_003BC570:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC58Cu); st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AF(c, 90u, depth + 1u); else { c.pc = 0x003BCB70u; return; } if (c.pc != 0x003BC58Cu) [[unlikely]] return; }
L_003BC58C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BC5D8; } }
    c.budget -= 1;
L_003BC598:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BC5C0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_003BC5C0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC5D4u); set32(c.r[6], c.r[6].w[0] + 18064u);  if (depth < kMaxDepth) unit_001F(c, 305u, depth + 1u); else { c.pc = 0x0017EFD0u; return; } if (c.pc != 0x003BC5D4u) [[unlikely]] return; }
L_003BC5D4:
    c.budget -= 1;
L_003BC5D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BC5F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC610u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AF(c, 79u, depth + 1u); else { c.pc = 0x003BCA20u; return; } if (c.pc != 0x003BC610u) [[unlikely]] return; }
L_003BC610:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BC628; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 512u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 504u), 0u);  if (t) { goto L_003BC638; } }
L_003BC628:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC634u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 69u, depth + 1u); else { c.pc = 0x003BC8A0u; return; } if (c.pc != 0x003BC634u) [[unlikely]] return; }
L_003BC634:
    c.budget -= 1;
L_003BC638:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC648u); set32(c.r[6], 0u + 80u);  if (depth < kMaxDepth) unit_00AF(c, 70u, depth + 1u); else { c.pc = 0x003BC8B0u; return; } if (c.pc != 0x003BC648u) [[unlikely]] return; }
L_003BC648:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC654u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 78u, depth + 1u); else { c.pc = 0x003BC9B0u; return; } if (c.pc != 0x003BC654u) [[unlikely]] return; }
L_003BC654:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC660u); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x003BC660u) [[unlikely]] return; }
L_003BC660:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC674u); set32(c.r[6], c.r[6].w[0] + 18064u);  if (depth < kMaxDepth) unit_001F(c, 305u, depth + 1u); else { c.pc = 0x0017EFD0u; return; } if (c.pc != 0x003BC674u) [[unlikely]] return; }
L_003BC674:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003BC6F8; } }
    c.f[2] = ld32((c.r[18].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x44F10000u);  if (t) { goto L_003BC6D0; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BC6D0; } }
    c.f[2] = ld32((c.r[18].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BC6D0; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BC6D8; } }
L_003BC6D0:
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_003BC6D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC6E4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 80u, depth + 1u); else { c.pc = 0x003BCAA0u; return; } if (c.pc != 0x003BC6E4u) [[unlikely]] return; }
L_003BC6E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BC728; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 2u);  if (t) { goto L_003BC728; } }
    c.budget -= 1;
L_003BC6F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC708u); set32(c.r[4], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x003BC708u) [[unlikely]] return; }
L_003BC708:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x442F0000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BC728; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_003BC728:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003BC760; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 166u)));
    c.r[1].d[0] = c.r[3].sd[0] < 360ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003BC760; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 560u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BC760; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BC790; } }
L_003BC760:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003BC778; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_003BC778:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC788u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 90u, depth + 1u); else { c.pc = 0x003BCB70u; return; } if (c.pc != 0x003BC788u) [[unlikely]] return; }
L_003BC788:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BC790; } }
L_003BC790:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003BC7B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003BC7C0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_003BC7D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003BC880; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BC860; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC804u); set32(c.r[4], c.r[16].w[0] + 2112u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003BC804u) [[unlikely]] return; }
L_003BC804:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] + 17888u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC81Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x003BC81Cu) [[unlikely]] return; }
L_003BC81C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] + 18020u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC840u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x003BC840u) [[unlikely]] return; }
L_003BC840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC848u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x003BC848u) [[unlikely]] return; }
L_003BC848:
    set32(c.r[5], ld32((c.r[17].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC854u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 89u, depth + 1u); else { c.pc = 0x002A25C0u; return; } if (c.pc != 0x003BC854u) [[unlikely]] return; }
L_003BC854:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BC880; } }
    c.budget -= 1;
L_003BC860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC868u); set32(c.r[4], c.r[17].w[0] + 304u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003BC868u) [[unlikely]] return; }
L_003BC868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC870u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x003BC870u) [[unlikely]] return; }
L_003BC870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC878u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x003BC878u) [[unlikely]] return; }
L_003BC878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC880u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 429u, depth + 1u); else { c.pc = 0x0020FFF0u; return; } if (c.pc != 0x003BC880u) [[unlikely]] return; }
L_003BC880:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BC8A0:
    set32(c.r[2], ld32((c.r[4].w[0] + 504u)));
    set32(c.r[4], c.r[5].w[0] + 64u);
    c.budget -= 4;
    { set32(c.r[5], c.r[2].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00102830u | kUnwind; return; } [[clang::musttail]] return unit_0000(c, 247u, depth); }
L_003BC8B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[5].w[0] + 80u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003BC990; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);  if (t) { goto L_003BC900; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC8F8u);  if (depth < kMaxDepth) unit_003E(c, 244u, depth + 1u); else { c.pc = 0x001FA4C0u; return; } if (c.pc != 0x003BC8F8u) [[unlikely]] return; }
L_003BC8F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[0];  if (t) { goto L_003BC908; } }
L_003BC900:
    c.f[0] = c.r[2].w[0];
    c.f[20] = c.f[0];
    c.budget -= 2;
L_003BC908:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC914u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x003BC914u) [[unlikely]] return; }
L_003BC914:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_003BC988; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC928u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003BC928u) [[unlikely]] return; }
L_003BC928:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC938u); set32(c.r[6], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003BC938u) [[unlikely]] return; }
L_003BC938:
    c.r[6].d[0] = c.r[18].d[0] << 48;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC94Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_002E(c, 328u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x003BC94Cu) [[unlikely]] return; }
L_003BC94C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC960u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 179u, depth + 1u); else { c.pc = 0x001BA240u; return; } if (c.pc != 0x003BC960u) [[unlikely]] return; }
L_003BC960:
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003BC990; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BC980u);  if (depth < kMaxDepth) unit_003B(c, 346u, depth + 1u); else { c.pc = 0x001EFC40u; return; } if (c.pc != 0x003BC980u) [[unlikely]] return; }
L_003BC980:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BC990; } }
L_003BC988:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 2;
L_003BC990:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003BC9B0:
    c.f[2] = ld32((c.r[4].w[0] + 108u));
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = 0u;
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 104u), c.f[1]);  if (t) { goto L_003BC9E0; } }
    st32((c.r[3].w[0] + 108u), c.f[0]);
    st32((c.r[3].w[0] + 104u), c.f[0]);
    c.budget -= 3;
L_003BC9E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40990000u);
    c.f[1] = ld32((c.r[3].w[0] + 104u));
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BCA08; } }
    st32((c.r[3].w[0] + 104u), c.f[0]);
    st32((c.r[3].w[0] + 108u), 0u);
    c.budget -= 2;
L_003BCA08:
    set32(c.r[4], c.r[3].w[0] + 48u);
    c.f[12] = ld32((c.r[3].w[0] + 104u));
    c.budget -= 4;
    { set32(c.r[5], c.r[5].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00127580u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 213u, depth); }
L_003BCA20:
    set32(c.r[2], ld32((c.r[4].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BCA38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BCA98; } }
    c.budget -= 1;
L_003BCA38:
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BCA50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BCA98; } }
    c.budget -= 1;
L_003BCA50:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BCA68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BCA98; } }
    c.budget -= 1;
L_003BCA68:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003BCA90; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BCA90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BCA98; } }
L_003BCA90:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_003BCA98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BCAA0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCABCu); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003BCABCu) [[unlikely]] return; }
L_003BCABC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCAC4u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x003BCAC4u) [[unlikely]] return; }
L_003BCAC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FE60000u);
    c.f[12] = 0u;
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCADCu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003BCADCu) [[unlikely]] return; }
L_003BCADC:
    set32(c.r[16], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCAE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x003BCAE8u) [[unlikely]] return; }
L_003BCAE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1090000u);
    c.f[12] = 0u;
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCB00u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003BCB00u) [[unlikely]] return; }
L_003BCB00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCB08u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x003BCB08u) [[unlikely]] return; }
L_003BCB08:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCB18u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0012(c, 159u, depth + 1u); else { c.pc = 0x00149A80u; return; } if (c.pc != 0x003BCB18u) [[unlikely]] return; }
L_003BCB18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BCB28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003BCB50; } }
L_003BCB28:
    set32(c.r[5], c.r[17].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCB34u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003BCB34u) [[unlikely]] return; }
L_003BCB34:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCB44u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0012(c, 159u, depth + 1u); else { c.pc = 0x00149A80u; return; } if (c.pc != 0x003BCB44u) [[unlikely]] return; }
L_003BCB44:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_003BCB50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003BCB70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCB94u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x003BCB94u) [[unlikely]] return; }
L_003BCB94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCB9Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x003BCB9Cu) [[unlikely]] return; }
L_003BCB9C:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0800000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCBB0u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003BCBB0u) [[unlikely]] return; }
L_003BCBB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCBB8u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x003BCBB8u) [[unlikely]] return; }
L_003BCBB8:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCBC4u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x003BCBC4u) [[unlikely]] return; }
L_003BCBC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCBCCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x003BCBCCu) [[unlikely]] return; }
L_003BCBCC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003BCC08; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_003BCBE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BCC30; } }
L_003BCBE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCC00u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_003F(c, 124u, depth + 1u); else { c.pc = 0x001FD300u; return; } if (c.pc != 0x003BCC00u) [[unlikely]] return; }
L_003BCC00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BCC30; } }
L_003BCC08:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCC14u); set32(c.r[5], 0u + 145u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003BCC14u) [[unlikely]] return; }
L_003BCC14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCC2Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_003F(c, 128u, depth + 1u); else { c.pc = 0x001FD3E0u; return; } if (c.pc != 0x003BCC2Cu) [[unlikely]] return; }
L_003BCC2C:
    c.budget -= 1;
L_003BCC30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003BCC50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 28240u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCC7Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BCC7Cu) [[unlikely]] return; }
L_003BCC7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCC84u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x003BCC84u) [[unlikely]] return; }
L_003BCC84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCC8Cu); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x003BCC8Cu) [[unlikely]] return; }
L_003BCC8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCC94u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x003BCC94u) [[unlikely]] return; }
L_003BCC94:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCCA0u); set32(c.r[4], c.r[4].w[0] - 15024u);  if (depth < kMaxDepth) unit_0043(c, 416u, depth + 1u); else { c.pc = 0x0020FEF0u; return; } if (c.pc != 0x003BCCA0u) [[unlikely]] return; }
L_003BCCA0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BCCC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[17].w[0] + 2132u);  if (t) { goto L_003BCD68; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BCCF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BCD88; } }
    c.budget -= 1;
L_003BCCF8:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCD10u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003BCD10u) [[unlikely]] return; }
L_003BCD10:
    set32(c.r[4], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCD1Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 172u, depth + 1u); else { c.pc = 0x00409CF0u; return; } if (c.pc != 0x003BCD1Cu) [[unlikely]] return; }
L_003BCD1C:
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 28264u);
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 9u)));
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCD60u); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));  if (depth < kMaxDepth) unit_00C3(c, 43u, depth + 1u); else { c.pc = 0x0040C790u; return; } if (c.pc != 0x003BCD60u) [[unlikely]] return; }
L_003BCD60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BCD88; } }
L_003BCD68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCD70u); set32(c.r[4], ld32((c.r[17].w[0] + 56u)));  if (depth < kMaxDepth) unit_00C3(c, 44u, depth + 1u); else { c.pc = 0x0040C7A0u; return; } if (c.pc != 0x003BCD70u) [[unlikely]] return; }
L_003BCD70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BCD88; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_003BCD88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BCDA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCDC8u); set32(c.r[17], c.r[18].w[0] + 2132u);  if (depth < kMaxDepth) unit_00C3(c, 45u, depth + 1u); else { c.pc = 0x0040C7B0u; return; } if (c.pc != 0x003BCDC8u) [[unlikely]] return; }
L_003BCDC8:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 3u));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 9u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003BD098; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 3u);  if (t) { goto L_003BD060; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_003BD020; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003BCFF0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003BCE50; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BCE18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BD0B0; } }
    c.budget -= 1;
L_003BCE18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCE20u); set32(c.r[4], ld32((c.r[18].w[0] + 56u)));  if (depth < kMaxDepth) unit_00C3(c, 45u, depth + 1u); else { c.pc = 0x0040C7B0u; return; } if (c.pc != 0x003BCE20u) [[unlikely]] return; }
L_003BCE20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCE28u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 65u, depth + 1u); else { c.pc = 0x003B0AD0u; return; } if (c.pc != 0x003BCE28u) [[unlikely]] return; }
L_003BCE28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BD0B0; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCE48u); set32(c.r[5], 0u + 21u);  if (depth < kMaxDepth) unit_00C3(c, 46u, depth + 1u); else { c.pc = 0x0040C7C0u; return; } if (c.pc != 0x003BCE48u) [[unlikely]] return; }
L_003BCE48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BD0B0; } }
L_003BCE50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCE58u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x003BCE58u) [[unlikely]] return; }
L_003BCE58:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BCEA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCE70u);  if (depth < kMaxDepth) unit_00AB(c, 337u, depth + 1u); else { c.pc = 0x003AFBD0u; return; } if (c.pc != 0x003BCE70u) [[unlikely]] return; }
L_003BCE70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BCEA8; } }
    set32(c.r[2], 0u + 9u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCE8Cu); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003BCE8Cu) [[unlikely]] return; }
L_003BCE8C:
    set32(c.r[4], 0u + 15u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCE98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 172u, depth + 1u); else { c.pc = 0x00409CF0u; return; } if (c.pc != 0x003BCE98u) [[unlikely]] return; }
L_003BCE98:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 8075u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003BD0B0; } }
L_003BCEA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCEB0u);  if (depth < kMaxDepth) unit_0049(c, 380u, depth + 1u); else { c.pc = 0x00227690u; return; } if (c.pc != 0x003BCEB0u) [[unlikely]] return; }
L_003BCEB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BCEF0; } }
    set32(c.r[2], 0u + 3u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCECCu); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003BCECCu) [[unlikely]] return; }
L_003BCECC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCED8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 146u, depth + 1u); else { c.pc = 0x003FA130u; return; } if (c.pc != 0x003BCED8u) [[unlikely]] return; }
L_003BCED8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCEE4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x003BCEE4u) [[unlikely]] return; }
L_003BCEE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BD0B0; } }
    c.budget -= 1;
L_003BCEF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCEF8u);  if (depth < kMaxDepth) unit_0049(c, 382u, depth + 1u); else { c.pc = 0x00227730u; return; } if (c.pc != 0x003BCEF8u) [[unlikely]] return; }
L_003BCEF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BCF38; } }
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCF14u); set32(c.r[5], 0u + 167u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003BCF14u) [[unlikely]] return; }
L_003BCF14:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCF20u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x003BCF20u) [[unlikely]] return; }
L_003BCF20:
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCF2Cu); set32(c.r[5], 0u + 31u);  if (depth < kMaxDepth) unit_00C3(c, 46u, depth + 1u); else { c.pc = 0x0040C7C0u; return; } if (c.pc != 0x003BCF2Cu) [[unlikely]] return; }
L_003BCF2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BD0B0; } }
    c.budget -= 1;
L_003BCF38:
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCF44u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x003BCF44u) [[unlikely]] return; }
L_003BCF44:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCF54u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 385u, depth + 1u); else { c.pc = 0x00227830u; return; } if (c.pc != 0x003BCF54u) [[unlikely]] return; }
L_003BCF54:
    st8((c.r[18].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCF60u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x003BCF60u) [[unlikely]] return; }
L_003BCF60:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCF70u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0049(c, 388u, depth + 1u); else { c.pc = 0x002278D0u; return; } if (c.pc != 0x003BCF70u) [[unlikely]] return; }
L_003BCF70:
    st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.r[2].d[0] = c.r[19].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9u)));
    set32(c.r[4], c.r[4].w[0] - 28264u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003BCFE0; } }
    st8((c.r[18].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCFBCu); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));  if (depth < kMaxDepth) unit_00C3(c, 43u, depth + 1u); else { c.pc = 0x0040C790u; return; } if (c.pc != 0x003BCFBCu) [[unlikely]] return; }
L_003BCFBC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCFC8u); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003BCFC8u) [[unlikely]] return; }
L_003BCFC8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCFD4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x003BCFD4u) [[unlikely]] return; }
L_003BCFD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BD0B0; } }
    c.budget -= 1;
L_003BCFE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCFE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 62u, depth + 1u); else { c.pc = 0x003B0A00u; return; } if (c.pc != 0x003BCFE8u) [[unlikely]] return; }
L_003BCFE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BD0B0; } }
L_003BCFF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BCFF8u); set32(c.r[4], ld32((c.r[18].w[0] + 56u)));  if (depth < kMaxDepth) unit_00C3(c, 45u, depth + 1u); else { c.pc = 0x0040C7B0u; return; } if (c.pc != 0x003BCFF8u) [[unlikely]] return; }
L_003BCFF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD000u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B0B20u; return; } if (c.pc != 0x003BD000u) [[unlikely]] return; }
L_003BD000:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BD0B0; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003BD0B0; } }
L_003BD020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD028u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 64u, depth + 1u); else { c.pc = 0x003B0A80u; return; } if (c.pc != 0x003BD028u) [[unlikely]] return; }
L_003BD028:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BD0B0; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 3u));
    set32(c.r[2], 0u + 10u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003BD0B0; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD058u); set32(c.r[5], 0u + 23u);  if (depth < kMaxDepth) unit_00C3(c, 46u, depth + 1u); else { c.pc = 0x0040C7C0u; return; } if (c.pc != 0x003BD058u) [[unlikely]] return; }
L_003BD058:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BD0B0; } }
L_003BD060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD068u); set32(c.r[4], ld32((c.r[18].w[0] + 56u)));  if (depth < kMaxDepth) unit_00C3(c, 45u, depth + 1u); else { c.pc = 0x0040C7B0u; return; } if (c.pc != 0x003BD068u) [[unlikely]] return; }
L_003BD068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD070u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B0B20u; return; } if (c.pc != 0x003BD070u) [[unlikely]] return; }
L_003BD070:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BD0B0; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003BD0B0; } }
    c.budget -= 1;
L_003BD098:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8075u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003BD0B0; } }
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003BD0B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003BD0D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 28224u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2132u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD0F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BD0F8u) [[unlikely]] return; }
L_003BD0F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BD110:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2133u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 2132u);  if (t) { goto L_003BD1F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BD148; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BD298; } }
    c.budget -= 1;
L_003BD148:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_003BD180; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003BD164; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_003BD168; } }
L_003BD164:
    set32(c.r[2], 0u + 7u);
    c.budget -= 1;
L_003BD168:
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD174u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_00BE(c, 114u, depth + 1u); else { c.pc = 0x003F9DE0u; return; } if (c.pc != 0x003BD174u) [[unlikely]] return; }
L_003BD174:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BD298; } }
    c.budget -= 1;
L_003BD180:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003BD1A8; } }
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003BD1B8; } }
    c.budget -= 1;
L_003BD1A8:
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD1B4u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));  if (depth < kMaxDepth) unit_00AB(c, 348u, depth + 1u); else { c.pc = 0x003AFD50u; return; } if (c.pc != 0x003BD1B4u) [[unlikely]] return; }
L_003BD1B4:
    st8((c.r[17].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_003BD1B8:
    st8((c.r[17].w[0] + 12u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 14u);
    st8((c.r[17].w[0] + 14u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 13u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD1DCu); if (c.r[3].d[0] == 0) c.r[4].d[0] = c.r[2].d[0];  if (depth < kMaxDepth) unit_00C2(c, 172u, depth + 1u); else { c.pc = 0x00409CF0u; return; } if (c.pc != 0x003BD1DCu) [[unlikely]] return; }
L_003BD1DC:
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003BD298; } }
    c.budget -= 1;
L_003BD1F8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BD270; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[3].w[0] + 104u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BD250; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD24Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 188u, depth + 1u); else { c.pc = 0x0040DC90u; return; } if (c.pc != 0x003BD24Cu) [[unlikely]] return; }
L_003BD24C:
    c.budget -= 1;
L_003BD250:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 14u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st32((c.r[1].w[0] + 8088u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 8092u), 0u);  if (t) { goto L_003BD298; } }
    c.budget -= 1;
L_003BD270:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41800000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.f[0] = c.r[4].w[0];
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 104u), c.f[0]);
    c.budget -= 10;
L_003BD298:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BD2B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD2DCu); set32(c.r[17], c.r[21].w[0] + 2132u);  if (depth < kMaxDepth) unit_00AB(c, 295u, depth + 1u); else { c.pc = 0x003AF550u; return; } if (c.pc != 0x003BD2DCu) [[unlikely]] return; }
L_003BD2DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD2E4u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x003BD2E4u) [[unlikely]] return; }
L_003BD2E4:
    c.r[20].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BD304; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD2FCu); set32(c.r[4], ld32((c.r[17].w[0] + 16u)));  if (depth < kMaxDepth) unit_00C3(c, 189u, depth + 1u); else { c.pc = 0x0040DCA0u; return; } if (c.pc != 0x003BD2FCu) [[unlikely]] return; }
L_003BD2FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));  if (t) { goto L_003BD310; } }
L_003BD304:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD30Cu); set32(c.r[4], ld32((c.r[17].w[0] + 16u)));  if (depth < kMaxDepth) unit_00C3(c, 129u, depth + 1u); else { c.pc = 0x0040D590u; return; } if (c.pc != 0x003BD30Cu) [[unlikely]] return; }
L_003BD30C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 1;
L_003BD310:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003BD950; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_003BD938; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003BD928; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_003BD8D8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003BD880; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003BD770; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BD368; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BD9D8; } }
    c.budget -= 1;
L_003BD368:
    c.r[16].d[0] = c.r[20].d[0] & 65535ull;
    c.r[2].d[0] = c.r[16].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BD3B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD380u);  if (depth < kMaxDepth) unit_00AB(c, 337u, depth + 1u); else { c.pc = 0x003AFBD0u; return; } if (c.pc != 0x003BD380u) [[unlikely]] return; }
L_003BD380:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BD3B8; } }
    set32(c.r[2], 0u + 9u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD39Cu); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003BD39Cu) [[unlikely]] return; }
L_003BD39C:
    set32(c.r[4], 0u + 15u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD3A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 172u, depth + 1u); else { c.pc = 0x00409CF0u; return; } if (c.pc != 0x003BD3A8u) [[unlikely]] return; }
L_003BD3A8:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 8075u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003BD9D8; } }
L_003BD3B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD3C0u);  if (depth < kMaxDepth) unit_00BE(c, 240u, depth + 1u); else { c.pc = 0x003FB040u; return; } if (c.pc != 0x003BD3C0u) [[unlikely]] return; }
L_003BD3C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BD478; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD3DCu); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AB(c, 331u, depth + 1u); else { c.pc = 0x003AFAB0u; return; } if (c.pc != 0x003BD3DCu) [[unlikely]] return; }
L_003BD3DC:
    st8((c.r[17].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 13u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD3F0u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));  if (depth < kMaxDepth) unit_00AF(c, 224u, depth + 1u); else { c.pc = 0x003BDC10u; return; } if (c.pc != 0x003BD3F0u) [[unlikely]] return; }
L_003BD3F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BD468; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 165u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD410u); st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003BD410u) [[unlikely]] return; }
L_003BD410:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD41Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x003BD41Cu) [[unlikely]] return; }
L_003BD41C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003BD450; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD430u);  if (depth < kMaxDepth) unit_00AF(c, 327u, depth + 1u); else { c.pc = 0x003BE3E0u; return; } if (c.pc != 0x003BD430u) [[unlikely]] return; }
L_003BD430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD438u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 364u, depth + 1u); else { c.pc = 0x003BEAE0u; return; } if (c.pc != 0x003BD438u) [[unlikely]] return; }
L_003BD438:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[1].w[0] + 8118u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD44Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00BE(c, 146u, depth + 1u); else { c.pc = 0x003FA130u; return; } if (c.pc != 0x003BD44Cu) [[unlikely]] return; }
L_003BD44C:
    c.budget -= 1;
L_003BD450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD458u);  if (depth < kMaxDepth) unit_00AF(c, 218u, depth + 1u); else { c.pc = 0x003BDBB0u; return; } if (c.pc != 0x003BD458u) [[unlikely]] return; }
L_003BD458:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 8088u), c.r[2].w[0]);  if (t) { goto L_003BD9D8; } }
    c.budget -= 1;
L_003BD468:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD474u); set32(c.r[5], 0u + 171u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003BD474u) [[unlikely]] return; }
L_003BD474:
    c.budget -= 1;
L_003BD478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD480u);  if (depth < kMaxDepth) unit_00BE(c, 241u, depth + 1u); else { c.pc = 0x003FB050u; return; } if (c.pc != 0x003BD480u) [[unlikely]] return; }
L_003BD480:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BD4B0; } }
    set32(c.r[2], 0u + 10u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD49Cu); set32(c.r[5], 0u + 167u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003BD49Cu) [[unlikely]] return; }
L_003BD49C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD4A8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x003BD4A8u) [[unlikely]] return; }
L_003BD4A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BD9D8; } }
L_003BD4B0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BD5E8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD4D0u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0049(c, 385u, depth + 1u); else { c.pc = 0x00227830u; return; } if (c.pc != 0x003BD4D0u) [[unlikely]] return; }
L_003BD4D0:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD4ECu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 388u, depth + 1u); else { c.pc = 0x002278D0u; return; } if (c.pc != 0x003BD4ECu) [[unlikely]] return; }
L_003BD4EC:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[19].d[0] << 48;
    st8((c.r[17].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st8((c.r[21].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003BD550; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD52Cu); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003BD52Cu) [[unlikely]] return; }
L_003BD52C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD538u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x003BD538u) [[unlikely]] return; }
L_003BD538:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD544u); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8u)));  if (depth < kMaxDepth) unit_00C3(c, 188u, depth + 1u); else { c.pc = 0x0040DC90u; return; } if (c.pc != 0x003BD544u) [[unlikely]] return; }
L_003BD544:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BD9D8; } }
    c.budget -= 1;
L_003BD550:
    c.r[2].d[0] = c.r[16].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 9u)));  if (t) { goto L_003BD580; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003BD580; } }
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003BD580:
    c.r[2].d[0] = c.r[16].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BD5B0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 9u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], 0u + 2u);  if (t) { goto L_003BD5B0; } }
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003BD5B0:
    c.r[2].d[0] = c.r[3].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 9u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003BD5D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD5CCu); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003BD5CCu) [[unlikely]] return; }
L_003BD5CC:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD5D8u); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 9u)));  if (depth < kMaxDepth) unit_00C3(c, 190u, depth + 1u); else { c.pc = 0x0040DCB0u; return; } if (c.pc != 0x003BD5D8u) [[unlikely]] return; }
L_003BD5D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD5E0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 62u, depth + 1u); else { c.pc = 0x003B0A00u; return; } if (c.pc != 0x003BD5E0u) [[unlikely]] return; }
L_003BD5E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BD9D8; } }
L_003BD5E8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 12u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8u)));
    c.r[2].d[0] = c.r[16].d[0] & 4096ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 13u)));
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003BD638; } }
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003BD718; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BD630; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[5].w[0] + 1u);  if (t) { goto L_003BD718; } }
L_003BD630:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003BD718; } }
L_003BD638:
    c.r[2].d[0] = c.r[16].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);  if (t) { goto L_003BD668; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BD718; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003BD660; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[5].w[0] - 1u);  if (t) { goto L_003BD718; } }
    c.budget -= 1;
L_003BD660:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[4].w[0] - 1u);  if (t) { goto L_003BD718; } }
L_003BD668:
    c.r[2].d[0] = c.r[16].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[5].w[0] + c.r[4].w[0]);  if (t) { goto L_003BD6D8; } }
    set32(c.r[2], c.r[6].w[0] + 1u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] + 8u);  if (t) { goto L_003BD718; } }
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 9ll ? 1ull : 0ull;  if (t) { goto L_003BD6B0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[3].w[0] - 1u);  if (t) { goto L_003BD6A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003BD718; } }
L_003BD6A0:
    set32(c.r[8], c.r[3].w[0] - 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 7u);  if (t) { goto L_003BD718; } }
    c.budget -= 1;
L_003BD6B0:
    set32(c.r[8], c.r[3].w[0] - 8u);
    set32(c.r[2], c.r[5].w[0] + 8u);
    c.r[1].d[0] = c.r[8].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003BD6D0; } }
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[2].w[0] - c.r[8].w[0]);  if (t) { goto L_003BD718; } }
L_003BD6D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003BD718; } }
L_003BD6D8:
    c.r[2].d[0] = c.r[16].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);  if (t) { goto L_003BD718; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BD718; } }
    set32(c.r[8], c.r[5].w[0] - 8u);
    c.budget -= 3;
    { const bool t = c.r[8].sd[0] >= 0; c.r[1].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;  if (t) { goto L_003BD718; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003BD708; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BD710; } }
L_003BD708:
    set32(c.r[7], c.r[2].w[0] - 8u);
    c.budget -= 2;
L_003BD710:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003BD718; } }
L_003BD718:
    c.r[2].d[0] = c.r[5].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[4].d[0] << 56;  if (t) { goto L_003BD738; } }
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[2].d[0];  if (t) { goto L_003BD760; } }
    c.budget -= 1;
L_003BD738:
    st8((c.r[21].w[0] + 12u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[21].w[0] + 8u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD74Cu); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003BD74Cu) [[unlikely]] return; }
L_003BD74C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD758u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x003BD758u) [[unlikely]] return; }
L_003BD758:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BD9D8; } }
L_003BD760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD768u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 62u, depth + 1u); else { c.pc = 0x003B0A00u; return; } if (c.pc != 0x003BD768u) [[unlikely]] return; }
L_003BD768:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BD9D8; } }
L_003BD770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD778u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 64u, depth + 1u); else { c.pc = 0x003B0A80u; return; } if (c.pc != 0x003BD778u) [[unlikely]] return; }
L_003BD778:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BD9D8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BD7F0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0F0F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[2].d[0] = c.r[2].d[0] | 3855ull;
    set32(c.r[6], c.r[6].w[0] + 8092u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[1].w[0] + 18056u)));
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 11u)));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD7DCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AF(c, 228u, depth + 1u); else { c.pc = 0x003BDCC0u; return; } if (c.pc != 0x003BD7DCu) [[unlikely]] return; }
L_003BD7DC:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD7E8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C3(c, 191u, depth + 1u); else { c.pc = 0x0040DCC0u; return; } if (c.pc != 0x003BD7E8u) [[unlikely]] return; }
L_003BD7E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BD858; } }
L_003BD7F0:
    set32(c.r[2], 0u + 4u);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD810u); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AB(c, 331u, depth + 1u); else { c.pc = 0x003AFAB0u; return; } if (c.pc != 0x003BD810u) [[unlikely]] return; }
L_003BD810:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[5], c.r[18].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 18016u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0F0F0000u);
    set32(c.r[6], c.r[6].w[0] + 8092u);
    c.r[2].d[0] = c.r[2].d[0] | 3855ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD858u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 228u, depth + 1u); else { c.pc = 0x003BDCC0u; return; } if (c.pc != 0x003BD858u) [[unlikely]] return; }
L_003BD858:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD864u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 310u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x003BD864u) [[unlikely]] return; }
L_003BD864:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD870u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 327u, depth + 1u); else { c.pc = 0x003AF9F0u; return; } if (c.pc != 0x003BD870u) [[unlikely]] return; }
L_003BD870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD878u);  if (depth < kMaxDepth) unit_00AF(c, 213u, depth + 1u); else { c.pc = 0x003BDAD0u; return; } if (c.pc != 0x003BD878u) [[unlikely]] return; }
L_003BD878:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BD9D8; } }
L_003BD880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD888u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_00BE(c, 114u, depth + 1u); else { c.pc = 0x003F9DE0u; return; } if (c.pc != 0x003BD888u) [[unlikely]] return; }
L_003BD888:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BD9D8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[4], 0u + 16u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD8B4u); st8((c.r[1].w[0] + 8075u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00C2(c, 172u, depth + 1u); else { c.pc = 0x00409CF0u; return; } if (c.pc != 0x003BD8B4u) [[unlikely]] return; }
L_003BD8B4:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 11u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD8CCu); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));  if (depth < kMaxDepth) unit_00C4(c, 17u, depth + 1u); else { c.pc = 0x004102D0u; return; } if (c.pc != 0x003BD8CCu) [[unlikely]] return; }
L_003BD8CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BD9D8; } }
    c.budget -= 1;
L_003BD8D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8075u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BD9D8; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[1].w[0] + 8118u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD908u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 191u, depth + 1u); else { c.pc = 0x0040DCC0u; return; } if (c.pc != 0x003BD908u) [[unlikely]] return; }
L_003BD908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD910u); set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_00BE(c, 305u, depth + 1u); else { c.pc = 0x003FB5D0u; return; } if (c.pc != 0x003BD910u) [[unlikely]] return; }
L_003BD910:
    set32(c.r[4], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD91Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00BE(c, 154u, depth + 1u); else { c.pc = 0x003FA260u; return; } if (c.pc != 0x003BD91Cu) [[unlikely]] return; }
L_003BD91C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BD9D8; } }
    c.budget -= 1;
L_003BD928:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD930u); st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00AF(c, 229u, depth + 1u); else { c.pc = 0x003BDD00u; return; } if (c.pc != 0x003BD930u) [[unlikely]] return; }
L_003BD930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BD9D8; } }
L_003BD938:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8075u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BD9D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003BD9D8; } }
L_003BD950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD958u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B0B20u; return; } if (c.pc != 0x003BD958u) [[unlikely]] return; }
L_003BD958:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BD9C8; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[21].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[21].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD97Cu); set32(c.r[4], ld32((c.r[17].w[0] + 16u)));  if (depth < kMaxDepth) unit_00BE(c, 305u, depth + 1u); else { c.pc = 0x003FB5D0u; return; } if (c.pc != 0x003BD97Cu) [[unlikely]] return; }
L_003BD97C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_003BD9D8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003BD998; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BD9B0; } }
L_003BD998:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD9A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 154u, depth + 1u); else { c.pc = 0x003FA260u; return; } if (c.pc != 0x003BD9A4u) [[unlikely]] return; }
L_003BD9A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BD9D8; } }
    c.budget -= 1;
L_003BD9B0:
    set32(c.r[4], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD9BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 154u, depth + 1u); else { c.pc = 0x003FA260u; return; } if (c.pc != 0x003BD9BCu) [[unlikely]] return; }
L_003BD9BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BD9D8; } }
    c.budget -= 1;
L_003BD9C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD9D0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 58u, depth + 1u); else { c.pc = 0x003B07A0u; return; } if (c.pc != 0x003BD9D0u) [[unlikely]] return; }
L_003BD9D0:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    st32((c.r[2].w[0] + 104u), c.f[0]);
    c.budget -= 2;
L_003BD9D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BD9E0u);  if (depth < kMaxDepth) unit_00AB(c, 297u, depth + 1u); else { c.pc = 0x003AF580u; return; } if (c.pc != 0x003BD9E0u) [[unlikely]] return; }
L_003BD9E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003BDA10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BDA20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 2132u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 2133u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDA40u); set32(c.r[4], ld32((c.r[4].w[0] + 56u)));  if (depth < kMaxDepth) unit_00BE(c, 305u, depth + 1u); else { c.pc = 0x003FB5D0u; return; } if (c.pc != 0x003BDA40u) [[unlikely]] return; }
L_003BDA40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BDA50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 10199u)));  c.pc = t; return; }
L_003BDA60:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[5].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF590u | kUnwind; return; } [[clang::musttail]] return unit_00AB(c, 298u, depth); }
L_003BDA70:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { set32(c.r[5], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF590u | kUnwind; return; } [[clang::musttail]] return unit_00AB(c, 298u, depth); }
L_003BDA80:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { set32(c.r[5], 0u + 2u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF590u | kUnwind; return; } [[clang::musttail]] return unit_00AB(c, 298u, depth); }
L_003BDA90:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { set32(c.r[5], 0u + 3u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF590u | kUnwind; return; } [[clang::musttail]] return unit_00AB(c, 298u, depth); }
L_003BDAA0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { set32(c.r[5], 0u + 5u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF590u | kUnwind; return; } [[clang::musttail]] return unit_00AB(c, 298u, depth); }
L_003BDAB0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { set32(c.r[5], 0u + 6u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF590u | kUnwind; return; } [[clang::musttail]] return unit_00AB(c, 298u, depth); }
L_003BDAC0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { set32(c.r[5], 0u + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF590u | kUnwind; return; } [[clang::musttail]] return unit_00AB(c, 298u, depth); }
L_003BDAD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[16], c.r[16].w[0] + 8116u);
    c.r[18].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDAF8u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 292u, depth + 1u); else { c.pc = 0x003AF490u; return; } if (c.pc != 0x003BDAF8u) [[unlikely]] return; }
L_003BDAF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 8064u);
    c.budget -= 4;
L_003BDB08:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 129u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003BDB18; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_003BDB18:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 462ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BDB08u | kUnwind; return; } goto L_003BDB08; } }
    set32(c.r[2], c.r[17].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[5].w[0] + 8192u);
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47140000u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 35825ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 7));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.r[1].d[0] = c.r[2].sd[0] < 101ll ? 1ull : 0ull;
    c.budget -= 21;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 100u);  if (t) { goto L_003BDB80; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_003BDB80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDB88u);  if (depth < kMaxDepth) unit_00AF(c, 230u, depth + 1u); else { c.pc = 0x003BDD50u; return; } if (c.pc != 0x003BDB88u) [[unlikely]] return; }
L_003BDB88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDB90u); st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[18].w[0]));  if (depth < kMaxDepth) unit_00AB(c, 288u, depth + 1u); else { c.pc = 0x003AF3B0u; return; } if (c.pc != 0x003BDB90u) [[unlikely]] return; }
L_003BDB90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003BDBB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDBC0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AB(c, 292u, depth + 1u); else { c.pc = 0x003AF490u; return; } if (c.pc != 0x003BDBC0u) [[unlikely]] return; }
L_003BDBC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDBCCu); set32(c.r[16], ld32((c.r[1].w[0] + 8180u)));  if (depth < kMaxDepth) unit_00AB(c, 288u, depth + 1u); else { c.pc = 0x003AF3B0u; return; } if (c.pc != 0x003BDBCCu) [[unlikely]] return; }
L_003BDBCC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BDBE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDBF0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AB(c, 292u, depth + 1u); else { c.pc = 0x003AF490u; return; } if (c.pc != 0x003BDBF0u) [[unlikely]] return; }
L_003BDBF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDBFCu); c.r[16].d[0] = ld8((c.r[1].w[0] + 8192u));  if (depth < kMaxDepth) unit_00AB(c, 288u, depth + 1u); else { c.pc = 0x003AF3B0u; return; } if (c.pc != 0x003BDBFCu) [[unlikely]] return; }
L_003BDBFC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BDC10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003BDC68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDC34u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BDC34u) [[unlikely]] return; }
L_003BDC34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BDC48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BDCA0; } }
    c.budget -= 1;
L_003BDC48:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDC54u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 301u, depth + 1u); else { c.pc = 0x003AF5F0u; return; } if (c.pc != 0x003BDC54u) [[unlikely]] return; }
L_003BDC54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BDC68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BDCA0; } }
    c.budget -= 1;
L_003BDC68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 18016u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0F0F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 3855ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDC98u); c.r[16].d[0] = c.r[3].d[0] ^ c.r[2].d[0];  if (depth < kMaxDepth) unit_00AF(c, 218u, depth + 1u); else { c.pc = 0x003BDBB0u; return; } if (c.pc != 0x003BDC98u) [[unlikely]] return; }
L_003BDC98:
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 2;
L_003BDCA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BDCC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 8180u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[1].w[0] + 8180u), c.r[3].w[0]);  if (t) { goto L_003BDCF0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 8184u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st32((c.r[1].w[0] + 8184u), c.r[3].w[0]);
    c.budget -= 6;
L_003BDCF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BDD00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 8088u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 8092u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 8180u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[3].d[0] = c.r[4].sd[0] < 100ll ? 1ull : 0ull;  if (t) { goto L_003BDD38; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[5].sd[0] < 100ll ? 1ull : 0ull;  if (t) { goto L_003BDD38; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003BDD48; } }
    c.budget -= 1;
L_003BDD38:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 156u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 156u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003BDD48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BDD50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_003BDD68:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDD74u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BDD74u) [[unlikely]] return; }
L_003BDD74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BDEF8; } }
    set32(c.r[2], c.r[16].w[0] - 4u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006C0000u);  if (t) { goto L_003BDEF8; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 3872u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003BC000u < 16384u) { entry = entries_00AF[(t - 0x003BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003BDDA8:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDDB4u); set32(c.r[5], 0u + 18u);  if (depth < kMaxDepth) unit_00AB(c, 322u, depth + 1u); else { c.pc = 0x003AF990u; return; } if (c.pc != 0x003BDDB4u) [[unlikely]] return; }
L_003BDDB4:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDDC0u); set32(c.r[5], 0u + 19u);  if (depth < kMaxDepth) unit_00AB(c, 322u, depth + 1u); else { c.pc = 0x003AF990u; return; } if (c.pc != 0x003BDDC0u) [[unlikely]] return; }
L_003BDDC0:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDDCCu); set32(c.r[5], 0u + 31u);  if (depth < kMaxDepth) unit_00AB(c, 316u, depth + 1u); else { c.pc = 0x003AF870u; return; } if (c.pc != 0x003BDDCCu) [[unlikely]] return; }
L_003BDDCC:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDDD8u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_00AB(c, 316u, depth + 1u); else { c.pc = 0x003AF870u; return; } if (c.pc != 0x003BDDD8u) [[unlikely]] return; }
L_003BDDD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BDEF8; } }
L_003BDDE0:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDDECu); set32(c.r[5], 0u + 76u);  if (depth < kMaxDepth) unit_00AB(c, 322u, depth + 1u); else { c.pc = 0x003AF990u; return; } if (c.pc != 0x003BDDECu) [[unlikely]] return; }
L_003BDDEC:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDDF8u); set32(c.r[5], 0u + 77u);  if (depth < kMaxDepth) unit_00AB(c, 322u, depth + 1u); else { c.pc = 0x003AF990u; return; } if (c.pc != 0x003BDDF8u) [[unlikely]] return; }
L_003BDDF8:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDE04u); set32(c.r[5], 0u + 78u);  if (depth < kMaxDepth) unit_00AB(c, 322u, depth + 1u); else { c.pc = 0x003AF990u; return; } if (c.pc != 0x003BDE04u) [[unlikely]] return; }
L_003BDE04:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDE10u); set32(c.r[5], 0u + 76u);  if (depth < kMaxDepth) unit_00AB(c, 322u, depth + 1u); else { c.pc = 0x003AF990u; return; } if (c.pc != 0x003BDE10u) [[unlikely]] return; }
L_003BDE10:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDE1Cu); set32(c.r[5], 0u + 77u);  if (depth < kMaxDepth) unit_00AB(c, 316u, depth + 1u); else { c.pc = 0x003AF870u; return; } if (c.pc != 0x003BDE1Cu) [[unlikely]] return; }
L_003BDE1C:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDE28u); set32(c.r[5], 0u + 78u);  if (depth < kMaxDepth) unit_00AB(c, 316u, depth + 1u); else { c.pc = 0x003AF870u; return; } if (c.pc != 0x003BDE28u) [[unlikely]] return; }
L_003BDE28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BDEF8; } }
L_003BDE30:
    set32(c.r[17], 0u + 3u);
    c.budget -= 2;
L_003BDE38:
    set32(c.r[5], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDE44u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_00AB(c, 322u, depth + 1u); else { c.pc = 0x003AF990u; return; } if (c.pc != 0x003BDE44u) [[unlikely]] return; }
L_003BDE44:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[1].d[0] = c.r[17].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BDE38u | kUnwind; return; } goto L_003BDE38; } }
    set32(c.r[17], 0u + 19u);
    c.budget -= 1;
L_003BDE58:
    set32(c.r[5], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDE64u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_00AB(c, 322u, depth + 1u); else { c.pc = 0x003AF990u; return; } if (c.pc != 0x003BDE64u) [[unlikely]] return; }
L_003BDE64:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[1].d[0] = c.r[17].sd[0] < 26ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BDE58u | kUnwind; return; } goto L_003BDE58; } }
    set32(c.r[17], 0u + 7u);
    c.budget -= 1;
L_003BDE78:
    set32(c.r[5], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDE84u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_00AB(c, 316u, depth + 1u); else { c.pc = 0x003AF870u; return; } if (c.pc != 0x003BDE84u) [[unlikely]] return; }
L_003BDE84:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[1].d[0] = c.r[17].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BDE78u | kUnwind; return; } goto L_003BDE78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BDEF8; } }
    c.budget -= 1;
L_003BDEA0:
    set32(c.r[17], 0u + 49u);
    c.budget -= 2;
L_003BDEA8:
    set32(c.r[5], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDEB4u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_00AB(c, 322u, depth + 1u); else { c.pc = 0x003AF990u; return; } if (c.pc != 0x003BDEB4u) [[unlikely]] return; }
L_003BDEB4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[1].d[0] = c.r[17].sd[0] < 61ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BDEA8u | kUnwind; return; } goto L_003BDEA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BDEF8; } }
    c.budget -= 1;
L_003BDED0:
    set32(c.r[17], 0u + 61u);
    c.budget -= 2;
L_003BDED8:
    set32(c.r[5], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDEE4u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_00AB(c, 322u, depth + 1u); else { c.pc = 0x003AF990u; return; } if (c.pc != 0x003BDEE4u) [[unlikely]] return; }
L_003BDEE4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[1].d[0] = c.r[17].sd[0] < 69ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BDED8u | kUnwind; return; } goto L_003BDED8; } }
    c.budget -= 1;
L_003BDEF8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BDD68u | kUnwind; return; } goto L_003BDD68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDF10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BDF10u) [[unlikely]] return; }
L_003BDF10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003BDF80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDF20u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BDF20u) [[unlikely]] return; }
L_003BDF20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003BDF80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDF30u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BDF30u) [[unlikely]] return; }
L_003BDF30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003BDF80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDF40u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BDF40u) [[unlikely]] return; }
L_003BDF40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003BDF80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDF50u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BDF50u) [[unlikely]] return; }
L_003BDF50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003BDF80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDF60u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BDF60u) [[unlikely]] return; }
L_003BDF60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003BDF80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDF70u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_00AB(c, 322u, depth + 1u); else { c.pc = 0x003AF990u; return; } if (c.pc != 0x003BDF70u) [[unlikely]] return; }
L_003BDF70:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDF7Cu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00AB(c, 322u, depth + 1u); else { c.pc = 0x003AF990u; return; } if (c.pc != 0x003BDF7Cu) [[unlikely]] return; }
L_003BDF7C:
    c.budget -= 1;
L_003BDF80:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDF8Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BDF8Cu) [[unlikely]] return; }
L_003BDF8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003BDFB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDF9Cu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BDF9Cu) [[unlikely]] return; }
L_003BDF9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003BDFB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDFACu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00AB(c, 322u, depth + 1u); else { c.pc = 0x003AF990u; return; } if (c.pc != 0x003BDFACu) [[unlikely]] return; }
L_003BDFAC:
    c.budget -= 1;
L_003BDFB0:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDFBCu); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BDFBCu) [[unlikely]] return; }
L_003BDFBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_003BDFF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDFCCu); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BDFCCu) [[unlikely]] return; }
L_003BDFCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_003BDFF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDFDCu); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BDFDCu) [[unlikely]] return; }
L_003BDFDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_003BDFF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BDFECu); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BDFECu) [[unlikely]] return; }
L_003BDFEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BE008; } }
    c.budget -= 1;
L_003BDFF8:
    set32(c.r[4], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE004u); set32(c.r[5], 0u + 59u);  if (depth < kMaxDepth) unit_00AB(c, 322u, depth + 1u); else { c.pc = 0x003AF990u; return; } if (c.pc != 0x003BE004u) [[unlikely]] return; }
L_003BE004:
    c.budget -= 1;
L_003BE008:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE014u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BE014u) [[unlikely]] return; }
L_003BE014:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_003BE050; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE024u); set32(c.r[5], 0u + 15u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BE024u) [[unlikely]] return; }
L_003BE024:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_003BE050; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE034u); set32(c.r[5], 0u + 38u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BE034u) [[unlikely]] return; }
L_003BE034:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_003BE050; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE044u); set32(c.r[5], 0u + 39u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BE044u) [[unlikely]] return; }
L_003BE044:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BE060; } }
    c.budget -= 1;
L_003BE050:
    set32(c.r[4], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE05Cu); set32(c.r[5], 0u + 60u);  if (depth < kMaxDepth) unit_00AB(c, 322u, depth + 1u); else { c.pc = 0x003AF990u; return; } if (c.pc != 0x003BE05Cu) [[unlikely]] return; }
L_003BE05C:
    c.budget -= 1;
L_003BE060:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE06Cu); set32(c.r[5], 0u + 50u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BE06Cu) [[unlikely]] return; }
L_003BE06C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_003BE0E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE07Cu); set32(c.r[5], 0u + 51u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BE07Cu) [[unlikely]] return; }
L_003BE07C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_003BE0E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE08Cu); set32(c.r[5], 0u + 52u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BE08Cu) [[unlikely]] return; }
L_003BE08C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_003BE0E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE09Cu); set32(c.r[5], 0u + 53u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BE09Cu) [[unlikely]] return; }
L_003BE09C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_003BE0E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE0ACu); set32(c.r[5], 0u + 50u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BE0ACu) [[unlikely]] return; }
L_003BE0AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_003BE0E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE0BCu); set32(c.r[5], 0u + 51u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BE0BCu) [[unlikely]] return; }
L_003BE0BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_003BE0E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE0CCu); set32(c.r[5], 0u + 52u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BE0CCu) [[unlikely]] return; }
L_003BE0CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_003BE0E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE0DCu); set32(c.r[5], 0u + 53u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BE0DCu) [[unlikely]] return; }
L_003BE0DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BE0F8; } }
    c.budget -= 1;
L_003BE0E8:
    set32(c.r[4], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE0F4u); set32(c.r[5], 0u + 61u);  if (depth < kMaxDepth) unit_00AB(c, 322u, depth + 1u); else { c.pc = 0x003AF990u; return; } if (c.pc != 0x003BE0F4u) [[unlikely]] return; }
L_003BE0F4:
    c.budget -= 1;
L_003BE0F8:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE104u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BE104u) [[unlikely]] return; }
L_003BE104:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_003BE11C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE118u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BE118u) [[unlikely]] return; }
L_003BE118:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003BE11C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_003BE130; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE12Cu); set32(c.r[5], 0u + 36u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BE12Cu) [[unlikely]] return; }
L_003BE12C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003BE130:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] << 56;  if (t) { goto L_003BE14C; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE144u); set32(c.r[5], 0u + 37u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BE144u) [[unlikely]] return; }
L_003BE144:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.budget -= 2;
L_003BE14C:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 11u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE15Cu); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BE15Cu) [[unlikely]] return; }
L_003BE15C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[2].d[0] << 56;  if (t) { goto L_003BE17C; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE174u); set32(c.r[5], 0u + 35u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BE174u) [[unlikely]] return; }
L_003BE174:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.budget -= 2;
L_003BE17C:
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);  if (t) { goto L_003BE1A8; } }
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 9u);  if (t) { goto L_003BE1A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE1A4u); set32(c.r[5], 0u + 62u);  if (depth < kMaxDepth) unit_00AB(c, 322u, depth + 1u); else { c.pc = 0x003AF990u; return; } if (c.pc != 0x003BE1A4u) [[unlikely]] return; }
L_003BE1A4:
    c.budget -= 1;
L_003BE1A8:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE1B4u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BE1B4u) [[unlikely]] return; }
L_003BE1B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_003BE1F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE1C4u); set32(c.r[5], 0u + 15u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BE1C4u) [[unlikely]] return; }
L_003BE1C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_003BE1F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE1D4u); set32(c.r[5], 0u + 38u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BE1D4u) [[unlikely]] return; }
L_003BE1D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_003BE1F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE1E4u); set32(c.r[5], 0u + 39u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BE1E4u) [[unlikely]] return; }
L_003BE1E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 9u);  if (t) { goto L_003BE1F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE1F4u); set32(c.r[5], 0u + 63u);  if (depth < kMaxDepth) unit_00AB(c, 322u, depth + 1u); else { c.pc = 0x003AF990u; return; } if (c.pc != 0x003BE1F4u) [[unlikely]] return; }
L_003BE1F4:
    c.budget -= 1;
L_003BE1F8:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE204u); set32(c.r[5], 0u + 75u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BE204u) [[unlikely]] return; }
L_003BE204:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_003BE220; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE214u); set32(c.r[5], 0u + 75u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BE214u) [[unlikely]] return; }
L_003BE214:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BE230; } }
    c.budget -= 1;
L_003BE220:
    set32(c.r[4], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE22Cu); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_00AB(c, 322u, depth + 1u); else { c.pc = 0x003AF990u; return; } if (c.pc != 0x003BE22Cu) [[unlikely]] return; }
L_003BE22C:
    c.budget -= 1;
L_003BE230:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE23Cu); set32(c.r[5], 0u + 26u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BE23Cu) [[unlikely]] return; }
L_003BE23C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_003BE258; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE24Cu); set32(c.r[5], 0u + 39u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BE24Cu) [[unlikely]] return; }
L_003BE24C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BE268; } }
    c.budget -= 1;
L_003BE258:
    set32(c.r[4], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE264u); set32(c.r[5], 0u + 65u);  if (depth < kMaxDepth) unit_00AB(c, 322u, depth + 1u); else { c.pc = 0x003AF990u; return; } if (c.pc != 0x003BE264u) [[unlikely]] return; }
L_003BE264:
    c.budget -= 1;
L_003BE268:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE274u); set32(c.r[5], 0u + 73u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BE274u) [[unlikely]] return; }
L_003BE274:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_003BE290; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE284u); set32(c.r[5], 0u + 73u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BE284u) [[unlikely]] return; }
L_003BE284:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BE2A0; } }
    c.budget -= 1;
L_003BE290:
    set32(c.r[4], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE29Cu); set32(c.r[5], 0u + 66u);  if (depth < kMaxDepth) unit_00AB(c, 322u, depth + 1u); else { c.pc = 0x003AF990u; return; } if (c.pc != 0x003BE29Cu) [[unlikely]] return; }
L_003BE29C:
    c.budget -= 1;
L_003BE2A0:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[17].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003BE2D8; } }
L_003BE2B0:
    set32(c.r[5], c.r[17].w[0] + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE2BCu); set32(c.r[4], 0u + 9u);  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BE2BCu) [[unlikely]] return; }
L_003BE2BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BE2C8; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003BE2C8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BE2B0u | kUnwind; return; } goto L_003BE2B0; } }
L_003BE2D8:
    c.r[2].d[0] = c.r[16].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BE308; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BE2E8:
    set32(c.r[5], c.r[16].w[0] + 35u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE2F4u); set32(c.r[4], 0u + 9u);  if (depth < kMaxDepth) unit_00AB(c, 322u, depth + 1u); else { c.pc = 0x003AF990u; return; } if (c.pc != 0x003BE2F4u) [[unlikely]] return; }
L_003BE2F4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 23ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BE2E8u | kUnwind; return; } goto L_003BE2E8; } }
    c.budget -= 1;
L_003BE308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE310u);  if (depth < kMaxDepth) unit_00AF(c, 221u, depth + 1u); else { c.pc = 0x003BDBE0u; return; } if (c.pc != 0x003BE310u) [[unlikely]] return; }
L_003BE310:
    c.r[3].d[0] = c.r[2].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 5u);  if (t) { goto L_003BE378; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE324u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00AB(c, 322u, depth + 1u); else { c.pc = 0x003AF990u; return; } if (c.pc != 0x003BE324u) [[unlikely]] return; }
L_003BE324:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE330u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 322u, depth + 1u); else { c.pc = 0x003AF990u; return; } if (c.pc != 0x003BE330u) [[unlikely]] return; }
L_003BE330:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE33Cu); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_00AB(c, 316u, depth + 1u); else { c.pc = 0x003AF870u; return; } if (c.pc != 0x003BE33Cu) [[unlikely]] return; }
L_003BE33C:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE348u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_00AB(c, 316u, depth + 1u); else { c.pc = 0x003AF870u; return; } if (c.pc != 0x003BE348u) [[unlikely]] return; }
L_003BE348:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE354u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_00AB(c, 316u, depth + 1u); else { c.pc = 0x003AF870u; return; } if (c.pc != 0x003BE354u) [[unlikely]] return; }
L_003BE354:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE360u); set32(c.r[5], 0u + 17u);  if (depth < kMaxDepth) unit_00AB(c, 316u, depth + 1u); else { c.pc = 0x003AF870u; return; } if (c.pc != 0x003BE360u) [[unlikely]] return; }
L_003BE360:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE36Cu); set32(c.r[5], 0u + 21u);  if (depth < kMaxDepth) unit_00AB(c, 316u, depth + 1u); else { c.pc = 0x003AF870u; return; } if (c.pc != 0x003BE36Cu) [[unlikely]] return; }
L_003BE36C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BE3C0; } }
    c.budget -= 1;
L_003BE378:
    c.r[3].d[0] = c.r[2].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 5u);  if (t) { goto L_003BE3C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE38Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_00AB(c, 322u, depth + 1u); else { c.pc = 0x003AF990u; return; } if (c.pc != 0x003BE38Cu) [[unlikely]] return; }
L_003BE38C:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE398u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_00AB(c, 316u, depth + 1u); else { c.pc = 0x003AF870u; return; } if (c.pc != 0x003BE398u) [[unlikely]] return; }
L_003BE398:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE3A4u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_00AB(c, 316u, depth + 1u); else { c.pc = 0x003AF870u; return; } if (c.pc != 0x003BE3A4u) [[unlikely]] return; }
L_003BE3A4:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE3B0u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_00AB(c, 316u, depth + 1u); else { c.pc = 0x003AF870u; return; } if (c.pc != 0x003BE3B0u) [[unlikely]] return; }
L_003BE3B0:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE3BCu); set32(c.r[5], 0u + 15u);  if (depth < kMaxDepth) unit_00AB(c, 316u, depth + 1u); else { c.pc = 0x003AF870u; return; } if (c.pc != 0x003BE3BCu) [[unlikely]] return; }
L_003BE3BC:
    c.budget -= 1;
L_003BE3C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BE3E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 8188u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 13u)));
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[6], ld32((c.r[1].w[0] + 8184u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003BE4B0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BE4B0; } }
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BE4B0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 20992u);
    c.budget -= 3;
L_003BE430:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BE450; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BE430u | kUnwind; return; } goto L_003BE430; } }
L_003BE450:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 20992u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 20948u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 9u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[6], c.r[2].w[0] - 1u);
    set32(c.r[7], ld32((c.r[1].w[0] + 20968u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE494u); set32(c.r[5], c.r[3].w[0] + 4u);  if (depth < kMaxDepth) unit_00AF(c, 356u, depth + 1u); else { c.pc = 0x003BE8D0u; return; } if (c.pc != 0x003BE494u) [[unlikely]] return; }
L_003BE494:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003BE528; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE4A4u);  if (depth < kMaxDepth) unit_00AF(c, 335u, depth + 1u); else { c.pc = 0x003BE540u; return; } if (c.pc != 0x003BE4A4u) [[unlikely]] return; }
L_003BE4A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BE528; } }
    c.budget -= 1;
L_003BE4B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 21024u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE4C8u); set32(c.r[17], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x003BE4C8u) [[unlikely]] return; }
L_003BE4C8:
    set32(c.r[4], 0u + 100u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    mmi::divu(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_003BE500; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE4F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 335u, depth + 1u); else { c.pc = 0x003BE540u; return; } if (c.pc != 0x003BE4F4u) [[unlikely]] return; }
L_003BE4F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BE528; } }
    c.budget -= 1;
L_003BE500:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    set32(c.r[4], c.r[4].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_003BE520; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE518u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 339u, depth + 1u); else { c.pc = 0x003BE5F0u; return; } if (c.pc != 0x003BE518u) [[unlikely]] return; }
L_003BE518:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BE528; } }
L_003BE520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE528u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 348u, depth + 1u); else { c.pc = 0x003BE790u; return; } if (c.pc != 0x003BE528u) [[unlikely]] return; }
L_003BE528:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BE540:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 21272u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 9u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[16], c.r[2].w[0] + 1u);
    c.budget -= 16;
L_003BE580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE588u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x003BE588u) [[unlikely]] return; }
L_003BE588:
    mmi::divu(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[18], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[16].w[0] + c.r[18].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE5ACu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00AB(c, 304u, depth + 1u); else { c.pc = 0x003AF670u; return; } if (c.pc != 0x003BE5ACu) [[unlikely]] return; }
L_003BE5AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BE580u | kUnwind; return; } goto L_003BE580; } }
    set32(c.r[16], c.r[16].w[0] + c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    st8((c.r[17].w[0] + 11u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003BE5F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 21184u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 13u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE620u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x003BE620u) [[unlikely]] return; }
L_003BE620:
    set32(c.r[3], 0u + 100u);
    mmi::divu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 6;
L_003BE638:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003BE668; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 13u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[2].w[0] + 21184u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_003BE680; } }
    c.budget -= 1;
L_003BE668:
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_003BE680; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BE638u | kUnwind; return; } goto L_003BE638; } }
    c.budget -= 1;
L_003BE680:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[1].d[0] = c.r[4].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));  if (t) { goto L_003BE700; } }
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 9u)));  if (t) { goto L_003BE6AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[2].d[0] | 16960ull;  if (t) { goto L_003BE6C4; } }
L_003BE6AC:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[2].w[0] + 20928u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[6], c.r[2].w[0] - 1u);
    c.budget -= 6;
L_003BE6C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 20928u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE6E8u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 356u, depth + 1u); else { c.pc = 0x003BE8D0u; return; } if (c.pc != 0x003BE6E8u) [[unlikely]] return; }
L_003BE6E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003BE770; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE6F8u);  if (depth < kMaxDepth) unit_00AF(c, 335u, depth + 1u); else { c.pc = 0x003BE540u; return; } if (c.pc != 0x003BE6F8u) [[unlikely]] return; }
L_003BE6F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BE770; } }
L_003BE700:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);  if (t) { goto L_003BE740; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[2].d[0] | 16960ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE728u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 356u, depth + 1u); else { c.pc = 0x003BE8D0u; return; } if (c.pc != 0x003BE728u) [[unlikely]] return; }
L_003BE728:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003BE770; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE738u);  if (depth < kMaxDepth) unit_00AF(c, 335u, depth + 1u); else { c.pc = 0x003BE540u; return; } if (c.pc != 0x003BE738u) [[unlikely]] return; }
L_003BE738:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BE770; } }
L_003BE740:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 9u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 1u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE760u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_00AF(c, 356u, depth + 1u); else { c.pc = 0x003BE8D0u; return; } if (c.pc != 0x003BE760u) [[unlikely]] return; }
L_003BE760:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003BE770; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE770u);  if (depth < kMaxDepth) unit_00AF(c, 348u, depth + 1u); else { c.pc = 0x003BE790u; return; } if (c.pc != 0x003BE770u) [[unlikely]] return; }
L_003BE770:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BE790:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[8].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 9u)));
    set32(c.r[9], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE7C0u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_00AF(c, 356u, depth + 1u); else { c.pc = 0x003BE8D0u; return; } if (c.pc != 0x003BE7C0u) [[unlikely]] return; }
L_003BE7C0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 156u));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003BE7F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE7D8u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x003BE7D8u) [[unlikely]] return; }
L_003BE7D8:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(33ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003BE7F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE7ECu);  if (depth < kMaxDepth) unit_00AF(c, 339u, depth + 1u); else { c.pc = 0x003BE5F0u; return; } if (c.pc != 0x003BE7ECu) [[unlikely]] return; }
L_003BE7EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BE830; } }
    c.budget -= 1;
L_003BE7F8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003BE830; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 9u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE820u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_00AF(c, 356u, depth + 1u); else { c.pc = 0x003BE8D0u; return; } if (c.pc != 0x003BE820u) [[unlikely]] return; }
L_003BE820:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003BE830; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE830u);  if (depth < kMaxDepth) unit_00AF(c, 335u, depth + 1u); else { c.pc = 0x003BE540u; return; } if (c.pc != 0x003BE830u) [[unlikely]] return; }
L_003BE830:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BE850:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 9u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[2].w[0] + 21336u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[1].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[2].w[0] + 1u);  if (t) { goto L_003BE8C0; } }
    c.budget -= 1;
L_003BE880:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[7], c.r[7].w[0] + 2u);  if (t) { goto L_003BE8A8; } }
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_003BE8A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003BE8C8; } }
L_003BE8A8:
    set32(c.r[2], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[2].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.r[2].d[0] = c.r[8].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BE880u | kUnwind; return; } goto L_003BE880; } }
L_003BE8C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003BE8C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BE8D0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    set32(c.r[3], c.r[5].w[0] << 2);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    set32(c.r[3], c.r[3].w[0] << 1);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[30].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st32((c.r[29].w[0] + 204u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 28208u);
    st32((c.r[29].w[0] + 200u), c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 196u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 26;
L_003BE938:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[20], 0u + 1u);
    set32(c.r[18], c.r[18].w[0] + 18020u);
    set32(c.r[17], c.r[17].w[0] + 20809u);
    set32(c.r[23], c.r[2].w[0] + 1u);
    c.budget -= 8;
L_003BE958:
    c.r[2].d[0] = ld8((c.r[23].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BEA58; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003BEA58; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BE978:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE984u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 304u, depth + 1u); else { c.pc = 0x003AF670u; return; } if (c.pc != 0x003BE984u) [[unlikely]] return; }
L_003BE984:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BEA40; } }
    c.budget -= 2;
    { const bool t = c.r[22].sd[0] < 0;  if (t) { goto L_003BEA10; } }
    c.budget -= 2;
    { const bool t = c.r[22].sd[0] <= 0; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003BE9B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BE9A4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BE9A4u) [[unlikely]] return; }
L_003BE9A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BEA10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BEA40; } }
    c.budget -= 1;
L_003BE9B8:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_003BE9F8; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0F0F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 3855ull;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    set32(c.r[2], ld32((c.r[29].w[0] + 200u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003BEA40; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BEA40; } }
L_003BE9F8:
    set32(c.r[4], ld32((c.r[29].w[0] + 204u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEA08u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 354u, depth + 1u); else { c.pc = 0x003BE850u; return; } if (c.pc != 0x003BEA08u) [[unlikely]] return; }
L_003BEA08:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[2].d[0];  if (t) { goto L_003BEA40; } }
L_003BEA10:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[30].d[0] != c.r[2].d[0];  if (t) { goto L_003BEA38; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[20].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 11u), static_cast<std::uint8_t>(c.r[19].w[0]));  if (t) { goto L_003BEAA8; } }
    c.budget -= 1;
L_003BEA38:
    set32(c.r[30], c.r[30].w[0] + 1u);
    c.budget -= 2;
L_003BEA40:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BE978u | kUnwind; return; } goto L_003BE978; } }
    c.budget -= 1;
L_003BEA58:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 10ll ? 1ull : 0ull;
    set32(c.r[23], c.r[23].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BE958u | kUnwind; return; } goto L_003BE958; } }
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BEA80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BEAA8; } }
L_003BEA80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEA88u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x003BEA88u) [[unlikely]] return; }
L_003BEA88:
    mmi::divu(c, 0, c.r[2].w[0], c.r[30].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[30].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 176u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BE938u | kUnwind; return; } goto L_003BE938; } }
    c.budget -= 1;
L_003BEAA8:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_003BEAE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 11u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEAFCu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));  if (depth < kMaxDepth) unit_00AB(c, 298u, depth + 1u); else { c.pc = 0x003AF590u; return; } if (c.pc != 0x003BEAFCu) [[unlikely]] return; }
L_003BEAFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BEB10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BEB88; } }
    c.budget -= 1;
L_003BEB10:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20880u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[5], c.r[5].w[0] + 20880u);  if (t) { goto L_003BEB70; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.budget -= 1;
L_003BEB30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { goto L_003BEB60; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 11u)));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_003BEB60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003BEB70; } }
L_003BEB60:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BEB30u | kUnwind; return; } goto L_003BEB30; } }
    c.budget -= 1;
L_003BEB70:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEB80u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x003BEB80u) [[unlikely]] return; }
L_003BEB80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BEB90; } }
L_003BEB88:
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003BEB90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BEBA0:
    set32(c.r[4], c.r[4].w[0] + 2132u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[2], c.r[2].w[0] + 25328u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003BC000u < 16384u) { entry = entries_00AF[(t - 0x003BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003BEBD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003BED38; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003BECE0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BEC10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BEDA0; } }
    c.budget -= 1;
L_003BEC10:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEC20u); set32(c.r[4], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_00BE(c, 307u, depth + 1u); else { c.pc = 0x003FB600u; return; } if (c.pc != 0x003BEC20u) [[unlikely]] return; }
L_003BEC20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEC28u); set32(c.r[4], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_00BE(c, 316u, depth + 1u); else { c.pc = 0x003FB900u; return; } if (c.pc != 0x003BEC28u) [[unlikely]] return; }
L_003BEC28:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 13u)));
    set32(c.r[5], c.r[5].w[0] + 18016u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 13u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 7));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].sd[0] < 55ll ? 1ull : 0ull;
    c.budget -= 27;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BECC4; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 13u)));
    set32(c.r[2], c.r[2].w[0] + 13136u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 12;
L_003BECC4:
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u - 1u);
    st8((c.r[16].w[0] + 31u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 30u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 29u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
L_003BECE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BECE8u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_00BE(c, 114u, depth + 1u); else { c.pc = 0x003F9DE0u; return; } if (c.pc != 0x003BECE8u) [[unlikely]] return; }
L_003BECE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BEDA0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] + 8120u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 32u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8068u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BED1Cu); set32(c.r[4], c.r[2].w[0] + 2u);  if (depth < kMaxDepth) unit_00C2(c, 172u, depth + 1u); else { c.pc = 0x00409CF0u; return; } if (c.pc != 0x003BED1Cu) [[unlikely]] return; }
L_003BED1C:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BED2Cu); set32(c.r[5], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_00C2(c, 348u, depth + 1u); else { c.pc = 0x0040B5F0u; return; } if (c.pc != 0x003BED2Cu) [[unlikely]] return; }
L_003BED2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BEDA0; } }
    c.budget -= 1;
L_003BED38:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003BED78; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[1].w[0] + 8120u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_003BEDA0; } }
    c.budget -= 1;
L_003BED78:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 32u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[2], ld32((c.r[1].w[0] + 8120u)));
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 104u), c.f[0]);
    c.budget -= 10;
L_003BEDA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEDA8u);  if (depth < kMaxDepth) unit_00BE(c, 258u, depth + 1u); else { c.pc = 0x003FB360u; return; } if (c.pc != 0x003BEDA8u) [[unlikely]] return; }
L_003BEDA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEDB0u);  if (depth < kMaxDepth) unit_00BE(c, 266u, depth + 1u); else { c.pc = 0x003FB3B0u; return; } if (c.pc != 0x003BEDB0u) [[unlikely]] return; }
L_003BEDB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BEDD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 25344u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEDF8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BEDF8u) [[unlikely]] return; }
L_003BEDF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BEE10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEE28u); set32(c.r[4], ld32((c.r[1].w[0] + 8120u)));  if (depth < kMaxDepth) unit_00BE(c, 305u, depth + 1u); else { c.pc = 0x003FB5D0u; return; } if (c.pc != 0x003BEE28u) [[unlikely]] return; }
L_003BEE28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEE30u);  if (depth < kMaxDepth) unit_00BE(c, 258u, depth + 1u); else { c.pc = 0x003FB360u; return; } if (c.pc != 0x003BEE30u) [[unlikely]] return; }
L_003BEE30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEE38u);  if (depth < kMaxDepth) unit_00BE(c, 266u, depth + 1u); else { c.pc = 0x003FB3B0u; return; } if (c.pc != 0x003BEE38u) [[unlikely]] return; }
L_003BEE38:
    set32(c.r[4], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEE44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 154u, depth + 1u); else { c.pc = 0x003FA260u; return; } if (c.pc != 0x003BEE44u) [[unlikely]] return; }
L_003BEE44:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BEE60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 25360u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEE88u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BEE88u) [[unlikely]] return; }
L_003BEE88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEE90u);  if (depth < kMaxDepth) unit_00BE(c, 258u, depth + 1u); else { c.pc = 0x003FB360u; return; } if (c.pc != 0x003BEE90u) [[unlikely]] return; }
L_003BEE90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEE98u);  if (depth < kMaxDepth) unit_00BE(c, 266u, depth + 1u); else { c.pc = 0x003FB3B0u; return; } if (c.pc != 0x003BEE98u) [[unlikely]] return; }
L_003BEE98:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BEEB0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_003BEEC0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEEECu); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00C2(c, 350u, depth + 1u); else { c.pc = 0x0040B6C0u; return; } if (c.pc != 0x003BEEECu) [[unlikely]] return; }
L_003BEEEC:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 3u));
    set32(c.r[3], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003BF1D8; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 9u);  if (t) { goto L_003BF1B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003BF198; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003BF180; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003BF150; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BEF38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BF230; } }
    c.budget -= 1;
L_003BEF38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEF40u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x003BEF40u) [[unlikely]] return; }
L_003BEF40:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BEF90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEF58u);  if (depth < kMaxDepth) unit_00AB(c, 337u, depth + 1u); else { c.pc = 0x003AFBD0u; return; } if (c.pc != 0x003BEF58u) [[unlikely]] return; }
L_003BEF58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BEF90; } }
    set32(c.r[2], 0u + 9u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEF74u); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003BEF74u) [[unlikely]] return; }
L_003BEF74:
    set32(c.r[4], 0u + 15u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEF80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 172u, depth + 1u); else { c.pc = 0x00409CF0u; return; } if (c.pc != 0x003BEF80u) [[unlikely]] return; }
L_003BEF80:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 8075u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003BF230; } }
L_003BEF90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEF98u);  if (depth < kMaxDepth) unit_00BE(c, 240u, depth + 1u); else { c.pc = 0x003FB040u; return; } if (c.pc != 0x003BEF98u) [[unlikely]] return; }
L_003BEF98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BF0C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEFA8u);  if (depth < kMaxDepth) unit_00AB(c, 292u, depth + 1u); else { c.pc = 0x003AF490u; return; } if (c.pc != 0x003BEFA8u) [[unlikely]] return; }
L_003BEFA8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 18u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[4], c.r[4].w[0] + 20848u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 13u)));
    set32(c.r[2], c.r[2].w[0] + 8064u);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 129u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BEFE0u); c.r[19].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AB(c, 288u, depth + 1u); else { c.pc = 0x003AF3B0u; return; } if (c.pc != 0x003BEFE0u) [[unlikely]] return; }
L_003BEFE0:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0;  if (t) { goto L_003BF0B8; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 3u));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 165u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF000u); st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003BF000u) [[unlikely]] return; }
L_003BF000:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF00Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x003BF00Cu) [[unlikely]] return; }
L_003BF00C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 18u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 13u)));
    set32(c.r[3], c.r[3].w[0] + 18016u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[4].d[0] = c.r[4].d[0] & 127ull;
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 18u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 13u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 7));
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    c.r[1].d[0] = c.r[4].sd[0] < 55ll ? 1ull : 0ull;
    c.budget -= 27;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003BF0AC; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 18u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 13u)));
    set32(c.r[4], c.r[4].w[0] + 13136u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));  if (t) { goto L_003BF0B0; } }
L_003BF0AC:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BF0B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003BF230; } }
L_003BF0B8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF0C4u); set32(c.r[5], 0u + 171u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003BF0C4u) [[unlikely]] return; }
L_003BF0C4:
    c.budget -= 1;
L_003BF0C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF0D0u);  if (depth < kMaxDepth) unit_00BE(c, 241u, depth + 1u); else { c.pc = 0x003FB050u; return; } if (c.pc != 0x003BF0D0u) [[unlikely]] return; }
L_003BF0D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BF100; } }
    set32(c.r[2], 0u + 10u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF0ECu); set32(c.r[5], 0u + 167u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003BF0ECu) [[unlikely]] return; }
L_003BF0EC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF0F8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x003BF0F8u) [[unlikely]] return; }
L_003BF0F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BF230; } }
L_003BF100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF108u); set32(c.r[4], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00BE(c, 311u, depth + 1u); else { c.pc = 0x003FB660u; return; } if (c.pc != 0x003BF108u) [[unlikely]] return; }
L_003BF108:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BF140; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF11Cu); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00C2(c, 348u, depth + 1u); else { c.pc = 0x0040B5F0u; return; } if (c.pc != 0x003BF11Cu) [[unlikely]] return; }
L_003BF11C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF128u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x003BF128u) [[unlikely]] return; }
L_003BF128:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF134u); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003BF134u) [[unlikely]] return; }
L_003BF134:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BF230; } }
    c.budget -= 1;
L_003BF140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF148u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 62u, depth + 1u); else { c.pc = 0x003B0A00u; return; } if (c.pc != 0x003BF148u) [[unlikely]] return; }
L_003BF148:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BF230; } }
L_003BF150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF158u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 64u, depth + 1u); else { c.pc = 0x003B0A80u; return; } if (c.pc != 0x003BF158u) [[unlikely]] return; }
L_003BF158:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BF230; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 3u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 16u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF178u); st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x003BF178u) [[unlikely]] return; }
L_003BF178:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BF230; } }
L_003BF180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF188u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x003BF188u) [[unlikely]] return; }
L_003BF188:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003BF230; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003BF230; } }
L_003BF198:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8075u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BF230; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003BF230; } }
L_003BF1B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF1B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B0B20u; return; } if (c.pc != 0x003BF1B8u) [[unlikely]] return; }
L_003BF1B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BF230; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 3u));
    set32(c.r[3], 0u + 16u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 32u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003BF230; } }
L_003BF1D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[18].w[0] + 32u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[3], 0u + 3u);  if (t) { goto L_003BF208; } }
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 104u), 0u);  if (t) { goto L_003BF230; } }
    c.budget -= 1;
L_003BF208:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41800000u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.f[0] = c.r[4].w[0];
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 104u), c.f[0]);
    c.budget -= 10;
L_003BF230:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003BF250:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF264u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x003BF264u) [[unlikely]] return; }
L_003BF264:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], 0u + 4u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8068u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003BF280; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003BF288; } }
L_003BF280:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003BF288:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 13u)));
    st8((c.r[16].w[0] + 21u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BF2B0:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_003BF2D0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[2], c.r[2].w[0] + 25376u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003BC000u < 16384u) { entry = entries_00AF[(t - 0x003BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003BF2F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_003BF528; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003BF468; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003BF3C0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003BF368; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003BF340; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BF558; } }
    c.budget -= 1;
L_003BF340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF348u);  if (depth < kMaxDepth) unit_0045(c, 81u, depth + 1u); else { c.pc = 0x00214AA0u; return; } if (c.pc != 0x003BF348u) [[unlikely]] return; }
L_003BF348:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003BF558; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003BF558; } }
    c.budget -= 1;
L_003BF368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF370u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x003BF370u) [[unlikely]] return; }
L_003BF370:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BF558; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF394u); st8((c.r[2].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x003BF394u) [[unlikely]] return; }
L_003BF394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF39Cu);  if (depth < kMaxDepth) unit_005B(c, 61u, depth + 1u); else { c.pc = 0x0026C8B0u; return; } if (c.pc != 0x003BF39Cu) [[unlikely]] return; }
L_003BF39C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF3A4u);  if (depth < kMaxDepth) unit_005B(c, 64u, depth + 1u); else { c.pc = 0x0026C960u; return; } if (c.pc != 0x003BF3A4u) [[unlikely]] return; }
L_003BF3A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF3ACu);  if (depth < kMaxDepth) unit_00BE(c, 200u, depth + 1u); else { c.pc = 0x003FA7C0u; return; } if (c.pc != 0x003BF3ACu) [[unlikely]] return; }
L_003BF3AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF3B4u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x003BF3B4u) [[unlikely]] return; }
L_003BF3B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF3BCu);  if (depth < kMaxDepth) unit_000B(c, 24u, depth + 1u); else { c.pc = 0x0012C850u; return; } if (c.pc != 0x003BF3BCu) [[unlikely]] return; }
L_003BF3BC:
    c.budget -= 1;
L_003BF3C0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + 14498u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[16].w[0] + 22u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF3F4u); st8((c.r[16].w[0] + 23u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_006A(c, 299u, depth + 1u); else { c.pc = 0x002ABD80u; return; } if (c.pc != 0x003BF3F4u) [[unlikely]] return; }
L_003BF3F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF3FCu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_006A(c, 299u, depth + 1u); else { c.pc = 0x002ABD80u; return; } if (c.pc != 0x003BF3FCu) [[unlikely]] return; }
L_003BF3FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF404u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_006A(c, 299u, depth + 1u); else { c.pc = 0x002ABD80u; return; } if (c.pc != 0x003BF404u) [[unlikely]] return; }
L_003BF404:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF40Cu); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_006A(c, 299u, depth + 1u); else { c.pc = 0x002ABD80u; return; } if (c.pc != 0x003BF40Cu) [[unlikely]] return; }
L_003BF40C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF414u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006A(c, 299u, depth + 1u); else { c.pc = 0x002ABD80u; return; } if (c.pc != 0x003BF414u) [[unlikely]] return; }
L_003BF414:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF41Cu); set32(c.r[4], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_00BE(c, 320u, depth + 1u); else { c.pc = 0x003FB9C0u; return; } if (c.pc != 0x003BF41Cu) [[unlikely]] return; }
L_003BF41C:
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] - 27856u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF440u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00BE(c, 244u, depth + 1u); else { c.pc = 0x003FB120u; return; } if (c.pc != 0x003BF440u) [[unlikely]] return; }
L_003BF440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF448u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00BE(c, 211u, depth + 1u); else { c.pc = 0x003FA900u; return; } if (c.pc != 0x003BF448u) [[unlikely]] return; }
L_003BF448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF450u);  if (depth < kMaxDepth) unit_004F(c, 61u, depth + 1u); else { c.pc = 0x0023D0F0u; return; } if (c.pc != 0x003BF450u) [[unlikely]] return; }
L_003BF450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF458u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00BE(c, 160u, depth + 1u); else { c.pc = 0x003FA3A0u; return; } if (c.pc != 0x003BF458u) [[unlikely]] return; }
L_003BF458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF460u);  if (depth < kMaxDepth) unit_00BE(c, 208u, depth + 1u); else { c.pc = 0x003FA8B0u; return; } if (c.pc != 0x003BF460u) [[unlikely]] return; }
L_003BF460:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BF558; } }
L_003BF468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF470u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x003BF470u) [[unlikely]] return; }
L_003BF470:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BF558; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF480u);  if (depth < kMaxDepth) unit_00BE(c, 174u, depth + 1u); else { c.pc = 0x003FA530u; return; } if (c.pc != 0x003BF480u) [[unlikely]] return; }
L_003BF480:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BF558; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF4A0u); st8((c.r[2].w[0] + 54u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000B(c, 35u, depth + 1u); else { c.pc = 0x0012CB40u; return; } if (c.pc != 0x003BF4A0u) [[unlikely]] return; }
L_003BF4A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF4A8u);  if (depth < kMaxDepth) unit_0044(c, 432u, depth + 1u); else { c.pc = 0x00213EC0u; return; } if (c.pc != 0x003BF4A8u) [[unlikely]] return; }
L_003BF4A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF4B0u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00BE(c, 250u, depth + 1u); else { c.pc = 0x003FB2D0u; return; } if (c.pc != 0x003BF4B0u) [[unlikely]] return; }
L_003BF4B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8068u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF4C0u); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 13u)));  if (depth < kMaxDepth) unit_00C0(c, 318u, depth + 1u); else { c.pc = 0x00403830u; return; } if (c.pc != 0x003BF4C0u) [[unlikely]] return; }
L_003BF4C0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF4CCu); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x003BF4CCu) [[unlikely]] return; }
L_003BF4CC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003BF508; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    st8((c.r[2].w[0] + 767u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF4FCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x003BF4FCu) [[unlikely]] return; }
L_003BF4FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BF558; } }
    c.budget -= 1;
L_003BF508:
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003BF558; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], 0u - 400u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 5280u), c.r[4].w[0]);  if (t) { goto L_003BF558; } }
    c.budget -= 1;
L_003BF528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF530u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x003BF530u) [[unlikely]] return; }
L_003BF530:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BF548; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_003BF548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF550u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00BE(c, 269u, depth + 1u); else { c.pc = 0x003FB3E0u; return; } if (c.pc != 0x003BF550u) [[unlikely]] return; }
L_003BF550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF558u);  if (depth < kMaxDepth) unit_00BE(c, 301u, depth + 1u); else { c.pc = 0x003FB590u; return; } if (c.pc != 0x003BF558u) [[unlikely]] return; }
L_003BF558:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BF570:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003BF6D0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003BF6A8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_003BF680; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003BF5B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BF6F8; } }
L_003BF5B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF5B8u); c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x003BF5B8u) [[unlikely]] return; }
L_003BF5B8:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BF618; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF5D0u);  if (depth < kMaxDepth) unit_00AB(c, 337u, depth + 1u); else { c.pc = 0x003AFBD0u; return; } if (c.pc != 0x003BF5D0u) [[unlikely]] return; }
L_003BF5D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BF618; } }
    set32(c.r[2], 0u + 3u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 165u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 20u));
    c.r[2].d[0] = c.r[2].d[0] & 253ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF5F8u); st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003BF5F8u) [[unlikely]] return; }
L_003BF5F8:
    set32(c.r[4], 0u + 15u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF604u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 172u, depth + 1u); else { c.pc = 0x00409CF0u; return; } if (c.pc != 0x003BF604u) [[unlikely]] return; }
L_003BF604:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 8075u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003BF6F8; } }
    c.budget -= 1;
L_003BF618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF620u);  if (depth < kMaxDepth) unit_00BE(c, 241u, depth + 1u); else { c.pc = 0x003FB050u; return; } if (c.pc != 0x003BF620u) [[unlikely]] return; }
L_003BF620:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003BF650; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF630u); set32(c.r[5], 0u + 167u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003BF630u) [[unlikely]] return; }
L_003BF630:
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], 0u + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF644u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x003BF644u) [[unlikely]] return; }
L_003BF644:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BF6F8; } }
    c.budget -= 1;
L_003BF650:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 107u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF664u); st8((c.r[2].w[0] + 77u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_00AF(c, 465u, depth + 1u); else { c.pc = 0x003BF720u; return; } if (c.pc != 0x003BF664u) [[unlikely]] return; }
L_003BF664:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_003BF6F8; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF678u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x003BF678u) [[unlikely]] return; }
L_003BF678:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BF6F8; } }
L_003BF680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF688u);  if (depth < kMaxDepth) unit_00AF(c, 472u, depth + 1u); else { c.pc = 0x003BF8F0u; return; } if (c.pc != 0x003BF688u) [[unlikely]] return; }
L_003BF688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF690u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x003BF690u) [[unlikely]] return; }
L_003BF690:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BF6F8; } }
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003BF6F8; } }
    c.budget -= 1;
L_003BF6A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF6B0u);  if (depth < kMaxDepth) unit_00AF(c, 472u, depth + 1u); else { c.pc = 0x003BF8F0u; return; } if (c.pc != 0x003BF6B0u) [[unlikely]] return; }
L_003BF6B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF6B8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x003BF6B8u) [[unlikely]] return; }
L_003BF6B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BF6F8; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003BF6F8; } }
L_003BF6D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8075u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BF6F8; } }
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 20u));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF6F4u); st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AF(c, 472u, depth + 1u); else { c.pc = 0x003BF8F0u; return; } if (c.pc != 0x003BF6F4u) [[unlikely]] return; }
L_003BF6F4:
    c.budget -= 1;
L_003BF6F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF700u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00BE(c, 269u, depth + 1u); else { c.pc = 0x003FB3E0u; return; } if (c.pc != 0x003BF700u) [[unlikely]] return; }
L_003BF700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF708u);  if (depth < kMaxDepth) unit_00BE(c, 301u, depth + 1u); else { c.pc = 0x003FB590u; return; } if (c.pc != 0x003BF708u) [[unlikely]] return; }
L_003BF708:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BF720:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF73Cu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x003BF73Cu) [[unlikely]] return; }
L_003BF73C:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BF770; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 20u));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 254ull;  if (t) { goto L_003BF768; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003BF770; } }
    c.budget -= 1;
L_003BF768:
    c.r[2].d[0] = c.r[3].d[0] | 1ull;
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003BF770:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8075u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003BF788; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF788u);  if (depth < kMaxDepth) unit_00AF(c, 472u, depth + 1u); else { c.pc = 0x003BF8F0u; return; } if (c.pc != 0x003BF788u) [[unlikely]] return; }
L_003BF788:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 20u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_003BF7D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF7A0u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x003BF7A0u) [[unlikely]] return; }
L_003BF7A0:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BF7D0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 20u));
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 253ull;  if (t) { goto L_003BF7C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003BF7D0; } }
L_003BF7C8:
    c.r[2].d[0] = c.r[3].d[0] | 2ull;
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003BF7D0:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF7DCu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_00BE(c, 242u, depth + 1u); else { c.pc = 0x003FB060u; return; } if (c.pc != 0x003BF7DCu) [[unlikely]] return; }
L_003BF7DC:
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 19u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF7F0u); set32(c.r[6], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_00BE(c, 243u, depth + 1u); else { c.pc = 0x003FB0D0u; return; } if (c.pc != 0x003BF7F0u) [[unlikely]] return; }
L_003BF7F0:
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_003BF8C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8064u);
    set32(c.r[5], 0u + 166u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2052u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF820u); st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003BF820u) [[unlikely]] return; }
L_003BF820:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 13u)));
    set32(c.r[5], c.r[5].w[0] + 18016u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 13u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 7));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].sd[0] < 55ll ? 1ull : 0ull;
    c.budget -= 27;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BF8BC; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 13u)));
    set32(c.r[2], c.r[2].w[0] + 13136u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 12;
L_003BF8BC:
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003BF8D0; } }
L_003BF8C8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003BF8D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BF8F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 22u));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003BF918; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF910u);  if (depth < kMaxDepth) unit_00B0(c, 44u, depth + 1u); else { c.pc = 0x003C0340u; return; } if (c.pc != 0x003BF910u) [[unlikely]] return; }
L_003BF910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BF950; } }
L_003BF918:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003BF950; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].sd[0] < 56ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003BF948; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF93Cu);  if (depth < kMaxDepth) unit_00B0(c, 57u, depth + 1u); else { c.pc = 0x003C05D0u; return; } if (c.pc != 0x003BF93Cu) [[unlikely]] return; }
L_003BF93C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BF950; } }
    c.budget -= 1;
L_003BF948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF950u);  if (depth < kMaxDepth) unit_00AF(c, 477u, depth + 1u); else { c.pc = 0x003BF970u; return; } if (c.pc != 0x003BF950u) [[unlikely]] return; }
L_003BF950:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BF960:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[1].w[0] + 10216u));  c.pc = t; return; }
L_003BF970:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 20096u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 23u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 8u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(29ll) ? 1ull : 0ull;
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull; c.f[20] = ld32((c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_00B0(c, 43u, depth); } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 3904u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003BC000u < 16384u) { entry = entries_00AF[(t - 0x003BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003BF9D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BF9D8u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x003BF9D8u) [[unlikely]] return; }
L_003BF9D8:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00B0(c, 43u, depth); } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], 0u + 45u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003BFA10; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 851u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 20u);  if (t) { goto L_003BFA10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_00B0(c, 43u, depth); } }
    c.budget -= 1;
L_003BFA10:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 23u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], 0u + 19u);
    set32(c.r[3], c.r[3].w[0] - 14304u);
    set32(c.r[2], c.r[2].w[0] - 14303u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[6].d[0] = c.r[6].d[0] | 4096ull;
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 711u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 728u), c.f[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFA84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 107u, depth + 1u); else { c.pc = 0x001EA6B0u; return; } if (c.pc != 0x003BFA84u) [[unlikely]] return; }
L_003BFA84:
    c.r[7].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] - 14304u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFAB4u); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x003BFAB4u) [[unlikely]] return; }
L_003BFAB4:
    c.budget -= 1;
L_003BFAB8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 23u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 851u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003BFAE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFADCu); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0039(c, 251u, depth + 1u); else { c.pc = 0x001E7BE0u; return; } if (c.pc != 0x003BFADCu) [[unlikely]] return; }
L_003BFADC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BFAF8; } }
    c.budget -= 1;
L_003BFAE8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFAF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 251u, depth + 1u); else { c.pc = 0x001E7BE0u; return; } if (c.pc != 0x003BFAF4u) [[unlikely]] return; }
L_003BFAF4:
    c.budget -= 1;
L_003BFAF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFB00u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0039(c, 258u, depth + 1u); else { c.pc = 0x001E7EA0u; return; } if (c.pc != 0x003BFB00u) [[unlikely]] return; }
L_003BFB00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00B0(c, 43u, depth); } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 23u)));
    set32(c.r[3], 0u + 17u);
    set32(c.r[2], 0u + 20u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 36u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 851u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFB30u); st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x003BFB30u) [[unlikely]] return; }
L_003BFB30:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFB3Cu); set32(c.r[5], 0u + 36u);  if (depth < kMaxDepth) unit_003A(c, 68u, depth + 1u); else { c.pc = 0x001E9DF0u; return; } if (c.pc != 0x003BFB3Cu) [[unlikely]] return; }
L_003BFB3C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], 0u + 42u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 47u);  if (t) { goto L_003BFB58; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_00B0(c, 43u, depth); } }
    c.budget -= 1;
L_003BFB58:
    set32(c.r[3], 0u + 10u);
    st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 34u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 851u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_00B0(c, 43u, depth); } }
    c.budget -= 1;
L_003BFB70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFB78u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x003BFB78u) [[unlikely]] return; }
L_003BFB78:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00B0(c, 43u, depth); } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 23u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], 0u + 21u);
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 711u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[1] = fp::sub(c.f[1], c.f[20]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 52u), c.f[0]);
    c.budget -= 14;
L_003BFBC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFBC8u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_003A(c, 8u, depth + 1u); else { c.pc = 0x001E8260u; return; } if (c.pc != 0x003BFBC8u) [[unlikely]] return; }
L_003BFBC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BFC60; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 23u)));
    set32(c.r[4], 0u + 7u);
    set32(c.r[3], 0u - 4097u);
    set32(c.r[2], 0u + 27u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 851u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003BFC30; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 1236u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFEF0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFEFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 1236u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 1236u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 1236u), c.r[2].w[0]);
    c.budget -= 10;
L_003BFC30:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFC3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x003BFC3Cu) [[unlikely]] return; }
L_003BFC3C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFC48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 68u, depth + 1u); else { c.pc = 0x001E9DF0u; return; } if (c.pc != 0x003BFC48u) [[unlikely]] return; }
L_003BFC48:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFC60u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x003BFC60u) [[unlikely]] return; }
L_003BFC60:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F7A0000u);
    c.r[3].d[0] = c.r[3].d[0] | 57672ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 52u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.f[1] = ld32((c.r[3].w[0] + 52u));
    c.f[0] = ld32((c.r[3].w[0] + 36u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 36u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.f[0] = ld32((c.r[3].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 17;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[3].w[0] + 36u);  if (t) { [[clang::musttail]] return unit_00B0(c, 43u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[20]);  if (t) { [[clang::musttail]] return unit_00B0(c, 43u, depth); } }
    c.budget -= 1;
L_003BFCB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFCB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x003BFCB8u) [[unlikely]] return; }
L_003BFCB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BFCF0; } }
    st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 36u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 36u), c.f[20]);
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_00B0(c, 43u, depth); } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[4], 0u - 400u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 5280u), c.r[4].w[0]);  if (t) { [[clang::musttail]] return unit_00B0(c, 43u, depth); } }
L_003BFCF0:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F7A0000u);
    c.r[3].d[0] = c.r[3].d[0] | 57672ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 52u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.f[1] = ld32((c.r[3].w[0] + 52u));
    c.f[0] = ld32((c.r[3].w[0] + 36u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 36u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.f[0] = ld32((c.r[3].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 17;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[3].w[0] + 36u);  if (t) { [[clang::musttail]] return unit_00B0(c, 43u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[20]);  if (t) { [[clang::musttail]] return unit_00B0(c, 43u, depth); } }
    c.budget -= 1;
L_003BFD40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFD48u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x003BFD48u) [[unlikely]] return; }
L_003BFD48:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00B0(c, 43u, depth); } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 23u)));
    set32(c.r[3], 0u + 21u);
    set32(c.r[2], 0u + 20u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 711u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 851u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_003BFD78:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFD84u); set32(c.r[5], 0u + 34u);  if (depth < kMaxDepth) unit_003A(c, 27u, depth + 1u); else { c.pc = 0x001E89E0u; return; } if (c.pc != 0x003BFD84u) [[unlikely]] return; }
L_003BFD84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00B0(c, 43u, depth); } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 23u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], 0u + 34u);
    set32(c.r[3], 0u + 7u);
    set32(c.r[2], c.r[2].w[0] - 14302u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 851u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFDCCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 86u, depth + 1u); else { c.pc = 0x001EA280u; return; } if (c.pc != 0x003BFDCCu) [[unlikely]] return; }
L_003BFDCC:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] - 14302u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFDF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 83u, depth + 1u); else { c.pc = 0x001EA1B0u; return; } if (c.pc != 0x003BFDF0u) [[unlikely]] return; }
L_003BFDF0:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFE08u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x003BFE08u) [[unlikely]] return; }
L_003BFE08:
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[20]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.f[0]);  if (t) { [[clang::musttail]] return unit_00B0(c, 43u, depth); } }
L_003BFE30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFE38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x003BFE38u) [[unlikely]] return; }
L_003BFE38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BFE60; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 23u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 36u), c.f[20]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(0u));  if (t) { [[clang::musttail]] return unit_00B0(c, 43u, depth); } }
    c.budget -= 1;
L_003BFE60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F730000u);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.r[3].d[0] = c.r[3].d[0] | 13107ull;
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 52u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 36u), c.f[0]);  if (t) { [[clang::musttail]] return unit_00B0(c, 43u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.f[20]);  if (t) { [[clang::musttail]] return unit_00B0(c, 43u, depth); } }
L_003BFE98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFEA0u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x003BFEA0u) [[unlikely]] return; }
L_003BFEA0:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00B0(c, 43u, depth); } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 23u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], 0u + 19u);
    set32(c.r[2], c.r[2].w[0] - 14304u);
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 711u), static_cast<std::uint8_t>(0u));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFF04u); set32(c.r[6], 0u + 29u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x003BFF04u) [[unlikely]] return; }
L_003BFF04:
    c.budget -= 1;
L_003BFF08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFF10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x003BFF10u) [[unlikely]] return; }
L_003BFF10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8326u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_00B0(c, 43u, depth); } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 23u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 16u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFF34u); st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0039(c, 251u, depth + 1u); else { c.pc = 0x001E7BE0u; return; } if (c.pc != 0x003BFF34u) [[unlikely]] return; }
L_003BFF34:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_003BFF3C:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 29u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFF4Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x003BFF4Cu) [[unlikely]] return; }
L_003BFF4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00B0(c, 43u, depth); } }
    c.budget -= 1;
L_003BFF58:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFF64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 27u, depth + 1u); else { c.pc = 0x001E89E0u; return; } if (c.pc != 0x003BFF64u) [[unlikely]] return; }
L_003BFF64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BFFB0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 23u)));
    set32(c.r[5], 0u + 8u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 851u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFF8Cu); st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x003BFF8Cu) [[unlikely]] return; }
L_003BFF8C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFF98u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_003A(c, 68u, depth + 1u); else { c.pc = 0x001E9DF0u; return; } if (c.pc != 0x003BFF98u) [[unlikely]] return; }
L_003BFF98:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFFB0u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x003BFFB0u) [[unlikely]] return; }
L_003BFFB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[20]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 36u), c.f[0]);  if (t) { [[clang::musttail]] return unit_00B0(c, 43u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.f[20]);  if (t) { [[clang::musttail]] return unit_00B0(c, 43u, depth); } }
    c.budget -= 1;
L_003BFFE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BFFE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x003BFFE8u) [[unlikely]] return; }
L_003BFFE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00B0(c, 1u, depth); } }
    goto L_003BFFF0;
L_003BFFEC:
    c.budget -= 1;
L_003BFFF0:
    st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 36u), c.f[20]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(0u));  if (t) { [[clang::musttail]] return unit_00B0(c, 43u, depth); } }
    [[clang::musttail]] return unit_00B0(c, 1u, depth);
}

}
