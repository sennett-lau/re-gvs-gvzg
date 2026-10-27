#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00C1[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0,
    0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0,
    0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0,
    17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0,
    0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 26, 0, 0, 0, 0, 0, 27, 0,
    0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 34,
    0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0,
    0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0,
    0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0,
    51, 0, 52, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 56, 0, 57, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0,
    61, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74,
    0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0,
    0, 0, 84, 0, 85, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0,
    0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98,
    0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0,
    0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0,
    115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0,
    129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 133, 134, 135, 136,
    137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168,
    169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 0, 0, 198,
    0, 0, 0, 199, 0, 0, 200, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 206, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 215, 0, 0, 216, 0,
    0, 217, 0, 0, 218, 0, 0, 219, 0, 0, 220, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 224, 0, 0, 225, 0, 0, 226, 0, 0, 227,
    0, 0, 228, 0, 0, 229, 0, 0, 230, 0, 0, 231, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 235, 0, 0, 236, 0, 0, 237, 0, 0,
    238, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 244, 0, 0, 245, 0, 0, 246, 0, 0,
    247, 0, 0, 248, 0, 0, 249, 0, 0, 250, 0, 0, 251, 0, 0, 252, 0, 0, 253, 0, 0, 254, 0, 0, 255, 0, 0, 256, 0, 0, 257, 0,
    0, 258, 0, 0, 259, 0, 0, 260, 0, 0, 261, 0, 0, 262, 0, 0, 263, 0, 0, 264, 0, 0, 265, 0, 0, 266, 0, 0, 267, 0, 0, 268,
    0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0,
    275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0,
    0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0,
    281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0,
    289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0,
    0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 298,
    0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0,
    0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325,
    0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 329, 0, 330, 0, 0, 0, 331, 0,
    0, 0, 332, 0, 333, 0, 0, 0, 334, 0, 0, 0, 335, 0, 336, 0, 0, 0, 337, 0, 0, 0, 338, 0, 339, 0, 0, 0, 340, 0, 0, 0,
    341, 0, 342, 0, 0, 0, 343, 0, 0, 0, 344, 0, 345, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0,
    0, 0, 0, 349, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 357, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 363, 0,
    0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 367, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0,
    374, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    380, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0,
    0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 390, 0,
    0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 395, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0,
    0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 404, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0,
    0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0,
    410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0,
    0, 0, 0, 422, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 425, 0,
    0, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0,
    0, 0, 432, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 435, 0, 0, 436, 0, 0, 437, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    440, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0,
    0, 0, 446, 0, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0, 449, 0, 0, 0, 0, 450, 0, 0, 451, 0, 0, 0, 0, 452, 0, 0, 0, 0,
    453, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 457, 0, 0, 0, 0, 458, 0,
    459, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 463,
    0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0,
    468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 472, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0,
    474, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00C1(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00404000;
    case 2u: goto L_00404030;
    case 3u: goto L_00404070;
    case 4u: goto L_0040408C;
    case 5u: goto L_004040A0;
    case 6u: goto L_004040B0;
    case 7u: goto L_004040D0;
    case 8u: goto L_004040E8;
    case 9u: goto L_004040F0;
    case 10u: goto L_00404108;
    case 11u: goto L_00404118;
    case 12u: goto L_00404128;
    case 13u: goto L_0040413C;
    case 14u: goto L_00404154;
    case 15u: goto L_00404168;
    case 16u: goto L_00404178;
    case 17u: goto L_00404180;
    case 18u: goto L_004041A0;
    case 19u: goto L_004041B0;
    case 20u: goto L_004041C0;
    case 21u: goto L_004041F0;
    case 22u: goto L_00404210;
    case 23u: goto L_00404220;
    case 24u: goto L_00404238;
    case 25u: goto L_0040425C;
    case 26u: goto L_00404260;
    case 27u: goto L_00404278;
    case 28u: goto L_00404288;
    case 29u: goto L_00404298;
    case 30u: goto L_004042AC;
    case 31u: goto L_004042C4;
    case 32u: goto L_004042E4;
    case 33u: goto L_004042F4;
    case 34u: goto L_004042FC;
    case 35u: goto L_0040430C;
    case 36u: goto L_0040431C;
    case 37u: goto L_00404340;
    case 38u: goto L_00404360;
    case 39u: goto L_00404470;
    case 40u: goto L_0040448C;
    case 41u: goto L_004044C0;
    case 42u: goto L_004044E8;
    case 43u: goto L_004044F8;
    case 44u: goto L_00404508;
    case 45u: goto L_00404518;
    case 46u: goto L_00404528;
    case 47u: goto L_00404544;
    case 48u: goto L_0040454C;
    case 49u: goto L_00404568;
    case 50u: goto L_00404578;
    case 51u: goto L_00404580;
    case 52u: goto L_00404588;
    case 53u: goto L_00404590;
    case 54u: goto L_004045A8;
    case 55u: goto L_004045B8;
    case 56u: goto L_004045C0;
    case 57u: goto L_004045C8;
    case 58u: goto L_004045D0;
    case 59u: goto L_004045E8;
    case 60u: goto L_004045F8;
    case 61u: goto L_00404600;
    case 62u: goto L_00404608;
    case 63u: goto L_0040461C;
    case 64u: goto L_0040462C;
    case 65u: goto L_00404650;
    case 66u: goto L_00404670;
    case 67u: goto L_004046C4;
    case 68u: goto L_004046E0;
    case 69u: goto L_00404A00;
    case 70u: goto L_00404A20;
    case 71u: goto L_00404A58;
    case 72u: goto L_00404A80;
    case 73u: goto L_00404ADC;
    case 74u: goto L_00404AFC;
    case 75u: goto L_00404B0C;
    case 76u: goto L_00404B2C;
    case 77u: goto L_00404B3C;
    case 78u: goto L_00404B54;
    case 79u: goto L_00404B64;
    case 80u: goto L_00404B74;
    case 81u: goto L_00404BA4;
    case 82u: goto L_00404BE4;
    case 83u: goto L_00404BF4;
    case 84u: goto L_00404C08;
    case 85u: goto L_00404C10;
    case 86u: goto L_00404C20;
    case 87u: goto L_00404C28;
    case 88u: goto L_00404C3C;
    case 89u: goto L_00404C4C;
    case 90u: goto L_00404C64;
    case 91u: goto L_00404C74;
    case 92u: goto L_00404C8C;
    case 93u: goto L_00404C9C;
    case 94u: goto L_00404CAC;
    case 95u: goto L_00404CB4;
    case 96u: goto L_00404CD0;
    case 97u: goto L_00404CE4;
    case 98u: goto L_00404CFC;
    case 99u: goto L_00404D0C;
    case 100u: goto L_00404D24;
    case 101u: goto L_00404D30;
    case 102u: goto L_00404D40;
    case 103u: goto L_00404D48;
    case 104u: goto L_00404D64;
    case 105u: goto L_00404D74;
    case 106u: goto L_00404DF8;
    case 107u: goto L_00404E04;
    case 108u: goto L_00404E20;
    case 109u: goto L_00404E2C;
    case 110u: goto L_00404E34;
    case 111u: goto L_00404E5C;
    case 112u: goto L_00404EA4;
    case 113u: goto L_00404EE0;
    case 114u: goto L_00404EF0;
    case 115u: goto L_00404F00;
    case 116u: goto L_00404F18;
    case 117u: goto L_00404F28;
    case 118u: goto L_00404F58;
    case 119u: goto L_00404F78;
    case 120u: goto L_00404FC0;
    case 121u: goto L_00404FE0;
    case 122u: goto L_00405030;
    case 123u: goto L_00405050;
    case 124u: goto L_004050A8;
    case 125u: goto L_004050B0;
    case 126u: goto L_004050C0;
    case 127u: goto L_004050E0;
    case 128u: goto L_00405168;
    case 129u: goto L_00405180;
    case 130u: goto L_00405220;
    case 131u: goto L_00405450;
    case 132u: goto L_00405460;
    case 133u: goto L_00405470;
    case 134u: goto L_00405474;
    case 135u: goto L_00405478;
    case 136u: goto L_0040547C;
    case 137u: goto L_00405480;
    case 138u: goto L_00405484;
    case 139u: goto L_00405488;
    case 140u: goto L_0040548C;
    case 141u: goto L_00405490;
    case 142u: goto L_00405494;
    case 143u: goto L_00405498;
    case 144u: goto L_0040549C;
    case 145u: goto L_004054A0;
    case 146u: goto L_004054A4;
    case 147u: goto L_004054A8;
    case 148u: goto L_004054AC;
    case 149u: goto L_004054B0;
    case 150u: goto L_004054B4;
    case 151u: goto L_004054B8;
    case 152u: goto L_004054BC;
    case 153u: goto L_004054C0;
    case 154u: goto L_004054C4;
    case 155u: goto L_004054C8;
    case 156u: goto L_004054CC;
    case 157u: goto L_004054D0;
    case 158u: goto L_004054D4;
    case 159u: goto L_004054D8;
    case 160u: goto L_004054DC;
    case 161u: goto L_004054E0;
    case 162u: goto L_004054E4;
    case 163u: goto L_004054E8;
    case 164u: goto L_004054EC;
    case 165u: goto L_004054F0;
    case 166u: goto L_004054F4;
    case 167u: goto L_004054F8;
    case 168u: goto L_004054FC;
    case 169u: goto L_00405500;
    case 170u: goto L_00405504;
    case 171u: goto L_00405508;
    case 172u: goto L_0040550C;
    case 173u: goto L_00405510;
    case 174u: goto L_00405514;
    case 175u: goto L_00405518;
    case 176u: goto L_0040551C;
    case 177u: goto L_00405520;
    case 178u: goto L_00405524;
    case 179u: goto L_00405528;
    case 180u: goto L_0040552C;
    case 181u: goto L_00405530;
    case 182u: goto L_00405534;
    case 183u: goto L_00405538;
    case 184u: goto L_0040553C;
    case 185u: goto L_00405540;
    case 186u: goto L_00405544;
    case 187u: goto L_00405548;
    case 188u: goto L_0040554C;
    case 189u: goto L_00405550;
    case 190u: goto L_00405554;
    case 191u: goto L_00405558;
    case 192u: goto L_0040555C;
    case 193u: goto L_00405560;
    case 194u: goto L_00405564;
    case 195u: goto L_00405568;
    case 196u: goto L_0040556C;
    case 197u: goto L_00405570;
    case 198u: goto L_0040557C;
    case 199u: goto L_0040558C;
    case 200u: goto L_00405598;
    case 201u: goto L_004055A0;
    case 202u: goto L_004055A8;
    case 203u: goto L_004055CC;
    case 204u: goto L_004055D4;
    case 205u: goto L_00405620;
    case 206u: goto L_00405628;
    case 207u: goto L_00405630;
    case 208u: goto L_00405654;
    case 209u: goto L_0040565C;
    case 210u: goto L_00405688;
    case 211u: goto L_00405710;
    case 212u: goto L_00405740;
    case 213u: goto L_00405754;
    case 214u: goto L_00405760;
    case 215u: goto L_0040576C;
    case 216u: goto L_00405778;
    case 217u: goto L_00405784;
    case 218u: goto L_00405790;
    case 219u: goto L_0040579C;
    case 220u: goto L_004057A8;
    case 221u: goto L_004057B4;
    case 222u: goto L_004057C0;
    case 223u: goto L_004057CC;
    case 224u: goto L_004057D8;
    case 225u: goto L_004057E4;
    case 226u: goto L_004057F0;
    case 227u: goto L_004057FC;
    case 228u: goto L_00405808;
    case 229u: goto L_00405814;
    case 230u: goto L_00405820;
    case 231u: goto L_0040582C;
    case 232u: goto L_00405838;
    case 233u: goto L_00405844;
    case 234u: goto L_00405850;
    case 235u: goto L_0040585C;
    case 236u: goto L_00405868;
    case 237u: goto L_00405874;
    case 238u: goto L_00405880;
    case 239u: goto L_0040588C;
    case 240u: goto L_00405898;
    case 241u: goto L_004058B0;
    case 242u: goto L_004058C4;
    case 243u: goto L_004058D0;
    case 244u: goto L_004058DC;
    case 245u: goto L_004058E8;
    case 246u: goto L_004058F4;
    case 247u: goto L_00405900;
    case 248u: goto L_0040590C;
    case 249u: goto L_00405918;
    case 250u: goto L_00405924;
    case 251u: goto L_00405930;
    case 252u: goto L_0040593C;
    case 253u: goto L_00405948;
    case 254u: goto L_00405954;
    case 255u: goto L_00405960;
    case 256u: goto L_0040596C;
    case 257u: goto L_00405978;
    case 258u: goto L_00405984;
    case 259u: goto L_00405990;
    case 260u: goto L_0040599C;
    case 261u: goto L_004059A8;
    case 262u: goto L_004059B4;
    case 263u: goto L_004059C0;
    case 264u: goto L_004059CC;
    case 265u: goto L_004059D8;
    case 266u: goto L_004059E4;
    case 267u: goto L_004059F0;
    case 268u: goto L_004059FC;
    case 269u: goto L_00405A08;
    case 270u: goto L_00405A20;
    case 271u: goto L_00405A48;
    case 272u: goto L_00405AC0;
    case 273u: goto L_00405AE8;
    case 274u: goto L_00405B60;
    case 275u: goto L_00405B80;
    case 276u: goto L_00405BD0;
    case 277u: goto L_00405BE0;
    case 278u: goto L_00405BF0;
    case 279u: goto L_00405C10;
    case 280u: goto L_00405C60;
    case 281u: goto L_00405C80;
    case 282u: goto L_00405CD0;
    case 283u: goto L_00405CF0;
    case 284u: goto L_00405D80;
    case 285u: goto L_00405DD0;
    case 286u: goto L_00405DF0;
    case 287u: goto L_00405E90;
    case 288u: goto L_00405EE0;
    case 289u: goto L_00405F00;
    case 290u: goto L_00405FC0;
    case 291u: goto L_00406020;
    case 292u: goto L_00406040;
    case 293u: goto L_00406110;
    case 294u: goto L_00406170;
    case 295u: goto L_00406190;
    case 296u: goto L_004061D0;
    case 297u: goto L_004061F4;
    case 298u: goto L_004061FC;
    case 299u: goto L_00406210;
    case 300u: goto L_00406224;
    case 301u: goto L_00406260;
    case 302u: goto L_004062A4;
    case 303u: goto L_004062CC;
    case 304u: goto L_00406310;
    case 305u: goto L_00406320;
    case 306u: goto L_004063C4;
    case 307u: goto L_004063E0;
    case 308u: goto L_00406418;
    case 309u: goto L_004064A0;
    case 310u: goto L_004065B4;
    case 311u: goto L_004065C4;
    case 312u: goto L_004065E0;
    case 313u: goto L_00406604;
    case 314u: goto L_00406618;
    case 315u: goto L_00406630;
    case 316u: goto L_00406640;
    case 317u: goto L_00406650;
    case 318u: goto L_00406670;
    case 319u: goto L_004066C4;
    case 320u: goto L_004066DC;
    case 321u: goto L_004066F0;
    case 322u: goto L_00406730;
    case 323u: goto L_00406754;
    case 324u: goto L_00406764;
    case 325u: goto L_0040677C;
    case 326u: goto L_00406788;
    case 327u: goto L_004067C0;
    case 328u: goto L_004067D0;
    case 329u: goto L_004067E0;
    case 330u: goto L_004067E8;
    case 331u: goto L_004067F8;
    case 332u: goto L_00406808;
    case 333u: goto L_00406810;
    case 334u: goto L_00406820;
    case 335u: goto L_00406830;
    case 336u: goto L_00406838;
    case 337u: goto L_00406848;
    case 338u: goto L_00406858;
    case 339u: goto L_00406860;
    case 340u: goto L_00406870;
    case 341u: goto L_00406880;
    case 342u: goto L_00406888;
    case 343u: goto L_00406898;
    case 344u: goto L_004068A8;
    case 345u: goto L_004068B0;
    case 346u: goto L_004068C0;
    case 347u: goto L_004068D0;
    case 348u: goto L_004068F0;
    case 349u: goto L_0040690C;
    case 350u: goto L_00406918;
    case 351u: goto L_00406924;
    case 352u: goto L_0040694C;
    case 353u: goto L_00406990;
    case 354u: goto L_004069B8;
    case 355u: goto L_004069E0;
    case 356u: goto L_00406A5C;
    case 357u: goto L_00406A64;
    case 358u: goto L_00406A90;
    case 359u: goto L_00406AA0;
    case 360u: goto L_00406AC4;
    case 361u: goto L_00406AD8;
    case 362u: goto L_00406AEC;
    case 363u: goto L_00406AF8;
    case 364u: goto L_00406B0C;
    case 365u: goto L_00406B20;
    case 366u: goto L_00406B34;
    case 367u: goto L_00406B40;
    case 368u: goto L_00406B48;
    case 369u: goto L_00406B64;
    case 370u: goto L_00406B90;
    case 371u: goto L_00406BA8;
    case 372u: goto L_00406BC4;
    case 373u: goto L_00406BEC;
    case 374u: goto L_00406C00;
    case 375u: goto L_00406C10;
    case 376u: goto L_00406D20;
    case 377u: goto L_00406D38;
    case 378u: goto L_00406D58;
    case 379u: goto L_00406D70;
    case 380u: goto L_00406E80;
    case 381u: goto L_00406E98;
    case 382u: goto L_00406EB8;
    case 383u: goto L_00406ED0;
    case 384u: goto L_00406FE0;
    case 385u: goto L_00406FF8;
    case 386u: goto L_00407018;
    case 387u: goto L_00407030;
    case 388u: goto L_00407140;
    case 389u: goto L_00407158;
    case 390u: goto L_00407178;
    case 391u: goto L_00407190;
    case 392u: goto L_004072A0;
    case 393u: goto L_004072B8;
    case 394u: goto L_004072CC;
    case 395u: goto L_004072D4;
    case 396u: goto L_004072F4;
    case 397u: goto L_00407310;
    case 398u: goto L_00407420;
    case 399u: goto L_00407438;
    case 400u: goto L_00407458;
    case 401u: goto L_00407470;
    case 402u: goto L_00407580;
    case 403u: goto L_00407598;
    case 404u: goto L_004075AC;
    case 405u: goto L_004075B0;
    case 406u: goto L_004075E4;
    case 407u: goto L_00407604;
    case 408u: goto L_0040761C;
    case 409u: goto L_00407660;
    case 410u: goto L_00407680;
    case 411u: goto L_004076A0;
    case 412u: goto L_004076B4;
    case 413u: goto L_004076D0;
    case 414u: goto L_004076E0;
    case 415u: goto L_00407720;
    case 416u: goto L_00407738;
    case 417u: goto L_00407750;
    case 418u: goto L_00407790;
    case 419u: goto L_004077CC;
    case 420u: goto L_004077E4;
    case 421u: goto L_004077F4;
    case 422u: goto L_0040780C;
    case 423u: goto L_00407818;
    case 424u: goto L_00407868;
    case 425u: goto L_00407878;
    case 426u: goto L_00407890;
    case 427u: goto L_004078A0;
    case 428u: goto L_004078B8;
    case 429u: goto L_004078C8;
    case 430u: goto L_004078E0;
    case 431u: goto L_004078F0;
    case 432u: goto L_00407908;
    case 433u: goto L_00407918;
    case 434u: goto L_00407938;
    case 435u: goto L_00407954;
    case 436u: goto L_00407960;
    case 437u: goto L_0040796C;
    case 438u: goto L_00407994;
    case 439u: goto L_004079D8;
    case 440u: goto L_00407A00;
    case 441u: goto L_00407A20;
    case 442u: goto L_00407AA0;
    case 443u: goto L_00407AA8;
    case 444u: goto L_00407AD4;
    case 445u: goto L_00407AE4;
    case 446u: goto L_00407B08;
    case 447u: goto L_00407B1C;
    case 448u: goto L_00407B30;
    case 449u: goto L_00407B38;
    case 450u: goto L_00407B4C;
    case 451u: goto L_00407B58;
    case 452u: goto L_00407B6C;
    case 453u: goto L_00407B80;
    case 454u: goto L_00407BA4;
    case 455u: goto L_00407BB8;
    case 456u: goto L_00407BD0;
    case 457u: goto L_00407BE4;
    case 458u: goto L_00407BF8;
    case 459u: goto L_00407C00;
    case 460u: goto L_00407C1C;
    case 461u: goto L_00407C48;
    case 462u: goto L_00407C60;
    case 463u: goto L_00407C7C;
    case 464u: goto L_00407CA0;
    case 465u: goto L_00407DB0;
    case 466u: goto L_00407DC8;
    case 467u: goto L_00407DE8;
    case 468u: goto L_00407E00;
    case 469u: goto L_00407F14;
    case 470u: goto L_00407F30;
    case 471u: goto L_00407F40;
    case 472u: goto L_00407F48;
    case 473u: goto L_00407F60;
    case 474u: goto L_00407F80;
    case 475u: goto L_00407F98;
    default: bad_entry(c, 0x00404000u); return;
    }
L_00404000:
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_00404018; } }
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00404018:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00404030:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[20], c.r[4].w[0] + 304u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[19], ld32((c.r[1].w[0] + 9300u)));
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404070u); st32((c.r[29].w[0] + 144u), 0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00404070u) [[unlikely]] return; }
L_00404070:
    set32(c.r[2], 0u + 2u);
    set32(c.r[16], c.r[29].w[0] + 148u);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[2], c.r[2].w[0] - 9904u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040408Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0040408Cu) [[unlikely]] return; }
L_0040408C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x434E0000u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004040A0u); c.f[13] = ld32((c.r[20].w[0] + 8u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x004040A0u) [[unlikely]] return; }
L_004040A0:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004040B0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x004040B0u) [[unlikely]] return; }
L_004040B0:
    set32(c.r[2], 0u + 8u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[17], c.r[17].w[0] + 8880u);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 3360u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004040D0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x004040D0u) [[unlikely]] return; }
L_004040D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43830000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004040E8u); c.f[13] = ld32((c.r[20].w[0] + 8u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x004040E8u) [[unlikely]] return; }
L_004040E8:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004040F0:
    set32(c.r[2], c.r[20].w[0] + c.r[18].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 13u)));
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_00404110; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404108u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 322u, depth + 1u); else { c.pc = 0x003FBA20u; return; } if (c.pc != 0x00404108u) [[unlikely]] return; }
L_00404108:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00404118; } }
L_00404110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404118u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_00BE(c, 322u, depth + 1u); else { c.pc = 0x003FBA20u; return; } if (c.pc != 0x00404118u) [[unlikely]] return; }
L_00404118:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404128u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00404128u) [[unlikely]] return; }
L_00404128:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040413Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040413Cu) [[unlikely]] return; }
L_0040413C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004040F0u | kUnwind; return; } goto L_004040F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404154u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00404154u) [[unlikely]] return; }
L_00404154:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43760000u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404168u); c.f[13] = ld32((c.r[20].w[0] + 8u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00404168u) [[unlikely]] return; }
L_00404168:
    set32(c.r[4], c.r[19].w[0] + 5520u);
    set32(c.r[5], 0u + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404178u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00404178u) [[unlikely]] return; }
L_00404178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404180u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00404180u) [[unlikely]] return; }
L_00404180:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004041A0; } }
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2380000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004041A0u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x004041A0u) [[unlikely]] return; }
L_004041A0:
    set32(c.r[4], c.r[19].w[0] + 2400u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004041B0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x004041B0u) [[unlikely]] return; }
L_004041B0:
    set32(c.r[4], c.r[19].w[0] + 2880u);
    set32(c.r[5], 0u + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004041C0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x004041C0u) [[unlikely]] return; }
L_004041C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00404320; } }
    set32(c.r[2], 0u + 10u);
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[2], c.r[2].w[0] - 9904u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004041F0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x004041F0u) [[unlikely]] return; }
L_004041F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x434E0000u);
    c.f[12] = c.r[2].w[0];
    c.f[1] = ld32((c.r[20].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2380000u);
    c.f[0] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404210u); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00404210u) [[unlikely]] return; }
L_00404210:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404220u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00404220u) [[unlikely]] return; }
L_00404220:
    set32(c.r[2], 0u + 8u);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 3360u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404238u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00404238u) [[unlikely]] return; }
L_00404238:
    c.f[1] = ld32((c.r[20].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43830000u);
    c.r[3].d[0] = c.r[2].d[0] | 32768ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2380000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = c.r[3].w[0];
    c.f[14] = 0u;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040425Cu); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040425Cu) [[unlikely]] return; }
L_0040425C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00404260:
    set32(c.r[2], c.r[20].w[0] + c.r[16].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 17u)));
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_00404280; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404278u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 322u, depth + 1u); else { c.pc = 0x003FBA20u; return; } if (c.pc != 0x00404278u) [[unlikely]] return; }
L_00404278:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00404288; } }
L_00404280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404288u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_00BE(c, 322u, depth + 1u); else { c.pc = 0x003FBA20u; return; } if (c.pc != 0x00404288u) [[unlikely]] return; }
L_00404288:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404298u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00404298u) [[unlikely]] return; }
L_00404298:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004042ACu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x004042ACu) [[unlikely]] return; }
L_004042AC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00404260u | kUnwind; return; } goto L_00404260; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004042C4u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x004042C4u) [[unlikely]] return; }
L_004042C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43760000u);
    c.f[12] = c.r[2].w[0];
    c.f[1] = ld32((c.r[20].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2380000u);
    c.f[0] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004042E4u); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x004042E4u) [[unlikely]] return; }
L_004042E4:
    set32(c.r[4], c.r[19].w[0] + 5520u);
    set32(c.r[5], 0u + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004042F4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x004042F4u) [[unlikely]] return; }
L_004042F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004042FCu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x004042FCu) [[unlikely]] return; }
L_004042FC:
    set32(c.r[4], c.r[19].w[0] + 2640u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040430Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0040430Cu) [[unlikely]] return; }
L_0040430C:
    set32(c.r[4], c.r[19].w[0] + 3120u);
    set32(c.r[5], 0u + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040431Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0040431Cu) [[unlikely]] return; }
L_0040431C:
    c.budget -= 1;
L_00404320:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00404340:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 18576u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00404000u < 16384u) { entry = entries_00C1[(t - 0x00404000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00404360:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[1] = c.r[2].w[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[7], c.r[7].w[0] + 17600u);
    set32(c.r[6], c.r[6].w[0] + 20792u);
    set32(c.r[5], c.r[5].w[0] + 18016u);
    set32(c.r[3], c.r[3].w[0] + 18448u);
    set32(c.r[2], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 168u), c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[6], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & 7ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 3));
    st8((c.r[4].w[0] + 304u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    st8((c.r[4].w[0] + 305u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 6));
    c.r[3].d[0] = c.r[2].d[0] & 7ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 9));
    st8((c.r[4].w[0] + 306u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    st8((c.r[4].w[0] + 307u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 304u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 308u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 305u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 312u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 306u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 316u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 307u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.budget -= 67;
    { st32((c.r[4].w[0] + 320u), c.f[0]);  goto L_00404470; }
L_00404470:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040448Cu); set32(c.r[16], c.r[17].w[0] + 324u);  if (depth < kMaxDepth) unit_00AF(c, 476u, depth + 1u); else { c.pc = 0x003BF960u; return; } if (c.pc != 0x0040448Cu) [[unlikely]] return; }
L_0040448C:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_004044A8; } }
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_004044A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004044C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[1].w[0] + 9300u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004044E8u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x004044E8u) [[unlikely]] return; }
L_004044E8:
    set32(c.r[4], c.r[16].w[0] + 3840u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004044F8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x004044F8u) [[unlikely]] return; }
L_004044F8:
    set32(c.r[4], c.r[16].w[0] + 4080u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404508u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00404508u) [[unlikely]] return; }
L_00404508:
    set32(c.r[4], c.r[16].w[0] + 4560u);
    set32(c.r[5], 0u + 15u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404518u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00404518u) [[unlikely]] return; }
L_00404518:
    set32(c.r[4], c.r[16].w[0] + 4800u);
    set32(c.r[5], 0u + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404528u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00404528u) [[unlikely]] return; }
L_00404528:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC34D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2820000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404544u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00404544u) [[unlikely]] return; }
L_00404544:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040454Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x0040454Cu) [[unlikely]] return; }
L_0040454C:
    c.f[12] = ld32((c.r[17].w[0] + 320u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = ld32((c.r[17].w[0] + 308u));
    set32(c.r[18], c.r[17].w[0] + 308u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404568u); set32(c.r[19], c.r[17].w[0] + 320u);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00404568u) [[unlikely]] return; }
L_00404568:
    set32(c.r[4], c.r[16].w[0] + 4320u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404578u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00404578u) [[unlikely]] return; }
L_00404578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404580u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00404580u) [[unlikely]] return; }
L_00404580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404588u); set32(c.r[4], 0u + 16384u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x00404588u) [[unlikely]] return; }
L_00404588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404590u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x00404590u) [[unlikely]] return; }
L_00404590:
    c.f[13] = ld32((c.r[19].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = ld32((c.r[17].w[0] + 316u));
    c.f[14] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004045A8u); set32(c.r[19], c.r[17].w[0] + 316u);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x004045A8u) [[unlikely]] return; }
L_004045A8:
    set32(c.r[4], c.r[16].w[0] + 4320u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004045B8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x004045B8u) [[unlikely]] return; }
L_004045B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004045C0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x004045C0u) [[unlikely]] return; }
L_004045C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004045C8u); set32(c.r[4], 0u + 16384u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x004045C8u) [[unlikely]] return; }
L_004045C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004045D0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x004045D0u) [[unlikely]] return; }
L_004045D0:
    c.f[13] = ld32((c.r[19].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = ld32((c.r[17].w[0] + 312u));
    c.f[14] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004045E8u); set32(c.r[19], c.r[17].w[0] + 312u);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x004045E8u) [[unlikely]] return; }
L_004045E8:
    set32(c.r[4], c.r[16].w[0] + 4320u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004045F8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x004045F8u) [[unlikely]] return; }
L_004045F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404600u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00404600u) [[unlikely]] return; }
L_00404600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404608u); set32(c.r[4], 0u + 16384u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x00404608u) [[unlikely]] return; }
L_00404608:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = ld32((c.r[19].w[0]));
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040461Cu); c.f[12] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0040461Cu) [[unlikely]] return; }
L_0040461C:
    set32(c.r[4], c.r[16].w[0] + 4320u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040462Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x0040462Cu) [[unlikely]] return; }
L_0040462C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00404650:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 18560u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00404000u < 16384u) { entry = entries_00C1[(t - 0x00404000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00404670:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[5].w[0] + 19072u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 29u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[16], c.r[16].w[0] + 8068u);
    set32(c.r[2], c.r[2].w[0] - 8624u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 168u), c.r[5].w[0]);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004046C4u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00AB(c, 341u, depth + 1u); else { c.pc = 0x003AFC50u; return; } if (c.pc != 0x004046C4u) [[unlikely]] return; }
L_004046C4:
    st8((c.r[17].w[0] + 312u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 8624u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004046E0u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00AB(c, 334u, depth + 1u); else { c.pc = 0x003AFB40u; return; } if (c.pc != 0x004046E0u) [[unlikely]] return; }
L_004046E0:
    st8((c.r[17].w[0] + 314u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00404790; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 18036u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], c.r[3].w[0] + 15072u);
    set32(c.r[2], 0u + 19u);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[4].d[0] = c.r[4].d[0] & 127ull;
    st8((c.r[17].w[0] + 308u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 18084u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    st32((c.r[17].w[0] + 304u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[17].w[0] + 309u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 308u)));
    c.budget -= 26;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[6], c.r[17].w[0] + 309u);  if (t) { goto L_00404768; } }
    set32(c.r[2], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00404770; } }
L_00404768:
    set32(c.r[2], 0u - 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00404770:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[2].w[0] + 15073u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 311u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004049F0; } }
L_00404790:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[6], c.r[6].w[0] + 20792u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[4], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 18016u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1u));
    c.r[3].d[0] = c.r[3].d[0] & 127ull;
    st8((c.r[17].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 308u)));
    c.r[1].d[0] = c.r[8].sd[0] < 55ll ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + 308u);  if (t) { goto L_00404818; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] + 13136u);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[5], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));  if (t) { goto L_0040481C; } }
L_00404818:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040481C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00690000u);
    c.r[3].d[0] = c.r[3].d[0] << 56;
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 23856u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], 0u + 29u);
    set32(c.r[5], ld32((c.r[5].w[0])));
    st32((c.r[17].w[0] + 304u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);  if (t) { goto L_00404868; } }
    c.r[5].d[0] = c.r[3].d[0] << 56;
    set32(c.r[4], 0u + 2u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00690000u);  if (t) { goto L_00404868; } }
    set32(c.r[4], ld32((c.r[1].w[0] + 24108u)));
    st32((c.r[17].w[0] + 304u), c.r[4].w[0]);
    c.budget -= 3;
L_00404868:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);  if (t) { goto L_004048E0; } }
    set32(c.r[4], c.r[4].w[0] + 20792u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[5], c.r[5].w[0] + 18016u);
    set32(c.r[6], c.r[6].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 7));
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    st8((c.r[17].w[0] + 309u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].d[0] = c.r[5].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[7], c.r[17].w[0] + 309u);  if (t) { goto L_00404998; } }
    c.r[1].d[0] = c.r[5].sd[0] < 75ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00404998; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00404998; } }
L_004048E0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[4].w[0] + 14490u);
    set32(c.r[5], c.r[5].w[0] << 7);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    st8((c.r[17].w[0] + 309u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[17].w[0] + 309u);  if (t) { goto L_00404910; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00404910:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_00404928; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_00404928:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_00404968; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[4], c.r[5].w[0] - 45u);
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], 0u + 53u);  if (t) { goto L_00404958; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_00404968; } }
    c.budget -= 1;
L_00404958:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00404998; } }
L_00404968:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].d[0] = c.r[5].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; c.r[4].d[0] = c.r[5].sd[0] < 80ll ? 1ull : 0ull;  if (t) { goto L_00404988; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[1].d[0] = c.r[5].sd[0] < 94ll ? 1ull : 0ull;  if (t) { goto L_00404998; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00404998; } }
L_00404988:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] + 2u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_00404998:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[4].w[0] + 14492u);
    set32(c.r[5], c.r[5].w[0] << 7);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    c.r[4].d[0] = c.r[4].d[0] & 3ull;
    st8((c.r[17].w[0] + 311u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[17].w[0] + 311u);  if (t) { goto L_004049F0; } }
    c.r[3].d[0] = c.r[3].d[0] << 56;
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_004049E0; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_004049E0:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_004049F0; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_004049F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404A00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 70u, depth + 1u); else { c.pc = 0x00404A20u; return; } if (c.pc != 0x00404A00u) [[unlikely]] return; }
L_00404A00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00404A20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00404A50; } }
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_00404A50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404A58u);  if (depth < kMaxDepth) unit_00AF(c, 476u, depth + 1u); else { c.pc = 0x003BF960u; return; } if (c.pc != 0x00404A58u) [[unlikely]] return; }
L_00404A58:
    st8((c.r[16].w[0] + 313u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00404A80:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42800000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[19], ld32((c.r[1].w[0] + 9300u)));
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[2], 0u + 8u);
    st32((c.r[29].w[0] + 216u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 220u), c.r[3].w[0]);
    set32(c.r[2], c.r[19].w[0] + 5040u);
    st32((c.r[29].w[0] + 224u), c.r[3].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404ADCu); st32((c.r[29].w[0] + 164u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00404ADCu) [[unlikely]] return; }
L_00404ADC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 310u)));
    set32(c.r[5], 0u + 15u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404AFCu); set32(c.r[4], c.r[19].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00404AFCu) [[unlikely]] return; }
L_00404AFC:
    set32(c.r[4], c.r[19].w[0] + 3600u);
    set32(c.r[5], 0u + 15u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404B0Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00404B0Cu) [[unlikely]] return; }
L_00404B0C:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 313u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[20].w[0] + 313u);  if (t) { goto L_00404F98; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 15u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404B2Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00404B2Cu) [[unlikely]] return; }
L_00404B2C:
    set32(c.r[4], c.r[19].w[0] + 5760u);
    set32(c.r[5], 0u + 15u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404B3Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00404B3Cu) [[unlikely]] return; }
L_00404B3C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 314u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00404C20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404B54u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00404B54u) [[unlikely]] return; }
L_00404B54:
    set32(c.r[4], c.r[19].w[0] + 6000u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404B64u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00404B64u) [[unlikely]] return; }
L_00404B64:
    set32(c.r[4], c.r[19].w[0] + 6240u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404B74u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00404B74u) [[unlikely]] return; }
L_00404B74:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x88880000u);
    c.r[2].d[0] = c.r[2].d[0] | 34953ull;
    set32(c.r[4], c.r[3].w[0] << 16);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404BA4u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x00404BA4u) [[unlikely]] return; }
L_00404BA4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[3].w[0];
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x439C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x433A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[1] = ld32((c.r[20].w[0] + 104u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404BE4u); c.f[20] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00404BE4u) [[unlikely]] return; }
L_00404BE4:
    set32(c.r[4], c.r[19].w[0] + 6480u);
    set32(c.r[5], 0u + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404BF4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00404BF4u) [[unlikely]] return; }
L_00404BF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3920000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404C08u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00404C08u) [[unlikely]] return; }
L_00404C08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404C10u); c.r[4].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x00404C10u) [[unlikely]] return; }
L_00404C10:
    c.f[12] = c.f[20];
    set32(c.r[4], c.r[19].w[0] + 6480u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404C20u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00404C20u) [[unlikely]] return; }
L_00404C20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404C28u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00404C28u) [[unlikely]] return; }
L_00404C28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x433A0000u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404C3Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00404C3Cu) [[unlikely]] return; }
L_00404C3C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 312u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404C4Cu); set32(c.r[6], c.r[29].w[0] + 236u);  if (depth < kMaxDepth) unit_00BE(c, 323u, depth + 1u); else { c.pc = 0x003FBA90u; return; } if (c.pc != 0x00404C4Cu) [[unlikely]] return; }
L_00404C4C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 236u)));
    c.r[1].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_00404C78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404C64u);  if (depth < kMaxDepth) unit_00BE(c, 322u, depth + 1u); else { c.pc = 0x003FBA20u; return; } if (c.pc != 0x00404C64u) [[unlikely]] return; }
L_00404C64:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404C74u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00404C74u) [[unlikely]] return; }
L_00404C74:
    c.budget -= 1;
L_00404C78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404C8Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00404C8Cu) [[unlikely]] return; }
L_00404C8C:
    set32(c.r[17], c.r[29].w[0] + 237u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404C9Cu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_00BE(c, 322u, depth + 1u); else { c.pc = 0x003FBA20u; return; } if (c.pc != 0x00404C9Cu) [[unlikely]] return; }
L_00404C9C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404CACu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00404CACu) [[unlikely]] return; }
L_00404CAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404CB4u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00404CB4u) [[unlikely]] return; }
L_00404CB4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42F40000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x433A0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404CD0u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00404CD0u) [[unlikely]] return; }
L_00404CD0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 10u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[29].w[0] + 236u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404CE4u); set32(c.r[4], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_00BE(c, 323u, depth + 1u); else { c.pc = 0x003FBA90u; return; } if (c.pc != 0x00404CE4u) [[unlikely]] return; }
L_00404CE4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 236u)));
    c.r[1].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_00404D10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404CFCu);  if (depth < kMaxDepth) unit_00BE(c, 322u, depth + 1u); else { c.pc = 0x003FBA20u; return; } if (c.pc != 0x00404CFCu) [[unlikely]] return; }
L_00404CFC:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404D0Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00404D0Cu) [[unlikely]] return; }
L_00404D0C:
    c.budget -= 1;
L_00404D10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404D24u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00404D24u) [[unlikely]] return; }
L_00404D24:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404D30u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_00BE(c, 322u, depth + 1u); else { c.pc = 0x003FBA20u; return; } if (c.pc != 0x00404D30u) [[unlikely]] return; }
L_00404D30:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404D40u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00404D40u) [[unlikely]] return; }
L_00404D40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404D48u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00404D48u) [[unlikely]] return; }
L_00404D48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43250000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x433A0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404D64u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00404D64u) [[unlikely]] return; }
L_00404D64:
    set32(c.r[4], c.r[19].w[0] + 5520u);
    set32(c.r[5], 0u + 15u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404D74u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00404D74u) [[unlikely]] return; }
L_00404D74:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8075u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00404D9C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[2] = c.r[2].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);  if (t) { goto L_00404DA4; } }
L_00404D9C:
    c.f[2] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.budget -= 2;
L_00404DA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00404DD4; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] << 24);  if (t) { goto L_00404DF0; } }
L_00404DD4:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[3].w[0] << 24);
    c.budget -= 7;
L_00404DF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404DF8u);  if (depth < kMaxDepth) unit_0044(c, 349u, depth + 1u); else { c.pc = 0x002130B0u; return; } if (c.pc != 0x00404DF8u) [[unlikely]] return; }
L_00404DF8:
    set32(c.r[4], 0u + 22u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404E04u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 348u, depth + 1u); else { c.pc = 0x00213090u; return; } if (c.pc != 0x00404E04u) [[unlikely]] return; }
L_00404E04:
    set32(c.r[8], ld32((c.r[20].w[0] + 304u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[4], 0u + 10u);
    set32(c.r[5], 0u + 60u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404E20u); set32(c.r[7], c.r[7].w[0] + 14408u);  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x00404E20u) [[unlikely]] return; }
L_00404E20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404E2Cu); c.r[4].d[0] = c.r[2].d[0] | 32896ull;  if (depth < kMaxDepth) unit_0044(c, 349u, depth + 1u); else { c.pc = 0x002130B0u; return; } if (c.pc != 0x00404E2Cu) [[unlikely]] return; }
L_00404E2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404E34u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00404E34u) [[unlikely]] return; }
L_00404E34:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 309u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] + 2u);  if (t) { goto L_00404E60; } }
    set32(c.r[5], 0u + 10u);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404E5Cu); set32(c.r[4], c.r[19].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00404E5Cu) [[unlikely]] return; }
L_00404E5C:
    c.budget -= 1;
L_00404E60:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 311u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[20].w[0] + 311u);  if (t) { goto L_00404E80; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_00404E88; } }
    c.budget -= 1;
L_00404E80:
    st32((c.r[29].w[0] + 176u), 0u);
    c.budget -= 2;
L_00404E88:
    set32(c.r[17], c.r[29].w[0] + 228u);
    set32(c.r[2], c.r[19].w[0] + 1440u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 10u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404EA4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00404EA4u) [[unlikely]] return; }
L_00404EA4:
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00404EC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_00404EC8; } }
    c.budget -= 1;
L_00404EC0:
    st32((c.r[29].w[0] + 176u), 0u);
    c.budget -= 2;
L_00404EC8:
    set32(c.r[2], c.r[19].w[0] + 1680u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404EE0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00404EE0u) [[unlikely]] return; }
L_00404EE0:
    set32(c.r[4], c.r[19].w[0] + 1920u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404EF0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00404EF0u) [[unlikely]] return; }
L_00404EF0:
    set32(c.r[4], c.r[19].w[0] + 2160u);
    set32(c.r[5], 0u + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404F00u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00404F00u) [[unlikely]] return; }
L_00404F00:
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00404F98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404F18u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00404F18u) [[unlikely]] return; }
L_00404F18:
    set32(c.r[4], c.r[19].w[0] + 240u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404F28u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00404F28u) [[unlikely]] return; }
L_00404F28:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 2u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00690000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 10u)));
    set32(c.r[4], c.r[4].w[0] + 7296u);
    set32(c.r[17], 0u + 72u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0])));
    c.budget -= 12;
L_00404F58:
    set32(c.r[8], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x006C0000u);  if (t) { goto L_00404F98; } }
    set32(c.r[4], 0u + 404u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404F78u); set32(c.r[7], c.r[7].w[0] + 14408u);  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x00404F78u) [[unlikely]] return; }
L_00404F78:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[17].w[0] + 22u);
    c.r[17].d[0] = c.r[4].d[0] << 48;
    c.r[3].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00404F58u | kUnwind; return; } goto L_00404F58; } }
    c.budget -= 1;
L_00404F98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_00404FC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404FE0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x00404FE0u) [[unlikely]] return; }
L_00404FE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00405020; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[6], 0u + 19u);
    set32(c.r[5], 0u + 50u);
    set32(c.r[4], c.r[4].w[0] + 20528u);
    set32(c.r[3], c.r[3].w[0] + 21616u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[2].w[0] + 24u), c.r[16].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 14;
L_00405020:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00405030:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 18144u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00404000u < 16384u) { entry = entries_00C1[(t - 0x00404000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00405050:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 104u), 0u);
    st32((c.r[4].w[0] + 116u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8661u)));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_00405098; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));  if (t) { goto L_004050A0; } }
L_00405098:
    set32(c.r[2], 0u + 4u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_004050A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004050A8u); set32(c.r[4], c.r[5].w[0] + 2560u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x004050A8u) [[unlikely]] return; }
L_004050A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004050B0u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x004050B0u) [[unlikely]] return; }
L_004050B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004050C0u); set32(c.r[4], c.r[4].w[0] - 18544u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x004050C0u) [[unlikely]] return; }
L_004050C0:
    c.r[9].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    set32(c.r[5], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[8], 0u + 1u);
    c.r[3].d[0] = c.r[2].d[0] | 39322ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 8;
L_004050E0:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = c.r[9].d[0] == c.r[6].d[0]; st32((c.r[16].w[0] + 12u), c.r[7].w[0]);  if (t) { goto L_00405148; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == c.r[5].d[0];  if (t) { goto L_00405138; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == c.r[8].d[0];  if (t) { goto L_00405128; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_00405118; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00405150; } }
L_00405118:
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[4].w[0]);  if (t) { goto L_00405150; } }
    c.budget -= 1;
L_00405128:
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[4].w[0]);  if (t) { goto L_00405150; } }
    c.budget -= 1;
L_00405138:
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00405150; } }
    c.budget -= 1;
L_00405148:
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 2;
L_00405150:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[2].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004050E0u | kUnwind; return; } goto L_004050E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405168u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 129u, depth + 1u); else { c.pc = 0x00405180u; return; } if (c.pc != 0x00405168u) [[unlikely]] return; }
L_00405168:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00405180:
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[7], c.r[4].w[0] + 304u);  if (t) { goto L_004051B0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_004051C0; } }
L_004051B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00405448; } }
L_004051C0:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[1] = c.r[8].w[0];
    set32(c.r[3], 0u + 2u);
    c.f[5] = c.r[9].w[0];
    c.r[11].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0xBEAA0000u);
    set32(c.r[12], 0u + 3u);
    c.r[8].d[0] = c.r[8].d[0] | 43691ull;
    c.r[9].sd[0] = static_cast<std::int32_t>(0x3E2A0000u);
    c.f[4] = c.r[8].w[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3D8F0000u);
    c.r[8].d[0] = c.r[8].d[0] | 23594ull;
    c.f[3] = c.r[8].w[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0xBE000000u);
    c.f[7] = c.r[8].w[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[8].d[0] = c.r[8].d[0] | 52428ull;
    c.f[6] = c.r[8].w[0];
    c.r[8].d[0] = c.r[9].d[0] | 43691ull;
    c.f[0] = c.r[8].w[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[10].d[0] = c.r[8].d[0] | 52429ull;
    c.budget -= 24;
L_00405220:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[12].d[0];  if (t) { goto L_00405380; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00405310; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_004052B8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00405248; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004053D0; } }
L_00405248:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_00405298; } }
    c.f[2] = ld32((c.r[4].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00405278; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[7].w[0] + 4u), c.r[11].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 8u), c.r[11].w[0]);  if (t) { goto L_004053D0; } }
L_00405278:
    c.f[2] = ld32((c.r[7].w[0] + 4u));
    c.f[2] = fp::add(c.f[2], c.f[0]);
    st32((c.r[7].w[0] + 4u), c.f[2]);
    c.f[2] = ld32((c.r[7].w[0] + 8u));
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 8u), c.f[2]);  if (t) { goto L_004053D0; } }
    c.budget -= 1;
L_00405298:
    c.f[2] = ld32((c.r[7].w[0] + 4u));
    c.f[2] = fp::add(c.f[2], c.f[7]);
    st32((c.r[7].w[0] + 4u), c.f[2]);
    c.f[2] = ld32((c.r[7].w[0] + 8u));
    c.f[2] = fp::add(c.f[2], c.f[7]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 8u), c.f[2]);  if (t) { goto L_004053D0; } }
    c.budget -= 1;
L_004052B8:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_00405308; } }
    c.f[2] = ld32((c.r[4].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004052E8; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[7].w[0] + 4u), c.r[11].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 8u), c.r[11].w[0]);  if (t) { goto L_004053D0; } }
L_004052E8:
    c.f[2] = ld32((c.r[7].w[0] + 4u));
    c.f[2] = fp::add(c.f[2], c.f[0]);
    st32((c.r[7].w[0] + 4u), c.f[2]);
    c.f[2] = ld32((c.r[7].w[0] + 8u));
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 8u), c.f[2]);  if (t) { goto L_004053D0; } }
    c.budget -= 1;
L_00405308:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_004053D0; } }
L_00405310:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_00405360; } }
    c.f[2] = ld32((c.r[4].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00405340; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[7].w[0] + 4u), c.r[11].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 8u), c.r[10].w[0]);  if (t) { goto L_004053D0; } }
L_00405340:
    c.f[2] = ld32((c.r[7].w[0] + 4u));
    c.f[2] = fp::add(c.f[2], c.f[0]);
    st32((c.r[7].w[0] + 4u), c.f[2]);
    c.f[2] = ld32((c.r[7].w[0] + 8u));
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 8u), c.f[2]);  if (t) { goto L_004053D0; } }
    c.budget -= 1;
L_00405360:
    c.f[2] = ld32((c.r[7].w[0] + 4u));
    c.f[2] = fp::add(c.f[2], c.f[7]);
    st32((c.r[7].w[0] + 4u), c.f[2]);
    c.f[2] = ld32((c.r[7].w[0] + 8u));
    c.f[2] = fp::add(c.f[2], c.f[6]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 8u), c.f[2]);  if (t) { goto L_004053D0; } }
    c.budget -= 1;
L_00405380:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_004053A8; } }
    c.f[2] = ld32((c.r[4].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[5]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004053B8; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));  if (t) { goto L_004053B8; } }
L_004053A8:
    c.f[2] = ld32((c.r[7].w[0] + 12u));
    c.f[2] = fp::add(c.f[2], c.f[4]);
    st32((c.r[7].w[0] + 12u), c.f[2]);
    c.budget -= 4;
L_004053B8:
    c.f[2] = ld32((c.r[7].w[0] + 4u));
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[7].w[0] + 4u), c.f[2]);
    c.f[2] = ld32((c.r[7].w[0] + 8u));
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[7].w[0] + 8u), c.f[2]);
    c.budget -= 6;
L_004053D0:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_004053F8; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7u)));
    set32(c.r[9], c.r[5].w[0] << (c.r[6].w[0] & 31u));
    c.r[9].d[0] = c.r[9].d[0] << 56;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 7;
L_004053F8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[8].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00405220u | kUnwind; return; } goto L_00405220; } }
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00405438; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00405448; } }
    c.budget -= 1;
L_00405438:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00405448:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00405450:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00405460:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_00405470:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.budget -= 1;
L_00405474:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 1;
L_00405478:
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 1;
L_0040547C:
    set32(c.r[2], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_00405480:
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.budget -= 1;
L_00405484:
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 1;
L_00405488:
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_0040548C:
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 1;
L_00405490:
    set32(c.r[17], c.r[18].w[0] + 304u);
    c.budget -= 1;
L_00405494:
    st32((c.r[1].w[0] + 20288u), 0u);
    c.budget -= 1;
L_00405498:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 1;
L_0040549C:
    st8((c.r[1].w[0] + 20292u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_004054A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 1;
L_004054A4:
    st32((c.r[1].w[0] + 20240u), c.r[2].w[0]);
    c.budget -= 1;
L_004054A8:
    set32(c.r[2], c.r[28].w[0] - 25240u);
    c.budget -= 1;
L_004054AC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 1;
L_004054B0:
    st32((c.r[1].w[0] + 20260u), c.r[2].w[0]);
    c.budget -= 1;
L_004054B4:
    set32(c.r[2], 0u + 10u);
    c.budget -= 1;
L_004054B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 1;
L_004054BC:
    st16((c.r[1].w[0] + 20284u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_004054C0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_004054C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 1;
L_004054C8:
    st32((c.r[1].w[0] + 20280u), c.r[2].w[0]);
    c.budget -= 1;
L_004054CC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_004054D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 1;
L_004054D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004054DCu); st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x004054DCu) [[unlikely]] return; }
    goto L_004054DC;
L_004054D8:
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_004054DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004054E4u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x004054E4u) [[unlikely]] return; }
    goto L_004054E4;
L_004054E0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_004054E4:
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    c.budget -= 1;
L_004054E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004054F0u); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x004054F0u) [[unlikely]] return; }
    goto L_004054F0;
L_004054EC:
    set32(c.r[4], c.r[2].w[0] + 192u);
    c.budget -= 1;
L_004054F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 1;
L_004054F4:
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 1;
L_004054F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405500u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x00405500u) [[unlikely]] return; }
    goto L_00405500;
L_004054FC:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_00405500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405508u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 179u, depth + 1u); else { c.pc = 0x00126810u; return; } if (c.pc != 0x00405508u) [[unlikely]] return; }
    goto L_00405508;
L_00405504:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_00405508:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00405718; } }
    goto L_00405510;
L_0040550C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00405510:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 1;
L_00405514:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 128u);  if (t) { goto L_00405710; } }
    goto L_0040551C;
L_00405518:
    set32(c.r[3], 0u + 128u);
    c.budget -= 1;
L_0040551C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00405520:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st8((c.r[28].w[0] - 25237u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004055E0; } }
    goto L_00405528;
L_00405524:
    st8((c.r[28].w[0] - 25237u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00405528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405530u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00405530u) [[unlikely]] return; }
    goto L_00405530;
L_0040552C:
    c.budget -= 1;
L_00405530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405538u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x00405538u) [[unlikely]] return; }
    goto L_00405538;
L_00405534:
    set32(c.r[4], c.r[18].w[0] + 192u);
    c.budget -= 1;
L_00405538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405540u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00405540u) [[unlikely]] return; }
    goto L_00405540;
L_0040553C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_00405540:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 1;
L_00405544:
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 1;
L_00405548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405550u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x00405550u) [[unlikely]] return; }
    goto L_00405550;
L_0040554C:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_00405550:
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    c.budget -= 1;
L_00405554:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 1;
L_00405558:
    set32(c.r[6], c.r[18].w[0] + 32u);
    c.budget -= 1;
L_0040555C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405564u); set32(c.r[5], c.r[2].w[0] + 384u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00405564u) [[unlikely]] return; }
    goto L_00405564;
L_00405560:
    set32(c.r[5], c.r[2].w[0] + 384u);
    c.budget -= 1;
L_00405564:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 1;
L_00405568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405570u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x00405570u) [[unlikely]] return; }
    goto L_00405570;
L_0040556C:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_00405570:
    c.f[13] = ld32((c.r[29].w[0] + 72u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040557Cu); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0040557Cu) [[unlikely]] return; }
L_0040557C:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[18].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040558Cu); st32((c.r[18].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0040558Cu) [[unlikely]] return; }
L_0040558C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00690000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405598u); set32(c.r[4], c.r[4].w[0] - 18544u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x00405598u) [[unlikely]] return; }
L_00405598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004055A0u); set32(c.r[4], ld32((c.r[18].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x004055A0u) [[unlikely]] return; }
L_004055A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004055A8u); c.r[4].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x004055A8u) [[unlikely]] return; }
L_004055A8:
    c.f[3] = ld32((c.r[17].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[18].w[0] + 112u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[18].w[0] + 116u));
    c.f[14] = c.r[2].w[0];
    c.f[12] = fp::mul(c.f[3], c.f[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004055CCu); c.f[13] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x004055CCu) [[unlikely]] return; }
L_004055CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004055D4u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x004055D4u) [[unlikely]] return; }
L_004055D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00405660; } }
    c.budget -= 1;
L_004055E0:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00405618; } }
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    set32(c.r[2], c.r[28].w[0] - 25240u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[8].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 11;
L_00405618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405620u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00405620u) [[unlikely]] return; }
L_00405620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405628u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x00405628u) [[unlikely]] return; }
L_00405628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405630u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x00405630u) [[unlikely]] return; }
L_00405630:
    c.f[3] = ld32((c.r[17].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[18].w[0] + 112u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[18].w[0] + 116u));
    c.f[14] = c.r[2].w[0];
    c.f[12] = fp::mul(c.f[3], c.f[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405654u); c.f[13] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00405654u) [[unlikely]] return; }
L_00405654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040565Cu); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0040565Cu) [[unlikely]] return; }
L_0040565C:
    c.budget -= 1;
L_00405660:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 18524u);
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405688u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0048(c, 23u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x00405688u) [[unlikely]] return; }
L_00405688:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00690000u);
    st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    set32(c.r[5], c.r[5].w[0] - 18528u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[1].w[0] + 20252u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 32u);
    st32((c.r[1].w[0] + 20256u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405710u); st32((c.r[1].w[0] + 20272u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0067(c, 27u, depth + 1u); else { c.pc = 0x0029C7C0u; return; } if (c.pc != 0x00405710u) [[unlikely]] return; }
L_00405710:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 2;
L_00405718:
    c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00405510u | kUnwind; return; } goto L_00405510; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00405740:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405754u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 270u, depth + 1u); else { c.pc = 0x00405A20u; return; } if (c.pc != 0x00405754u) [[unlikely]] return; }
L_00405754:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405760u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 270u, depth + 1u); else { c.pc = 0x00405A20u; return; } if (c.pc != 0x00405760u) [[unlikely]] return; }
L_00405760:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040576Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_00C1(c, 270u, depth + 1u); else { c.pc = 0x00405A20u; return; } if (c.pc != 0x0040576Cu) [[unlikely]] return; }
L_0040576C:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405778u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 270u, depth + 1u); else { c.pc = 0x00405A20u; return; } if (c.pc != 0x00405778u) [[unlikely]] return; }
L_00405778:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405784u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00C1(c, 270u, depth + 1u); else { c.pc = 0x00405A20u; return; } if (c.pc != 0x00405784u) [[unlikely]] return; }
L_00405784:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405790u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_00C1(c, 270u, depth + 1u); else { c.pc = 0x00405A20u; return; } if (c.pc != 0x00405790u) [[unlikely]] return; }
L_00405790:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040579Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 270u, depth + 1u); else { c.pc = 0x00405A20u; return; } if (c.pc != 0x0040579Cu) [[unlikely]] return; }
L_0040579C:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004057A8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C1(c, 270u, depth + 1u); else { c.pc = 0x00405A20u; return; } if (c.pc != 0x004057A8u) [[unlikely]] return; }
L_004057A8:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004057B4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00C1(c, 270u, depth + 1u); else { c.pc = 0x00405A20u; return; } if (c.pc != 0x004057B4u) [[unlikely]] return; }
L_004057B4:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004057C0u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00C1(c, 270u, depth + 1u); else { c.pc = 0x00405A20u; return; } if (c.pc != 0x004057C0u) [[unlikely]] return; }
L_004057C0:
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004057CCu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_00C1(c, 270u, depth + 1u); else { c.pc = 0x00405A20u; return; } if (c.pc != 0x004057CCu) [[unlikely]] return; }
L_004057CC:
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004057D8u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_00C1(c, 270u, depth + 1u); else { c.pc = 0x00405A20u; return; } if (c.pc != 0x004057D8u) [[unlikely]] return; }
L_004057D8:
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004057E4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 270u, depth + 1u); else { c.pc = 0x00405A20u; return; } if (c.pc != 0x004057E4u) [[unlikely]] return; }
L_004057E4:
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004057F0u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_00C1(c, 270u, depth + 1u); else { c.pc = 0x00405A20u; return; } if (c.pc != 0x004057F0u) [[unlikely]] return; }
L_004057F0:
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004057FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 270u, depth + 1u); else { c.pc = 0x00405A20u; return; } if (c.pc != 0x004057FCu) [[unlikely]] return; }
L_004057FC:
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405808u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C1(c, 270u, depth + 1u); else { c.pc = 0x00405A20u; return; } if (c.pc != 0x00405808u) [[unlikely]] return; }
L_00405808:
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405814u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00C1(c, 270u, depth + 1u); else { c.pc = 0x00405A20u; return; } if (c.pc != 0x00405814u) [[unlikely]] return; }
L_00405814:
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405820u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00C1(c, 270u, depth + 1u); else { c.pc = 0x00405A20u; return; } if (c.pc != 0x00405820u) [[unlikely]] return; }
L_00405820:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040582Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00C1(c, 270u, depth + 1u); else { c.pc = 0x00405A20u; return; } if (c.pc != 0x0040582Cu) [[unlikely]] return; }
L_0040582C:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405838u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 270u, depth + 1u); else { c.pc = 0x00405A20u; return; } if (c.pc != 0x00405838u) [[unlikely]] return; }
L_00405838:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405844u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 270u, depth + 1u); else { c.pc = 0x00405A20u; return; } if (c.pc != 0x00405844u) [[unlikely]] return; }
L_00405844:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405850u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C1(c, 270u, depth + 1u); else { c.pc = 0x00405A20u; return; } if (c.pc != 0x00405850u) [[unlikely]] return; }
L_00405850:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040585Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00C1(c, 270u, depth + 1u); else { c.pc = 0x00405A20u; return; } if (c.pc != 0x0040585Cu) [[unlikely]] return; }
L_0040585C:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405868u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00C1(c, 270u, depth + 1u); else { c.pc = 0x00405A20u; return; } if (c.pc != 0x00405868u) [[unlikely]] return; }
L_00405868:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405874u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 270u, depth + 1u); else { c.pc = 0x00405A20u; return; } if (c.pc != 0x00405874u) [[unlikely]] return; }
L_00405874:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405880u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C1(c, 270u, depth + 1u); else { c.pc = 0x00405A20u; return; } if (c.pc != 0x00405880u) [[unlikely]] return; }
L_00405880:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040588Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 270u, depth + 1u); else { c.pc = 0x00405A20u; return; } if (c.pc != 0x0040588Cu) [[unlikely]] return; }
L_0040588C:
    set32(c.r[4], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405898u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 270u, depth + 1u); else { c.pc = 0x00405A20u; return; } if (c.pc != 0x00405898u) [[unlikely]] return; }
L_00405898:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004058B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004058C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 272u, depth + 1u); else { c.pc = 0x00405AC0u; return; } if (c.pc != 0x004058C4u) [[unlikely]] return; }
L_004058C4:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004058D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 272u, depth + 1u); else { c.pc = 0x00405AC0u; return; } if (c.pc != 0x004058D0u) [[unlikely]] return; }
L_004058D0:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004058DCu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_00C1(c, 272u, depth + 1u); else { c.pc = 0x00405AC0u; return; } if (c.pc != 0x004058DCu) [[unlikely]] return; }
L_004058DC:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004058E8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 272u, depth + 1u); else { c.pc = 0x00405AC0u; return; } if (c.pc != 0x004058E8u) [[unlikely]] return; }
L_004058E8:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004058F4u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00C1(c, 272u, depth + 1u); else { c.pc = 0x00405AC0u; return; } if (c.pc != 0x004058F4u) [[unlikely]] return; }
L_004058F4:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405900u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_00C1(c, 272u, depth + 1u); else { c.pc = 0x00405AC0u; return; } if (c.pc != 0x00405900u) [[unlikely]] return; }
L_00405900:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040590Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 272u, depth + 1u); else { c.pc = 0x00405AC0u; return; } if (c.pc != 0x0040590Cu) [[unlikely]] return; }
L_0040590C:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405918u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C1(c, 272u, depth + 1u); else { c.pc = 0x00405AC0u; return; } if (c.pc != 0x00405918u) [[unlikely]] return; }
L_00405918:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405924u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00C1(c, 272u, depth + 1u); else { c.pc = 0x00405AC0u; return; } if (c.pc != 0x00405924u) [[unlikely]] return; }
L_00405924:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405930u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00C1(c, 272u, depth + 1u); else { c.pc = 0x00405AC0u; return; } if (c.pc != 0x00405930u) [[unlikely]] return; }
L_00405930:
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040593Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_00C1(c, 272u, depth + 1u); else { c.pc = 0x00405AC0u; return; } if (c.pc != 0x0040593Cu) [[unlikely]] return; }
L_0040593C:
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405948u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_00C1(c, 272u, depth + 1u); else { c.pc = 0x00405AC0u; return; } if (c.pc != 0x00405948u) [[unlikely]] return; }
L_00405948:
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405954u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 272u, depth + 1u); else { c.pc = 0x00405AC0u; return; } if (c.pc != 0x00405954u) [[unlikely]] return; }
L_00405954:
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405960u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_00C1(c, 272u, depth + 1u); else { c.pc = 0x00405AC0u; return; } if (c.pc != 0x00405960u) [[unlikely]] return; }
L_00405960:
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040596Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 272u, depth + 1u); else { c.pc = 0x00405AC0u; return; } if (c.pc != 0x0040596Cu) [[unlikely]] return; }
L_0040596C:
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405978u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C1(c, 272u, depth + 1u); else { c.pc = 0x00405AC0u; return; } if (c.pc != 0x00405978u) [[unlikely]] return; }
L_00405978:
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405984u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00C1(c, 272u, depth + 1u); else { c.pc = 0x00405AC0u; return; } if (c.pc != 0x00405984u) [[unlikely]] return; }
L_00405984:
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405990u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00C1(c, 272u, depth + 1u); else { c.pc = 0x00405AC0u; return; } if (c.pc != 0x00405990u) [[unlikely]] return; }
L_00405990:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040599Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00C1(c, 272u, depth + 1u); else { c.pc = 0x00405AC0u; return; } if (c.pc != 0x0040599Cu) [[unlikely]] return; }
L_0040599C:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004059A8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 272u, depth + 1u); else { c.pc = 0x00405AC0u; return; } if (c.pc != 0x004059A8u) [[unlikely]] return; }
L_004059A8:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004059B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 272u, depth + 1u); else { c.pc = 0x00405AC0u; return; } if (c.pc != 0x004059B4u) [[unlikely]] return; }
L_004059B4:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004059C0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C1(c, 272u, depth + 1u); else { c.pc = 0x00405AC0u; return; } if (c.pc != 0x004059C0u) [[unlikely]] return; }
L_004059C0:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004059CCu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00C1(c, 272u, depth + 1u); else { c.pc = 0x00405AC0u; return; } if (c.pc != 0x004059CCu) [[unlikely]] return; }
L_004059CC:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004059D8u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00C1(c, 272u, depth + 1u); else { c.pc = 0x00405AC0u; return; } if (c.pc != 0x004059D8u) [[unlikely]] return; }
L_004059D8:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004059E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 272u, depth + 1u); else { c.pc = 0x00405AC0u; return; } if (c.pc != 0x004059E4u) [[unlikely]] return; }
L_004059E4:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004059F0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C1(c, 272u, depth + 1u); else { c.pc = 0x00405AC0u; return; } if (c.pc != 0x004059F0u) [[unlikely]] return; }
L_004059F0:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004059FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 272u, depth + 1u); else { c.pc = 0x00405AC0u; return; } if (c.pc != 0x004059FCu) [[unlikely]] return; }
L_004059FC:
    set32(c.r[4], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405A08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 272u, depth + 1u); else { c.pc = 0x00405AC0u; return; } if (c.pc != 0x00405A08u) [[unlikely]] return; }
L_00405A08:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00405A20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405A48u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x00405A48u) [[unlikely]] return; }
L_00405A48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00405AA0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 18128u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], 0u + 20u);
    set32(c.r[4], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 464u)));
    st32((c.r[2].w[0] + 304u), c.r[3].w[0]);
    c.budget -= 20;
L_00405AA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00405AC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405AE8u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x00405AE8u) [[unlikely]] return; }
L_00405AE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00405B40; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 18128u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], 0u + 20u);
    set32(c.r[4], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 22400u)));
    st32((c.r[2].w[0] + 304u), c.r[3].w[0]);
    c.budget -= 20;
L_00405B40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00405B60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 18096u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00404000u < 16384u) { entry = entries_00C1[(t - 0x00404000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00405B80:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF080000u);
    set32(c.r[7], c.r[7].w[0] + 16496u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 17u);
    c.r[3].d[0] = c.r[3].d[0] | 4626ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 276u), c.r[3].w[0]);  c.pc = t; return; }
L_00405BD0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00405BE0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_00405BF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 18080u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00404000u < 16384u) { entry = entries_00C1[(t - 0x00404000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00405C10:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF1A0000u);
    set32(c.r[8], c.r[8].w[0] + 16496u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u + 17u);
    c.r[3].d[0] = c.r[3].d[0] | 7740ull;
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 116u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[7].w[0]);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 276u), c.r[3].w[0]);  c.pc = t; return; }
L_00405C60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 18064u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00404000u < 16384u) { entry = entries_00C1[(t - 0x00404000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00405C80:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80200000u);
    set32(c.r[8], c.r[8].w[0] + 16496u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[5], 0u + 17u);
    c.r[3].d[0] = c.r[3].d[0] | 9290ull;
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 116u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[7].w[0]);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 276u), c.r[3].w[0]);  c.pc = t; return; }
L_00405CD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 18048u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00404000u < 16384u) { entry = entries_00C1[(t - 0x00404000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00405CF0:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00690000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[8], 0u + 3u);
    set32(c.r[7], 0u + 17u);
    set32(c.r[6], c.r[6].w[0] - 18032u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[3].w[0] + 16496u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    st32((c.r[4].w[0] + 116u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 25;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x40400000u);  if (t) { goto L_00405D68; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st32((c.r[4].w[0] + 32u), c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 276u), c.r[3].w[0]);  if (t) { goto L_00405D78; } }
    c.budget -= 1;
L_00405D68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF2E0000u);
    st32((c.r[4].w[0] + 32u), 0u);
    c.r[3].d[0] = c.r[3].d[0] | 13418ull;
    st32((c.r[4].w[0] + 276u), c.r[3].w[0]);
    c.budget -= 4;
L_00405D78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00405D80:
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43EA0000u);
    c.f[1] = c.r[5].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 36u), c.f[1]);  if (t) { goto L_00405DB8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3EA0000u);
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 3;
L_00405DB8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00405DD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 18016u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00404000u < 16384u) { entry = entries_00C1[(t - 0x00404000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00405DF0:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[6], 0u + 17u);
    set32(c.r[5], c.r[5].w[0] - 18000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    st32((c.r[4].w[0] + 116u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);  if (t) { goto L_00405E68; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00330000u);
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 16496u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st32((c.r[4].w[0] + 168u), c.r[5].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 276u), c.r[3].w[0]);  if (t) { goto L_00405E88; } }
    c.budget -= 1;
L_00405E68:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF2E0000u);
    st32((c.r[4].w[0] + 32u), 0u);
    set32(c.r[5], c.r[5].w[0] + 16496u);
    c.r[3].d[0] = c.r[3].d[0] | 13418ull;
    st32((c.r[4].w[0] + 168u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 276u), c.r[3].w[0]);
    c.budget -= 8;
L_00405E88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00405E90:
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC4000000u);
    c.f[1] = c.r[5].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 36u), c.f[1]);  if (t) { goto L_00405EC8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44000000u);
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 3;
L_00405EC8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00405EE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 17984u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00404000u < 16384u) { entry = entries_00C1[(t - 0x00404000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00405F00:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[6], 0u + 5u);
    set32(c.r[5], 0u + 17u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 116u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);  if (t) { goto L_00405F80; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00690000u);
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    c.f[1] = c.r[3].w[0];
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[6], c.r[6].w[0] - 17984u);
    set32(c.r[5], c.r[5].w[0] + 16496u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x33000000u);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    st32((c.r[4].w[0] + 168u), c.r[5].w[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 276u), c.r[3].w[0]);  if (t) { goto L_00405FB8; } }
    c.budget -= 1;
L_00405F80:
    st32((c.r[4].w[0] + 32u), 0u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00690000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x9A2E0000u);
    set32(c.r[6], c.r[6].w[0] - 17968u);
    set32(c.r[5], c.r[5].w[0] + 16496u);
    c.r[3].d[0] = c.r[3].d[0] | 13418ull;
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    st32((c.r[4].w[0] + 168u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 276u), c.r[3].w[0]);
    c.budget -= 14;
L_00405FB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00405FC0:
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44370000u);
    c.f[1] = c.r[5].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 36u), c.f[1]);  if (t) { goto L_00406008; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44B70000u);
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.budget -= 6;
L_00406008:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00406020:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 17952u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00404000u < 16384u) { entry = entries_00C1[(t - 0x00404000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00406040:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[6], 0u + 6u);
    set32(c.r[5], 0u + 17u);
    set32(c.r[7], c.r[7].w[0] - 17936u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    st32((c.r[4].w[0] + 116u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);  if (t) { goto L_004060D8; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00690000u);
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    c.f[1] = c.r[3].w[0];
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[6], c.r[6].w[0] - 17952u);
    set32(c.r[5], c.r[5].w[0] + 16496u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x33000000u);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    st32((c.r[4].w[0] + 168u), c.r[5].w[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 276u), c.r[3].w[0]);  if (t) { goto L_00406108; } }
L_004060D8:
    st32((c.r[4].w[0] + 32u), 0u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x9A2E0000u);
    set32(c.r[5], c.r[5].w[0] + 16496u);
    c.r[3].d[0] = c.r[3].d[0] | 13418ull;
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    st32((c.r[4].w[0] + 168u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 276u), c.r[3].w[0]);
    c.budget -= 12;
L_00406108:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00406110:
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC4210000u);
    c.f[1] = c.r[5].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 36u), c.f[1]);  if (t) { goto L_00406158; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44A10000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.budget -= 6;
L_00406158:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00406170:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 17920u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00404000u < 16384u) { entry = entries_00C1[(t - 0x00404000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00406190:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[6], c.r[6].w[0] + 25040u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 17u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 116u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[5].w[0]);
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(0u));
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_004061D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004061F4u); set32(c.r[19], c.r[16].w[0] + 304u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x004061F4u) [[unlikely]] return; }
L_004061F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004061FCu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x004061FCu) [[unlikely]] return; }
L_004061FC:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[18], 0u + 7u);
    set32(c.r[17], c.r[17].w[0] - 17876u);
    set32(c.r[16], 0u + 1680u);
    c.budget -= 5;
L_00406210:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[5].d[0] = ld8((c.r[19].w[0] + 4u));
    set32(c.r[6], ld32((c.r[17].w[0] - 28u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406224u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0076(c, 22u, depth + 1u); else { c.pc = 0x002D83F0u; return; } if (c.pc != 0x00406224u) [[unlikely]] return; }
L_00406224:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.r[1].d[0] = c.r[18].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 240u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00406210u | kUnwind; return; } goto L_00406210; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00406260:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    set32(c.r[18], c.r[18].w[0] - 8752u);
    set32(c.r[17], c.r[17].w[0] - 8832u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[16].w[0] - 25968u);  if (t) { goto L_00406300; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004062A4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000B(c, 106u, depth + 1u); else { c.pc = 0x0012DF10u; return; } if (c.pc != 0x004062A4u) [[unlikely]] return; }
L_004062A4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[4], 0u + 4u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 20u)));
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 21u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004062CCu); st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 106u, depth + 1u); else { c.pc = 0x0012DF10u; return; } if (c.pc != 0x004062CCu) [[unlikely]] return; }
L_004062CC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    st8((c.r[16].w[0] + 11u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    st8((c.r[16].w[0] + 15u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00406360; } }
L_00406300:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00406318; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406310u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_000B(c, 106u, depth + 1u); else { c.pc = 0x0012DF10u; return; } if (c.pc != 0x00406310u) [[unlikely]] return; }
L_00406310:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00406320; } }
L_00406318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406320u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000B(c, 106u, depth + 1u); else { c.pc = 0x0012DF10u; return; } if (c.pc != 0x00406320u) [[unlikely]] return; }
L_00406320:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 20u)));
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 21u)));
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 11u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(0u));
    c.budget -= 16;
L_00406360:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 23u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 25u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 31u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 21u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 32u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 33u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 22u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 34u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 23u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004063C4u); st8((c.r[2].w[0] + 35u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_00C2(c, 30u, depth + 1u); else { c.pc = 0x00408500u; return; } if (c.pc != 0x004063C4u) [[unlikely]] return; }
L_004063C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004063E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406418u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x00406418u) [[unlikely]] return; }
L_00406418:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00406478; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].d[0] = c.r[17].d[0] << 56;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], 0u + 20u);
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    set32(c.r[5], c.r[5].w[0] + 26080u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    set32(c.r[4], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[19].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[1].w[0] - 26028u), c.r[18].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st32((c.r[1].w[0] - 25992u), c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st8((c.r[1].w[0] - 26031u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 22;
L_00406478:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004064A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 4u);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], c.r[2].w[0] - 8752u);
    set32(c.r[6], c.r[6].w[0] - 8832u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[5], c.r[5].w[0] - 25968u);  if (t) { goto L_00406518; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 11u)));
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 10u)));
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 14u)));
    st8((c.r[6].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 15u)));
    st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 12u)));
    st8((c.r[6].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 13u)));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 10u)));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00406550; } }
    c.budget -= 1;
L_00406518:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 6u)));
    st8((c.r[2].w[0] + 22u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 7u)));
    st8((c.r[2].w[0] + 23u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8u)));
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 9u)));
    st8((c.r[2].w[0] + 21u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 10u)));
    st8((c.r[2].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 14;
L_00406550:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 23u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 24u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 25u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 31u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 21u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 32u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 33u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 34u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 23u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004065B4u); st8((c.r[2].w[0] + 35u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_00C2(c, 30u, depth + 1u); else { c.pc = 0x00408500u; return; } if (c.pc != 0x004065B4u) [[unlikely]] return; }
L_004065B4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004065C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004065C4u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x004065C4u) [[unlikely]] return; }
L_004065C4:
    c.budget -= 1;
L_004065C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004065E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00406610; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406604u);  if (depth < kMaxDepth) unit_00C1(c, 409u, depth + 1u); else { c.pc = 0x00407660u; return; } if (c.pc != 0x00406604u) [[unlikely]] return; }
L_00406604:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00406618; } }
    c.budget -= 1;
L_00406610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406618u);  if (depth < kMaxDepth) unit_00C1(c, 317u, depth + 1u); else { c.pc = 0x00406650u; return; } if (c.pc != 0x00406618u) [[unlikely]] return; }
L_00406618:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00406630:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00406640:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_00406650:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 8848u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00404000u < 16384u) { entry = entries_00C1[(t - 0x00404000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00406670:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.f[12] = c.r[2].w[0];
    set32(c.r[3], c.r[3].w[0] + 27104u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    st8((c.r[1].w[0] - 26032u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    set32(c.r[4], c.r[4].w[0] - 26024u);
    st16((c.r[1].w[0] - 25984u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 26028u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004066C4u); set32(c.r[6], c.r[5].w[0] + 240u);  if (depth < kMaxDepth) unit_00AC(c, 54u, depth + 1u); else { c.pc = 0x003B0700u; return; } if (c.pc != 0x004066C4u) [[unlikely]] return; }
L_004066C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    set32(c.r[4], c.r[4].w[0] - 26008u);
    set32(c.r[5], c.r[5].w[0] - 25968u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004066DCu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x004066DCu) [[unlikely]] return; }
L_004066DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004066F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[19], c.r[19].w[0] - 26032u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], c.r[18].w[0] - 25968u);  if (t) { goto L_00406748; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406730u); set32(c.r[4], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_00AC(c, 64u, depth + 1u); else { c.pc = 0x003B0A80u; return; } if (c.pc != 0x00406730u) [[unlikely]] return; }
L_00406730:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_00406740; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004069C0; } }
L_00406740:
    st8((c.r[20].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00406748:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406754u); c.r[4].d[0] = ld8((c.r[19].w[0] + 1u));  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x00406754u) [[unlikely]] return; }
L_00406754:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406764u); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_0049(c, 388u, depth + 1u); else { c.pc = 0x002278D0u; return; } if (c.pc != 0x00406764u) [[unlikely]] return; }
L_00406764:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[17].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00406798; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040677Cu); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x0040677Cu) [[unlikely]] return; }
L_0040677C:
    set32(c.r[4], c.r[19].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406788u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x00406788u) [[unlikely]] return; }
L_00406788:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004069C0; } }
    c.budget -= 1;
L_00406798:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006C0000u);  if (t) { goto L_004068D8; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 14416u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00404000u < 16384u) { entry = entries_00C1[(t - 0x00404000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004067C0:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 1u));
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004067D0u); set32(c.r[16], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x004067D0u) [[unlikely]] return; }
L_004067D0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004067E0u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 386u, depth + 1u); else { c.pc = 0x00227840u; return; } if (c.pc != 0x004067E0u) [[unlikely]] return; }
L_004067E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004068D8; } }
L_004067E8:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 1u));
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004067F8u); set32(c.r[16], c.r[18].w[0] + 5u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x004067F8u) [[unlikely]] return; }
L_004067F8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406808u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0049(c, 386u, depth + 1u); else { c.pc = 0x00227840u; return; } if (c.pc != 0x00406808u) [[unlikely]] return; }
L_00406808:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004068D8; } }
L_00406810:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 1u));
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406820u); set32(c.r[16], c.r[18].w[0] + 6u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x00406820u) [[unlikely]] return; }
L_00406820:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406830u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 386u, depth + 1u); else { c.pc = 0x00227840u; return; } if (c.pc != 0x00406830u) [[unlikely]] return; }
L_00406830:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004068D8; } }
L_00406838:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 1u));
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 7u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406848u); set32(c.r[16], c.r[18].w[0] + 7u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x00406848u) [[unlikely]] return; }
L_00406848:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 7u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406858u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 386u, depth + 1u); else { c.pc = 0x00227840u; return; } if (c.pc != 0x00406858u) [[unlikely]] return; }
L_00406858:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004068D8; } }
L_00406860:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 1u));
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406870u); set32(c.r[16], c.r[18].w[0] + 8u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x00406870u) [[unlikely]] return; }
L_00406870:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406880u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0049(c, 386u, depth + 1u); else { c.pc = 0x00227840u; return; } if (c.pc != 0x00406880u) [[unlikely]] return; }
L_00406880:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004068D8; } }
L_00406888:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 1u));
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406898u); set32(c.r[16], c.r[18].w[0] + 9u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x00406898u) [[unlikely]] return; }
L_00406898:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004068A8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0049(c, 386u, depth + 1u); else { c.pc = 0x00227840u; return; } if (c.pc != 0x004068A8u) [[unlikely]] return; }
L_004068A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004068D8; } }
L_004068B0:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 1u));
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004068C0u); set32(c.r[16], c.r[18].w[0] + 10u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x004068C0u) [[unlikely]] return; }
L_004068C0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004068D0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 386u, depth + 1u); else { c.pc = 0x00227840u; return; } if (c.pc != 0x004068D0u) [[unlikely]] return; }
L_004068D0:
    st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_004068D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00406930; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004068F0u);  if (depth < kMaxDepth) unit_0049(c, 380u, depth + 1u); else { c.pc = 0x00227690u; return; } if (c.pc != 0x004068F0u) [[unlikely]] return; }
L_004068F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00406950; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 5u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040690Cu); st8((c.r[20].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00C1(c, 301u, depth + 1u); else { c.pc = 0x00406260u; return; } if (c.pc != 0x0040690Cu) [[unlikely]] return; }
L_0040690C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406918u); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x00406918u) [[unlikely]] return; }
L_00406918:
    set32(c.r[4], c.r[19].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406924u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x00406924u) [[unlikely]] return; }
L_00406924:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004069C0; } }
L_00406930:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00406950; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040694Cu); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x0040694Cu) [[unlikely]] return; }
L_0040694C:
    c.budget -= 1;
L_00406950:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 48u)));
    c.r[1].d[0] = c.r[2].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00406970; } }
    st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_00406970:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));  if (t) { goto L_00406988; } }
    set32(c.r[2], c.r[2].w[0] + 31u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_00406988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406990u);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x00406990u) [[unlikely]] return; }
L_00406990:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[2] = c.r[3].w[0];
    set32(c.r[4], c.r[19].w[0] + 8u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004069B8u); st32((c.r[19].w[0] + 44u), c.f[0]);  if (depth < kMaxDepth) unit_00AC(c, 62u, depth + 1u); else { c.pc = 0x003B0A00u; return; } if (c.pc != 0x004069B8u) [[unlikely]] return; }
L_004069B8:
    set32(c.r[3], 0u + 2u);
    st8((c.r[20].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_004069C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004069E0:
    set32(c.r[29], c.r[29].w[0] - 352u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    set32(c.r[3], 0u + 2u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    set32(c.r[4], c.r[4].w[0] - 26024u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    set32(c.r[22], c.r[29].w[0] + 336u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    set32(c.r[30], c.r[30].w[0] - 25968u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[29].w[0] + 328u);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], c.r[29].w[0] + 332u);
    st32((c.r[29].w[0] + 288u), c.r[3].w[0]);
    set32(c.r[19], c.r[19].w[0] - 26032u);
    st32((c.r[29].w[0] + 324u), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] - 26008u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406A5Cu); st32((c.r[22].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x00406A5Cu) [[unlikely]] return; }
L_00406A5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406A64u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00406A64u) [[unlikely]] return; }
L_00406A64:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2140000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 26032u)));
    c.f[12] = 0u;
    c.f[1] = c.r[3].w[0];
    c.f[14] = c.f[12];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406A90u); c.f[13] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00406A90u) [[unlikely]] return; }
L_00406A90:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    set32(c.r[5], 0u + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406AA0u); set32(c.r[4], c.r[4].w[0] - 26024u);  if (depth < kMaxDepth) unit_00AC(c, 67u, depth + 1u); else { c.pc = 0x003B0B80u; return; } if (c.pc != 0x00406AA0u) [[unlikely]] return; }
L_00406AA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 26032u)));
    c.r[1].d[0] = c.r[2].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00406AF0; } }
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406AC4u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00406AC4u) [[unlikely]] return; }
L_00406AC4:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.f[12] = ld32((c.r[19].w[0] + 44u));
    set32(c.r[5], 0u + 11u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406AD8u); set32(c.r[4], c.r[2].w[0] + 8160u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00406AD8u) [[unlikely]] return; }
L_00406AD8:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.f[12] = ld32((c.r[19].w[0] + 44u));
    set32(c.r[5], 0u + 11u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406AECu); set32(c.r[4], c.r[2].w[0] + 8400u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00406AECu) [[unlikely]] return; }
L_00406AEC:
    c.budget -= 1;
L_00406AF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406AF8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00406AF8u) [[unlikely]] return; }
L_00406AF8:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], 0u + 11u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406B0Cu); set32(c.r[4], c.r[2].w[0] + 960u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00406B0Cu) [[unlikely]] return; }
L_00406B0C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], 0u + 13u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406B20u); set32(c.r[4], c.r[2].w[0] + 1200u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00406B20u) [[unlikely]] return; }
L_00406B20:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], 0u + 13u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406B34u); set32(c.r[4], c.r[2].w[0] + 8640u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00406B34u) [[unlikely]] return; }
L_00406B34:
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00690000u);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[21], c.r[21].w[0] - 8880u);
    c.budget -= 3;
L_00406B40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406B48u); c.r[23].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00406B48u) [[unlikely]] return; }
L_00406B48:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_00406B68; } }
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406B64u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00406B64u) [[unlikely]] return; }
L_00406B64:
    c.budget -= 1;
L_00406B68:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[4].d[0] = c.r[23].d[0] << 56;
    set32(c.r[5], 0u + 11u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406B90u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00406B90u) [[unlikely]] return; }
L_00406B90:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00406B40u | kUnwind; return; } goto L_00406B40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406BA8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00406BA8u) [[unlikely]] return; }
L_00406BA8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00406BD0; } }
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406BC4u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00406BC4u) [[unlikely]] return; }
L_00406BC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 272u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00406BD8; } }
    c.budget -= 1;
L_00406BD0:
    set32(c.r[2], 0u + 4u);
    st8((c.r[29].w[0] + 272u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00406BD8:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], 0u + 11u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406BECu); set32(c.r[4], c.r[2].w[0] + 2880u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00406BECu) [[unlikely]] return; }
L_00406BEC:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], 0u + 11u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406C00u); set32(c.r[4], c.r[2].w[0] + 1680u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00406C00u) [[unlikely]] return; }
L_00406C00:
    c.r[20].d[0] = 0ull + 0ull;
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[23], c.r[29].w[0] + 340u);
    c.budget -= 4;
L_00406C10:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 272u)));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[30].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[20].d[0]; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00406C30; } }
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
L_00406C30:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[20].d[0]; set32(c.r[2], c.r[3].w[0] + 2u);  if (t) { goto L_00406C48; } }
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
L_00406C48:
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 8912u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00406C78; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00406C94; } }
L_00406C78:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_00406C94:
    st32((c.r[17].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00406CB0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00406CC8; } }
L_00406CB0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_00406CC8:
    st32((c.r[16].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00406CE4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00406CFC; } }
L_00406CE4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_00406CFC:
    st32((c.r[22].w[0]), c.f[0]);
    set32(c.r[3], c.r[21].w[0] + 1920u);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406D20u); st32((c.r[23].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00406D20u) [[unlikely]] return; }
L_00406D20:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 240u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00406C10u | kUnwind; return; } goto L_00406C10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406D38u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00406D38u) [[unlikely]] return; }
L_00406D38:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00406D60; } }
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406D58u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00406D58u) [[unlikely]] return; }
L_00406D58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 176u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00406D68; } }
L_00406D60:
    set32(c.r[2], 0u + 4u);
    st8((c.r[29].w[0] + 176u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00406D68:
    c.r[20].d[0] = 0ull + 0ull;
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00406D70:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 176u)));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[30].w[0] + 5u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[20].d[0]; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00406D90; } }
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
L_00406D90:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[20].d[0]; set32(c.r[2], c.r[3].w[0] + 2u);  if (t) { goto L_00406DA8; } }
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
L_00406DA8:
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 8912u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00406DD8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00406DF4; } }
L_00406DD8:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_00406DF4:
    st32((c.r[17].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00406E10; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00406E28; } }
L_00406E10:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_00406E28:
    st32((c.r[16].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00406E44; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00406E5C; } }
L_00406E44:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_00406E5C:
    st32((c.r[22].w[0]), c.f[0]);
    set32(c.r[3], c.r[21].w[0] + 3360u);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406E80u); st32((c.r[23].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00406E80u) [[unlikely]] return; }
L_00406E80:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 240u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00406D70u | kUnwind; return; } goto L_00406D70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406E98u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00406E98u) [[unlikely]] return; }
L_00406E98:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00406EC0; } }
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406EB8u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00406EB8u) [[unlikely]] return; }
L_00406EB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 192u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00406EC8; } }
L_00406EC0:
    set32(c.r[2], 0u + 4u);
    st8((c.r[29].w[0] + 192u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00406EC8:
    c.r[20].d[0] = 0ull + 0ull;
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00406ED0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 192u)));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[30].w[0] + 6u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[20].d[0]; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00406EF0; } }
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
L_00406EF0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[20].d[0]; set32(c.r[2], c.r[3].w[0] + 2u);  if (t) { goto L_00406F08; } }
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
L_00406F08:
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 8912u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00406F38; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00406F54; } }
L_00406F38:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_00406F54:
    st32((c.r[17].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00406F70; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00406F88; } }
L_00406F70:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_00406F88:
    st32((c.r[16].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00406FA4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00406FBC; } }
L_00406FA4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_00406FBC:
    st32((c.r[22].w[0]), c.f[0]);
    set32(c.r[3], c.r[21].w[0] + 4800u);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406FE0u); st32((c.r[23].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00406FE0u) [[unlikely]] return; }
L_00406FE0:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 240u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00406ED0u | kUnwind; return; } goto L_00406ED0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406FF8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00406FF8u) [[unlikely]] return; }
L_00406FF8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00407020; } }
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407018u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00407018u) [[unlikely]] return; }
L_00407018:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 208u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00407028; } }
L_00407020:
    st8((c.r[29].w[0] + 208u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00407028:
    c.r[20].d[0] = 0ull + 0ull;
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00407030:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 208u)));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[30].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[20].d[0]; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00407050; } }
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
L_00407050:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[20].d[0]; set32(c.r[2], c.r[3].w[0] + 2u);  if (t) { goto L_00407068; } }
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
L_00407068:
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 8912u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00407098; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004070B4; } }
L_00407098:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_004070B4:
    st32((c.r[17].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_004070D0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004070E8; } }
L_004070D0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_004070E8:
    st32((c.r[16].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00407104; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0040711C; } }
L_00407104:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0040711C:
    st32((c.r[22].w[0]), c.f[0]);
    set32(c.r[3], c.r[21].w[0] + 6240u);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407140u); st32((c.r[23].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00407140u) [[unlikely]] return; }
L_00407140:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 240u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407030u | kUnwind; return; } goto L_00407030; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407158u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00407158u) [[unlikely]] return; }
L_00407158:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00407180; } }
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407178u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00407178u) [[unlikely]] return; }
L_00407178:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 224u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00407188; } }
L_00407180:
    set32(c.r[2], 0u + 4u);
    st8((c.r[29].w[0] + 224u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00407188:
    c.r[20].d[0] = 0ull + 0ull;
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00407190:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 224u)));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[30].w[0] + 10u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[20].d[0]; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_004071B0; } }
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
L_004071B0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[20].d[0]; set32(c.r[2], c.r[3].w[0] + 2u);  if (t) { goto L_004071C8; } }
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
L_004071C8:
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 8912u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_004071F8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00407214; } }
L_004071F8:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_00407214:
    st32((c.r[17].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00407230; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00407248; } }
L_00407230:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_00407248:
    st32((c.r[16].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00407264; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0040727C; } }
L_00407264:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0040727C:
    st32((c.r[22].w[0]), c.f[0]);
    set32(c.r[3], c.r[21].w[0] + 7440u);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004072A0u); st32((c.r[23].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x004072A0u) [[unlikely]] return; }
L_004072A0:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 240u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407190u | kUnwind; return; } goto L_00407190; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004072B8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x004072B8u) [[unlikely]] return; }
L_004072B8:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2140000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004072CCu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x004072CCu) [[unlikely]] return; }
L_004072CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004072D4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x004072D4u) [[unlikely]] return; }
L_004072D4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00407300; } }
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004072F4u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x004072F4u) [[unlikely]] return; }
L_004072F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 240u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00407308; } }
    c.budget -= 1;
L_00407300:
    set32(c.r[2], 0u + 4u);
    st8((c.r[29].w[0] + 240u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00407308:
    c.r[20].d[0] = 0ull + 0ull;
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00407310:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 240u)));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[30].w[0] + 7u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[20].d[0]; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00407330; } }
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
L_00407330:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[20].d[0]; set32(c.r[2], c.r[3].w[0] + 2u);  if (t) { goto L_00407348; } }
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
L_00407348:
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 8912u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00407378; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00407394; } }
L_00407378:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_00407394:
    st32((c.r[17].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_004073B0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004073C8; } }
L_004073B0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_004073C8:
    st32((c.r[16].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_004073E4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004073FC; } }
L_004073E4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_004073FC:
    st32((c.r[22].w[0]), c.f[0]);
    set32(c.r[3], c.r[21].w[0] + 4800u);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407420u); st32((c.r[23].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00407420u) [[unlikely]] return; }
L_00407420:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 240u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407310u | kUnwind; return; } goto L_00407310; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407438u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00407438u) [[unlikely]] return; }
L_00407438:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00407460; } }
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407458u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00407458u) [[unlikely]] return; }
L_00407458:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 256u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00407468; } }
L_00407460:
    set32(c.r[2], 0u + 4u);
    st8((c.r[29].w[0] + 256u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00407468:
    c.r[20].d[0] = 0ull + 0ull;
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00407470:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 256u)));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[30].w[0] + 9u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[20].d[0]; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00407490; } }
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
L_00407490:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[20].d[0]; set32(c.r[2], c.r[3].w[0] + 2u);  if (t) { goto L_004074A8; } }
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
L_004074A8:
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 8912u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_004074D8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004074F4; } }
L_004074D8:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_004074F4:
    st32((c.r[17].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00407510; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00407528; } }
L_00407510:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_00407528:
    st32((c.r[16].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00407544; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0040755C; } }
L_00407544:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0040755C:
    st32((c.r[22].w[0]), c.f[0]);
    set32(c.r[3], c.r[21].w[0] + 6240u);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407580u); st32((c.r[23].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00407580u) [[unlikely]] return; }
L_00407580:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 240u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407470u | kUnwind; return; } goto L_00407470; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407598u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00407598u) [[unlikely]] return; }
L_00407598:
    c.f[12] = 0u;
    c.f[13] = c.f[12];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004075ACu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x004075ACu) [[unlikely]] return; }
L_004075AC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004075B0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_004075D0; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004075F0; } }
L_004075D0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], 0u + 13u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004075E4u); set32(c.r[4], c.r[2].w[0] + 480u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x004075E4u) [[unlikely]] return; }
L_004075E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00407608; } }
    c.budget -= 1;
L_004075F0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], 0u + 13u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407604u); set32(c.r[4], c.r[2].w[0] + 720u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00407604u) [[unlikely]] return; }
L_00407604:
    c.budget -= 1;
L_00407608:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2140000u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040761Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0040761Cu) [[unlikely]] return; }
L_0040761C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004075B0u | kUnwind; return; } goto L_004075B0; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_00407660:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 8816u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00404000u < 16384u) { entry = entries_00C1[(t - 0x00404000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00407680:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[2], c.r[2].w[0] + 30416u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { st32((c.r[4].w[0] + 168u), c.r[2].w[0]);  goto L_004076E0; }
L_004076A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004076B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C1(c, 418u, depth + 1u); else { c.pc = 0x00407790u; return; } if (c.pc != 0x004076B4u) [[unlikely]] return; }
L_004076B4:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004076D0:
    c.budget -= 2;
    {  goto L_00407A20; }
L_004076E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st8((c.r[1].w[0] - 26032u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    set32(c.r[4], c.r[4].w[0] - 26024u);
    st8((c.r[1].w[0] - 26030u), static_cast<std::uint8_t>(0u));
    c.f[12] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st16((c.r[1].w[0] - 25984u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 26028u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407720u); set32(c.r[6], c.r[5].w[0] + 240u);  if (depth < kMaxDepth) unit_00AC(c, 54u, depth + 1u); else { c.pc = 0x003B0700u; return; } if (c.pc != 0x00407720u) [[unlikely]] return; }
L_00407720:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    set32(c.r[4], c.r[4].w[0] - 26008u);
    set32(c.r[5], c.r[5].w[0] - 25968u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407738u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00407738u) [[unlikely]] return; }
L_00407738:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00407750:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[4].d[0] = c.r[4].d[0] << 56;
    st32((c.r[1].w[0] - 26028u), c.r[5].w[0]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    st8((c.r[1].w[0] - 26031u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    set32(c.r[3], c.r[3].w[0] + 9600u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] - 25992u), c.r[3].w[0]);  c.pc = t; return; }
L_00407790:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[19], c.r[19].w[0] - 26032u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 26030u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], c.r[18].w[0] - 25968u);  if (t) { goto L_004077D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004077CCu); set32(c.r[4], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_00AC(c, 64u, depth + 1u); else { c.pc = 0x003B0A80u; return; } if (c.pc != 0x004077CCu) [[unlikely]] return; }
L_004077CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00407A00; } }
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_004077D8:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004077E4u); c.r[4].d[0] = ld8((c.r[19].w[0] + 1u));  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x004077E4u) [[unlikely]] return; }
L_004077E4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004077F4u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0049(c, 388u, depth + 1u); else { c.pc = 0x002278D0u; return; } if (c.pc != 0x004077F4u) [[unlikely]] return; }
L_004077F4:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00407820; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040780Cu); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x0040780Cu) [[unlikely]] return; }
L_0040780C:
    set32(c.r[4], c.r[19].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407818u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x00407818u) [[unlikely]] return; }
L_00407818:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00407A00; } }
L_00407820:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_004078F8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004078D0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_004078A8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00407880; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00407858; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00407920; } }
L_00407858:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 1u));
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 13u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407868u); set32(c.r[16], c.r[18].w[0] + 13u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x00407868u) [[unlikely]] return; }
L_00407868:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 13u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407878u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0049(c, 386u, depth + 1u); else { c.pc = 0x00227840u; return; } if (c.pc != 0x00407878u) [[unlikely]] return; }
L_00407878:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00407920; } }
L_00407880:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 1u));
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407890u); set32(c.r[16], c.r[18].w[0] + 10u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x00407890u) [[unlikely]] return; }
L_00407890:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004078A0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 386u, depth + 1u); else { c.pc = 0x00227840u; return; } if (c.pc != 0x004078A0u) [[unlikely]] return; }
L_004078A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00407920; } }
L_004078A8:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 1u));
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 11u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004078B8u); set32(c.r[16], c.r[18].w[0] + 11u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x004078B8u) [[unlikely]] return; }
L_004078B8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 11u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004078C8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 386u, depth + 1u); else { c.pc = 0x00227840u; return; } if (c.pc != 0x004078C8u) [[unlikely]] return; }
L_004078C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 11u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00407920; } }
L_004078D0:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 1u));
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004078E0u); set32(c.r[16], c.r[18].w[0] + 14u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x004078E0u) [[unlikely]] return; }
L_004078E0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 14u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004078F0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 386u, depth + 1u); else { c.pc = 0x00227840u; return; } if (c.pc != 0x004078F0u) [[unlikely]] return; }
L_004078F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00407920; } }
L_004078F8:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 1u));
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 15u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407908u); set32(c.r[16], c.r[18].w[0] + 15u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x00407908u) [[unlikely]] return; }
L_00407908:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 15u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407918u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 386u, depth + 1u); else { c.pc = 0x00227840u; return; } if (c.pc != 0x00407918u) [[unlikely]] return; }
L_00407918:
    st8((c.r[18].w[0] + 15u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00407920:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00407978; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407938u);  if (depth < kMaxDepth) unit_0049(c, 380u, depth + 1u); else { c.pc = 0x00227690u; return; } if (c.pc != 0x00407938u) [[unlikely]] return; }
L_00407938:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00407998; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 2u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407954u); st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00C1(c, 301u, depth + 1u); else { c.pc = 0x00406260u; return; } if (c.pc != 0x00407954u) [[unlikely]] return; }
L_00407954:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407960u); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x00407960u) [[unlikely]] return; }
L_00407960:
    set32(c.r[4], c.r[19].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040796Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x0040796Cu) [[unlikely]] return; }
L_0040796C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00407A00; } }
    c.budget -= 1;
L_00407978:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00407998; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407994u); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x00407994u) [[unlikely]] return; }
L_00407994:
    c.budget -= 1;
L_00407998:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 48u)));
    c.r[1].d[0] = c.r[2].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_004079B8; } }
    st16((c.r[19].w[0] + 48u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_004079B8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));  if (t) { goto L_004079D0; } }
    set32(c.r[2], c.r[2].w[0] + 31u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_004079D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004079D8u);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x004079D8u) [[unlikely]] return; }
L_004079D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[2] = c.r[3].w[0];
    set32(c.r[4], c.r[19].w[0] + 8u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407A00u); st32((c.r[19].w[0] + 44u), c.f[0]);  if (depth < kMaxDepth) unit_00AC(c, 62u, depth + 1u); else { c.pc = 0x003B0A00u; return; } if (c.pc != 0x00407A00u) [[unlikely]] return; }
L_00407A00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00407A20:
    set32(c.r[29], c.r[29].w[0] - 272u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    set32(c.r[2], c.r[2].w[0] - 25968u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    set32(c.r[3], 0u + 2u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    set32(c.r[30], c.r[29].w[0] + 256u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    set32(c.r[22], c.r[29].w[0] + 252u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    set32(c.r[4], c.r[4].w[0] - 26024u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[19], c.r[19].w[0] - 26032u);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], c.r[29].w[0] + 248u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] - 26008u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[29].w[0] + 208u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407AA0u); st32((c.r[30].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AC(c, 60u, depth + 1u); else { c.pc = 0x003B0940u; return; } if (c.pc != 0x00407AA0u) [[unlikely]] return; }
L_00407AA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407AA8u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00407AA8u) [[unlikely]] return; }
L_00407AA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2140000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 26032u)));
    c.f[12] = 0u;
    c.f[1] = c.r[3].w[0];
    c.f[14] = c.f[12];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407AD4u); c.f[13] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00407AD4u) [[unlikely]] return; }
L_00407AD4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407AE4u); set32(c.r[4], c.r[4].w[0] - 26024u);  if (depth < kMaxDepth) unit_00AC(c, 67u, depth + 1u); else { c.pc = 0x003B0B80u; return; } if (c.pc != 0x00407AE4u) [[unlikely]] return; }
L_00407AE4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CF0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 26032u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00407B50; } }
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407B08u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00407B08u) [[unlikely]] return; }
L_00407B08:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.f[12] = ld32((c.r[19].w[0] + 44u));
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407B1Cu); set32(c.r[4], c.r[2].w[0] + 5280u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00407B1Cu) [[unlikely]] return; }
L_00407B1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x435C0000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407B30u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00407B30u) [[unlikely]] return; }
L_00407B30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407B38u); c.r[4].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x00407B38u) [[unlikely]] return; }
L_00407B38:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.f[12] = ld32((c.r[19].w[0] + 44u));
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407B4Cu); set32(c.r[4], c.r[2].w[0] + 5280u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x00407B4Cu) [[unlikely]] return; }
L_00407B4C:
    c.budget -= 1;
L_00407B50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407B58u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00407B58u) [[unlikely]] return; }
L_00407B58:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407B6Cu); set32(c.r[4], c.r[2].w[0] + 960u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00407B6Cu) [[unlikely]] return; }
L_00407B6C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], 0u + 5u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407B80u); set32(c.r[4], c.r[2].w[0] + 1200u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00407B80u) [[unlikely]] return; }
L_00407B80:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u + 3u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00407BC0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407BA4u); set32(c.r[4], c.r[2].w[0] + 4560u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00407BA4u) [[unlikely]] return; }
L_00407BA4:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], 0u + 5u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407BB8u); set32(c.r[4], c.r[2].w[0] + 4800u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00407BB8u) [[unlikely]] return; }
L_00407BB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00407BE8; } }
L_00407BC0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407BD0u); set32(c.r[4], c.r[2].w[0] + 4320u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00407BD0u) [[unlikely]] return; }
L_00407BD0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], 0u + 5u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407BE4u); set32(c.r[4], c.r[2].w[0] + 4800u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00407BE4u) [[unlikely]] return; }
L_00407BE4:
    c.budget -= 1;
L_00407BE8:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00690000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[20], c.r[20].w[0] - 8832u);
    c.budget -= 4;
L_00407BF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407C00u); c.r[21].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00407C00u) [[unlikely]] return; }
L_00407C00:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_00407C20; } }
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407C1Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00407C1Cu) [[unlikely]] return; }
L_00407C1C:
    c.budget -= 1;
L_00407C20:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[4].d[0] = c.r[21].d[0] << 56;
    set32(c.r[5], 0u + 3u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407C48u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00407C48u) [[unlikely]] return; }
L_00407C48:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407BF8u | kUnwind; return; } goto L_00407BF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407C60u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00407C60u) [[unlikely]] return; }
L_00407C60:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00407C88; } }
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407C7Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00407C7Cu) [[unlikely]] return; }
L_00407C7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_00407C90; } }
    c.budget -= 1;
L_00407C88:
    set32(c.r[21], 0u + 4u);
    c.budget -= 2;
L_00407C90:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[23], c.r[29].w[0] + 260u);
    c.budget -= 4;
L_00407CA0:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[3].d[0] = c.r[21].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 13u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);  if (t) { goto L_00407CC0; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
L_00407CC0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 13u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; set32(c.r[2], c.r[3].w[0] + 2u);  if (t) { goto L_00407CD8; } }
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
L_00407CD8:
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 8912u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00407D08; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00407D24; } }
L_00407D08:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_00407D24:
    st32((c.r[16].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00407D40; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00407D58; } }
L_00407D40:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_00407D58:
    st32((c.r[22].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00407D74; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00407D8C; } }
L_00407D74:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_00407D8C:
    st32((c.r[30].w[0]), c.f[0]);
    set32(c.r[3], c.r[20].w[0] + 1680u);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407DB0u); st32((c.r[23].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00407DB0u) [[unlikely]] return; }
L_00407DB0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 240u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407CA0u | kUnwind; return; } goto L_00407CA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407DC8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00407DC8u) [[unlikely]] return; }
L_00407DC8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00407DF0; } }
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407DE8u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00407DE8u) [[unlikely]] return; }
L_00407DE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_00407DF8; } }
L_00407DF0:
    set32(c.r[21], 0u + 4u);
    c.budget -= 2;
L_00407DF8:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[20], c.r[28].w[0] - 25012u);
    c.budget -= 2;
L_00407E00:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[3].d[0] = c.r[21].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 10u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);  if (t) { goto L_00407E20; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
L_00407E20:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; set32(c.r[2], c.r[3].w[0] + 2u);  if (t) { goto L_00407E38; } }
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
L_00407E38:
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 8912u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00407E68; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00407E84; } }
L_00407E68:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_00407E84:
    st32((c.r[16].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00407EA0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00407EB8; } }
L_00407EA0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_00407EB8:
    st32((c.r[22].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00407ED4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00407EEC; } }
L_00407ED4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_00407EEC:
    st32((c.r[30].w[0]), c.f[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407F14u); st32((c.r[23].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x00407F14u) [[unlikely]] return; }
L_00407F14:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00407F30; } }
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2140000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407F30u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00407F30u) [[unlikely]] return; }
L_00407F30:
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407F40u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00407F40u) [[unlikely]] return; }
L_00407F40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407F48u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00407F48u) [[unlikely]] return; }
L_00407F48:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407E00u | kUnwind; return; } goto L_00407E00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407F60u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00407F60u) [[unlikely]] return; }
L_00407F60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00407F88; } }
    c.f[12] = 0u;
    c.f[13] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407F80u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00407F80u) [[unlikely]] return; }
L_00407F80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_00407F90; } }
L_00407F88:
    set32(c.r[21], 0u + 4u);
    c.budget -= 2;
L_00407F90:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[20], c.r[28].w[0] - 25008u);
    c.budget -= 2;
L_00407F98:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[3].d[0] = c.r[21].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 11u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);  if (t) { goto L_00407FB8; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
L_00407FB8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 11u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; set32(c.r[2], c.r[3].w[0] + 2u);  if (t) { goto L_00407FD0; } }
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
L_00407FD0:
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00690000u);
    set32(c.r[2], c.r[2].w[0] - 8912u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { [[clang::musttail]] return unit_00C2(c, 1u, depth); } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { [[clang::musttail]] return unit_00C2(c, 2u, depth); } }
    [[clang::musttail]] return unit_00C2(c, 1u, depth);
}

}
