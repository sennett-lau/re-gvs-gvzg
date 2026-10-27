#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0049[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0,
    0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0,
    0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0,
    0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0,
    30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0,
    34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0,
    0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0,
    42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0,
    58, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0,
    0, 0, 0, 71, 0, 72, 0, 73, 0, 0, 0, 74, 75, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    81, 0, 82, 0, 83, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0,
    88, 0, 89, 0, 90, 0, 91, 0, 92, 0, 93, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0,
    99, 0, 100, 0, 101, 0, 102, 0, 103, 0, 104, 0, 105, 0, 106, 0, 107, 0, 108, 0, 109, 0, 110, 0, 111, 0, 0, 0, 112, 0, 0, 0,
    113, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0,
    121, 0, 122, 0, 123, 0, 124, 0, 125, 0, 126, 0, 0, 0, 0, 127, 0, 128, 0, 129, 0, 130, 0, 131, 0, 132, 0, 0, 133, 0, 0, 0,
    134, 0, 135, 0, 136, 0, 137, 0, 0, 138, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 143, 0, 144, 0,
    145, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 149, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 152, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 161, 0, 162, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 171, 0,
    172, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 178, 0, 0, 0,
    0, 0, 0, 179, 180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 0,
    196, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0,
    0, 201, 0, 0, 0, 202, 0, 0, 203, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 208, 0, 0, 209, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0,
    215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0,
    0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0,
    0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0,
    0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 249, 0, 0, 250, 0, 0, 251,
    0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0,
    266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 273,
    0, 0, 274, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 281, 0,
    282, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 287, 0, 288, 0, 0, 0, 289, 0, 0, 0, 290, 0,
    291, 0, 0, 0, 292, 0, 0, 0, 293, 0, 294, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 299, 0,
    0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 305, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307,
    0, 308, 0, 309, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 315, 0, 316, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0,
    328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 332, 0, 333, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0,
    0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 347, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 352, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 362, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    365, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 401, 0, 0, 0, 0, 0, 402, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0,
    0, 0, 0, 0, 406, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0,
    419, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0,
};

void unit_0049(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00224000;
    case 2u: goto L_00224010;
    case 3u: goto L_00224040;
    case 4u: goto L_00224070;
    case 5u: goto L_002240A4;
    case 6u: goto L_002240B4;
    case 7u: goto L_002240C0;
    case 8u: goto L_002240F0;
    case 9u: goto L_00224128;
    case 10u: goto L_00224138;
    case 11u: goto L_00224150;
    case 12u: goto L_00224168;
    case 13u: goto L_00224184;
    case 14u: goto L_00224190;
    case 15u: goto L_002241A8;
    case 16u: goto L_002241C4;
    case 17u: goto L_002241D0;
    case 18u: goto L_002241F8;
    case 19u: goto L_00224208;
    case 20u: goto L_00224220;
    case 21u: goto L_00224238;
    case 22u: goto L_00224254;
    case 23u: goto L_00224260;
    case 24u: goto L_00224278;
    case 25u: goto L_00224294;
    case 26u: goto L_002242A0;
    case 27u: goto L_002242B8;
    case 28u: goto L_002242D4;
    case 29u: goto L_002242E0;
    case 30u: goto L_00224300;
    case 31u: goto L_00224314;
    case 32u: goto L_00224330;
    case 33u: goto L_00224360;
    case 34u: goto L_00224380;
    case 35u: goto L_002243D0;
    case 36u: goto L_002243F0;
    case 37u: goto L_00224408;
    case 38u: goto L_00224498;
    case 39u: goto L_002244B8;
    case 40u: goto L_002244C8;
    case 41u: goto L_002244E4;
    case 42u: goto L_00224500;
    case 43u: goto L_00224530;
    case 44u: goto L_002245C0;
    case 45u: goto L_002245E8;
    case 46u: goto L_00224630;
    case 47u: goto L_002246C0;
    case 48u: goto L_00224798;
    case 49u: goto L_002247B4;
    case 50u: goto L_002247C4;
    case 51u: goto L_002247D4;
    case 52u: goto L_002247E4;
    case 53u: goto L_00224820;
    case 54u: goto L_00224860;
    case 55u: goto L_002248B0;
    case 56u: goto L_002248C8;
    case 57u: goto L_002248F0;
    case 58u: goto L_00224900;
    case 59u: goto L_0022491C;
    case 60u: goto L_00224924;
    case 61u: goto L_00224930;
    case 62u: goto L_00224964;
    case 63u: goto L_00224990;
    case 64u: goto L_002249BC;
    case 65u: goto L_002249F4;
    case 66u: goto L_00224A30;
    case 67u: goto L_00224A68;
    case 68u: goto L_00224AA0;
    case 69u: goto L_00224AD8;
    case 70u: goto L_00224AF0;
    case 71u: goto L_00224B0C;
    case 72u: goto L_00224B14;
    case 73u: goto L_00224B1C;
    case 74u: goto L_00224B2C;
    case 75u: goto L_00224B30;
    case 76u: goto L_00224B38;
    case 77u: goto L_00224B68;
    case 78u: goto L_00224B98;
    case 79u: goto L_00224BC0;
    case 80u: goto L_00224BC8;
    case 81u: goto L_00224C00;
    case 82u: goto L_00224C08;
    case 83u: goto L_00224C10;
    case 84u: goto L_00224C18;
    case 85u: goto L_00224C20;
    case 86u: goto L_00224C3C;
    case 87u: goto L_00224C68;
    case 88u: goto L_00224C80;
    case 89u: goto L_00224C88;
    case 90u: goto L_00224C90;
    case 91u: goto L_00224C98;
    case 92u: goto L_00224CA0;
    case 93u: goto L_00224CA8;
    case 94u: goto L_00224CB8;
    case 95u: goto L_00224CC0;
    case 96u: goto L_00224CE0;
    case 97u: goto L_00224D40;
    case 98u: goto L_00224D70;
    case 99u: goto L_00224D80;
    case 100u: goto L_00224D88;
    case 101u: goto L_00224D90;
    case 102u: goto L_00224D98;
    case 103u: goto L_00224DA0;
    case 104u: goto L_00224DA8;
    case 105u: goto L_00224DB0;
    case 106u: goto L_00224DB8;
    case 107u: goto L_00224DC0;
    case 108u: goto L_00224DC8;
    case 109u: goto L_00224DD0;
    case 110u: goto L_00224DD8;
    case 111u: goto L_00224DE0;
    case 112u: goto L_00224DF0;
    case 113u: goto L_00224E00;
    case 114u: goto L_00224E10;
    case 115u: goto L_00224E20;
    case 116u: goto L_00224E30;
    case 117u: goto L_00224E40;
    case 118u: goto L_00224E50;
    case 119u: goto L_00224E60;
    case 120u: goto L_00224E70;
    case 121u: goto L_00224E80;
    case 122u: goto L_00224E88;
    case 123u: goto L_00224E90;
    case 124u: goto L_00224E98;
    case 125u: goto L_00224EA0;
    case 126u: goto L_00224EA8;
    case 127u: goto L_00224EBC;
    case 128u: goto L_00224EC4;
    case 129u: goto L_00224ECC;
    case 130u: goto L_00224ED4;
    case 131u: goto L_00224EDC;
    case 132u: goto L_00224EE4;
    case 133u: goto L_00224EF0;
    case 134u: goto L_00224F00;
    case 135u: goto L_00224F08;
    case 136u: goto L_00224F10;
    case 137u: goto L_00224F18;
    case 138u: goto L_00224F24;
    case 139u: goto L_00224F38;
    case 140u: goto L_00224F40;
    case 141u: goto L_00224F60;
    case 142u: goto L_00224F68;
    case 143u: goto L_00224F70;
    case 144u: goto L_00224F78;
    case 145u: goto L_00224F80;
    case 146u: goto L_00224F88;
    case 147u: goto L_00224FA0;
    case 148u: goto L_00224FB0;
    case 149u: goto L_00224FB8;
    case 150u: goto L_00224FC0;
    case 151u: goto L_00224FC8;
    case 152u: goto L_00225090;
    case 153u: goto L_00225098;
    case 154u: goto L_002250A4;
    case 155u: goto L_002250CC;
    case 156u: goto L_002250F0;
    case 157u: goto L_00225110;
    case 158u: goto L_00225168;
    case 159u: goto L_00225190;
    case 160u: goto L_002251A0;
    case 161u: goto L_002251A8;
    case 162u: goto L_002251B0;
    case 163u: goto L_002251C0;
    case 164u: goto L_002251D0;
    case 165u: goto L_002251E0;
    case 166u: goto L_00225200;
    case 167u: goto L_00225238;
    case 168u: goto L_00225290;
    case 169u: goto L_002252E0;
    case 170u: goto L_002252E8;
    case 171u: goto L_002252F8;
    case 172u: goto L_00225300;
    case 173u: goto L_00225308;
    case 174u: goto L_00225324;
    case 175u: goto L_00225334;
    case 176u: goto L_00225360;
    case 177u: goto L_00225368;
    case 178u: goto L_00225370;
    case 179u: goto L_0022538C;
    case 180u: goto L_00225390;
    case 181u: goto L_002253B4;
    case 182u: goto L_002253C0;
    case 183u: goto L_002253D0;
    case 184u: goto L_002253F0;
    case 185u: goto L_00225430;
    case 186u: goto L_00225450;
    case 187u: goto L_0022548C;
    case 188u: goto L_0022549C;
    case 189u: goto L_002254A8;
    case 190u: goto L_002254B4;
    case 191u: goto L_002254C0;
    case 192u: goto L_002254CC;
    case 193u: goto L_002254D8;
    case 194u: goto L_002254E4;
    case 195u: goto L_002254F0;
    case 196u: goto L_00225500;
    case 197u: goto L_0022550C;
    case 198u: goto L_00225524;
    case 199u: goto L_00225548;
    case 200u: goto L_00225564;
    case 201u: goto L_00225584;
    case 202u: goto L_00225594;
    case 203u: goto L_002255A0;
    case 204u: goto L_002255AC;
    case 205u: goto L_002255B8;
    case 206u: goto L_002255CC;
    case 207u: goto L_002255E0;
    case 208u: goto L_00225608;
    case 209u: goto L_00225614;
    case 210u: goto L_00225620;
    case 211u: goto L_00225630;
    case 212u: goto L_00225640;
    case 213u: goto L_0022565C;
    case 214u: goto L_00225668;
    case 215u: goto L_00225680;
    case 216u: goto L_00225698;
    case 217u: goto L_002256B0;
    case 218u: goto L_002256E0;
    case 219u: goto L_00225704;
    case 220u: goto L_00225740;
    case 221u: goto L_00225758;
    case 222u: goto L_0022579C;
    case 223u: goto L_002257AC;
    case 224u: goto L_002257B8;
    case 225u: goto L_002257EC;
    case 226u: goto L_002257F4;
    case 227u: goto L_00225814;
    case 228u: goto L_00225848;
    case 229u: goto L_00225850;
    case 230u: goto L_00225880;
    case 231u: goto L_002258F0;
    case 232u: goto L_00225910;
    case 233u: goto L_00225918;
    case 234u: goto L_00225930;
    case 235u: goto L_00225950;
    case 236u: goto L_00225958;
    case 237u: goto L_00225970;
    case 238u: goto L_002259C0;
    case 239u: goto L_002259C8;
    case 240u: goto L_002259E0;
    case 241u: goto L_00225A10;
    case 242u: goto L_00225A58;
    case 243u: goto L_00225A88;
    case 244u: goto L_00225AA8;
    case 245u: goto L_00225AE0;
    case 246u: goto L_00225AE8;
    case 247u: goto L_00225B48;
    case 248u: goto L_00225B58;
    case 249u: goto L_00225B64;
    case 250u: goto L_00225B70;
    case 251u: goto L_00225B7C;
    case 252u: goto L_00225B88;
    case 253u: goto L_00225BB4;
    case 254u: goto L_00225BC0;
    case 255u: goto L_00225C00;
    case 256u: goto L_00225C50;
    case 257u: goto L_00225C64;
    case 258u: goto L_00225C70;
    case 259u: goto L_00225CB0;
    case 260u: goto L_00225CF4;
    case 261u: goto L_00225D1C;
    case 262u: goto L_00225DB8;
    case 263u: goto L_00225DC8;
    case 264u: goto L_00225DD8;
    case 265u: goto L_00225DE8;
    case 266u: goto L_00225E00;
    case 267u: goto L_00225EC0;
    case 268u: goto L_00225F08;
    case 269u: goto L_00225F18;
    case 270u: goto L_00225F60;
    case 271u: goto L_00225FE4;
    case 272u: goto L_00225FF0;
    case 273u: goto L_00225FFC;
    case 274u: goto L_00226008;
    case 275u: goto L_00226014;
    case 276u: goto L_00226068;
    case 277u: goto L_0022607C;
    case 278u: goto L_002260A4;
    case 279u: goto L_002260D8;
    case 280u: goto L_002260E8;
    case 281u: goto L_002260F8;
    case 282u: goto L_00226100;
    case 283u: goto L_00226110;
    case 284u: goto L_00226124;
    case 285u: goto L_00226130;
    case 286u: goto L_00226140;
    case 287u: goto L_00226150;
    case 288u: goto L_00226158;
    case 289u: goto L_00226168;
    case 290u: goto L_00226178;
    case 291u: goto L_00226180;
    case 292u: goto L_00226190;
    case 293u: goto L_002261A0;
    case 294u: goto L_002261A8;
    case 295u: goto L_002261B8;
    case 296u: goto L_002261C8;
    case 297u: goto L_002261D8;
    case 298u: goto L_002261E8;
    case 299u: goto L_002261F8;
    case 300u: goto L_00226218;
    case 301u: goto L_00226228;
    case 302u: goto L_00226238;
    case 303u: goto L_00226258;
    case 304u: goto L_00226268;
    case 305u: goto L_00226278;
    case 306u: goto L_002262C4;
    case 307u: goto L_002262FC;
    case 308u: goto L_00226304;
    case 309u: goto L_0022630C;
    case 310u: goto L_00226318;
    case 311u: goto L_00226338;
    case 312u: goto L_00226348;
    case 313u: goto L_0022638C;
    case 314u: goto L_002263D0;
    case 315u: goto L_002263D8;
    case 316u: goto L_002263E0;
    case 317u: goto L_002264A0;
    case 318u: goto L_002264D0;
    case 319u: goto L_002264D8;
    case 320u: goto L_00226520;
    case 321u: goto L_002265A0;
    case 322u: goto L_00226608;
    case 323u: goto L_0022661C;
    case 324u: goto L_00226644;
    case 325u: goto L_00226650;
    case 326u: goto L_00226660;
    case 327u: goto L_00226670;
    case 328u: goto L_00226680;
    case 329u: goto L_00226690;
    case 330u: goto L_002266C4;
    case 331u: goto L_00226708;
    case 332u: goto L_0022680C;
    case 333u: goto L_00226814;
    case 334u: goto L_00226820;
    case 335u: goto L_00226830;
    case 336u: goto L_00226854;
    case 337u: goto L_00226868;
    case 338u: goto L_0022688C;
    case 339u: goto L_002268D4;
    case 340u: goto L_00226920;
    case 341u: goto L_002269A0;
    case 342u: goto L_002269C0;
    case 343u: goto L_002269F0;
    case 344u: goto L_00226A40;
    case 345u: goto L_00226AA0;
    case 346u: goto L_00226AD0;
    case 347u: goto L_00226B18;
    case 348u: goto L_00226B20;
    case 349u: goto L_00226B34;
    case 350u: goto L_00226B48;
    case 351u: goto L_00226B70;
    case 352u: goto L_00226B78;
    case 353u: goto L_00226C80;
    case 354u: goto L_00226CBC;
    case 355u: goto L_00226CD0;
    case 356u: goto L_00226CF0;
    case 357u: goto L_00226D30;
    case 358u: goto L_00226DA8;
    case 359u: goto L_00226DC8;
    case 360u: goto L_00226E2C;
    case 361u: goto L_00226FC8;
    case 362u: goto L_00227010;
    case 363u: goto L_0022701C;
    case 364u: goto L_002270A4;
    case 365u: goto L_00227100;
    case 366u: goto L_0022710C;
    case 367u: goto L_00227170;
    case 368u: goto L_00227198;
    case 369u: goto L_002271D0;
    case 370u: goto L_0022721C;
    case 371u: goto L_00227298;
    case 372u: goto L_00227374;
    case 373u: goto L_002273D8;
    case 374u: goto L_00227410;
    case 375u: goto L_002274F4;
    case 376u: goto L_002275D4;
    case 377u: goto L_00227600;
    case 378u: goto L_00227630;
    case 379u: goto L_00227668;
    case 380u: goto L_00227690;
    case 381u: goto L_002276D0;
    case 382u: goto L_00227730;
    case 383u: goto L_00227750;
    case 384u: goto L_002277B0;
    case 385u: goto L_00227830;
    case 386u: goto L_00227840;
    case 387u: goto L_00227850;
    case 388u: goto L_002278D0;
    case 389u: goto L_002278E0;
    case 390u: goto L_002278F0;
    case 391u: goto L_00227960;
    case 392u: goto L_002279F0;
    case 393u: goto L_00227A20;
    case 394u: goto L_00227A84;
    case 395u: goto L_00227B28;
    case 396u: goto L_00227B84;
    case 397u: goto L_00227BA0;
    case 398u: goto L_00227C28;
    case 399u: goto L_00227C40;
    case 400u: goto L_00227C50;
    case 401u: goto L_00227C58;
    case 402u: goto L_00227C70;
    case 403u: goto L_00227CC0;
    case 404u: goto L_00227CE0;
    case 405u: goto L_00227CF4;
    case 406u: goto L_00227D10;
    case 407u: goto L_00227D18;
    case 408u: goto L_00227D30;
    case 409u: goto L_00227DA4;
    case 410u: goto L_00227DAC;
    case 411u: goto L_00227E94;
    case 412u: goto L_00227EA4;
    case 413u: goto L_00227EC0;
    case 414u: goto L_00227EE4;
    case 415u: goto L_00227F18;
    case 416u: goto L_00227F28;
    case 417u: goto L_00227F48;
    case 418u: goto L_00227F60;
    case 419u: goto L_00227F80;
    case 420u: goto L_00227F8C;
    case 421u: goto L_00227FF8;
    default: bad_entry(c, 0x00224000u); return;
    }
L_00224000:
    set32(c.r[9], ld32((c.r[1].w[0] + 9076u)));
    c.budget -= 3;
    { c.r[10].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001291A0u | kUnwind; return; } [[clang::musttail]] return unit_000A(c, 93u, depth); }
L_00224010:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[3].d[0] = c.r[2].d[0] | 22528ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01030000u);
    st32((c.r[1].w[0] + 9072u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 61440ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[1].w[0] + 9076u), c.r[2].w[0]);
    set32(c.r[4], 0u + 2092u);
    c.budget -= 12;
    { set32(c.r[5], c.r[5].w[0] + 9072u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00214940u | kUnwind; return; } [[clang::musttail]] return unit_0045(c, 74u, depth); }
L_00224040:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[8], ld32((c.r[1].w[0] + 9072u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 28144u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[9], ld32((c.r[1].w[0] + 9076u)));
    c.budget -= 11;
    { c.r[10].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001291A0u | kUnwind; return; } [[clang::musttail]] return unit_000A(c, 93u, depth); }
L_00224070:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01CD0000u);
    c.r[3].d[0] = c.r[2].d[0] | 8192ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[1].w[0] + 9072u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 12288ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], 0u + 3009u);
    st32((c.r[1].w[0] + 9076u), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002240A4u); set32(c.r[5], c.r[5].w[0] + 9072u);  if (depth < kMaxDepth) unit_0045(c, 74u, depth + 1u); else { c.pc = 0x00214940u; return; } if (c.pc != 0x002240A4u) [[unlikely]] return; }
L_002240A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002240B4u); set32(c.r[4], c.r[4].w[0] + 16576u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002240B4u) [[unlikely]] return; }
L_002240B4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002240C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01CD0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 28144u);
    c.r[8].d[0] = c.r[2].d[0] | 8192ull;
    c.r[9].d[0] = c.r[2].d[0] | 12288ull;
    c.budget -= 10;
    { c.r[10].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00128A60u | kUnwind; return; } [[clang::musttail]] return unit_000A(c, 57u, depth); }
L_002240F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01CD0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 12288ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[1].w[0] + 9072u), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 9808u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224128u); set32(c.r[5], c.r[5].w[0] + 9072u);  if (depth < kMaxDepth) unit_0045(c, 74u, depth + 1u); else { c.pc = 0x00214940u; return; } if (c.pc != 0x00224128u) [[unlikely]] return; }
L_00224128:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224138u); set32(c.r[4], c.r[4].w[0] + 15600u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x00224138u) [[unlikely]] return; }
L_00224138:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00224150:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01170000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 4063u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224168u); c.r[5].d[0] = c.r[2].d[0] | 61440ull;  if (depth < kMaxDepth) unit_0045(c, 59u, depth + 1u); else { c.pc = 0x002147C0u; return; } if (c.pc != 0x00224168u) [[unlikely]] return; }
L_00224168:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01170000u);
    set32(c.r[4], c.r[4].w[0] + 17120u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224184u); c.r[6].d[0] = c.r[2].d[0] | 61440ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x00224184u) [[unlikely]] return; }
L_00224184:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00224190:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01170000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 4064u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002241A8u); c.r[5].d[0] = c.r[2].d[0] | 61440ull;  if (depth < kMaxDepth) unit_0045(c, 59u, depth + 1u); else { c.pc = 0x002147C0u; return; } if (c.pc != 0x002241A8u) [[unlikely]] return; }
L_002241A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01170000u);
    set32(c.r[4], c.r[4].w[0] + 17120u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[7], 0u + 3u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002241C4u); c.r[6].d[0] = c.r[2].d[0] | 61440ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002241C4u) [[unlikely]] return; }
L_002241C4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002241D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00224200; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002241F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00224208; } }
L_002241F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002241F8u); set32(c.r[4], 0u + 1395u);  if (depth < kMaxDepth) unit_0009(c, 73u, depth + 1u); else { c.pc = 0x001251F0u; return; } if (c.pc != 0x002241F8u) [[unlikely]] return; }
L_002241F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00224208; } }
L_00224200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224208u); set32(c.r[4], 0u + 1396u);  if (depth < kMaxDepth) unit_0009(c, 73u, depth + 1u); else { c.pc = 0x001251F0u; return; } if (c.pc != 0x00224208u) [[unlikely]] return; }
L_00224208:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00224220:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01170000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 4066u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224238u); c.r[5].d[0] = c.r[2].d[0] | 61440ull;  if (depth < kMaxDepth) unit_0045(c, 59u, depth + 1u); else { c.pc = 0x002147C0u; return; } if (c.pc != 0x00224238u) [[unlikely]] return; }
L_00224238:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01170000u);
    set32(c.r[4], c.r[4].w[0] + 17120u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[7], 0u + 5u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224254u); c.r[6].d[0] = c.r[2].d[0] | 61440ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x00224254u) [[unlikely]] return; }
L_00224254:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00224260:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01CF0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 4067u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224278u); c.r[5].d[0] = c.r[2].d[0] | 16384ull;  if (depth < kMaxDepth) unit_0045(c, 59u, depth + 1u); else { c.pc = 0x002147C0u; return; } if (c.pc != 0x00224278u) [[unlikely]] return; }
L_00224278:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01CF0000u);
    set32(c.r[4], c.r[4].w[0] + 17120u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224294u); c.r[6].d[0] = c.r[2].d[0] | 16384ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x00224294u) [[unlikely]] return; }
L_00224294:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002242A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01130000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 4068u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002242B8u); c.r[5].d[0] = c.r[2].d[0] | 61440ull;  if (depth < kMaxDepth) unit_0045(c, 59u, depth + 1u); else { c.pc = 0x002147C0u; return; } if (c.pc != 0x002242B8u) [[unlikely]] return; }
L_002242B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01130000u);
    set32(c.r[4], c.r[4].w[0] + 17120u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[7], 0u - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002242D4u); c.r[6].d[0] = c.r[2].d[0] | 61440ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002242D4u) [[unlikely]] return; }
L_002242D4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002242E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224300u); set32(c.r[5], c.r[3].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_009B(c, 304u, depth + 1u); else { c.pc = 0x0036FD00u; return; } if (c.pc != 0x00224300u) [[unlikely]] return; }
L_00224300:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00224318; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224314u);  if (depth < kMaxDepth) unit_007F(c, 170u, depth + 1u); else { c.pc = 0x002FEDB0u; return; } if (c.pc != 0x00224314u) [[unlikely]] return; }
L_00224314:
    c.budget -= 1;
L_00224318:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00224330:
    set32(c.r[5], ld32((c.r[28].w[0] - 24004u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[6], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + 8896u);
    set32(c.r[4], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[3].w[0] + 8900u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24008u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[4].w[0]);  c.pc = t; return; }
L_00224360:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x008F0000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 2064u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x008F0000u);
    st32((c.r[28].w[0] - 24004u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] - 2060u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 24008u), c.r[3].w[0]);  c.pc = t; return; }
L_00224380:
    st8((c.r[28].w[0] - 24012u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 24008u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01DB0000u);
    st32((c.r[1].w[0] + 8840u), 0u);
    c.r[3].d[0] = c.r[3].d[0] | 61440ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], ld32((c.r[28].w[0] - 24004u)));
    st32((c.r[1].w[0] + 8844u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[1].w[0] + 8832u), c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] + 2048u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[1].w[0] + 8952u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[1].w[0] + 8836u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 9016u), c.r[5].w[0]);  c.pc = t; return; }
L_002243D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x008F0000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 2064u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x008F0000u);
    st32((c.r[28].w[0] - 24008u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] - 2060u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 24004u), c.r[3].w[0]);  c.pc = t; return; }
L_002243F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] + 12368u);
    c.budget -= 6;
L_00224408:
    st32((c.r[3].w[0]), 0u);
    st32((c.r[3].w[0] + 4u), 0u);
    set32(c.r[2], c.r[4].w[0] + 8u);
    st32((c.r[3].w[0] + 8u), 0u);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    st32((c.r[3].w[0] + 12u), 0u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    st32((c.r[3].w[0] + 16u), 0u);
    c.r[2].d[0] = c.r[4].sd[0] < 77ll ? 1ull : 0ull;
    st32((c.r[3].w[0] + 20u), 0u);
    st32((c.r[3].w[0] + 24u), 0u);
    st32((c.r[3].w[0] + 28u), 0u);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00224408u | kUnwind; return; } goto L_00224408; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 12368u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 17280u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 159u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] - 47u);
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224498u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x00224498u) [[unlikely]] return; }
L_00224498:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 14896u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002244B8u); set32(c.r[5], c.r[5].w[0] + 8832u);  if (depth < kMaxDepth) unit_0045(c, 74u, depth + 1u); else { c.pc = 0x00214940u; return; } if (c.pc != 0x002244B8u) [[unlikely]] return; }
L_002244B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002244C8u); set32(c.r[4], c.r[4].w[0] + 17360u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002244C8u) [[unlikely]] return; }
L_002244C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01DB0000u);
    set32(c.r[6], c.r[16].w[0] + 47u);
    set32(c.r[4], c.r[4].w[0] - 7552u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002244E4u); c.r[7].d[0] = c.r[2].d[0] | 61440ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002244E4u) [[unlikely]] return; }
L_002244E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00224500:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[7], c.r[7].w[0] + 18512u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[6], c.r[6].w[0] + 18704u);
    set32(c.r[5], c.r[5].w[0] + 8576u);
    c.budget -= 12;
L_00224530:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00224598; } }
    c.r[2].d[0] = ld8((c.r[7].w[0] + 1u));
    c.r[2].d[0] = c.r[2].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00224598; } }
    ld128((c.r[6].w[0]) & ~15u, c.r[4]);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.r[3]);
    ld128((c.r[6].w[0] + 32u) & ~15u, c.r[2]);
    st128((c.r[5].w[0]) & ~15u, c.r[4]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.r[2]);
    ld128((c.r[7].w[0]) & ~15u, c.r[4]);
    ld128((c.r[7].w[0] + 16u) & ~15u, c.r[3]);
    ld128((c.r[7].w[0] + 32u) & ~15u, c.r[2]);
    st128((c.r[6].w[0]) & ~15u, c.r[4]);
    st128((c.r[6].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[6].w[0] + 32u) & ~15u, c.r[2]);
    ld128((c.r[5].w[0]) & ~15u, c.r[4]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[3]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.r[2]);
    st128((c.r[7].w[0]) & ~15u, c.r[4]);
    st128((c.r[7].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[7].w[0] + 32u) & ~15u, c.r[2]);
    c.budget -= 19;
L_00224598:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00224530u | kUnwind; return; } goto L_00224530; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[18].w[0] + 18512u);
    set32(c.r[17], c.r[17].w[0] + 8384u);
    c.budget -= 6;
L_002245C0:
    ld128((c.r[18].w[0]) & ~15u, c.r[7]);
    ld128((c.r[18].w[0] + 16u) & ~15u, c.r[3]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    ld128((c.r[18].w[0] + 32u) & ~15u, c.r[2]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 48u);
    st128((c.r[17].w[0]) & ~15u, c.r[7]);
    st128((c.r[17].w[0] + 16u) & ~15u, c.r[3]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002245E8u); st128((c.r[17].w[0] + 32u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002245E8u) [[unlikely]] return; }
L_002245E8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 48u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002245C0u | kUnwind; return; } goto L_002245C0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[13].d[0] = 0ull + 0ull;
    set32(c.r[12], 0u + 2u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[11], c.r[11].w[0] + 8384u);
    set32(c.r[10], c.r[10].w[0] + 18512u);
    set32(c.r[9], c.r[9].w[0] + 18608u);
    set32(c.r[8], c.r[2].w[0] + 159u);
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = c.r[12].d[0] + 0ull;
    c.budget -= 13;
L_00224630:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002246A8; } }
    c.budget -= 2;
    { const bool t = c.r[13].d[0] == c.r[6].d[0];  if (t) { goto L_00224688; } }
    c.budget -= 2;
    { const bool t = c.r[12].d[0] == c.r[5].d[0];  if (t) { goto L_00224660; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 3u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00224688; } }
    c.budget -= 1;
L_00224660:
    ld128((c.r[11].w[0]) & ~15u, c.r[4]);
    ld128((c.r[11].w[0] + 16u) & ~15u, c.r[3]);
    set32(c.r[13], c.r[13].w[0] + 1u);
    ld128((c.r[11].w[0] + 32u) & ~15u, c.r[2]);
    st128((c.r[10].w[0]) & ~15u, c.r[4]);
    st128((c.r[10].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[10].w[0] + 32u) & ~15u, c.r[2]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[10].w[0] + 48u);  if (t) { goto L_002246A8; } }
    c.budget -= 1;
L_00224688:
    ld128((c.r[11].w[0]) & ~15u, c.r[4]);
    ld128((c.r[11].w[0] + 16u) & ~15u, c.r[3]);
    set32(c.r[12], c.r[12].w[0] + 1u);
    ld128((c.r[11].w[0] + 32u) & ~15u, c.r[2]);
    st128((c.r[9].w[0]) & ~15u, c.r[4]);
    st128((c.r[9].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[9].w[0] + 32u) & ~15u, c.r[2]);
    set32(c.r[9], c.r[9].w[0] + 48u);
    c.budget -= 8;
L_002246A8:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[11], c.r[11].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00224630u | kUnwind; return; } goto L_00224630; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002246C0u);  if (depth < kMaxDepth) unit_001D(c, 213u, depth + 1u); else { c.pc = 0x00177EC0u; return; } if (c.pc != 0x002246C0u) [[unlikely]] return; }
L_002246C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[10].sd[0] = static_cast<std::int32_t>(0x00830000u);  if (t) { goto L_00224780; } }
    c.r[9].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[10], c.r[10].w[0] + 18512u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00830000u);
    ld128((c.r[10].w[0]) & ~15u, c.r[5]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00830000u);
    ld128((c.r[10].w[0] + 16u) & ~15u, c.r[4]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00830000u);
    ld128((c.r[10].w[0] + 32u) & ~15u, c.r[3]);
    set32(c.r[9], c.r[9].w[0] + 8576u);
    set32(c.r[8], c.r[8].w[0] + 18608u);
    set32(c.r[7], c.r[7].w[0] + 18560u);
    set32(c.r[6], c.r[6].w[0] + 18656u);
    st128((c.r[9].w[0]) & ~15u, c.r[5]);
    st128((c.r[9].w[0] + 16u) & ~15u, c.r[4]);
    st128((c.r[9].w[0] + 32u) & ~15u, c.r[3]);
    ld128((c.r[8].w[0]) & ~15u, c.r[5]);
    ld128((c.r[8].w[0] + 16u) & ~15u, c.r[4]);
    ld128((c.r[8].w[0] + 32u) & ~15u, c.r[3]);
    st128((c.r[10].w[0]) & ~15u, c.r[5]);
    st128((c.r[10].w[0] + 16u) & ~15u, c.r[4]);
    st128((c.r[10].w[0] + 32u) & ~15u, c.r[3]);
    ld128((c.r[9].w[0]) & ~15u, c.r[5]);
    ld128((c.r[9].w[0] + 16u) & ~15u, c.r[4]);
    ld128((c.r[9].w[0] + 32u) & ~15u, c.r[3]);
    st128((c.r[8].w[0]) & ~15u, c.r[5]);
    st128((c.r[8].w[0] + 16u) & ~15u, c.r[4]);
    st128((c.r[8].w[0] + 32u) & ~15u, c.r[3]);
    ld128((c.r[7].w[0]) & ~15u, c.r[5]);
    ld128((c.r[7].w[0] + 16u) & ~15u, c.r[4]);
    ld128((c.r[7].w[0] + 32u) & ~15u, c.r[3]);
    st128((c.r[9].w[0]) & ~15u, c.r[5]);
    st128((c.r[9].w[0] + 16u) & ~15u, c.r[4]);
    st128((c.r[9].w[0] + 32u) & ~15u, c.r[3]);
    ld128((c.r[6].w[0]) & ~15u, c.r[5]);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.r[4]);
    ld128((c.r[6].w[0] + 32u) & ~15u, c.r[3]);
    st128((c.r[7].w[0]) & ~15u, c.r[5]);
    st128((c.r[7].w[0] + 16u) & ~15u, c.r[4]);
    st128((c.r[7].w[0] + 32u) & ~15u, c.r[3]);
    ld128((c.r[9].w[0]) & ~15u, c.r[5]);
    ld128((c.r[9].w[0] + 16u) & ~15u, c.r[4]);
    ld128((c.r[9].w[0] + 32u) & ~15u, c.r[3]);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    st128((c.r[6].w[0] + 16u) & ~15u, c.r[4]);
    st128((c.r[6].w[0] + 32u) & ~15u, c.r[3]);
    c.budget -= 46;
L_00224780:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[18].w[0] + 18512u);
    set32(c.r[17], c.r[17].w[0] + 8896u);
    c.budget -= 6;
L_00224798:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);  if (t) { goto L_002247E8; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 17200u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002247B4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002247B4u) [[unlikely]] return; }
L_002247B4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 35u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002247C4u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));  if (depth < kMaxDepth) unit_0048(c, 77u, depth + 1u); else { c.pc = 0x00220E10u; return; } if (c.pc != 0x002247C4u) [[unlikely]] return; }
L_002247C4:
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002247D4u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0045(c, 74u, depth + 1u); else { c.pc = 0x00214940u; return; } if (c.pc != 0x002247D4u) [[unlikely]] return; }
L_002247D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002247E4u); set32(c.r[4], c.r[4].w[0] + 17248u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002247E4u) [[unlikely]] return; }
L_002247E4:
    c.budget -= 1;
L_002247E8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 48u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00224798u | kUnwind; return; } goto L_00224798; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00224820:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01D90000u);
    st32((c.r[1].w[0] + 8372u), 0u);
    c.r[4].d[0] = c.r[3].d[0] | 40960ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01170000u);
    st32((c.r[1].w[0] + 8380u), 0u);
    c.r[3].d[0] = c.r[3].d[0] | 61440ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[1].w[0] + 8368u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 8376u), c.r[3].w[0]);  c.pc = t; return; }
L_00224860:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[6], ld32((c.r[1].w[0] + 8368u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 8376u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 8372u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 8380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[1].w[0] + 9008u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[1].w[0] + 8944u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[1].w[0] + 9012u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 8948u), c.r[3].w[0]);  c.pc = t; return; }
L_002248B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 18464u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002248C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002248C8u) [[unlikely]] return; }
L_002248C8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], c.r[2].w[0] + 14944u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002248F0u); set32(c.r[5], c.r[5].w[0] + 8368u);  if (depth < kMaxDepth) unit_0045(c, 74u, depth + 1u); else { c.pc = 0x00214940u; return; } if (c.pc != 0x002248F0u) [[unlikely]] return; }
L_002248F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224900u); set32(c.r[4], c.r[4].w[0] + 18528u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x00224900u) [[unlikely]] return; }
L_00224900:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01DB0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x011D0000u);
    c.r[3].d[0] = c.r[3].d[0] | 34816ull;
    c.r[2].d[0] = c.r[2].d[0] | 10240ull;
    st32((c.r[28].w[0] - 24004u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022491Cu); st32((c.r[28].w[0] - 24008u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 36u, depth + 1u); else { c.pc = 0x002243F0u; return; } if (c.pc != 0x0022491Cu) [[unlikely]] return; }
L_0022491C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224924u);  if (depth < kMaxDepth) unit_0049(c, 42u, depth + 1u); else { c.pc = 0x00224500u; return; } if (c.pc != 0x00224924u) [[unlikely]] return; }
L_00224924:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00224930:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[8], ld32((c.r[1].w[0] + 9008u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 14192u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[9], ld32((c.r[1].w[0] + 8944u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224964u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 93u, depth + 1u); else { c.pc = 0x001291A0u; return; } if (c.pc != 0x00224964u) [[unlikely]] return; }
L_00224964:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[8], ld32((c.r[1].w[0] + 9012u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 14912u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[9], ld32((c.r[1].w[0] + 8948u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224990u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 93u, depth + 1u); else { c.pc = 0x001291A0u; return; } if (c.pc != 0x00224990u) [[unlikely]] return; }
L_00224990:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[8], ld32((c.r[1].w[0] + 9016u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 17792u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[9], ld32((c.r[1].w[0] + 8952u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002249BCu); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_000A(c, 101u, depth + 1u); else { c.pc = 0x00129300u; return; } if (c.pc != 0x002249BCu) [[unlikely]] return; }
L_002249BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18512u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_002249F8; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[8], ld32((c.r[1].w[0] + 8896u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 15392u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[9], ld32((c.r[1].w[0] + 8900u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002249F4u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 93u, depth + 1u); else { c.pc = 0x001291A0u; return; } if (c.pc != 0x002249F4u) [[unlikely]] return; }
L_002249F4:
    c.budget -= 1;
L_002249F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18560u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_00224A30; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[8], ld32((c.r[1].w[0] + 8904u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 15872u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[9], ld32((c.r[1].w[0] + 8908u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224A30u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 93u, depth + 1u); else { c.pc = 0x001291A0u; return; } if (c.pc != 0x00224A30u) [[unlikely]] return; }
L_00224A30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18608u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_00224A68; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[8], ld32((c.r[1].w[0] + 8912u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 16352u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[9], ld32((c.r[1].w[0] + 8916u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224A68u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 93u, depth + 1u); else { c.pc = 0x001291A0u; return; } if (c.pc != 0x00224A68u) [[unlikely]] return; }
L_00224A68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18656u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_00224AA0; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[8], ld32((c.r[1].w[0] + 8920u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 16832u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[9], ld32((c.r[1].w[0] + 8924u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224AA0u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 93u, depth + 1u); else { c.pc = 0x001291A0u; return; } if (c.pc != 0x00224AA0u) [[unlikely]] return; }
L_00224AA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18704u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_00224AD8; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[8], ld32((c.r[1].w[0] + 8928u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 17312u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[9], ld32((c.r[1].w[0] + 8932u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224AD8u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 93u, depth + 1u); else { c.pc = 0x001291A0u; return; } if (c.pc != 0x00224AD8u) [[unlikely]] return; }
L_00224AD8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00224AF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[28].w[0] - 24024u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224B0Cu); set32(c.r[16], c.r[16].w[0] - 8560u);  if (depth < kMaxDepth) unit_0049(c, 186u, depth + 1u); else { c.pc = 0x00225450u; return; } if (c.pc != 0x00224B0Cu) [[unlikely]] return; }
L_00224B0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224B14u);  if (depth < kMaxDepth) unit_007F(c, 163u, depth + 1u); else { c.pc = 0x002FED20u; return; } if (c.pc != 0x00224B14u) [[unlikely]] return; }
L_00224B14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224B1Cu);  if (depth < kMaxDepth) unit_0049(c, 98u, depth + 1u); else { c.pc = 0x00224D70u; return; } if (c.pc != 0x00224B1Cu) [[unlikely]] return; }
L_00224B1C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224B2Cu); set32(c.r[5], c.r[5].w[0] - 27104u);  if (depth < kMaxDepth) unit_0049(c, 230u, depth + 1u); else { c.pc = 0x00225880u; return; } if (c.pc != 0x00224B2Cu) [[unlikely]] return; }
L_00224B2C:
    c.budget -= 1;
L_00224B30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224B38u);  if (depth < kMaxDepth) unit_0049(c, 183u, depth + 1u); else { c.pc = 0x002253D0u; return; } if (c.pc != 0x00224B38u) [[unlikely]] return; }
L_00224B38:
    set32(c.r[3], ld32((c.r[16].w[0] + 832u)));
    set32(c.r[2], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 832u), c.r[3].w[0]);
    st16((c.r[16].w[0] + 820u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23920u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[28].w[0] - 23920u), c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224B68u); st64((c.r[1].w[0] + 4096u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 357u, depth + 1u); else { c.pc = 0x00226D30u; return; } if (c.pc != 0x00224B68u) [[unlikely]] return; }
L_00224B68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], c.r[2].w[0] + 9600u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] + 9536u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[6], c.r[6].w[0] + 9616u);
    set32(c.r[5], c.r[5].w[0] + 9552u);
    set32(c.r[4], 0u + 4u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.budget -= 12;
L_00224B98:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00224B98u | kUnwind; return; } goto L_00224B98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224BC0u);  if (depth < kMaxDepth) unit_004D(c, 313u, depth + 1u); else { c.pc = 0x00237FB0u; return; } if (c.pc != 0x00224BC0u) [[unlikely]] return; }
L_00224BC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224BC8u);  if (depth < kMaxDepth) unit_0083(c, 407u, depth + 1u); else { c.pc = 0x0030FC00u; return; } if (c.pc != 0x00224BC8u) [[unlikely]] return; }
L_00224BC8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00224C00; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 832u)));
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00224C00; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22812u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22840u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224C00u); c.r[5].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0083(c, 409u, depth + 1u); else { c.pc = 0x0030FC40u; return; } if (c.pc != 0x00224C00u) [[unlikely]] return; }
L_00224C00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224C08u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 26u, depth + 1u); else { c.pc = 0x001246F0u; return; } if (c.pc != 0x00224C08u) [[unlikely]] return; }
L_00224C08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224C10u);  if (depth < kMaxDepth) unit_006B(c, 132u, depth + 1u); else { c.pc = 0x002AD6B0u; return; } if (c.pc != 0x00224C10u) [[unlikely]] return; }
L_00224C10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224C18u);  if (depth < kMaxDepth) unit_0049(c, 159u, depth + 1u); else { c.pc = 0x00225190u; return; } if (c.pc != 0x00224C18u) [[unlikely]] return; }
L_00224C18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224C20u);  if (depth < kMaxDepth) unit_006B(c, 204u, depth + 1u); else { c.pc = 0x002AECE0u; return; } if (c.pc != 0x00224C20u) [[unlikely]] return; }
L_00224C20:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 41u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_00224C48; } }
    set32(c.r[5], 0u + 15u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224C3Cu); set32(c.r[4], c.r[4].w[0] - 17600u);  if (depth < kMaxDepth) unit_006B(c, 176u, depth + 1u); else { c.pc = 0x002AE5D0u; return; } if (c.pc != 0x00224C3Cu) [[unlikely]] return; }
L_00224C3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00224C80; } }
    c.budget -= 1;
L_00224C48:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 7744u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_00224C70; } }
    set32(c.r[5], 0u + 15u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224C68u); set32(c.r[4], c.r[4].w[0] - 17120u);  if (depth < kMaxDepth) unit_006B(c, 176u, depth + 1u); else { c.pc = 0x002AE5D0u; return; } if (c.pc != 0x00224C68u) [[unlikely]] return; }
L_00224C68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00224C80; } }
L_00224C70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[4].w[0] - 17360u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224C80u); set32(c.r[5], 0u + 15u);  if (depth < kMaxDepth) unit_006B(c, 176u, depth + 1u); else { c.pc = 0x002AE5D0u; return; } if (c.pc != 0x00224C80u) [[unlikely]] return; }
L_00224C80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224C88u);  if (depth < kMaxDepth) unit_0049(c, 220u, depth + 1u); else { c.pc = 0x00225740u; return; } if (c.pc != 0x00224C88u) [[unlikely]] return; }
L_00224C88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224C90u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 148u, depth + 1u); else { c.pc = 0x002ADA10u; return; } if (c.pc != 0x00224C90u) [[unlikely]] return; }
L_00224C90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224C98u);  if (depth < kMaxDepth) unit_006B(c, 166u, depth + 1u); else { c.pc = 0x002AE120u; return; } if (c.pc != 0x00224C98u) [[unlikely]] return; }
L_00224C98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224CA0u);  if (depth < kMaxDepth) unit_0049(c, 166u, depth + 1u); else { c.pc = 0x00225200u; return; } if (c.pc != 0x00224CA0u) [[unlikely]] return; }
L_00224CA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224CA8u);  if (depth < kMaxDepth) unit_0049(c, 168u, depth + 1u); else { c.pc = 0x00225290u; return; } if (c.pc != 0x00224CA8u) [[unlikely]] return; }
L_00224CA8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00224B30u | kUnwind; return; } goto L_00224B30; } }
    c.budget -= 1;
L_00224CB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224CC0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 35u, depth + 1u); else { c.pc = 0x001249A0u; return; } if (c.pc != 0x00224CC0u) [[unlikely]] return; }
L_00224CC0:
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00224CB8u | kUnwind; return; } goto L_00224CB8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 820u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00224D10; } }
L_00224CE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[2].d[0] = ld64((c.r[1].w[0] + 4096u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00224CE0u | kUnwind; return; } goto L_00224CE0; } }
    set32(c.r[2], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st64((c.r[1].w[0] + 4096u), c.r[2].d[0]);
    st16((c.r[16].w[0] + 820u), static_cast<std::uint16_t>(0u));
    c.budget -= 5;
L_00224D10:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 830u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00224D30; } }
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 816u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st32((c.r[16].w[0] + 816u), c.r[2].w[0]);
    c.budget -= 5;
L_00224D30:
    set32(c.r[2], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st64((c.r[1].w[0] + 4096u), c.r[2].d[0]);
    c.budget -= 4;
L_00224D40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[2].d[0] = ld64((c.r[1].w[0] + 4096u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00224D40u | kUnwind; return; } goto L_00224D40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00224B30u | kUnwind; return; } goto L_00224B30; } }
    c.budget -= 3;
L_00224D70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224D80u);  if (depth < kMaxDepth) unit_005B(c, 66u, depth + 1u); else { c.pc = 0x0026C9C0u; return; } if (c.pc != 0x00224D80u) [[unlikely]] return; }
L_00224D80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224D88u);  if (depth < kMaxDepth) unit_005B(c, 55u, depth + 1u); else { c.pc = 0x0026C7D0u; return; } if (c.pc != 0x00224D88u) [[unlikely]] return; }
L_00224D88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224D90u);  if (depth < kMaxDepth) unit_005B(c, 61u, depth + 1u); else { c.pc = 0x0026C8B0u; return; } if (c.pc != 0x00224D90u) [[unlikely]] return; }
L_00224D90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224D98u);  if (depth < kMaxDepth) unit_005B(c, 64u, depth + 1u); else { c.pc = 0x0026C960u; return; } if (c.pc != 0x00224D98u) [[unlikely]] return; }
L_00224D98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224DA0u);  if (depth < kMaxDepth) unit_0049(c, 156u, depth + 1u); else { c.pc = 0x002250F0u; return; } if (c.pc != 0x00224DA0u) [[unlikely]] return; }
L_00224DA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224DA8u);  if (depth < kMaxDepth) unit_0089(c, 130u, depth + 1u); else { c.pc = 0x00325770u; return; } if (c.pc != 0x00224DA8u) [[unlikely]] return; }
L_00224DA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224DB0u);  if (depth < kMaxDepth) unit_0049(c, 112u, depth + 1u); else { c.pc = 0x00224DF0u; return; } if (c.pc != 0x00224DB0u) [[unlikely]] return; }
L_00224DB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224DB8u);  if (depth < kMaxDepth) unit_0049(c, 147u, depth + 1u); else { c.pc = 0x00224FA0u; return; } if (c.pc != 0x00224DB8u) [[unlikely]] return; }
L_00224DB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224DC0u);  if (depth < kMaxDepth) unit_005B(c, 42u, depth + 1u); else { c.pc = 0x0026C680u; return; } if (c.pc != 0x00224DC0u) [[unlikely]] return; }
L_00224DC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224DC8u);  if (depth < kMaxDepth) unit_0049(c, 165u, depth + 1u); else { c.pc = 0x002251E0u; return; } if (c.pc != 0x00224DC8u) [[unlikely]] return; }
L_00224DC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224DD0u);  if (depth < kMaxDepth) unit_0049(c, 163u, depth + 1u); else { c.pc = 0x002251C0u; return; } if (c.pc != 0x00224DD0u) [[unlikely]] return; }
L_00224DD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224DD8u);  if (depth < kMaxDepth) unit_0067(c, 183u, depth + 1u); else { c.pc = 0x0029F120u; return; } if (c.pc != 0x00224DD8u) [[unlikely]] return; }
L_00224DD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224DE0u);  if (depth < kMaxDepth) unit_006B(c, 173u, depth + 1u); else { c.pc = 0x002AE270u; return; } if (c.pc != 0x00224DE0u) [[unlikely]] return; }
L_00224DE0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00224DF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224E00u);  if (depth < kMaxDepth) unit_0049(c, 133u, depth + 1u); else { c.pc = 0x00224EF0u; return; } if (c.pc != 0x00224E00u) [[unlikely]] return; }
L_00224E00:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224E10u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 105u, depth + 1u); else { c.pc = 0x001255F0u; return; } if (c.pc != 0x00224E10u) [[unlikely]] return; }
L_00224E10:
    set32(c.r[4], 0u + 3u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224E20u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 105u, depth + 1u); else { c.pc = 0x001255F0u; return; } if (c.pc != 0x00224E20u) [[unlikely]] return; }
L_00224E20:
    set32(c.r[4], 0u + 2u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224E30u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 105u, depth + 1u); else { c.pc = 0x001255F0u; return; } if (c.pc != 0x00224E30u) [[unlikely]] return; }
L_00224E30:
    set32(c.r[4], 0u + 4u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224E40u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 105u, depth + 1u); else { c.pc = 0x001255F0u; return; } if (c.pc != 0x00224E40u) [[unlikely]] return; }
L_00224E40:
    set32(c.r[4], 0u + 10u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224E50u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 105u, depth + 1u); else { c.pc = 0x001255F0u; return; } if (c.pc != 0x00224E50u) [[unlikely]] return; }
L_00224E50:
    set32(c.r[4], 0u + 11u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224E60u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 105u, depth + 1u); else { c.pc = 0x001255F0u; return; } if (c.pc != 0x00224E60u) [[unlikely]] return; }
L_00224E60:
    set32(c.r[4], 0u + 14u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224E70u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 105u, depth + 1u); else { c.pc = 0x001255F0u; return; } if (c.pc != 0x00224E70u) [[unlikely]] return; }
L_00224E70:
    set32(c.r[6], ld32((c.r[28].w[0] - 31076u)));
    set32(c.r[4], 0u + 15u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224E80u); set32(c.r[5], 0u + 17u);  if (depth < kMaxDepth) unit_0009(c, 105u, depth + 1u); else { c.pc = 0x001255F0u; return; } if (c.pc != 0x00224E80u) [[unlikely]] return; }
L_00224E80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224E88u);  if (depth < kMaxDepth) unit_0009(c, 54u, depth + 1u); else { c.pc = 0x00125040u; return; } if (c.pc != 0x00224E88u) [[unlikely]] return; }
L_00224E88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224E90u);  if (depth < kMaxDepth) unit_008D(c, 308u, depth + 1u); else { c.pc = 0x00337270u; return; } if (c.pc != 0x00224E90u) [[unlikely]] return; }
L_00224E90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224E98u);  if (depth < kMaxDepth) unit_0050(c, 441u, depth + 1u); else { c.pc = 0x00243EF0u; return; } if (c.pc != 0x00224E98u) [[unlikely]] return; }
L_00224E98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224EA0u);  if (depth < kMaxDepth) unit_0050(c, 430u, depth + 1u); else { c.pc = 0x00243DF0u; return; } if (c.pc != 0x00224EA0u) [[unlikely]] return; }
L_00224EA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224EA8u);  if (depth < kMaxDepth) unit_0009(c, 12u, depth + 1u); else { c.pc = 0x00124500u; return; } if (c.pc != 0x00224EA8u) [[unlikely]] return; }
L_00224EA8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 1024u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224EBCu); set32(c.r[6], c.r[6].w[0] - 14608u);  if (depth < kMaxDepth) unit_0009(c, 21u, depth + 1u); else { c.pc = 0x001245E0u; return; } if (c.pc != 0x00224EBCu) [[unlikely]] return; }
L_00224EBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224EC4u);  if (depth < kMaxDepth) unit_0050(c, 447u, depth + 1u); else { c.pc = 0x00243F60u; return; } if (c.pc != 0x00224EC4u) [[unlikely]] return; }
L_00224EC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224ECCu);  if (depth < kMaxDepth) unit_0050(c, 431u, depth + 1u); else { c.pc = 0x00243E00u; return; } if (c.pc != 0x00224ECCu) [[unlikely]] return; }
L_00224ECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224ED4u);  if (depth < kMaxDepth) unit_0049(c, 346u, depth + 1u); else { c.pc = 0x00226AD0u; return; } if (c.pc != 0x00224ED4u) [[unlikely]] return; }
L_00224ED4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224EDCu);  if (depth < kMaxDepth) unit_0009(c, 238u, depth + 1u); else { c.pc = 0x00127960u; return; } if (c.pc != 0x00224EDCu) [[unlikely]] return; }
L_00224EDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224EE4u);  if (depth < kMaxDepth) unit_0049(c, 217u, depth + 1u); else { c.pc = 0x002256B0u; return; } if (c.pc != 0x00224EE4u) [[unlikely]] return; }
L_00224EE4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00224EF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224F00u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 392u, depth + 1u); else { c.pc = 0x00106D40u; return; } if (c.pc != 0x00224F00u) [[unlikely]] return; }
L_00224F00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224F08u);  if (depth < kMaxDepth) unit_0002(c, 415u, depth + 1u); else { c.pc = 0x0010B4E8u; return; } if (c.pc != 0x00224F08u) [[unlikely]] return; }
L_00224F08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224F10u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 321u, depth + 1u); else { c.pc = 0x002CE3C8u; return; } if (c.pc != 0x00224F10u) [[unlikely]] return; }
L_00224F10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224F18u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0073(c, 403u, depth + 1u); else { c.pc = 0x002CEF58u; return; } if (c.pc != 0x00224F18u) [[unlikely]] return; }
L_00224F18:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224F24u); set32(c.r[4], c.r[4].w[0] + 17024u);  if (depth < kMaxDepth) unit_0003(c, 65u, depth + 1u); else { c.pc = 0x0010C968u; return; } if (c.pc != 0x00224F24u) [[unlikely]] return; }
L_00224F24:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00224F18u | kUnwind; return; } goto L_00224F18; } }
    c.budget -= 1;
L_00224F38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224F40u);  if (depth < kMaxDepth) unit_0003(c, 60u, depth + 1u); else { c.pc = 0x0010C918u; return; } if (c.pc != 0x00224F40u) [[unlikely]] return; }
L_00224F40:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00224F38u | kUnwind; return; } goto L_00224F38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224F60u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 392u, depth + 1u); else { c.pc = 0x00106D40u; return; } if (c.pc != 0x00224F60u) [[unlikely]] return; }
L_00224F60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224F68u);  if (depth < kMaxDepth) unit_0002(c, 415u, depth + 1u); else { c.pc = 0x0010B4E8u; return; } if (c.pc != 0x00224F68u) [[unlikely]] return; }
L_00224F68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224F70u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 321u, depth + 1u); else { c.pc = 0x002CE3C8u; return; } if (c.pc != 0x00224F70u) [[unlikely]] return; }
L_00224F70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224F78u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0073(c, 403u, depth + 1u); else { c.pc = 0x002CEF58u; return; } if (c.pc != 0x00224F78u) [[unlikely]] return; }
L_00224F78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224F80u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 353u, depth + 1u); else { c.pc = 0x002CE8A0u; return; } if (c.pc != 0x00224F80u) [[unlikely]] return; }
L_00224F80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224F88u);  if (depth < kMaxDepth) unit_0002(c, 56u, depth + 1u); else { c.pc = 0x001086F8u; return; } if (c.pc != 0x00224F88u) [[unlikely]] return; }
L_00224F88:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00224FA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224FB0u);  if (depth < kMaxDepth) unit_006B(c, 209u, depth + 1u); else { c.pc = 0x002AED70u; return; } if (c.pc != 0x00224FB0u) [[unlikely]] return; }
L_00224FB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224FB8u);  if (depth < kMaxDepth) unit_000A(c, 237u, depth + 1u); else { c.pc = 0x0012B790u; return; } if (c.pc != 0x00224FB8u) [[unlikely]] return; }
L_00224FB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224FC0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 63u, depth + 1u); else { c.pc = 0x0021CAA0u; return; } if (c.pc != 0x00224FC0u) [[unlikely]] return; }
L_00224FC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00224FC8u);  if (depth < kMaxDepth) unit_0000(c, 352u, depth + 1u); else { c.pc = 0x00103C50u; return; } if (c.pc != 0x00224FC8u) [[unlikely]] return; }
L_00224FC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[13], 0u - 512u);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 8504u));
    c.r[14].d[0] = 0ull + static_cast<std::uint64_t>(140ll);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(280ll);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[12].d[0] = c.r[2].d[0] & c.r[13].d[0];
    c.r[11].d[0] = ld16((c.r[1].w[0] - 8464u));
    c.r[12].d[0] = c.r[12].d[0] | c.r[14].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[11].d[0] = c.r[11].d[0] & c.r[13].d[0];
    c.r[10].d[0] = ld16((c.r[1].w[0] - 8336u));
    c.r[11].d[0] = c.r[11].d[0] | c.r[14].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[10].d[0] = c.r[10].d[0] & c.r[13].d[0];
    c.r[8].d[0] = ld16((c.r[1].w[0] - 8448u));
    c.r[10].d[0] = c.r[10].d[0] | c.r[14].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[8].d[0] = c.r[8].d[0] & c.r[13].d[0];
    c.r[7].d[0] = ld16((c.r[1].w[0] - 8320u));
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[7].d[0] = c.r[7].d[0] & c.r[13].d[0];
    c.r[3].d[0] = ld16((c.r[1].w[0] - 8080u));
    c.r[7].d[0] = c.r[7].d[0] | c.r[9].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[13].d[0];
    c.r[2].d[0] = ld16((c.r[1].w[0] - 7952u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[9].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[13].d[0];
    st16((c.r[1].w[0] - 8504u), static_cast<std::uint16_t>(c.r[12].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | c.r[9].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 8464u), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 8336u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 8448u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 8320u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[7], 0u + 128u);
    st16((c.r[1].w[0] - 8080u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 50;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225090u); st16((c.r[1].w[0] - 7952u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_005B(c, 81u, depth + 1u); else { c.pc = 0x0026CBC0u; return; } if (c.pc != 0x00225090u) [[unlikely]] return; }
L_00225090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225098u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 82u, depth + 1u); else { c.pc = 0x00104560u; return; } if (c.pc != 0x00225098u) [[unlikely]] return; }
L_00225098:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002250A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 86u, depth + 1u); else { c.pc = 0x00100CD0u; return; } if (c.pc != 0x002250A4u) [[unlikely]] return; }
L_002250A4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[1].w[0] - 7744u), 0u);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[4].w[0] - 14752u);
    st32((c.r[1].w[0] - 7736u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002250CCu); st16((c.r[1].w[0] - 7724u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 129u, depth + 1u); else { c.pc = 0x00101350u; return; } if (c.pc != 0x002250CCu) [[unlikely]] return; }
L_002250CC:
    set32(c.r[3], 0u + 139u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[1].w[0] + 16u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[1].w[0]), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002250F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] - 8560u);
    st32((c.r[28].w[0] - 23908u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23908u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[4].d[0] = c.r[3].d[0] | 19080ull;
    c.budget -= 8;
L_00225110:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.r[3].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[5].w[0] + 2u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[5].w[0] + 2u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00225110u | kUnwind; return; } goto L_00225110; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[1].d[0] = c.r[1].d[0] | 19088ull;
    c.r[1].d[0] = c.r[6].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);  if (t) { goto L_00225188; } }
    c.r[4].d[0] = c.r[3].d[0] | 19088ull;
    c.budget -= 2;
L_00225168:
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00225168u | kUnwind; return; } goto L_00225168; } }
    c.budget -= 1;
L_00225188:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00225190:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002251A0u);  if (depth < kMaxDepth) unit_0050(c, 189u, depth + 1u); else { c.pc = 0x00241280u; return; } if (c.pc != 0x002251A0u) [[unlikely]] return; }
L_002251A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002251A8u);  if (depth < kMaxDepth) unit_000B(c, 95u, depth + 1u); else { c.pc = 0x0012DCA0u; return; } if (c.pc != 0x002251A8u) [[unlikely]] return; }
L_002251A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002251B0u);  if (depth < kMaxDepth) unit_0067(c, 184u, depth + 1u); else { c.pc = 0x0029F1E0u; return; } if (c.pc != 0x002251B0u) [[unlikely]] return; }
L_002251B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002251C0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 23916u), c.r[3].w[0]);  c.pc = t; return; }
L_002251D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 23916u), 0u);  c.pc = t; return; }
L_002251E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[28].w[0] - 23916u), 0u);
    st32((c.r[1].w[0] + 9288u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[28].w[0] - 23912u), 0u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 9292u), 0u);  c.pc = t; return; }
L_00225200:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 79u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00225280; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    set32(c.r[3], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00225280; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23916u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] + 9600u);
    c.r[4].d[0] = 0ull | 49152ull;
    c.budget -= 6;
L_00225238:
    c.r[5].d[0] = ld16((c.r[7].w[0]));
    c.r[3].d[0] = ld16((c.r[7].w[0] + 4u));
    c.r[5].d[0] = c.r[5].d[0] & 16384ull;
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull; c.r[3].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_00225270; } }
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00225270; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 23912u), c.r[3].w[0]);  if (t) { goto L_00225280; } }
    c.budget -= 1;
L_00225270:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00225238u | kUnwind; return; } goto L_00225238; } }
L_00225280:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00225290:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 79u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002252B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00225348; } }
    c.budget -= 1;
L_002252B8:
    st8((c.r[3].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23912u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002252D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00225348; } }
L_002252D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002252E0u); st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_004E(c, 5u, depth + 1u); else { c.pc = 0x00238040u; return; } if (c.pc != 0x002252E0u) [[unlikely]] return; }
L_002252E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002252E8u);  if (depth < kMaxDepth) unit_0044(c, 394u, depth + 1u); else { c.pc = 0x002137E0u; return; } if (c.pc != 0x002252E8u) [[unlikely]] return; }
L_002252E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00225340; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002252F8u);  if (depth < kMaxDepth) unit_0049(c, 165u, depth + 1u); else { c.pc = 0x002251E0u; return; } if (c.pc != 0x002252F8u) [[unlikely]] return; }
L_002252F8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00225300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225308u); c.r[4].d[0] = c.r[16].d[0] & 255ull;  if (depth < kMaxDepth) unit_0049(c, 237u, depth + 1u); else { c.pc = 0x00225970u; return; } if (c.pc != 0x00225308u) [[unlikely]] return; }
L_00225308:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00225300u | kUnwind; return; } goto L_00225300; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225324u);  if (depth < kMaxDepth) unit_0049(c, 176u, depth + 1u); else { c.pc = 0x00225360u; return; } if (c.pc != 0x00225324u) [[unlikely]] return; }
L_00225324:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225334u); set32(c.r[5], c.r[5].w[0] - 25040u);  if (depth < kMaxDepth) unit_0049(c, 230u, depth + 1u); else { c.pc = 0x00225880u; return; } if (c.pc != 0x00225334u) [[unlikely]] return; }
L_00225334:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00225348; } }
    c.budget -= 1;
L_00225340:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00225348:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00225360:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 2;
L_00225368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225370u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 35u, depth + 1u); else { c.pc = 0x001249A0u; return; } if (c.pc != 0x00225370u) [[unlikely]] return; }
L_00225370:
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00225368u | kUnwind; return; } goto L_00225368; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022538Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 25u, depth + 1u); else { c.pc = 0x001246A0u; return; } if (c.pc != 0x0022538Cu) [[unlikely]] return; }
L_0022538C:
    c.budget -= 1;
L_00225390:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[2].d[0] = ld64((c.r[1].w[0] + 4096u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00225390u | kUnwind; return; } goto L_00225390; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002253B4u);  if (depth < kMaxDepth) unit_0067(c, 183u, depth + 1u); else { c.pc = 0x0029F120u; return; } if (c.pc != 0x002253B4u) [[unlikely]] return; }
L_002253B4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002253C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[1].w[0] - 7744u)));  c.pc = t; return; }
L_002253D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[4].d[0] = c.r[3].d[0] | 4896ull;
    set32(c.r[3], 0u + 718u);
    st32((c.r[28].w[0] - 23992u), c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 23996u), c.r[3].w[0]);  c.pc = t; return; }
L_002253F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23996u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] - c.r[4].w[0]);  if (t) { goto L_00225418; } }
    st32((c.r[28].w[0] - 23996u), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[2], ld32((c.r[28].w[0] - 23992u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 23992u), c.r[3].w[0]);  if (t) { goto L_00225420; } }
L_00225418:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00225420:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00225430:
    set32(c.r[3], ld32((c.r[28].w[0] - 23996u)));
    set32(c.r[5], c.r[4].w[0] << 4);
    set32(c.r[6], ld32((c.r[28].w[0] - 23992u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    st32((c.r[28].w[0] - 23996u), c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 23992u), c.r[5].w[0]);  c.pc = t; return; }
L_00225450:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + 15104u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[29].w[0] + 200u);
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[5].w[0] + 15024u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022548Cu); st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0022548Cu) [[unlikely]] return; }
L_0022548C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022549Cu); set32(c.r[5], c.r[5].w[0] + 15040u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0022549Cu) [[unlikely]] return; }
L_0022549C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002254A8u); set32(c.r[5], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_0007(c, 249u, depth + 1u); else { c.pc = 0x0011F4C0u; return; } if (c.pc != 0x002254A8u) [[unlikely]] return; }
L_002254A8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002254B4u); set32(c.r[4], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x002254B4u) [[unlikely]] return; }
L_002254B4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002254C0u); set32(c.r[5], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_0007(c, 249u, depth + 1u); else { c.pc = 0x0011F4C0u; return; } if (c.pc != 0x002254C0u) [[unlikely]] return; }
L_002254C0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002254CCu); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x002254CCu) [[unlikely]] return; }
L_002254CC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002254D8u); set32(c.r[5], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_0007(c, 249u, depth + 1u); else { c.pc = 0x0011F4C0u; return; } if (c.pc != 0x002254D8u) [[unlikely]] return; }
L_002254D8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002254E4u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x002254E4u) [[unlikely]] return; }
L_002254E4:
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002254F0u); set32(c.r[5], c.r[29].w[0] + 194u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x002254F0u) [[unlikely]] return; }
L_002254F0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] + 15056u);
    c.budget -= 4;
L_00225500:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022550Cu); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x0022550Cu) [[unlikely]] return; }
L_0022550C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_00225530; } }
    set32(c.r[6], c.r[17].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225524u); set32(c.r[5], c.r[5].w[0] + 17152u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x00225524u) [[unlikely]] return; }
L_00225524:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00225540; } }
    c.budget -= 1;
L_00225530:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00225500u | kUnwind; return; } goto L_00225500; } }
L_00225540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225548u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00225548u) [[unlikely]] return; }
L_00225548:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_00225570; } }
    set32(c.r[4], c.r[29].w[0] + 136u);
    set32(c.r[5], c.r[5].w[0] + 17160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225564u); set32(c.r[6], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x00225564u) [[unlikely]] return; }
L_00225564:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00225588; } }
    c.budget -= 1;
L_00225570:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    set32(c.r[5], c.r[5].w[0] + 17168u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225584u); set32(c.r[6], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x00225584u) [[unlikely]] return; }
L_00225584:
    c.budget -= 1;
L_00225588:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225594u); set32(c.r[5], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_0007(c, 249u, depth + 1u); else { c.pc = 0x0011F4C0u; return; } if (c.pc != 0x00225594u) [[unlikely]] return; }
L_00225594:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002255A0u); set32(c.r[4], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x002255A0u) [[unlikely]] return; }
L_002255A0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002255ACu); set32(c.r[5], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_0007(c, 249u, depth + 1u); else { c.pc = 0x0011F4C0u; return; } if (c.pc != 0x002255ACu) [[unlikely]] return; }
L_002255AC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002255B8u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x002255B8u) [[unlikely]] return; }
L_002255B8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[5].w[0] + 17168u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002255CCu); set32(c.r[6], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x002255CCu) [[unlikely]] return; }
L_002255CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[4], c.r[29].w[0] + 120u);
    set32(c.r[5], c.r[5].w[0] + 17168u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002255E0u); set32(c.r[6], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x002255E0u) [[unlikely]] return; }
L_002255E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[4], c.r[4].w[0] + 9296u);
    set32(c.r[5], c.r[5].w[0] + 17176u);
    set32(c.r[6], c.r[29].w[0] + 152u);
    set32(c.r[7], c.r[29].w[0] + 144u);
    set32(c.r[8], c.r[29].w[0] + 136u);
    set32(c.r[9], c.r[29].w[0] + 128u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225608u); set32(c.r[10], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x00225608u) [[unlikely]] return; }
L_00225608:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225614u); set32(c.r[4], c.r[4].w[0] + 17200u);  if (depth < kMaxDepth) unit_0006(c, 279u, depth + 1u); else { c.pc = 0x0011BDB8u; return; } if (c.pc != 0x00225614u) [[unlikely]] return; }
L_00225614:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225620u); set32(c.r[4], c.r[4].w[0] + 17232u);  if (depth < kMaxDepth) unit_0006(c, 279u, depth + 1u); else { c.pc = 0x0011BDB8u; return; } if (c.pc != 0x00225620u) [[unlikely]] return; }
L_00225620:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] + 9296u);
    c.budget -= 4;
L_00225630:
    c.r[5].d[0] = ld8((c.r[16].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225640u); set32(c.r[4], c.r[4].w[0] + 17256u);  if (depth < kMaxDepth) unit_0006(c, 279u, depth + 1u); else { c.pc = 0x0011BDB8u; return; } if (c.pc != 0x00225640u) [[unlikely]] return; }
L_00225640:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00225630u | kUnwind; return; } goto L_00225630; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022565Cu); set32(c.r[4], c.r[4].w[0] + 17264u);  if (depth < kMaxDepth) unit_0006(c, 279u, depth + 1u); else { c.pc = 0x0011BDB8u; return; } if (c.pc != 0x0022565Cu) [[unlikely]] return; }
L_0022565C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225668u); set32(c.r[4], c.r[4].w[0] + 17200u);  if (depth < kMaxDepth) unit_0006(c, 279u, depth + 1u); else { c.pc = 0x0011BDB8u; return; } if (c.pc != 0x00225668u) [[unlikely]] return; }
L_00225668:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], c.r[4].w[0] + 1768u);
    set32(c.r[5], c.r[5].w[0] + 9296u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225680u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x00225680u) [[unlikely]] return; }
L_00225680:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[4], c.r[4].w[0] + 1780u);
    set32(c.r[5], c.r[5].w[0] + 17272u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225698u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x00225698u) [[unlikely]] return; }
L_00225698:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_002256B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x007E0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], c.r[18].w[0] + 30624u);
    set32(c.r[17], c.r[29].w[0] + 84u);
    set32(c.r[16], c.r[29].w[0] + 88u);
    c.budget -= 12;
L_002256E0:
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 2u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 4u), 0u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    st32((c.r[18].w[0] + 64u), c.r[19].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225704u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_0001(c, 60u, depth + 1u); else { c.pc = 0x001042E0u; return; } if (c.pc != 0x00225704u) [[unlikely]] return; }
L_00225704:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 8272ull;
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002256E0u | kUnwind; return; } goto L_002256E0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00225740:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x007E0000u);
    set32(c.r[16], c.r[16].w[0] + 30624u);
    c.budget -= 6;
L_00225758:
    st32((c.r[28].w[0] - 23900u), c.r[16].w[0]);
    c.r[5].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[3], 0u + 3u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00225800; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_002257C0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_002257B0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00225790; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00225818; } }
    c.budget -= 1;
L_00225790:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022579Cu); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0001(c, 24u, depth + 1u); else { c.pc = 0x001040E0u; return; } if (c.pc != 0x0022579Cu) [[unlikely]] return; }
L_0022579C:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002257ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 28u, depth + 1u); else { c.pc = 0x00104100u; return; } if (c.pc != 0x002257ACu) [[unlikely]] return; }
L_002257AC:
    c.budget -= 1;
L_002257B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002257B8u); set32(c.r[4], ld32((c.r[16].w[0] + 60u)));  if (depth < kMaxDepth) unit_0001(c, 68u, depth + 1u); else { c.pc = 0x00104320u; return; } if (c.pc != 0x002257B8u) [[unlikely]] return; }
L_002257B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00225818; } }
L_002257C0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00225818; } }
    set32(c.r[2], 0u + 2u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002257ECu); set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_0001(c, 46u, depth + 1u); else { c.pc = 0x00104210u; return; } if (c.pc != 0x002257ECu) [[unlikely]] return; }
L_002257EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002257F4u); set32(c.r[4], ld32((c.r[16].w[0] + 60u)));  if (depth < kMaxDepth) unit_0001(c, 68u, depth + 1u); else { c.pc = 0x00104320u; return; } if (c.pc != 0x002257F4u) [[unlikely]] return; }
L_002257F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00225818; } }
    c.budget -= 1;
L_00225800:
    set32(c.r[2], 0u + 2u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225814u); c.r[4].d[0] = ld8((c.r[16].w[0] + 64u));  if (depth < kMaxDepth) unit_0049(c, 230u, depth + 1u); else { c.pc = 0x00225880u; return; } if (c.pc != 0x00225814u) [[unlikely]] return; }
L_00225814:
    c.budget -= 1;
L_00225818:
    c.r[4].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00225840; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00225838; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00225850; } }
L_00225838:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_00225840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225848u); set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_0001(c, 32u, depth + 1u); else { c.pc = 0x00104130u; return; } if (c.pc != 0x00225848u) [[unlikely]] return; }
L_00225848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225850u); set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_0001(c, 26u, depth + 1u); else { c.pc = 0x001040F0u; return; } if (c.pc != 0x00225850u) [[unlikely]] return; }
L_00225850:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[3].d[0] | 8272ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[16], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 10096u);
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00225758u | kUnwind; return; } goto L_00225758; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00225880:
    c.r[9].d[0] = c.r[4].d[0] & 255ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x007E0000u);
    set32(c.r[3], c.r[9].w[0] << 3);
    set32(c.r[8], c.r[8].w[0] + 30624u);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[7], 0u + 4u);
    set32(c.r[4], c.r[3].w[0] << 7);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], c.r[4].w[0] + c.r[9].w[0]);
    c.r[6].d[0] = c.r[3].d[0] | 8192ull;
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[9], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[4], 0u + 25u);
    set32(c.r[9], c.r[9].w[0] << 4);
    set32(c.r[3], c.r[28].w[0]);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    st32((c.r[8].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[7], c.r[8].w[0] + 80u);
    st16((c.r[8].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st32((c.r[8].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[8].w[0] + 16u), c.r[7].w[0]);
    st32((c.r[8].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[8].w[0] + 28u), c.r[4].w[0]);
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[8].w[0] + 24u), c.r[3].w[0]);  c.pc = t; return; }
L_002258F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23900u)));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225910u); set32(c.r[4], ld32((c.r[3].w[0] + 60u)));  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x00225910u) [[unlikely]] return; }
L_00225910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225918u);  if (depth < kMaxDepth) unit_0001(c, 30u, depth + 1u); else { c.pc = 0x00104120u; return; } if (c.pc != 0x00225918u) [[unlikely]] return; }
L_00225918:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00225930:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23900u)));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225950u); set32(c.r[4], ld32((c.r[3].w[0] + 60u)));  if (depth < kMaxDepth) unit_0001(c, 64u, depth + 1u); else { c.pc = 0x00104300u; return; } if (c.pc != 0x00225950u) [[unlikely]] return; }
L_00225950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225958u);  if (depth < kMaxDepth) unit_0001(c, 44u, depth + 1u); else { c.pc = 0x00104200u; return; } if (c.pc != 0x00225958u) [[unlikely]] return; }
L_00225958:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00225970:
    c.r[5].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], c.r[5].w[0] << 3);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007E0000u);
    set32(c.r[4], c.r[4].w[0] << 7);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + 30624u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002259C8; } }
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002259C0u); set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_0001(c, 32u, depth + 1u); else { c.pc = 0x00104130u; return; } if (c.pc != 0x002259C0u) [[unlikely]] return; }
L_002259C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002259C8u); set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_0001(c, 26u, depth + 1u); else { c.pc = 0x001040F0u; return; } if (c.pc != 0x002259C8u) [[unlikely]] return; }
L_002259C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002259E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 15112u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00224000u < 16384u) { entry = entries_0049[(t - 0x00224000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00225A10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 8624u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 3u)));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[6].w[0] + 3u);  if (t) { goto L_00225BE8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 17280u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00224000u < 16384u) { entry = entries_0049[(t - 0x00224000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00225A58:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 600u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_00225A88; } }
    set32(c.r[3], 0u - 128u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    st8((c.r[2].w[0] + 633u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    st8((c.r[2].w[0] + 632u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
L_00225A88:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[6], 0u + 64u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225AA8u); set32(c.r[4], c.r[2].w[0] + 634u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00225AA8u) [[unlikely]] return; }
L_00225AA8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    st32((c.r[2].w[0] + 616u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 632u)));
    st32((c.r[3].w[0] + 604u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225AE0u); st32((c.r[2].w[0] + 624u), 0u);  if (depth < kMaxDepth) unit_004B(c, 229u, depth + 1u); else { c.pc = 0x0022EFE0u; return; } if (c.pc != 0x00225AE0u) [[unlikely]] return; }
L_00225AE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00225BE8; } }
L_00225AE8:
    set32(c.r[4], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[2] = ld32((c.r[4].w[0] + 616u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 616u), c.f[1]);  if (t) { goto L_00225BE8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    st32((c.r[2].w[0] + 616u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    st8((c.r[2].w[0] + 629u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.r[16].d[0] = ld8((c.r[2].w[0] + 633u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225B48u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x00225B48u) [[unlikely]] return; }
L_00225B48:
    c.r[16].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[4], 0u + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225B58u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 229u, depth + 1u); else { c.pc = 0x0022EFE0u; return; } if (c.pc != 0x00225B58u) [[unlikely]] return; }
L_00225B58:
    c.r[5].d[0] = c.r[16].d[0] | 1ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225B64u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_004B(c, 229u, depth + 1u); else { c.pc = 0x0022EFE0u; return; } if (c.pc != 0x00225B64u) [[unlikely]] return; }
L_00225B64:
    c.r[5].d[0] = c.r[16].d[0] | 2ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225B70u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_004B(c, 229u, depth + 1u); else { c.pc = 0x0022EFE0u; return; } if (c.pc != 0x00225B70u) [[unlikely]] return; }
L_00225B70:
    c.r[5].d[0] = c.r[16].d[0] | 3ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225B7Cu); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_004B(c, 229u, depth + 1u); else { c.pc = 0x0022EFE0u; return; } if (c.pc != 0x00225B7Cu) [[unlikely]] return; }
L_00225B7C:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 633u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00225BE8; } }
L_00225B88:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[2], 0u + 4u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 629u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_00225BE8; } }
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 8u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225BB4u); st8((c.r[2].w[0] + 630u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004B(c, 229u, depth + 1u); else { c.pc = 0x0022EFE0u; return; } if (c.pc != 0x00225BB4u) [[unlikely]] return; }
L_00225BB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00225BE8; } }
    c.budget -= 1;
L_00225BC0:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 630u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00225BE8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_00225BE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00225C00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], 0u + 3u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[4], c.r[4].w[0] - 8624u);  if (t) { goto L_00225D78; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00225D10; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00225CE8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00225C48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00225DE8; } }
    c.budget -= 1;
L_00225C48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225C50u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x00225C50u) [[unlikely]] return; }
L_00225C50:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 604u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225C64u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 388u, depth + 1u); else { c.pc = 0x002278D0u; return; } if (c.pc != 0x00225C64u) [[unlikely]] return; }
L_00225C64:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225C70u); st32((c.r[3].w[0] + 604u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 382u, depth + 1u); else { c.pc = 0x00227730u; return; } if (c.pc != 0x00225C70u) [[unlikely]] return; }
L_00225C70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00225CA8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 630u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 630u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00225DE8; } }
    c.budget -= 1;
L_00225CA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225CB0u);  if (depth < kMaxDepth) unit_0049(c, 380u, depth + 1u); else { c.pc = 0x00227690u; return; } if (c.pc != 0x00225CB0u) [[unlikely]] return; }
L_00225CB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00225DE8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 604u)));
    st8((c.r[3].w[0] + 632u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 630u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 630u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00225DE8; } }
L_00225CE8:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225CF4u); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 57u, depth + 1u); else { c.pc = 0x003B0790u; return; } if (c.pc != 0x00225CF4u) [[unlikely]] return; }
L_00225CF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00225DE8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00225DE8; } }
L_00225D10:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225D1Cu); set32(c.r[4], c.r[2].w[0] + 700u);  if (depth < kMaxDepth) unit_00AC(c, 58u, depth + 1u); else { c.pc = 0x003B07A0u; return; } if (c.pc != 0x00225D1Cu) [[unlikely]] return; }
L_00225D1C:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    st32((c.r[2].w[0] + 616u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 630u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00225DE8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 616u), 0u);  if (t) { goto L_00225DE8; } }
    c.budget -= 1;
L_00225D78:
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 632u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00225DE0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00225DD0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00225DC0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00225DB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00225DE8; } }
    c.budget -= 1;
L_00225DB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225DB8u);  if (depth < kMaxDepth) unit_0049(c, 270u, depth + 1u); else { c.pc = 0x00225F60u; return; } if (c.pc != 0x00225DB8u) [[unlikely]] return; }
L_00225DB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00225DE8; } }
L_00225DC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225DC8u);  if (depth < kMaxDepth) unit_0049(c, 317u, depth + 1u); else { c.pc = 0x002264A0u; return; } if (c.pc != 0x00225DC8u) [[unlikely]] return; }
L_00225DC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00225DE8; } }
L_00225DD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225DD8u);  if (depth < kMaxDepth) unit_0049(c, 320u, depth + 1u); else { c.pc = 0x00226520u; return; } if (c.pc != 0x00225DD8u) [[unlikely]] return; }
L_00225DD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00225DE8; } }
L_00225DE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225DE8u);  if (depth < kMaxDepth) unit_0049(c, 341u, depth + 1u); else { c.pc = 0x002269A0u; return; } if (c.pc != 0x00225DE8u) [[unlikely]] return; }
L_00225DE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00225E00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[2].w[0] + 3u);  if (t) { goto L_00225F38; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00225F10; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00225E90; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00225E48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00225F40; } }
L_00225E48:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 616u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[3].w[0] + 616u), c.f[1]);  if (t) { goto L_00225F40; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 616u), c.f[0]);  if (t) { goto L_00225F40; } }
    c.budget -= 1;
L_00225E90:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8617u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00225F40; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 8624u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[2].w[0] + 634u);
    c.budget -= 7;
L_00225EC0:
    set32(c.r[2], c.r[7].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], c.r[6].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00225EE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00225EF0; } }
L_00225EE0:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(64ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00225EC0u | kUnwind; return; } goto L_00225EC0; } }
L_00225EF0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00225F40; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225F08u); st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_008F(c, 267u, depth + 1u); else { c.pc = 0x0033E7D0u; return; } if (c.pc != 0x00225F08u) [[unlikely]] return; }
L_00225F08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00225F40; } }
L_00225F10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225F18u);  if (depth < kMaxDepth) unit_008F(c, 268u, depth + 1u); else { c.pc = 0x0033E7F0u; return; } if (c.pc != 0x00225F18u) [[unlikely]] return; }
L_00225F18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00225F40; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00225F40; } }
    c.budget -= 1;
L_00225F38:
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_00225F40:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00225F60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[7], c.r[5].w[0] + 4u);  if (t) { goto L_00226420; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00226398; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00226060; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00226018; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00225FC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00226480; } }
    c.budget -= 1;
L_00225FC0:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 600u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00226018; } }
    set32(c.r[2], c.r[6].w[0] + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225FE4u); st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004B(c, 229u, depth + 1u); else { c.pc = 0x0022EFE0u; return; } if (c.pc != 0x00225FE4u) [[unlikely]] return; }
L_00225FE4:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225FF0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004B(c, 229u, depth + 1u); else { c.pc = 0x0022EFE0u; return; } if (c.pc != 0x00225FF0u) [[unlikely]] return; }
L_00225FF0:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00225FFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004B(c, 229u, depth + 1u); else { c.pc = 0x0022EFE0u; return; } if (c.pc != 0x00225FFCu) [[unlikely]] return; }
L_00225FFC:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226008u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004B(c, 229u, depth + 1u); else { c.pc = 0x0022EFE0u; return; } if (c.pc != 0x00226008u) [[unlikely]] return; }
L_00226008:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226014u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004B(c, 229u, depth + 1u); else { c.pc = 0x0022EFE0u; return; } if (c.pc != 0x00226014u) [[unlikely]] return; }
L_00226014:
    c.budget -= 1;
L_00226018:
    set32(c.r[5], ld32((c.r[28].w[0] - 24092u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[4].d[0] | 52429ull;
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = ld32((c.r[5].w[0] + 616u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[5].w[0] + 616u), c.f[1]);  if (t) { goto L_00226480; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 616u), c.f[0]);  if (t) { goto L_00226480; } }
L_00226060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226068u); c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 7u)));  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x00226068u) [[unlikely]] return; }
L_00226068:
    c.r[5].d[0] = c.r[17].d[0] << 56;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022607Cu); set32(c.r[6], 0u + 9u);  if (depth < kMaxDepth) unit_0049(c, 388u, depth + 1u); else { c.pc = 0x002278D0u; return; } if (c.pc != 0x0022607Cu) [[unlikely]] return; }
L_0022607C:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 7u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002260A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002260A4u); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002260A4u) [[unlikely]] return; }
L_002260A4:
    c.budget -= 1;
L_002260A8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 7u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_002262D0; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 17312u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00224000u < 16384u) { entry = entries_0049[(t - 0x00224000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002260D8:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002260E8u); set32(c.r[16], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x002260E8u) [[unlikely]] return; }
L_002260E8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002260F8u); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_0049(c, 386u, depth + 1u); else { c.pc = 0x00227840u; return; } if (c.pc != 0x002260F8u) [[unlikely]] return; }
L_002260F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002262D8; } }
L_00226100:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226110u); c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x00226110u) [[unlikely]] return; }
L_00226110:
    c.r[5].d[0] = c.r[17].d[0] << 56;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226124u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 386u, depth + 1u); else { c.pc = 0x00227840u; return; } if (c.pc != 0x00226124u) [[unlikely]] return; }
L_00226124:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002262D8; } }
    c.budget -= 1;
L_00226130:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226140u); set32(c.r[16], c.r[18].w[0] + 2u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x00226140u) [[unlikely]] return; }
L_00226140:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226150u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0049(c, 386u, depth + 1u); else { c.pc = 0x00227840u; return; } if (c.pc != 0x00226150u) [[unlikely]] return; }
L_00226150:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002262D8; } }
L_00226158:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 20u)));
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226168u); set32(c.r[16], c.r[18].w[0] + 20u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x00226168u) [[unlikely]] return; }
L_00226168:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 20u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226178u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0049(c, 386u, depth + 1u); else { c.pc = 0x00227840u; return; } if (c.pc != 0x00226178u) [[unlikely]] return; }
L_00226178:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002262D8; } }
L_00226180:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 21u)));
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226190u); set32(c.r[16], c.r[18].w[0] + 21u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x00226190u) [[unlikely]] return; }
L_00226190:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 21u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002261A0u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0049(c, 386u, depth + 1u); else { c.pc = 0x00227840u; return; } if (c.pc != 0x002261A0u) [[unlikely]] return; }
L_002261A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 21u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002262D8; } }
L_002261A8:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002261B8u); set32(c.r[16], c.r[18].w[0] + 3u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x002261B8u) [[unlikely]] return; }
L_002261B8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002261C8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 386u, depth + 1u); else { c.pc = 0x00227840u; return; } if (c.pc != 0x002261C8u) [[unlikely]] return; }
L_002261C8:
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 21u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002262D8; } }
L_002261D8:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002261E8u); set32(c.r[16], c.r[18].w[0] + 5u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x002261E8u) [[unlikely]] return; }
L_002261E8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002261F8u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0049(c, 386u, depth + 1u); else { c.pc = 0x00227840u; return; } if (c.pc != 0x002261F8u) [[unlikely]] return; }
L_002261F8:
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002262D8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002262D8; } }
    c.budget -= 1;
L_00226218:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226228u); set32(c.r[16], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x00226228u) [[unlikely]] return; }
L_00226228:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226238u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0049(c, 386u, depth + 1u); else { c.pc = 0x00227840u; return; } if (c.pc != 0x00226238u) [[unlikely]] return; }
L_00226238:
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002262D8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002262D8; } }
    c.budget -= 1;
L_00226258:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226268u); set32(c.r[16], c.r[18].w[0] + 6u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x00226268u) [[unlikely]] return; }
L_00226268:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226278u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0049(c, 386u, depth + 1u); else { c.pc = 0x00227840u; return; } if (c.pc != 0x00226278u) [[unlikely]] return; }
L_00226278:
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00226290; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00226290:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;  if (t) { goto L_002262D8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], 0u + 192u);  if (t) { goto L_002262B0; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_002262B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[4].w[0] - 18496u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002262C4u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_004E(c, 46u, depth + 1u); else { c.pc = 0x00238530u; return; } if (c.pc != 0x002262C4u) [[unlikely]] return; }
L_002262C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002262D8; } }
    c.budget -= 1;
L_002262D0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002262D8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00226310; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00226310; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002262FCu); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002262FCu) [[unlikely]] return; }
L_002262FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226304u);  if (depth < kMaxDepth) unit_000B(c, 112u, depth + 1u); else { c.pc = 0x0012E170u; return; } if (c.pc != 0x00226304u) [[unlikely]] return; }
L_00226304:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022630Cu);  if (depth < kMaxDepth) unit_000B(c, 107u, depth + 1u); else { c.pc = 0x0012DFD0u; return; } if (c.pc != 0x0022630Cu) [[unlikely]] return; }
L_0022630C:
    c.budget -= 1;
L_00226310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226318u);  if (depth < kMaxDepth) unit_0049(c, 382u, depth + 1u); else { c.pc = 0x00227730u; return; } if (c.pc != 0x00226318u) [[unlikely]] return; }
L_00226318:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00226340; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 4u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 167u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226338u); st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x00226338u) [[unlikely]] return; }
L_00226338:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00226480; } }
L_00226340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226348u);  if (depth < kMaxDepth) unit_0049(c, 380u, depth + 1u); else { c.pc = 0x00227690u; return; } if (c.pc != 0x00226348u) [[unlikely]] return; }
L_00226348:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00226480; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 9u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 7u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00226480; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 165u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022638Cu); st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x0022638Cu) [[unlikely]] return; }
L_0022638C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00226480; } }
    c.budget -= 1;
L_00226398:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[6], c.r[5].w[0] + 5u);  if (t) { goto L_002263E8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002263B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00226480; } }
L_002263B8:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 32u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002263D0u); st16((c.r[2].w[0] + 610u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012DE20u; return; } if (c.pc != 0x002263D0u) [[unlikely]] return; }
L_002263D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002263D8u);  if (depth < kMaxDepth) unit_000B(c, 112u, depth + 1u); else { c.pc = 0x0012E170u; return; } if (c.pc != 0x002263D8u) [[unlikely]] return; }
L_002263D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002263E0u);  if (depth < kMaxDepth) unit_000B(c, 107u, depth + 1u); else { c.pc = 0x0012DFD0u; return; } if (c.pc != 0x002263E0u) [[unlikely]] return; }
L_002263E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00226480; } }
L_002263E8:
    set32(c.r[4], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 610u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 610u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00226480; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00226480; } }
    c.budget -= 1;
L_00226420:
    set32(c.r[4], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[4].w[0] + 616u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 616u), c.f[1]);  if (t) { goto L_00226480; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[4], 0u + 2u);
    st32((c.r[3].w[0] + 616u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
L_00226480:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002264A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], c.r[2].w[0] + 4u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002264D0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002264D0u); set32(c.r[4], ld32((c.r[2].w[0] + 296u)));  if (depth < kMaxDepth) unit_0047(c, 67u, depth + 1u); else { c.pc = 0x0021CB00u; return; } if (c.pc != 0x002264D0u) [[unlikely]] return; }
L_002264D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002264D8u);  if (depth < kMaxDepth) unit_0047(c, 70u, depth + 1u); else { c.pc = 0x0021CB80u; return; } if (c.pc != 0x002264D8u) [[unlikely]] return; }
L_002264D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00226510; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
L_00226510:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00226520:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], ld32((c.r[28].w[0] - 23780u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[6].d[0]; set32(c.r[8], c.r[7].w[0] + 4u);  if (t) { goto L_00226928; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_002266D0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00226600; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002265B8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00226578; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00226988; } }
    c.budget -= 1;
L_00226578:
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 600u)));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00226988; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    set32(c.r[4], 0u + 5u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002265A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004B(c, 229u, depth + 1u); else { c.pc = 0x0022EFE0u; return; } if (c.pc != 0x002265A0u) [[unlikely]] return; }
L_002265A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00226988; } }
    c.budget -= 1;
L_002265B8:
    set32(c.r[5], ld32((c.r[28].w[0] - 24092u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[4].d[0] | 52429ull;
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = ld32((c.r[5].w[0] + 616u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[5].w[0] + 616u), c.f[1]);  if (t) { goto L_00226988; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    st32((c.r[3].w[0] + 616u), c.f[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00226988; } }
L_00226600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226608u); c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 6u)));  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x00226608u) [[unlikely]] return; }
L_00226608:
    c.r[5].d[0] = c.r[16].d[0] << 56;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022661Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0049(c, 388u, depth + 1u); else { c.pc = 0x002278D0u; return; } if (c.pc != 0x0022661Cu) [[unlikely]] return; }
L_0022661C:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00226648; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226644u); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x00226644u) [[unlikely]] return; }
L_00226644:
    c.budget -= 1;
L_00226648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226650u);  if (depth < kMaxDepth) unit_0049(c, 382u, depth + 1u); else { c.pc = 0x00227730u; return; } if (c.pc != 0x00226650u) [[unlikely]] return; }
L_00226650:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00226678; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226660u); set32(c.r[5], 0u + 167u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x00226660u) [[unlikely]] return; }
L_00226660:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226670u); st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0047(c, 66u, depth + 1u); else { c.pc = 0x0021CAE0u; return; } if (c.pc != 0x00226670u) [[unlikely]] return; }
L_00226670:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00226988; } }
L_00226678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226680u);  if (depth < kMaxDepth) unit_0049(c, 380u, depth + 1u); else { c.pc = 0x00227690u; return; } if (c.pc != 0x00226680u) [[unlikely]] return; }
L_00226680:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00226988; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226690u); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x00226690u) [[unlikely]] return; }
L_00226690:
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], 0u + 6u);  if (t) { goto L_00226988; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002266C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004B(c, 229u, depth + 1u); else { c.pc = 0x0022EFE0u; return; } if (c.pc != 0x002266C4u) [[unlikely]] return; }
L_002266C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00226988; } }
    c.budget -= 1;
L_002266D0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00226918; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00226898; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00226860; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00226700; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00226988; } }
L_00226700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226708u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x00226708u) [[unlikely]] return; }
L_00226708:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].d[0] = c.r[2].d[0] & 15360ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 18u)));
    c.r[5].d[0] = c.r[4].d[0] & 65535ull;
    c.r[4].d[0] = c.r[5].d[0] & 2048ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 16u)));  if (t) { goto L_00226748; } }
    set32(c.r[4], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = c.r[4].sd[0] < -10ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], 0u - 10u);  if (t) { goto L_00226748; } }
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 2;
L_00226748:
    c.r[4].d[0] = c.r[5].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00226778; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = c.r[4].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], 0u + 10u);  if (t) { goto L_00226778; } }
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 1;
L_00226778:
    c.r[4].d[0] = c.r[5].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002267A8; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 18u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st16((c.r[16].w[0] + 18u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = c.r[4].sd[0] < -10ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], 0u - 10u);  if (t) { goto L_002267A8; } }
    st16((c.r[16].w[0] + 18u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 1;
L_002267A8:
    c.r[4].d[0] = c.r[5].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002267D8; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 18u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st16((c.r[16].w[0] + 18u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = c.r[4].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], 0u + 10u);  if (t) { goto L_002267D8; } }
    st16((c.r[16].w[0] + 18u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 1;
L_002267D8:
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00226800; } }
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 18u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00226818; } }
L_00226800:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022680Cu); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x0022680Cu) [[unlikely]] return; }
L_0022680C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226814u);  if (depth < kMaxDepth) unit_0047(c, 66u, depth + 1u); else { c.pc = 0x0021CAE0u; return; } if (c.pc != 0x00226814u) [[unlikely]] return; }
L_00226814:
    c.budget -= 1;
L_00226818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226820u);  if (depth < kMaxDepth) unit_0049(c, 382u, depth + 1u); else { c.pc = 0x00227730u; return; } if (c.pc != 0x00226820u) [[unlikely]] return; }
L_00226820:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00226838; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226830u);  if (depth < kMaxDepth) unit_0049(c, 380u, depth + 1u); else { c.pc = 0x00227690u; return; } if (c.pc != 0x00226830u) [[unlikely]] return; }
L_00226830:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00226988; } }
L_00226838:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 165u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226854u); st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x00226854u) [[unlikely]] return; }
L_00226854:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00226988; } }
    c.budget -= 1;
L_00226860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226868u);  if (depth < kMaxDepth) unit_0049(c, 382u, depth + 1u); else { c.pc = 0x00227730u; return; } if (c.pc != 0x00226868u) [[unlikely]] return; }
L_00226868:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00226988; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 167u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022688Cu); st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x0022688Cu) [[unlikely]] return; }
L_0022688C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00226988; } }
    c.budget -= 1;
L_00226898:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[7].w[0] + 5u);  if (t) { goto L_002268D8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002268B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00226988; } }
L_002268B8:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 32u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24092u)));
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002268D4u); st16((c.r[2].w[0] + 610u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012DE20u; return; } if (c.pc != 0x002268D4u) [[unlikely]] return; }
L_002268D4:
    c.budget -= 1;
L_002268D8:
    set32(c.r[4], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 610u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 610u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00226988; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00226988; } }
    c.budget -= 1;
L_00226918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226920u); st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));  if (depth < kMaxDepth) unit_0047(c, 66u, depth + 1u); else { c.pc = 0x0021CAE0u; return; } if (c.pc != 0x00226920u) [[unlikely]] return; }
L_00226920:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00226988; } }
L_00226928:
    set32(c.r[4], ld32((c.r[28].w[0] - 24092u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[4].w[0] + 616u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 616u), c.f[1]);  if (t) { goto L_00226988; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[4], 0u + 2u);
    st32((c.r[3].w[0] + 616u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
L_00226988:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002269A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002269E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002269C0u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x002269C0u) [[unlikely]] return; }
L_002269C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00226A30; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 4u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 628u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00226A30; } }
L_002269E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002269F0u);  if (depth < kMaxDepth) unit_008F(c, 125u, depth + 1u); else { c.pc = 0x0033D9D0u; return; } if (c.pc != 0x002269F0u) [[unlikely]] return; }
L_002269F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00226A30; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 24092u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 628u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
L_00226A30:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00226A40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[4].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + 9344u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], 0u + 6u);
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], 0u + 255u);
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 2u);
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 18u);
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(0u));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226AA0u); st8((c.r[16].w[0] + 30u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00226AA0u) [[unlikely]] return; }
L_00226AA0:
    st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 255u);
    st8((c.r[16].w[0] + 26u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 27u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 29u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00226AD0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[20], c.r[20].w[0] + 9632u);
    set32(c.r[19], c.r[19].w[0] + 9600u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226B18u); set32(c.r[18], c.r[18].w[0] + 9440u);  if (depth < kMaxDepth) unit_0074(c, 9u, depth + 1u); else { c.pc = 0x002D0040u; return; } if (c.pc != 0x00226B18u) [[unlikely]] return; }
L_00226B18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226B20u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 452u, depth + 1u); else { c.pc = 0x002CF730u; return; } if (c.pc != 0x00226B20u) [[unlikely]] return; }
L_00226B20:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226B34u); set32(c.r[6], c.r[6].w[0] + 9712u);  if (depth < kMaxDepth) unit_0049(c, 353u, depth + 1u); else { c.pc = 0x00226C80u; return; } if (c.pc != 0x00226B34u) [[unlikely]] return; }
L_00226B34:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226B48u); set32(c.r[6], c.r[6].w[0] + 10080u);  if (depth < kMaxDepth) unit_0049(c, 353u, depth + 1u); else { c.pc = 0x00226C80u; return; } if (c.pc != 0x00226B48u) [[unlikely]] return; }
L_00226B48:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] + 9648u);
    set32(c.r[16], c.r[16].w[0] + 9680u);
    set32(c.r[30], c.r[28].w[0] - 23988u);
    set32(c.r[23], c.r[28].w[0] - 23984u);
    set32(c.r[22], c.r[22].w[0] + 9696u);
    c.budget -= 10;
L_00226B70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226B78u); c.r[4].d[0] = c.r[21].d[0] & 255ull;  if (depth < kMaxDepth) unit_0049(c, 344u, depth + 1u); else { c.pc = 0x00226A40u; return; } if (c.pc != 0x00226B78u) [[unlikely]] return; }
L_00226B78:
    st8((c.r[17].w[0] + 11u), static_cast<std::uint8_t>(0u));
    set32(c.r[21], c.r[21].w[0] + 1u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = 0ull & 255ull;
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = 0ull | 65535ull;
    st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = c.r[21].sd[0] < 2ll ? 1ull : 0ull;
    st8((c.r[17].w[0] + 7u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[17], c.r[17].w[0] + 12u);
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[30].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[16], c.r[16].w[0] + 8u);
    st16((c.r[23].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[30], c.r[30].w[0] + 2u);
    st16((c.r[22].w[0] + 6u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[23], c.r[23].w[0] + 2u);
    st16((c.r[22].w[0] + 4u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[22].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[22].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[20].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[22], c.r[22].w[0] + 8u);
    st16((c.r[20].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[20].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st16((c.r[20].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[20].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[19].w[0] + 14u), static_cast<std::uint16_t>(0u));
    set32(c.r[20], c.r[20].w[0] + 8u);
    st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[18].w[0] + 14u), static_cast<std::uint16_t>(0u));
    set32(c.r[19], c.r[19].w[0] + 16u);
    st16((c.r[18].w[0] + 12u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 53;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00226B70u | kUnwind; return; } goto L_00226B70; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00226C80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[4].w[0] << 8);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[29].w[0] + 36u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 10496u);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226CBCu); st32((c.r[29].w[0] + 44u), 0u);  if (depth < kMaxDepth) unit_0073(c, 457u, depth + 1u); else { c.pc = 0x002CF7D8u; return; } if (c.pc != 0x00226CBCu) [[unlikely]] return; }
L_00226CBC:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00226CD0:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[7], 0u + 15u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 15196u);
    c.budget -= 8;
L_00226CF0:
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00226D10; } }
    c.r[3].d[0] = ld16((c.r[6].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
L_00226D10:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 5;
    { const bool t = c.r[7].sd[0] >= 0; set32(c.r[6], c.r[6].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00226CF0u | kUnwind; return; } goto L_00226CF0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00226D30:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 9600u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[23], c.r[23].w[0] + 9344u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 9632u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[17], c.r[17].w[0] + 9696u);
    set32(c.r[2], c.r[2].w[0] + 9440u);
    set32(c.r[16], c.r[28].w[0] - 23988u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[21], c.r[28].w[0] - 23984u);
    set32(c.r[20], c.r[20].w[0] + 9680u);
    set32(c.r[19], c.r[19].w[0] + 9648u);
    c.budget -= 30;
L_00226DA8:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 4u));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 2u));
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226DC8u); st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0049(c, 369u, depth + 1u); else { c.pc = 0x002271D0u; return; } if (c.pc != 0x00226DC8u) [[unlikely]] return; }
L_00226DC8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00226FA0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[23].w[0] + 10u)));
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_00226DE8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00226E08; } }
L_00226DE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 9312u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 9313u));
    c.r[2].d[0] = ~(c.r[3].d[0] | c.r[2].d[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00226E30; } }
L_00226E08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 9313u));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 9312u));
    c.r[2].d[0] = ~(c.r[3].d[0] | c.r[2].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226E2Cu); st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0049(c, 367u, depth + 1u); else { c.pc = 0x00227170u; return; } if (c.pc != 0x00226E2Cu) [[unlikely]] return; }
L_00226E2C:
    c.budget -= 1;
L_00226E30:
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    c.r[4].d[0] = ld16((c.r[17].w[0] + 2u));
    set32(c.r[2], 0u + 7u);
    c.r[3].d[0] = c.r[3].d[0] ^ 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[17].w[0] + 2u));
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    c.r[4].d[0] = c.r[4].d[0] ^ 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st16((c.r[21].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[23].w[0] + 10u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_00226E70; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00226EE0; } }
L_00226E70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 9316u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[3].d[0] << 48;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] - 128u);
    st16((c.r[20].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[1].w[0] + 9317u));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] - 128u);
    st16((c.r[20].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[1].w[0] + 9314u));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] - 128u);
    st16((c.r[20].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[1].w[0] + 9315u));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] - 128u);
    c.budget -= 27;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00226EF8; } }
    c.budget -= 1;
L_00226EE0:
    st16((c.r[20].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st16((c.r[20].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 192u), 0u);
    st16((c.r[20].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st16((c.r[20].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 6;
L_00226EF8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[23].w[0] + 8u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_00226F98; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 9320u));
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 9321u));
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 9319u));
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 9318u));
    st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 9325u));
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 9322u));
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 9324u));
    st8((c.r[19].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 9323u));
    st8((c.r[19].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 9326u));
    st8((c.r[19].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 9328u));
    st8((c.r[19].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 9327u));
    st8((c.r[19].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 9329u));
    st8((c.r[19].w[0] + 11u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 36;
L_00226F98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[30], 0u + 1u);  if (t) { goto L_00226FC0; } }
L_00226FA0:
    st16((c.r[20].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st16((c.r[20].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[30].d[0] = 0ull + 0ull;
    st16((c.r[20].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st16((c.r[20].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[21].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 8;
L_00226FC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00226FC8u); c.r[4].d[0] = c.r[22].d[0] & 255ull;  if (depth < kMaxDepth) unit_0049(c, 374u, depth + 1u); else { c.pc = 0x00227410u; return; } if (c.pc != 0x00226FC8u) [[unlikely]] return; }
L_00226FC8:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_00226FF8; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 2u));
    st16((c.r[18].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0]));
    st16((c.r[18].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[21].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00227008; } }
    c.budget -= 1;
L_00226FF8:
    st16((c.r[18].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
L_00227008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227010u); c.r[4].d[0] = ld16((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0049(c, 355u, depth + 1u); else { c.pc = 0x00226CD0u; return; } if (c.pc != 0x00227010u) [[unlikely]] return; }
L_00227010:
    set32(c.r[4], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022701Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 391u, depth + 1u); else { c.pc = 0x00227960u; return; } if (c.pc != 0x0022701Cu) [[unlikely]] return; }
L_0022701C:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.budget -= 4;
    { const bool t = c.r[30].d[0] == 0ull; st32((c.r[29].w[0] + 160u), c.r[2].w[0]);  if (t) { goto L_002270E8; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 2u));
    st16((c.r[18].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0]));
    st16((c.r[18].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[21].w[0]));
    st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[18].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 61440ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002270F8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x45800000u);  if (t) { goto L_002270F8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0])));
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 2u)));
    c.f[2] = c.r[3].w[0];
    c.f[13] = fp::cvt_s_w(c.f[2]);
    c.f[1] = c.r[2].w[0];
    c.facc = fp::mul(c.f[13], c.f[13]);
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[12], c.f[12]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002270F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002270A4u);  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x002270A4u) [[unlikely]] return; }
L_002270A4:
    set32(c.r[2], c.r[2].w[0] + 4096u);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 13));  if (t) { goto L_002270BC; } }
    set32(c.r[2], c.r[3].w[0] + 8191u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));
    c.budget -= 2;
L_002270BC:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = c.r[3].d[0] & 7ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 15200u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0]));
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002270F8; } }
L_002270E8:
    st16((c.r[18].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
L_002270F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227100u); c.r[4].d[0] = ld16((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0049(c, 355u, depth + 1u); else { c.pc = 0x00226CD0u; return; } if (c.pc != 0x00227100u) [[unlikely]] return; }
L_00227100:
    set32(c.r[4], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022710Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 391u, depth + 1u); else { c.pc = 0x00227960u; return; } if (c.pc != 0x0022710Cu) [[unlikely]] return; }
L_0022710C:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 8u);
    set32(c.r[17], c.r[17].w[0] + 8u);
    set32(c.r[23], c.r[23].w[0] + 32u);
    set32(c.r[16], c.r[16].w[0] + 2u);
    set32(c.r[21], c.r[21].w[0] + 2u);
    set32(c.r[20], c.r[20].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 16u);
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[22].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00226DA8u | kUnwind; return; } goto L_00226DA8; } }
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
L_00227170:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + 9696u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = ld16((c.r[4].w[0]));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 15216u);
    c.budget -= 10;
L_00227198:
    c.r[3].d[0] = ld16((c.r[6].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002271B8; } }
    c.r[3].d[0] = ld16((c.r[6].w[0] + 2u));
    c.r[3].d[0] = c.r[7].d[0] | c.r[3].d[0];
    c.r[7].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 4;
L_002271B8:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(15ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00227198u | kUnwind; return; } goto L_00227198; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));  c.pc = t; return; }
L_002271D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[4].w[0] << 1);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] + 9344u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], c.r[4].w[0] << 5);
    set32(c.r[17], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 9712u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022721Cu); set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_0073(c, 474u, depth + 1u); else { c.pc = 0x002CFAE0u; return; } if (c.pc != 0x0022721Cu) [[unlikely]] return; }
L_0022721C:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00227240; } }
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u - 1u);
    st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 360u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002273F0; } }
L_00227240:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00227280; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00227268; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00227268; } }
    c.budget -= 1;
L_00227268:
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 360u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002273F0; } }
    c.budget -= 1;
L_00227280:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002273C8; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227298u); set32(c.r[5], c.r[18].w[0] + 280u);  if (depth < kMaxDepth) unit_0073(c, 468u, depth + 1u); else { c.pc = 0x002CFA10u; return; } if (c.pc != 0x00227298u) [[unlikely]] return; }
L_00227298:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[18].w[0] + 276u), c.r[2].w[0]);  if (t) { goto L_002272A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002273F0; } }
L_002272A8:
    set32(c.r[3], ld32((c.r[18].w[0] + 280u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00227338; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF00000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00227300; } }
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], 0u + 5u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], c.r[2].w[0] + 9354u);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], c.r[2].w[0] + 9352u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00227368; } }
    c.budget -= 1;
L_00227300:
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 7u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 9354u);
    set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] + 9352u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00227368; } }
    c.budget -= 1;
L_00227338:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], c.r[2].w[0] + 9354u);
    st32((c.r[18].w[0]), 0u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], c.r[2].w[0] + 9352u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 12;
L_00227368:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227374u); set32(c.r[5], c.r[18].w[0] + 361u);  if (depth < kMaxDepth) unit_00A2(c, 339u, depth + 1u); else { c.pc = 0x0038AE80u; return; } if (c.pc != 0x00227374u) [[unlikely]] return; }
L_00227374:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00227388; } }
    st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 360u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002273B0; } }
L_00227388:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 361u));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002273A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 360u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002273A8; } }
L_002273A0:
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 360u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002273A8:
    st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_002273B0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002273F0; } }
    c.budget -= 1;
L_002273C8:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002273D8u); set32(c.r[5], c.r[5].w[0] + 9312u);  if (depth < kMaxDepth) unit_0073(c, 463u, depth + 1u); else { c.pc = 0x002CF938u; return; } if (c.pc != 0x002273D8u) [[unlikely]] return; }
L_002273D8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002273E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002273EC; } }
L_002273E8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002273EC:
    c.budget -= 1;
L_002273F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00227410:
    c.r[6].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[6].w[0] << 1);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], c.r[2].w[0] << 3);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[6].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + 9344u);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 9712u);
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 360u));
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00227468; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002275F0; } }
    c.budget -= 1;
L_00227468:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[7], 0u + 2u);  if (t) { goto L_002275E8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[7].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_00227510; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00227490; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002275E8; } }
    c.budget -= 1;
L_00227490:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 361u));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = ld8((c.r[16].w[0] + 19u));  if (t) { goto L_002274D0; } }
    set32(c.r[3], 0u + 3u);
    c.r[5].d[0] = c.r[4].d[0] & 255ull;
    st8((c.r[29].w[0] + 47u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & 127ull;
    set32(c.r[4], c.r[3].w[0] << 1);
    c.r[3].d[0] = c.r[5].d[0] & 128ull;
    c.r[4].d[0] = c.r[4].d[0] | 1ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 7));
    st8((c.r[29].w[0] + 44u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002274E0; } }
    c.budget -= 1;
L_002274D0:
    st8((c.r[29].w[0] + 47u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[29].w[0] + 44u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
L_002274E0:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[29].w[0] + 47u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002274F4u); set32(c.r[8], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_00A2(c, 341u, depth + 1u); else { c.pc = 0x0038AF00u; return; } if (c.pc != 0x002274F4u) [[unlikely]] return; }
L_002274F4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002275E8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002275E8; } }
    c.budget -= 1;
L_00227510:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 14u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00227540; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00227540; } }
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = 0ull & 255ull;
    st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00227540:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00227570; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00227570; } }
    st8((c.r[16].w[0] + 19u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = 0ull & 255ull;
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00227570:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 14u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002275E8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002275E8; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 361u));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_002275B0; } }
    st8((c.r[29].w[0] + 44u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 47u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], 0u + 2u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 45u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002275C0; } }
    c.budget -= 1;
L_002275B0:
    set32(c.r[3], 0u + 2u);
    st8((c.r[29].w[0] + 44u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], 0u + 1u);
    st8((c.r[29].w[0] + 47u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002275C0:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[29].w[0] + 47u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002275D4u); set32(c.r[8], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_00A2(c, 341u, depth + 1u); else { c.pc = 0x0038AF00u; return; } if (c.pc != 0x002275D4u) [[unlikely]] return; }
L_002275D4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002275E8; } }
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_002275E8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_002275F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00227600:
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[7], c.r[3].w[0] << 5);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[3].w[0] + 9344u);
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], 0u + 1u);
    st16((c.r[7].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[7].w[0] + 14u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[7].w[0] + 18u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[7].w[0] + 16u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[7].w[0] + 19u), static_cast<std::uint8_t>(c.r[6].w[0]));  c.pc = t; return; }
L_00227630:
    c.r[5].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00227648; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_0022764C; } }
L_00227648:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0022764C:
    c.r[6].d[0] = c.r[4].d[0] & 255ull;
    c.r[1].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_00227688; } }
    set32(c.r[4], c.r[6].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + 9344u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 3;
L_00227668:
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st16((c.r[4].w[0] + 14u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00227668u | kUnwind; return; } goto L_00227668; } }
    c.budget -= 1;
L_00227688:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00227690:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 9540u));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_002276B8; } }
    c.r[2].d[0] = ld16((c.r[1].w[0] + 9556u));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002276C0; } }
    c.budget -= 1;
L_002276B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002276C8; } }
L_002276C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002276C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002276D0:
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002276F0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 9540u));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
L_002276F0:
    c.r[2].d[0] = c.r[4].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_00227708; } }
    c.r[2].d[0] = ld16((c.r[1].w[0] + 9556u));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
L_00227708:
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00227720; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00227728; } }
L_00227720:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00227728:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00227730:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 9540u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 9556u));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_00227750:
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00227770; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 9540u));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
L_00227770:
    c.r[2].d[0] = c.r[4].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_00227788; } }
    c.r[2].d[0] = ld16((c.r[1].w[0] + 9556u));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
L_00227788:
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002277A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002277A8; } }
L_002277A0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002277A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002277B0:
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[2].d[0] & 15360ull;
    set32(c.r[2], 0u + 2048u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[7].d[0] & 1ull;  if (t) { goto L_002277F0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] - 1u);  if (t) { goto L_002277E0; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_002277F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002277F0; } }
    c.budget -= 1;
L_002277E0:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_002277F0; } }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 2;
L_002277F0:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[7].d[0] & 1ull;  if (t) { goto L_00227828; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_00227818; } }
    c.r[1].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00227828; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00227828; } }
L_00227818:
    c.r[1].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00227828; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00227828:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; return; }
L_00227830:
    c.budget -= 2;
    { c.r[7].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002277B0u | kUnwind; return; } goto L_002277B0; }
L_00227840:
    c.budget -= 2;
    { set32(c.r[7], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002277B0u | kUnwind; return; } goto L_002277B0; }
L_00227850:
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[2].d[0] & 15360ull;
    set32(c.r[2], 0u + 8192u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[7].d[0] & 1ull;  if (t) { goto L_00227890; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] - 1u);  if (t) { goto L_00227880; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_00227890; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00227890; } }
    c.budget -= 1;
L_00227880:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_00227890; } }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 2;
L_00227890:
    set32(c.r[2], 0u + 4096u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[7].d[0] & 1ull;  if (t) { goto L_002278C8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_002278B8; } }
    c.r[1].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002278C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002278C8; } }
L_002278B8:
    c.r[1].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002278C8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002278C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; return; }
L_002278D0:
    c.budget -= 2;
    { c.r[7].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00227850u | kUnwind; return; } goto L_00227850; }
L_002278E0:
    c.budget -= 2;
    { set32(c.r[7], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00227850u | kUnwind; return; } goto L_00227850; }
L_002278F0:
    c.r[5].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00227928; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].d[0] = ld16((c.r[1].w[0] + 9540u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 9548u));
    c.r[3].d[0] = c.r[3].d[0] & 15360ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 10;
L_00227928:
    c.r[3].d[0] = c.r[5].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_00227958; } }
    c.r[4].d[0] = ld16((c.r[1].w[0] + 9556u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 9564u));
    c.r[3].d[0] = c.r[3].d[0] & 15360ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 9;
L_00227958:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00227960:
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 2u));
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.r[5].d[0] = ~(c.r[5].d[0] | 0ull);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 2u));
    c.r[3].d[0] = ~(c.r[3].d[0] | 0ull);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 4u));
    st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 2u));
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.budget -= 19;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002279E0; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 14u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 14u));
    c.r[1].d[0] = c.r[3].sd[0] < 31ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 26u);  if (t) { goto L_002279E8; } }
    st16((c.r[4].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 12u));
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002279E8; } }
L_002279E0:
    st16((c.r[4].w[0] + 14u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_002279E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002279F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 7u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00227A0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00227A14; } }
L_00227A0C:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_00227A14:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00227A20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 101u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00227A68; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 38u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00227A68; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 322u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00227A70; } }
    c.budget -= 1;
L_00227A68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00227B88; } }
L_00227A70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00227B88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227A84u);  if (depth < kMaxDepth) unit_0049(c, 392u, depth + 1u); else { c.pc = 0x002279F0u; return; } if (c.pc != 0x00227A84u) [[unlikely]] return; }
L_00227A84:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] << 1);  if (t) { goto L_00227B88; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 9712u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 360u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00227B88; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 7u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00227B30; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 82u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_00227B88; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 56u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[17].w[0] & 31u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);  if (t) { goto L_00227B88; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 8616u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] << 1);  if (t) { goto L_00227B88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + 15280u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 4u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227B28u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 377u, depth + 1u); else { c.pc = 0x00227600u; return; } if (c.pc != 0x00227B28u) [[unlikely]] return; }
L_00227B28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00227B88; } }
L_00227B30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 56u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << (c.r[17].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);  if (t) { goto L_00227B88; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 8616u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00227B88; } }
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 15280u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 4u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227B84u); c.r[7].d[0] = c.r[17].d[0] & 255ull;  if (depth < kMaxDepth) unit_0049(c, 377u, depth + 1u); else { c.pc = 0x00227600u; return; } if (c.pc != 0x00227B84u) [[unlikely]] return; }
L_00227B84:
    c.budget -= 1;
L_00227B88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00227BA0:
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[6], c.r[6].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 9712u);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 360u));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00227C28; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 1u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 39u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);  if (t) { goto L_00227C28; } }
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 8616u)));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00227C28; } }
    set32(c.r[3], c.r[5].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 15280u);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[7].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 4u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227C28u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0049(c, 377u, depth + 1u); else { c.pc = 0x00227600u; return; } if (c.pc != 0x00227C28u) [[unlikely]] return; }
L_00227C28:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00227C40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227C50u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 378u, depth + 1u); else { c.pc = 0x00227630u; return; } if (c.pc != 0x00227C50u) [[unlikely]] return; }
L_00227C50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227C58u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 378u, depth + 1u); else { c.pc = 0x00227630u; return; } if (c.pc != 0x00227C58u) [[unlikely]] return; }
L_00227C58:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00227C70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[4].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + 9344u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00227C98; } }
    st16((c.r[3].w[0] + 16u), static_cast<std::uint16_t>(0u));
    st16((c.r[3].w[0] + 14u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_00227C98:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 14u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00227CB0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00227CB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00227CC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[16], c.r[16].w[0] + 9712u);
    c.budget -= 8;
L_00227CE0:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00227CF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227CF4u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0073(c, 461u, depth + 1u); else { c.pc = 0x002CF8E0u; return; } if (c.pc != 0x00227CF4u) [[unlikely]] return; }
L_00227CF4:
    c.budget -= 1;
L_00227CF8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 368u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00227CE0u | kUnwind; return; } goto L_00227CE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227D10u);  if (depth < kMaxDepth) unit_0073(c, 454u, depth + 1u); else { c.pc = 0x002CF770u; return; } if (c.pc != 0x00227D10u) [[unlikely]] return; }
L_00227D10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227D18u);  if (depth < kMaxDepth) unit_0074(c, 32u, depth + 1u); else { c.pc = 0x002D0280u; return; } if (c.pc != 0x00227D18u) [[unlikely]] return; }
L_00227D18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00227D30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[1].w[0] - 8816u), static_cast<std::uint8_t>(0u));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[16].w[0] - 8816u);
    st8((c.r[1].w[0] - 8815u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 8814u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 8813u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 8804u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 8803u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 8801u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 8802u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 8792u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 8791u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227DA4u); st8((c.r[1].w[0] - 8790u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004E(c, 65u, depth + 1u); else { c.pc = 0x00238A00u; return; } if (c.pc != 0x00227DA4u) [[unlikely]] return; }
L_00227DA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227DACu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 173u, depth + 1u); else { c.pc = 0x0023A570u; return; } if (c.pc != 0x00227DACu) [[unlikely]] return; }
L_00227DAC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], 0u + 18000u);
    st8((c.r[1].w[0] - 8812u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    st16((c.r[1].w[0] - 8808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 8806u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], 0u + 5u);
    st8((c.r[1].w[0] - 8811u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 8810u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 8809u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 56u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 8815u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 196u)));
    c.budget -= 22;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00227E10; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00227E18; } }
L_00227E10:
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00227E18:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 7u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00227E38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 55u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00227E40; } }
    c.budget -= 1;
L_00227E38:
    st8((c.r[4].w[0] + 55u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00227E40:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00227E58; } }
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00227E58:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00227E70; } }
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00227E70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BE0000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 5896u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[4].w[0] + 11008u);
    set32(c.r[5], c.r[3].w[0] + 2880u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227E94u); set32(c.r[6], c.r[3].w[0] + 3120u);  if (depth < kMaxDepth) unit_00AC(c, 54u, depth + 1u); else { c.pc = 0x003B0700u; return; } if (c.pc != 0x00227E94u) [[unlikely]] return; }
L_00227E94:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227EA4u); set32(c.r[4], c.r[4].w[0] + 11008u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x00227EA4u) [[unlikely]] return; }
L_00227EA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00227EC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8791u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] - 8816u);  if (t) { goto L_00227EF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227EE4u);  if (depth < kMaxDepth) unit_004A(c, 125u, depth + 1u); else { c.pc = 0x00229670u; return; } if (c.pc != 0x00227EE4u) [[unlikely]] return; }
L_00227EE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00227F48; } }
    c.budget -= 1;
L_00227EF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00227F30; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 4u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00227F20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227F18u);  if (depth < kMaxDepth) unit_004A(c, 96u, depth + 1u); else { c.pc = 0x00229310u; return; } if (c.pc != 0x00227F18u) [[unlikely]] return; }
L_00227F18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00227F48; } }
L_00227F20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227F28u);  if (depth < kMaxDepth) unit_004A(c, 87u, depth + 1u); else { c.pc = 0x00229110u; return; } if (c.pc != 0x00227F28u) [[unlikely]] return; }
L_00227F28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00227F48; } }
L_00227F30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00227F48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227F48u);  if (depth < kMaxDepth) unit_004A(c, 17u, depth + 1u); else { c.pc = 0x00228450u; return; } if (c.pc != 0x00227F48u) [[unlikely]] return; }
L_00227F48:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00227F60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[16].w[0] - 8816u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227F80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 5u, depth + 1u); else { c.pc = 0x002280E0u; return; } if (c.pc != 0x00227F80u) [[unlikely]] return; }
L_00227F80:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227F8Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004A(c, 5u, depth + 1u); else { c.pc = 0x002280E0u; return; } if (c.pc != 0x00227F8Cu) [[unlikely]] return; }
L_00227F8C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8816u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_004A(c, 3u, depth); } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00227FB8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00227FD0; } }
L_00227FB8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], 0u + 10u);
    c.r[4].d[0] = c.r[4].d[0] | 4ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_004A(c, 4u, depth); } }
L_00227FD0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00227FF8; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], 0u + 10u);
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00227FF8u); st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004A(c, 6u, depth + 1u); else { c.pc = 0x002281B0u; return; } if (c.pc != 0x00227FF8u) [[unlikely]] return; }
L_00227FF8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 2;
    [[clang::musttail]] return unit_004A(c, 1u, depth);
}

}
