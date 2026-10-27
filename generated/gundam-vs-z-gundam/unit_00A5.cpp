#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00A5[4096] = {
    1, 2, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 7, 0, 8, 0,
    9, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0,
    0, 0, 14, 0, 0, 15, 0, 16, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0,
    0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0,
    26, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 31, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0,
    34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0,
    0, 41, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0,
    0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0,
    52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 55, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0,
    0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0,
    0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0,
    0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0,
    0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0,
    0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0,
    0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91,
    0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 96, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0,
    99, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 112, 0, 0,
    113, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0,
    0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 0,
    125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 136, 0, 137, 0, 0,
    0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 149, 0, 0,
    0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0,
    0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0,
    0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0,
    0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0,
    0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 195,
    0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0,
    0, 204, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0,
    0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0,
    210, 0, 211, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0,
    0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0,
    0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0,
    234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 239, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248,
    0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260,
    0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266,
    0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273,
    0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0,
    0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 291, 0, 292, 0, 0, 293, 0, 0, 0, 0,
    0, 0, 0, 0, 294, 0, 0, 295, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0,
    0, 0, 300, 0, 301, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0,
    0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 308, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0,
    0, 315, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 328, 0, 0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0,
    0, 0, 0, 0, 333, 0, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    340, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0,
    0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 349, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352,
    0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0,
    366, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 375, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0,
    378, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 382, 0, 0, 0, 0, 0,
    0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0,
    394, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0,
    0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 417, 0, 0, 0, 0, 418, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 420, 0, 421, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 0, 0,
    429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    433, 0, 434, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 441, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 443, 0, 444, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0,
    447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 450, 0,
    0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0,
    454, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0,
    461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00A5(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00394000;
    case 2u: goto L_00394004;
    case 3u: goto L_00394008;
    case 4u: goto L_00394020;
    case 5u: goto L_00394058;
    case 6u: goto L_00394068;
    case 7u: goto L_00394070;
    case 8u: goto L_00394078;
    case 9u: goto L_00394080;
    case 10u: goto L_00394088;
    case 11u: goto L_003940A4;
    case 12u: goto L_003940C0;
    case 13u: goto L_003940F8;
    case 14u: goto L_00394108;
    case 15u: goto L_00394114;
    case 16u: goto L_0039411C;
    case 17u: goto L_00394124;
    case 18u: goto L_0039412C;
    case 19u: goto L_0039414C;
    case 20u: goto L_00394160;
    case 21u: goto L_00394174;
    case 22u: goto L_00394198;
    case 23u: goto L_003941A8;
    case 24u: goto L_003941E0;
    case 25u: goto L_003941F0;
    case 26u: goto L_00394200;
    case 27u: goto L_00394208;
    case 28u: goto L_00394220;
    case 29u: goto L_00394244;
    case 30u: goto L_0039424C;
    case 31u: goto L_00394254;
    case 32u: goto L_00394260;
    case 33u: goto L_00394274;
    case 34u: goto L_00394280;
    case 35u: goto L_0039428C;
    case 36u: goto L_003942C4;
    case 37u: goto L_003942CC;
    case 38u: goto L_003942D4;
    case 39u: goto L_003942E0;
    case 40u: goto L_003942F8;
    case 41u: goto L_00394304;
    case 42u: goto L_00394310;
    case 43u: goto L_00394324;
    case 44u: goto L_00394340;
    case 45u: goto L_00394354;
    case 46u: goto L_00394378;
    case 47u: goto L_00394388;
    case 48u: goto L_003943C0;
    case 49u: goto L_003943D0;
    case 50u: goto L_003943E0;
    case 51u: goto L_003943E8;
    case 52u: goto L_00394400;
    case 53u: goto L_00394420;
    case 54u: goto L_00394428;
    case 55u: goto L_00394430;
    case 56u: goto L_0039443C;
    case 57u: goto L_0039444C;
    case 58u: goto L_00394460;
    case 59u: goto L_003944C0;
    case 60u: goto L_003944E4;
    case 61u: goto L_003944F4;
    case 62u: goto L_00394518;
    case 63u: goto L_0039452C;
    case 64u: goto L_0039453C;
    case 65u: goto L_00394550;
    case 66u: goto L_0039456C;
    case 67u: goto L_003945A0;
    case 68u: goto L_003945D4;
    case 69u: goto L_003945E8;
    case 70u: goto L_00394604;
    case 71u: goto L_0039461C;
    case 72u: goto L_00394634;
    case 73u: goto L_00394650;
    case 74u: goto L_00394670;
    case 75u: goto L_00394690;
    case 76u: goto L_00394768;
    case 77u: goto L_00394784;
    case 78u: goto L_003947A0;
    case 79u: goto L_00394820;
    case 80u: goto L_00394830;
    case 81u: goto L_00394844;
    case 82u: goto L_00394874;
    case 83u: goto L_00394888;
    case 84u: goto L_003948B4;
    case 85u: goto L_003948D4;
    case 86u: goto L_003948EC;
    case 87u: goto L_00394904;
    case 88u: goto L_00394920;
    case 89u: goto L_0039493C;
    case 90u: goto L_0039495C;
    case 91u: goto L_0039497C;
    case 92u: goto L_0039498C;
    case 93u: goto L_00394998;
    case 94u: goto L_003949B0;
    case 95u: goto L_003949C4;
    case 96u: goto L_003949CC;
    case 97u: goto L_003949D8;
    case 98u: goto L_003949E4;
    case 99u: goto L_00394A00;
    case 100u: goto L_00394A10;
    case 101u: goto L_00394A24;
    case 102u: goto L_00394A60;
    case 103u: goto L_00394A9C;
    case 104u: goto L_00394ABC;
    case 105u: goto L_00394AD8;
    case 106u: goto L_00394B04;
    case 107u: goto L_00394B24;
    case 108u: goto L_00394B34;
    case 109u: goto L_00394B40;
    case 110u: goto L_00394B58;
    case 111u: goto L_00394B6C;
    case 112u: goto L_00394B74;
    case 113u: goto L_00394B80;
    case 114u: goto L_00394B8C;
    case 115u: goto L_00394BA0;
    case 116u: goto L_00394BB0;
    case 117u: goto L_00394BC4;
    case 118u: goto L_00394BE8;
    case 119u: goto L_00394BF4;
    case 120u: goto L_00394C10;
    case 121u: goto L_00394C20;
    case 122u: goto L_00394C34;
    case 123u: goto L_00394C58;
    case 124u: goto L_00394C64;
    case 125u: goto L_00394C80;
    case 126u: goto L_00394C90;
    case 127u: goto L_00394CA0;
    case 128u: goto L_00394CAC;
    case 129u: goto L_00394CF8;
    case 130u: goto L_00394D20;
    case 131u: goto L_00394D28;
    case 132u: goto L_00394D30;
    case 133u: goto L_00394D38;
    case 134u: goto L_00394D5C;
    case 135u: goto L_00394D64;
    case 136u: goto L_00394D6C;
    case 137u: goto L_00394D74;
    case 138u: goto L_00394D84;
    case 139u: goto L_00394DA0;
    case 140u: goto L_00394DB0;
    case 141u: goto L_00394DD4;
    case 142u: goto L_00394E04;
    case 143u: goto L_00394E24;
    case 144u: goto L_00394E2C;
    case 145u: goto L_00394E38;
    case 146u: goto L_00394E44;
    case 147u: goto L_00394E5C;
    case 148u: goto L_00394E64;
    case 149u: goto L_00394E74;
    case 150u: goto L_00394E88;
    case 151u: goto L_00394EA0;
    case 152u: goto L_00394EB0;
    case 153u: goto L_00394ED0;
    case 154u: goto L_00394EE8;
    case 155u: goto L_00394EF8;
    case 156u: goto L_00394F10;
    case 157u: goto L_00394F64;
    case 158u: goto L_00394F70;
    case 159u: goto L_00394F90;
    case 160u: goto L_00394FB0;
    case 161u: goto L_00394FC0;
    case 162u: goto L_00394FEC;
    case 163u: goto L_00395010;
    case 164u: goto L_00395044;
    case 165u: goto L_00395068;
    case 166u: goto L_0039510C;
    case 167u: goto L_00395120;
    case 168u: goto L_0039512C;
    case 169u: goto L_00395140;
    case 170u: goto L_00395190;
    case 171u: goto L_003951C4;
    case 172u: goto L_003951E0;
    case 173u: goto L_003951F0;
    case 174u: goto L_0039523C;
    case 175u: goto L_0039526C;
    case 176u: goto L_003952A0;
    case 177u: goto L_003952D8;
    case 178u: goto L_003952E0;
    case 179u: goto L_00395340;
    case 180u: goto L_00395368;
    case 181u: goto L_003953A8;
    case 182u: goto L_003953B4;
    case 183u: goto L_003953D8;
    case 184u: goto L_003953F8;
    case 185u: goto L_00395478;
    case 186u: goto L_003954A0;
    case 187u: goto L_00395518;
    case 188u: goto L_00395528;
    case 189u: goto L_00395570;
    case 190u: goto L_00395594;
    case 191u: goto L_003955AC;
    case 192u: goto L_003955CC;
    case 193u: goto L_003955DC;
    case 194u: goto L_003955EC;
    case 195u: goto L_003955FC;
    case 196u: goto L_0039560C;
    case 197u: goto L_00395628;
    case 198u: goto L_00395640;
    case 199u: goto L_00395670;
    case 200u: goto L_003956A0;
    case 201u: goto L_003956AC;
    case 202u: goto L_003956E8;
    case 203u: goto L_003956F8;
    case 204u: goto L_00395704;
    case 205u: goto L_0039570C;
    case 206u: goto L_00395730;
    case 207u: goto L_00395770;
    case 208u: goto L_00395784;
    case 209u: goto L_003957E0;
    case 210u: goto L_00395800;
    case 211u: goto L_00395808;
    case 212u: goto L_00395818;
    case 213u: goto L_00395824;
    case 214u: goto L_00395840;
    case 215u: goto L_00395870;
    case 216u: goto L_003958AC;
    case 217u: goto L_0039592C;
    case 218u: goto L_0039593C;
    case 219u: goto L_0039596C;
    case 220u: goto L_00395990;
    case 221u: goto L_003959C4;
    case 222u: goto L_003959F0;
    case 223u: goto L_00395A10;
    case 224u: goto L_00395A58;
    case 225u: goto L_00395A80;
    case 226u: goto L_00395A94;
    case 227u: goto L_00395AB0;
    case 228u: goto L_00395AC0;
    case 229u: goto L_00395AD0;
    case 230u: goto L_00395B1C;
    case 231u: goto L_00395B24;
    case 232u: goto L_00395B48;
    case 233u: goto L_00395B64;
    case 234u: goto L_00395B80;
    case 235u: goto L_00395BAC;
    case 236u: goto L_00395BBC;
    case 237u: goto L_00395BD0;
    case 238u: goto L_00395BF0;
    case 239u: goto L_00395BF8;
    case 240u: goto L_00395C24;
    case 241u: goto L_00395C34;
    case 242u: goto L_00395C3C;
    case 243u: goto L_00395C54;
    case 244u: goto L_00395C80;
    case 245u: goto L_00395C9C;
    case 246u: goto L_00395CC0;
    case 247u: goto L_00395CEC;
    case 248u: goto L_00395CFC;
    case 249u: goto L_00395D04;
    case 250u: goto L_00395D30;
    case 251u: goto L_00395D4C;
    case 252u: goto L_00395D68;
    case 253u: goto L_00395D94;
    case 254u: goto L_00395DA4;
    case 255u: goto L_00395DDC;
    case 256u: goto L_00395DE8;
    case 257u: goto L_00395E2C;
    case 258u: goto L_00395E38;
    case 259u: goto L_00395E60;
    case 260u: goto L_00395E7C;
    case 261u: goto L_00395E90;
    case 262u: goto L_00395EA0;
    case 263u: goto L_00395EC4;
    case 264u: goto L_00395ED4;
    case 265u: goto L_00395EE4;
    case 266u: goto L_00395EFC;
    case 267u: goto L_00395F0C;
    case 268u: goto L_00395F28;
    case 269u: goto L_00395F38;
    case 270u: goto L_00395F50;
    case 271u: goto L_00395F74;
    case 272u: goto L_00395FB0;
    case 273u: goto L_00395FFC;
    case 274u: goto L_0039600C;
    case 275u: goto L_00396020;
    case 276u: goto L_00396030;
    case 277u: goto L_00396048;
    case 278u: goto L_00396054;
    case 279u: goto L_0039606C;
    case 280u: goto L_0039608C;
    case 281u: goto L_003960E0;
    case 282u: goto L_0039610C;
    case 283u: goto L_00396120;
    case 284u: goto L_00396150;
    case 285u: goto L_003961A8;
    case 286u: goto L_003961CC;
    case 287u: goto L_003961E0;
    case 288u: goto L_003961F0;
    case 289u: goto L_00396220;
    case 290u: goto L_00396250;
    case 291u: goto L_00396258;
    case 292u: goto L_00396260;
    case 293u: goto L_0039626C;
    case 294u: goto L_00396290;
    case 295u: goto L_0039629C;
    case 296u: goto L_003962A8;
    case 297u: goto L_003962C0;
    case 298u: goto L_003962D0;
    case 299u: goto L_003962F4;
    case 300u: goto L_00396308;
    case 301u: goto L_00396310;
    case 302u: goto L_0039631C;
    case 303u: goto L_00396328;
    case 304u: goto L_00396340;
    case 305u: goto L_00396374;
    case 306u: goto L_00396398;
    case 307u: goto L_003963C0;
    case 308u: goto L_00396410;
    case 309u: goto L_00396418;
    case 310u: goto L_00396430;
    case 311u: goto L_00396460;
    case 312u: goto L_003964A0;
    case 313u: goto L_003964BC;
    case 314u: goto L_003964F4;
    case 315u: goto L_00396504;
    case 316u: goto L_00396510;
    case 317u: goto L_00396544;
    case 318u: goto L_00396558;
    case 319u: goto L_00396590;
    case 320u: goto L_0039659C;
    case 321u: goto L_003965B8;
    case 322u: goto L_003965D8;
    case 323u: goto L_003965E8;
    case 324u: goto L_00396610;
    case 325u: goto L_0039661C;
    case 326u: goto L_00396638;
    case 327u: goto L_00396640;
    case 328u: goto L_00396690;
    case 329u: goto L_0039669C;
    case 330u: goto L_003966B8;
    case 331u: goto L_003966E0;
    case 332u: goto L_003966F0;
    case 333u: goto L_00396710;
    case 334u: goto L_0039671C;
    case 335u: goto L_00396738;
    case 336u: goto L_00396740;
    case 337u: goto L_00396770;
    case 338u: goto L_003967BC;
    case 339u: goto L_003967D0;
    case 340u: goto L_00396800;
    case 341u: goto L_0039680C;
    case 342u: goto L_00396828;
    case 343u: goto L_00396840;
    case 344u: goto L_00396878;
    case 345u: goto L_00396898;
    case 346u: goto L_003968C0;
    case 347u: goto L_003968CC;
    case 348u: goto L_003968E8;
    case 349u: goto L_003968F0;
    case 350u: goto L_00396930;
    case 351u: goto L_003969B8;
    case 352u: goto L_003969FC;
    case 353u: goto L_00396A14;
    case 354u: goto L_00396A2C;
    case 355u: goto L_00396A64;
    case 356u: goto L_00396AB0;
    case 357u: goto L_00396B08;
    case 358u: goto L_00396B44;
    case 359u: goto L_00396B5C;
    case 360u: goto L_00396B74;
    case 361u: goto L_00396BAC;
    case 362u: goto L_00396C00;
    case 363u: goto L_00396C50;
    case 364u: goto L_00396C60;
    case 365u: goto L_00396C70;
    case 366u: goto L_00396C80;
    case 367u: goto L_00396C94;
    case 368u: goto L_00396CA4;
    case 369u: goto L_00396CB8;
    case 370u: goto L_00396CC4;
    case 371u: goto L_00396CE0;
    case 372u: goto L_00396D28;
    case 373u: goto L_00396D38;
    case 374u: goto L_00396D48;
    case 375u: goto L_00396D54;
    case 376u: goto L_00396D5C;
    case 377u: goto L_00396D78;
    case 378u: goto L_00396D80;
    case 379u: goto L_00396D90;
    case 380u: goto L_00396ECC;
    case 381u: goto L_00396F5C;
    case 382u: goto L_00396F68;
    case 383u: goto L_00396F84;
    case 384u: goto L_00396F98;
    case 385u: goto L_00396FCC;
    case 386u: goto L_00396FE0;
    case 387u: goto L_00397020;
    case 388u: goto L_00397030;
    case 389u: goto L_00397050;
    case 390u: goto L_00397070;
    case 391u: goto L_003970B4;
    case 392u: goto L_003970BC;
    case 393u: goto L_003970F0;
    case 394u: goto L_00397100;
    case 395u: goto L_00397110;
    case 396u: goto L_00397178;
    case 397u: goto L_003971A8;
    case 398u: goto L_003971F0;
    case 399u: goto L_0039720C;
    case 400u: goto L_00397230;
    case 401u: goto L_00397330;
    case 402u: goto L_00397388;
    case 403u: goto L_00397398;
    case 404u: goto L_003973AC;
    case 405u: goto L_003973C0;
    case 406u: goto L_00397418;
    case 407u: goto L_00397428;
    case 408u: goto L_0039743C;
    case 409u: goto L_00397450;
    case 410u: goto L_00397490;
    case 411u: goto L_003974B0;
    case 412u: goto L_003974C0;
    case 413u: goto L_003974D0;
    case 414u: goto L_003974F0;
    case 415u: goto L_00397538;
    case 416u: goto L_00397554;
    case 417u: goto L_0039755C;
    case 418u: goto L_00397570;
    case 419u: goto L_003976C0;
    case 420u: goto L_00397708;
    case 421u: goto L_00397710;
    case 422u: goto L_00397718;
    case 423u: goto L_00397730;
    case 424u: goto L_00397750;
    case 425u: goto L_00397770;
    case 426u: goto L_003977C0;
    case 427u: goto L_003977D8;
    case 428u: goto L_003977F0;
    case 429u: goto L_00397800;
    case 430u: goto L_003978E4;
    case 431u: goto L_00397994;
    case 432u: goto L_003979B0;
    case 433u: goto L_00397A00;
    case 434u: goto L_00397A08;
    case 435u: goto L_00397A28;
    case 436u: goto L_00397A40;
    case 437u: goto L_00397A60;
    case 438u: goto L_00397AAC;
    case 439u: goto L_00397AC4;
    case 440u: goto L_00397ADC;
    case 441u: goto L_00397AF0;
    case 442u: goto L_00397C50;
    case 443u: goto L_00397C98;
    case 444u: goto L_00397CA0;
    case 445u: goto L_00397CBC;
    case 446u: goto L_00397CE0;
    case 447u: goto L_00397D00;
    case 448u: goto L_00397D44;
    case 449u: goto L_00397D64;
    case 450u: goto L_00397D78;
    case 451u: goto L_00397D90;
    case 452u: goto L_00397E30;
    case 453u: goto L_00397E78;
    case 454u: goto L_00397E80;
    case 455u: goto L_00397E98;
    case 456u: goto L_00397EB0;
    case 457u: goto L_00397ED0;
    case 458u: goto L_00397F1C;
    case 459u: goto L_00397F48;
    case 460u: goto L_00397F64;
    case 461u: goto L_00397F80;
    default: bad_entry(c, 0x00394000u); return;
    }
L_00394000:
    set32(c.r[5], 0u + 171u);
    c.budget -= 1;
L_00394004:
    c.budget -= 1;
L_00394008:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00394020:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 47u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], 0u + 171u);  if (t) { goto L_00394098; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 4u);  if (t) { goto L_00394098; } }
    set32(c.r[5], c.r[3].w[0] + 31u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394058u); set32(c.r[6], c.r[3].w[0] + 30u);  if (depth < kMaxDepth) unit_008E(c, 165u, depth + 1u); else { c.pc = 0x00339C20u; return; } if (c.pc != 0x00394058u) [[unlikely]] return; }
L_00394058:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00394090; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394068u);  if (depth < kMaxDepth) unit_008E(c, 189u, depth + 1u); else { c.pc = 0x0033A260u; return; } if (c.pc != 0x00394068u) [[unlikely]] return; }
L_00394068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394070u);  if (depth < kMaxDepth) unit_008E(c, 177u, depth + 1u); else { c.pc = 0x00339F20u; return; } if (c.pc != 0x00394070u) [[unlikely]] return; }
L_00394070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394078u);  if (depth < kMaxDepth) unit_008E(c, 187u, depth + 1u); else { c.pc = 0x0033A060u; return; } if (c.pc != 0x00394078u) [[unlikely]] return; }
L_00394078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394080u);  if (depth < kMaxDepth) unit_008E(c, 154u, depth + 1u); else { c.pc = 0x00339AF0u; return; } if (c.pc != 0x00394080u) [[unlikely]] return; }
L_00394080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394088u);  if (depth < kMaxDepth) unit_00A5(c, 207u, depth + 1u); else { c.pc = 0x00395770u; return; } if (c.pc != 0x00394088u) [[unlikely]] return; }
L_00394088:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 192u);  if (t) { goto L_00394098; } }
L_00394090:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    st8((c.r[2].w[0] + 53u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00394098:
    c.r[5].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003940A4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x003940A4u) [[unlikely]] return; }
L_003940A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003940C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 47u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], 0u + 171u);  if (t) { goto L_00394140; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 5u);  if (t) { goto L_00394140; } }
    set32(c.r[5], c.r[3].w[0] + 31u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003940F8u); set32(c.r[6], c.r[3].w[0] + 30u);  if (depth < kMaxDepth) unit_008E(c, 165u, depth + 1u); else { c.pc = 0x00339C20u; return; } if (c.pc != 0x003940F8u) [[unlikely]] return; }
L_003940F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00394138; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394108u);  if (depth < kMaxDepth) unit_00A5(c, 189u, depth + 1u); else { c.pc = 0x00395570u; return; } if (c.pc != 0x00394108u) [[unlikely]] return; }
L_00394108:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394114u); st8((c.r[2].w[0] + 53u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008E(c, 177u, depth + 1u); else { c.pc = 0x00339F20u; return; } if (c.pc != 0x00394114u) [[unlikely]] return; }
L_00394114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039411Cu);  if (depth < kMaxDepth) unit_008E(c, 187u, depth + 1u); else { c.pc = 0x0033A060u; return; } if (c.pc != 0x0039411Cu) [[unlikely]] return; }
L_0039411C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394124u);  if (depth < kMaxDepth) unit_008E(c, 154u, depth + 1u); else { c.pc = 0x00339AF0u; return; } if (c.pc != 0x00394124u) [[unlikely]] return; }
L_00394124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039412Cu);  if (depth < kMaxDepth) unit_00A5(c, 207u, depth + 1u); else { c.pc = 0x00395770u; return; } if (c.pc != 0x0039412Cu) [[unlikely]] return; }
L_0039412C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 192u);  if (t) { goto L_00394140; } }
    c.budget -= 1;
L_00394138:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    st8((c.r[2].w[0] + 53u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00394140:
    c.r[5].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039414Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x0039414Cu) [[unlikely]] return; }
L_0039414C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00394160:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394174u); set32(c.r[16], 0u + 171u);  if (depth < kMaxDepth) unit_00A5(c, 206u, depth + 1u); else { c.pc = 0x00395730u; return; } if (c.pc != 0x00394174u) [[unlikely]] return; }
L_00394174:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003941A0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 54u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003941C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394198u);  if (depth < kMaxDepth) unit_00A5(c, 151u, depth + 1u); else { c.pc = 0x00394EA0u; return; } if (c.pc != 0x00394198u) [[unlikely]] return; }
L_00394198:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00394318; } }
L_003941A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003941A8u);  if (depth < kMaxDepth) unit_00A5(c, 409u, depth + 1u); else { c.pc = 0x00397450u; return; } if (c.pc != 0x003941A8u) [[unlikely]] return; }
L_003941A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00394318; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 348u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00394318; } }
L_003941C0:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 47u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00394298; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 54u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003941E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003941E0u);  if (depth < kMaxDepth) unit_00A5(c, 297u, depth + 1u); else { c.pc = 0x003962C0u; return; } if (c.pc != 0x003941E0u) [[unlikely]] return; }
L_003941E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00394328; } }
L_003941E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003941F0u);  if (depth < kMaxDepth) unit_00A5(c, 281u, depth + 1u); else { c.pc = 0x003960E0u; return; } if (c.pc != 0x003941F0u) [[unlikely]] return; }
L_003941F0:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], c.r[2].w[0] + 1116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394200u); set32(c.r[5], c.r[2].w[0] + 1372u);  if (depth < kMaxDepth) unit_005B(c, 152u, depth + 1u); else { c.pc = 0x0026DC20u; return; } if (c.pc != 0x00394200u) [[unlikely]] return; }
L_00394200:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00394228; } }
L_00394208:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    st32((c.r[3].w[0] + 340u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], c.r[2].w[0] + 1116u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394220u); set32(c.r[5], c.r[2].w[0] + 1372u);  if (depth < kMaxDepth) unit_005B(c, 152u, depth + 1u); else { c.pc = 0x0026DC20u; return; } if (c.pc != 0x00394220u) [[unlikely]] return; }
L_00394220:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00394208u | kUnwind; return; } goto L_00394208; } }
L_00394228:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 340u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[3].w[0] + 1116u);  if (t) { goto L_00394268; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394244u); set32(c.r[5], c.r[3].w[0] + 1372u);  if (depth < kMaxDepth) unit_005B(c, 162u, depth + 1u); else { c.pc = 0x0026DD10u; return; } if (c.pc != 0x00394244u) [[unlikely]] return; }
L_00394244:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039424Cu);  if (depth < kMaxDepth) unit_00A5(c, 262u, depth + 1u); else { c.pc = 0x00395EA0u; return; } if (c.pc != 0x0039424Cu) [[unlikely]] return; }
L_0039424C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394254u);  if (depth < kMaxDepth) unit_00A5(c, 272u, depth + 1u); else { c.pc = 0x00395FB0u; return; } if (c.pc != 0x00394254u) [[unlikely]] return; }
L_00394254:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394260u); st32((c.r[3].w[0] + 340u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A5(c, 337u, depth + 1u); else { c.pc = 0x00396770u; return; } if (c.pc != 0x00394260u) [[unlikely]] return; }
L_00394260:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00394290; } }
L_00394268:
    set32(c.r[4], c.r[3].w[0] + 1116u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394274u); set32(c.r[5], c.r[3].w[0] + 1372u);  if (depth < kMaxDepth) unit_005B(c, 144u, depth + 1u); else { c.pc = 0x0026DB50u; return; } if (c.pc != 0x00394274u) [[unlikely]] return; }
L_00394274:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394280u); st32((c.r[3].w[0] + 336u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A5(c, 272u, depth + 1u); else { c.pc = 0x00395FB0u; return; } if (c.pc != 0x00394280u) [[unlikely]] return; }
L_00394280:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039428Cu); st32((c.r[3].w[0] + 340u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A5(c, 337u, depth + 1u); else { c.pc = 0x00396770u; return; } if (c.pc != 0x0039428Cu) [[unlikely]] return; }
L_0039428C:
    c.budget -= 1;
L_00394290:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 194u);  if (t) { goto L_00394318; } }
L_00394298:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 54u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00394318; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 340u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003942E8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], c.r[2].w[0] + 1116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003942C4u); set32(c.r[5], c.r[2].w[0] + 1372u);  if (depth < kMaxDepth) unit_005B(c, 162u, depth + 1u); else { c.pc = 0x0026DD10u; return; } if (c.pc != 0x003942C4u) [[unlikely]] return; }
L_003942C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003942CCu);  if (depth < kMaxDepth) unit_00A5(c, 262u, depth + 1u); else { c.pc = 0x00395EA0u; return; } if (c.pc != 0x003942CCu) [[unlikely]] return; }
L_003942CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003942D4u);  if (depth < kMaxDepth) unit_00A5(c, 272u, depth + 1u); else { c.pc = 0x00395FB0u; return; } if (c.pc != 0x003942D4u) [[unlikely]] return; }
L_003942D4:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003942E0u); st32((c.r[3].w[0] + 340u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A5(c, 337u, depth + 1u); else { c.pc = 0x00396770u; return; } if (c.pc != 0x003942E0u) [[unlikely]] return; }
L_003942E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00394310; } }
L_003942E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], c.r[2].w[0] + 1116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003942F8u); set32(c.r[5], c.r[2].w[0] + 1372u);  if (depth < kMaxDepth) unit_005B(c, 144u, depth + 1u); else { c.pc = 0x0026DB50u; return; } if (c.pc != 0x003942F8u) [[unlikely]] return; }
L_003942F8:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394304u); st32((c.r[3].w[0] + 336u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A5(c, 272u, depth + 1u); else { c.pc = 0x00395FB0u; return; } if (c.pc != 0x00394304u) [[unlikely]] return; }
L_00394304:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394310u); st32((c.r[3].w[0] + 340u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A5(c, 337u, depth + 1u); else { c.pc = 0x00396770u; return; } if (c.pc != 0x00394310u) [[unlikely]] return; }
L_00394310:
    set32(c.r[16], 0u + 194u);
    c.budget -= 2;
L_00394318:
    c.r[5].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394324u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00394324u) [[unlikely]] return; }
L_00394324:
    c.budget -= 1;
L_00394328:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00394340:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394354u); set32(c.r[16], 0u + 171u);  if (depth < kMaxDepth) unit_00A5(c, 206u, depth + 1u); else { c.pc = 0x00395730u; return; } if (c.pc != 0x00394354u) [[unlikely]] return; }
L_00394354:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00394380; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 54u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003943A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394378u);  if (depth < kMaxDepth) unit_00A5(c, 151u, depth + 1u); else { c.pc = 0x00394EA0u; return; } if (c.pc != 0x00394378u) [[unlikely]] return; }
L_00394378:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00394440; } }
L_00394380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394388u);  if (depth < kMaxDepth) unit_00A5(c, 409u, depth + 1u); else { c.pc = 0x00397450u; return; } if (c.pc != 0x00394388u) [[unlikely]] return; }
L_00394388:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00394440; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 348u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00394440; } }
L_003943A0:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 47u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00394408; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 54u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003943C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003943C0u);  if (depth < kMaxDepth) unit_00A5(c, 297u, depth + 1u); else { c.pc = 0x003962C0u; return; } if (c.pc != 0x003943C0u) [[unlikely]] return; }
L_003943C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00394450; } }
L_003943C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003943D0u);  if (depth < kMaxDepth) unit_00A5(c, 281u, depth + 1u); else { c.pc = 0x003960E0u; return; } if (c.pc != 0x003943D0u) [[unlikely]] return; }
L_003943D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], c.r[2].w[0] + 1116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003943E0u); set32(c.r[5], c.r[2].w[0] + 1372u);  if (depth < kMaxDepth) unit_005B(c, 152u, depth + 1u); else { c.pc = 0x0026DC20u; return; } if (c.pc != 0x003943E0u) [[unlikely]] return; }
L_003943E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00394408; } }
L_003943E8:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    st32((c.r[3].w[0] + 340u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], c.r[2].w[0] + 1116u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394400u); set32(c.r[5], c.r[2].w[0] + 1372u);  if (depth < kMaxDepth) unit_005B(c, 152u, depth + 1u); else { c.pc = 0x0026DC20u; return; } if (c.pc != 0x00394400u) [[unlikely]] return; }
L_00394400:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003943E8u | kUnwind; return; } goto L_003943E8; } }
L_00394408:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 54u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[3].w[0] + 1116u);  if (t) { goto L_00394440; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394420u); set32(c.r[5], c.r[3].w[0] + 1372u);  if (depth < kMaxDepth) unit_005B(c, 160u, depth + 1u); else { c.pc = 0x0026DCE0u; return; } if (c.pc != 0x00394420u) [[unlikely]] return; }
L_00394420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394428u);  if (depth < kMaxDepth) unit_00A5(c, 262u, depth + 1u); else { c.pc = 0x00395EA0u; return; } if (c.pc != 0x00394428u) [[unlikely]] return; }
L_00394428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394430u);  if (depth < kMaxDepth) unit_00A5(c, 272u, depth + 1u); else { c.pc = 0x00395FB0u; return; } if (c.pc != 0x00394430u) [[unlikely]] return; }
L_00394430:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039443Cu); st32((c.r[3].w[0] + 340u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A5(c, 337u, depth + 1u); else { c.pc = 0x00396770u; return; } if (c.pc != 0x0039443Cu) [[unlikely]] return; }
L_0039443C:
    set32(c.r[16], 0u + 194u);
    c.budget -= 1;
L_00394440:
    c.r[5].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039444Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x0039444Cu) [[unlikely]] return; }
L_0039444C:
    c.budget -= 1;
L_00394450:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00394460:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 47u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003944A0; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 348u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00394490; } }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 44u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + 44u);  if (t) { goto L_003944A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_003944A0; } }
L_00394490:
    c.r[2].d[0] = ld16((c.r[3].w[0] + 42u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + 42u);  if (t) { goto L_003944A0; } }
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_003944A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 192u);
    c.budget -= 5;
    { st8((c.r[2].w[0] + 40u), static_cast<std::uint8_t>(0u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002393D0u | kUnwind; return; } [[clang::musttail]] return unit_004E(c, 106u, depth); }
L_003944C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 47u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], 0u + 171u);  if (t) { goto L_00394530; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003944E4u); set32(c.r[16], 0u + 192u);  if (depth < kMaxDepth) unit_00A4(c, 299u, depth + 1u); else { c.pc = 0x00393A70u; return; } if (c.pc != 0x003944E4u) [[unlikely]] return; }
L_003944E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00394500; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003944F4u);  if (depth < kMaxDepth) unit_00A5(c, 156u, depth + 1u); else { c.pc = 0x00394F10u; return; } if (c.pc != 0x003944F4u) [[unlikely]] return; }
L_003944F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00394530; } }
    c.budget -= 1;
L_00394500:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 348u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + 348u);  if (t) { goto L_00394520; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394518u); c.r[5].d[0] = ld16((c.r[3].w[0] + 44u));  if (depth < kMaxDepth) unit_00A5(c, 65u, depth + 1u); else { c.pc = 0x00394550u; return; } if (c.pc != 0x00394518u) [[unlikely]] return; }
L_00394518:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00394530; } }
L_00394520:
    c.r[5].d[0] = ld16((c.r[3].w[0] + 42u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039452Cu); set32(c.r[4], c.r[3].w[0] + 72u);  if (depth < kMaxDepth) unit_00A5(c, 65u, depth + 1u); else { c.pc = 0x00394550u; return; } if (c.pc != 0x0039452Cu) [[unlikely]] return; }
L_0039452C:
    c.budget -= 1;
L_00394530:
    c.r[5].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039453Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x0039453Cu) [[unlikely]] return; }
L_0039453C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00394550:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039456Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0039456Cu) [[unlikely]] return; }
L_0039456C:
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);  if (t) { goto L_00394588; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    st8((c.r[3].w[0] + 40u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00394588:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003945A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 47u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00394628; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 348u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 348u);  if (t) { goto L_003945F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003945D4u); c.r[16].d[0] = ld16((c.r[17].w[0] + 44u));  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x003945D4u) [[unlikely]] return; }
L_003945D4:
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 348u);  if (t) { goto L_00394628; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003945E8u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x003945E8u) [[unlikely]] return; }
L_003945E8:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 44u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00394628; } }
    c.budget -= 1;
L_003945F8:
    c.r[16].d[0] = ld16((c.r[17].w[0] + 42u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394604u); set32(c.r[4], c.r[17].w[0] + 72u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00394604u) [[unlikely]] return; }
L_00394604:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 72u);  if (t) { goto L_00394628; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039461Cu);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0039461Cu) [[unlikely]] return; }
L_0039461C:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    st16((c.r[3].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00394628:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394634u); set32(c.r[4], c.r[2].w[0] + 348u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00394634u) [[unlikely]] return; }
L_00394634:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 192u);
    st16((c.r[3].w[0] + 44u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394650u); st8((c.r[2].w[0] + 40u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00394650u) [[unlikely]] return; }
L_00394650:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00394670:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] << 48;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 46u)));
    c.budget -= 8;
L_00394690:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_003946C8; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 36u));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 36u);  if (t) { goto L_003946B8; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00394700; } }
    c.budget -= 1;
L_003946B8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00394700; } }
    c.budget -= 1;
L_003946C8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_00394700; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 36u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], c.r[2].w[0] + 36u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 36u));
    c.r[1].d[0] = c.r[2].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00394700; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00394700:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00394738; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[3], c.r[2].w[0] + 37u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 37u));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00394728; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00394778; } }
L_00394728:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00394760; } }
    c.budget -= 1;
L_00394738:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_00394760; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], c.r[2].w[0] + 37u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 37u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00394778; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00394760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394768u);  if (depth < kMaxDepth) unit_008D(c, 321u, depth + 1u); else { c.pc = 0x003373E0u; return; } if (c.pc != 0x00394768u) [[unlikely]] return; }
L_00394768:
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 46u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00394690u | kUnwind; return; } goto L_00394690; } }
L_00394778:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394784u); set32(c.r[5], 0u + 191u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00394784u) [[unlikely]] return; }
L_00394784:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003947A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 48u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00394808; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 47u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003947C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00394810; } }
    c.budget -= 1;
L_003947C8:
    c.r[4].d[0] = ld8((c.r[3].w[0] + 31u));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_003947F0; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 53u));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003947F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00394810; } }
L_003947F0:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00394808; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00394810; } }
    c.budget -= 1;
L_00394808:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00394810:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00394820:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394830u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00A5(c, 78u, depth + 1u); else { c.pc = 0x003947A0u; return; } if (c.pc != 0x00394830u) [[unlikely]] return; }
L_00394830:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_00394850; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394844u);  if (depth < kMaxDepth) unit_00A5(c, 74u, depth + 1u); else { c.pc = 0x00394670u; return; } if (c.pc != 0x00394844u) [[unlikely]] return; }
L_00394844:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003949E8; } }
    c.budget -= 1;
L_00394850:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 47u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00394968; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 348u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + 348u);  if (t) { goto L_003948E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394874u); c.r[16].d[0] = ld16((c.r[3].w[0] + 44u));  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00394874u) [[unlikely]] return; }
L_00394874:
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003949E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394888u);  if (depth < kMaxDepth) unit_00A4(c, 299u, depth + 1u); else { c.pc = 0x00393A70u; return; } if (c.pc != 0x00394888u) [[unlikely]] return; }
L_00394888:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003948A8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 44u));
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 44u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003948C0; } }
    c.budget -= 1;
L_003948A8:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003948B4u); set32(c.r[4], c.r[2].w[0] + 348u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x003948B4u) [[unlikely]] return; }
L_003948B4:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    st16((c.r[3].w[0] + 44u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_003948C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 191u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003948D4u); st8((c.r[2].w[0] + 40u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x003948D4u) [[unlikely]] return; }
L_003948D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003949E8; } }
    c.budget -= 1;
L_003948E0:
    c.r[16].d[0] = ld16((c.r[3].w[0] + 42u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003948ECu); set32(c.r[4], c.r[3].w[0] + 72u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x003948ECu) [[unlikely]] return; }
L_003948EC:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003949E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394904u);  if (depth < kMaxDepth) unit_00A4(c, 299u, depth + 1u); else { c.pc = 0x00393A70u; return; } if (c.pc != 0x00394904u) [[unlikely]] return; }
L_00394904:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00394930; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[5].d[0] = ld16((c.r[2].w[0] + 42u));
    set32(c.r[16], c.r[2].w[0] + 42u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394920u); set32(c.r[4], c.r[2].w[0] + 72u);  if (depth < kMaxDepth) unit_00A5(c, 398u, depth + 1u); else { c.pc = 0x003971F0u; return; } if (c.pc != 0x00394920u) [[unlikely]] return; }
L_00394920:
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00394948; } }
L_00394930:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039493Cu); set32(c.r[4], c.r[2].w[0] + 72u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0039493Cu) [[unlikely]] return; }
L_0039493C:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    st16((c.r[3].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00394948:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 191u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039495Cu); st8((c.r[2].w[0] + 40u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x0039495Cu) [[unlikely]] return; }
L_0039495C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003949E8; } }
    c.budget -= 1;
L_00394968:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003949A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039497Cu);  if (depth < kMaxDepth) unit_00A4(c, 298u, depth + 1u); else { c.pc = 0x00393A60u; return; } if (c.pc != 0x0039497Cu) [[unlikely]] return; }
L_0039497C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003949A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039498Cu);  if (depth < kMaxDepth) unit_00A5(c, 371u, depth + 1u); else { c.pc = 0x00396CE0u; return; } if (c.pc != 0x0039498Cu) [[unlikely]] return; }
L_0039498C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394998u); set32(c.r[5], 0u + 191u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00394998u) [[unlikely]] return; }
L_00394998:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003949E8; } }
L_003949A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], c.r[2].w[0] + 1116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003949B0u); set32(c.r[5], c.r[2].w[0] + 1372u);  if (depth < kMaxDepth) unit_005B(c, 152u, depth + 1u); else { c.pc = 0x0026DC20u; return; } if (c.pc != 0x003949B0u) [[unlikely]] return; }
L_003949B0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003949E8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003949C4u); st32((c.r[3].w[0] + 340u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A5(c, 262u, depth + 1u); else { c.pc = 0x00395EA0u; return; } if (c.pc != 0x003949C4u) [[unlikely]] return; }
L_003949C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003949CCu);  if (depth < kMaxDepth) unit_00A5(c, 272u, depth + 1u); else { c.pc = 0x00395FB0u; return; } if (c.pc != 0x003949CCu) [[unlikely]] return; }
L_003949CC:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003949D8u); st32((c.r[3].w[0] + 340u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A5(c, 337u, depth + 1u); else { c.pc = 0x00396770u; return; } if (c.pc != 0x003949D8u) [[unlikely]] return; }
L_003949D8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003949E4u); set32(c.r[5], 0u + 191u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x003949E4u) [[unlikely]] return; }
L_003949E4:
    c.budget -= 1;
L_003949E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00394A00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394A10u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00A5(c, 78u, depth + 1u); else { c.pc = 0x003947A0u; return; } if (c.pc != 0x00394A10u) [[unlikely]] return; }
L_00394A10:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00394A30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394A24u);  if (depth < kMaxDepth) unit_00A5(c, 74u, depth + 1u); else { c.pc = 0x00394670u; return; } if (c.pc != 0x00394A24u) [[unlikely]] return; }
L_00394A24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00394B90; } }
    c.budget -= 1;
L_00394A30:
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 47u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00394B10; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 348u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00394AA8; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 44u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00394B90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394A60u);  if (depth < kMaxDepth) unit_00A4(c, 299u, depth + 1u); else { c.pc = 0x00393A70u; return; } if (c.pc != 0x00394A60u) [[unlikely]] return; }
L_00394A60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00394A80; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 44u));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 44u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00394A88; } }
    c.budget -= 1;
L_00394A80:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    st16((c.r[2].w[0] + 44u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_00394A88:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 191u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394A9Cu); st8((c.r[2].w[0] + 40u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00394A9Cu) [[unlikely]] return; }
L_00394A9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00394B90; } }
    c.budget -= 1;
L_00394AA8:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 42u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00394B90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394ABCu);  if (depth < kMaxDepth) unit_00A4(c, 299u, depth + 1u); else { c.pc = 0x00393A70u; return; } if (c.pc != 0x00394ABCu) [[unlikely]] return; }
L_00394ABC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00394AE8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[5].d[0] = ld16((c.r[2].w[0] + 42u));
    set32(c.r[16], c.r[2].w[0] + 42u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394AD8u); set32(c.r[4], c.r[2].w[0] + 72u);  if (depth < kMaxDepth) unit_00A5(c, 394u, depth + 1u); else { c.pc = 0x00397100u; return; } if (c.pc != 0x00394AD8u) [[unlikely]] return; }
L_00394AD8:
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00394AF0; } }
L_00394AE8:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    st16((c.r[2].w[0] + 42u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_00394AF0:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 191u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394B04u); st8((c.r[2].w[0] + 40u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00394B04u) [[unlikely]] return; }
L_00394B04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00394B90; } }
    c.budget -= 1;
L_00394B10:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00394B48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394B24u);  if (depth < kMaxDepth) unit_00A4(c, 298u, depth + 1u); else { c.pc = 0x00393A60u; return; } if (c.pc != 0x00394B24u) [[unlikely]] return; }
L_00394B24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00394B48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394B34u);  if (depth < kMaxDepth) unit_00A5(c, 362u, depth + 1u); else { c.pc = 0x00396C00u; return; } if (c.pc != 0x00394B34u) [[unlikely]] return; }
L_00394B34:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394B40u); set32(c.r[5], 0u + 191u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00394B40u) [[unlikely]] return; }
L_00394B40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00394B90; } }
L_00394B48:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], c.r[2].w[0] + 1116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394B58u); set32(c.r[5], c.r[2].w[0] + 1372u);  if (depth < kMaxDepth) unit_005B(c, 154u, depth + 1u); else { c.pc = 0x0026DC50u; return; } if (c.pc != 0x00394B58u) [[unlikely]] return; }
L_00394B58:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00394B90; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394B6Cu); st32((c.r[3].w[0] + 340u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A5(c, 262u, depth + 1u); else { c.pc = 0x00395EA0u; return; } if (c.pc != 0x00394B6Cu) [[unlikely]] return; }
L_00394B6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394B74u);  if (depth < kMaxDepth) unit_00A5(c, 272u, depth + 1u); else { c.pc = 0x00395FB0u; return; } if (c.pc != 0x00394B74u) [[unlikely]] return; }
L_00394B74:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394B80u); st32((c.r[3].w[0] + 340u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A5(c, 337u, depth + 1u); else { c.pc = 0x00396770u; return; } if (c.pc != 0x00394B80u) [[unlikely]] return; }
L_00394B80:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394B8Cu); set32(c.r[5], 0u + 191u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00394B8Cu) [[unlikely]] return; }
L_00394B8C:
    c.budget -= 1;
L_00394B90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00394BA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394BB0u);  if (depth < kMaxDepth) unit_00A5(c, 78u, depth + 1u); else { c.pc = 0x003947A0u; return; } if (c.pc != 0x00394BB0u) [[unlikely]] return; }
L_00394BB0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_00394BD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394BC4u);  if (depth < kMaxDepth) unit_00A5(c, 74u, depth + 1u); else { c.pc = 0x00394670u; return; } if (c.pc != 0x00394BC4u) [[unlikely]] return; }
L_00394BC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00394BF8; } }
    c.budget -= 1;
L_00394BD0:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 47u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00394BF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394BE8u);  if (depth < kMaxDepth) unit_00A5(c, 350u, depth + 1u); else { c.pc = 0x00396930u; return; } if (c.pc != 0x00394BE8u) [[unlikely]] return; }
L_00394BE8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394BF4u); set32(c.r[5], 0u + 194u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00394BF4u) [[unlikely]] return; }
L_00394BF4:
    c.budget -= 1;
L_00394BF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00394C10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394C20u);  if (depth < kMaxDepth) unit_00A5(c, 78u, depth + 1u); else { c.pc = 0x003947A0u; return; } if (c.pc != 0x00394C20u) [[unlikely]] return; }
L_00394C20:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], 0u + 3u);  if (t) { goto L_00394C40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394C34u);  if (depth < kMaxDepth) unit_00A5(c, 74u, depth + 1u); else { c.pc = 0x00394670u; return; } if (c.pc != 0x00394C34u) [[unlikely]] return; }
L_00394C34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00394C68; } }
    c.budget -= 1;
L_00394C40:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 47u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00394C68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394C58u);  if (depth < kMaxDepth) unit_00A5(c, 356u, depth + 1u); else { c.pc = 0x00396AB0u; return; } if (c.pc != 0x00394C58u) [[unlikely]] return; }
L_00394C58:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394C64u); set32(c.r[5], 0u + 194u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00394C64u) [[unlikely]] return; }
L_00394C64:
    c.budget -= 1;
L_00394C68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00394C80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394C90u);  if (depth < kMaxDepth) unit_00A4(c, 297u, depth + 1u); else { c.pc = 0x00393A50u; return; } if (c.pc != 0x00394C90u) [[unlikely]] return; }
L_00394C90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00394CB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394CA0u);  if (depth < kMaxDepth) unit_00A4(c, 301u, depth + 1u); else { c.pc = 0x00393A90u; return; } if (c.pc != 0x00394CA0u) [[unlikely]] return; }
L_00394CA0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394CACu); set32(c.r[5], 0u + 192u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00394CACu) [[unlikely]] return; }
L_00394CAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00394D88; } }
    c.budget -= 1;
L_00394CB8:
    set32(c.r[5], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[3], 0u + 6u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 30u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00394D88; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 32u)));
    c.r[3].d[0] = c.r[4].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] & 1ull;  if (t) { goto L_00394CE8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00394CF0; } }
    c.budget -= 1;
L_00394CE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00394D88; } }
L_00394CF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394CF8u);  if (depth < kMaxDepth) unit_00A4(c, 298u, depth + 1u); else { c.pc = 0x00393A60u; return; } if (c.pc != 0x00394CF8u) [[unlikely]] return; }
L_00394CF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00394D40; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[3].w[0] + 30u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 30u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00394D40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394D20u); st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008E(c, 177u, depth + 1u); else { c.pc = 0x00339F20u; return; } if (c.pc != 0x00394D20u) [[unlikely]] return; }
L_00394D20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394D28u);  if (depth < kMaxDepth) unit_008E(c, 187u, depth + 1u); else { c.pc = 0x0033A060u; return; } if (c.pc != 0x00394D28u) [[unlikely]] return; }
L_00394D28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394D30u);  if (depth < kMaxDepth) unit_008E(c, 154u, depth + 1u); else { c.pc = 0x00339AF0u; return; } if (c.pc != 0x00394D30u) [[unlikely]] return; }
L_00394D30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394D38u);  if (depth < kMaxDepth) unit_00A5(c, 207u, depth + 1u); else { c.pc = 0x00395770u; return; } if (c.pc != 0x00394D38u) [[unlikely]] return; }
L_00394D38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00394D78; } }
L_00394D40:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[3], c.r[2].w[0] + 30u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 30u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00394D78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394D5Cu); st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008E(c, 177u, depth + 1u); else { c.pc = 0x00339F20u; return; } if (c.pc != 0x00394D5Cu) [[unlikely]] return; }
L_00394D5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394D64u);  if (depth < kMaxDepth) unit_008E(c, 187u, depth + 1u); else { c.pc = 0x0033A060u; return; } if (c.pc != 0x00394D64u) [[unlikely]] return; }
L_00394D64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394D6Cu);  if (depth < kMaxDepth) unit_008E(c, 154u, depth + 1u); else { c.pc = 0x00339AF0u; return; } if (c.pc != 0x00394D6Cu) [[unlikely]] return; }
L_00394D6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394D74u);  if (depth < kMaxDepth) unit_00A5(c, 207u, depth + 1u); else { c.pc = 0x00395770u; return; } if (c.pc != 0x00394D74u) [[unlikely]] return; }
L_00394D74:
    c.budget -= 1;
L_00394D78:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394D84u); set32(c.r[5], 0u + 192u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00394D84u) [[unlikely]] return; }
L_00394D84:
    c.budget -= 1;
L_00394D88:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00394DA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394DB0u);  if (depth < kMaxDepth) unit_00A5(c, 206u, depth + 1u); else { c.pc = 0x00395730u; return; } if (c.pc != 0x00394DB0u) [[unlikely]] return; }
L_00394DB0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00394DE0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 54u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00394DE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394DD4u);  if (depth < kMaxDepth) unit_00A5(c, 151u, depth + 1u); else { c.pc = 0x00394EA0u; return; } if (c.pc != 0x00394DD4u) [[unlikely]] return; }
L_00394DD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00394E88; } }
    c.budget -= 1;
L_00394DE0:
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 47u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00394E50; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 54u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00394E10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394E04u);  if (depth < kMaxDepth) unit_00A5(c, 297u, depth + 1u); else { c.pc = 0x003962C0u; return; } if (c.pc != 0x00394E04u) [[unlikely]] return; }
L_00394E04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00394E88; } }
    c.budget -= 1;
L_00394E10:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 348u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00394E88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394E24u);  if (depth < kMaxDepth) unit_00A5(c, 281u, depth + 1u); else { c.pc = 0x003960E0u; return; } if (c.pc != 0x00394E24u) [[unlikely]] return; }
L_00394E24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394E2Cu);  if (depth < kMaxDepth) unit_00A5(c, 272u, depth + 1u); else { c.pc = 0x00395FB0u; return; } if (c.pc != 0x00394E2Cu) [[unlikely]] return; }
L_00394E2C:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394E38u); st32((c.r[3].w[0] + 340u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A5(c, 337u, depth + 1u); else { c.pc = 0x00396770u; return; } if (c.pc != 0x00394E38u) [[unlikely]] return; }
L_00394E38:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394E44u); set32(c.r[5], 0u + 194u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00394E44u) [[unlikely]] return; }
L_00394E44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00394E88; } }
    c.budget -= 1;
L_00394E50:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394E5Cu); set32(c.r[5], 0u + 194u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00394E5Cu) [[unlikely]] return; }
L_00394E5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394E64u);  if (depth < kMaxDepth) unit_00A4(c, 298u, depth + 1u); else { c.pc = 0x00393A60u; return; } if (c.pc != 0x00394E64u) [[unlikely]] return; }
L_00394E64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00394E80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394E74u);  if (depth < kMaxDepth) unit_00A5(c, 350u, depth + 1u); else { c.pc = 0x00396930u; return; } if (c.pc != 0x00394E74u) [[unlikely]] return; }
L_00394E74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00394E88; } }
    c.budget -= 1;
L_00394E80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394E88u);  if (depth < kMaxDepth) unit_00A5(c, 356u, depth + 1u); else { c.pc = 0x00396AB0u; return; } if (c.pc != 0x00394E88u) [[unlikely]] return; }
L_00394E88:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00394EA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394EB0u);  if (depth < kMaxDepth) unit_00A5(c, 409u, depth + 1u); else { c.pc = 0x00397450u; return; } if (c.pc != 0x00394EB0u) [[unlikely]] return; }
L_00394EB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00394EF8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 348u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00394EF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394ED0u); set32(c.r[5], 0u + 192u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00394ED0u) [[unlikely]] return; }
L_00394ED0:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 47u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00394EF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394EE8u);  if (depth < kMaxDepth) unit_00A5(c, 189u, depth + 1u); else { c.pc = 0x00395570u; return; } if (c.pc != 0x00394EE8u) [[unlikely]] return; }
L_00394EE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00394EF8; } }
L_00394EF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394EF8u);  if (depth < kMaxDepth) unit_00A5(c, 289u, depth + 1u); else { c.pc = 0x00396220u; return; } if (c.pc != 0x00394EF8u) [[unlikely]] return; }
L_00394EF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00394F10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 47u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00394F98; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 348u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], c.r[4].w[0] + 348u);  if (t) { goto L_00394F50; } }
    c.r[16].d[0] = ld16((c.r[4].w[0] + 44u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 2u);  if (t) { goto L_00394F68; } }
    c.budget -= 1;
L_00394F50:
    c.r[16].d[0] = ld16((c.r[4].w[0] + 42u));
    set32(c.r[18], c.r[4].w[0] + 72u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394F64u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 398u, depth + 1u); else { c.pc = 0x003971F0u; return; } if (c.pc != 0x00394F64u) [[unlikely]] return; }
L_00394F64:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00394F68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394F70u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00394F70u) [[unlikely]] return; }
L_00394F70:
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00394F98; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + c.r[16].w[0]);  if (t) { goto L_00394F98; } }
    set32(c.r[5], c.r[4].w[0] + c.r[17].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394F90u); st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x00394F90u) [[unlikely]] return; }
L_00394F90:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    st8((c.r[3].w[0] + 40u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00394F98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00394FB0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x003385C0u | kUnwind; return; } [[clang::musttail]] return unit_008E(c, 48u, depth); }
L_00394FC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00394FE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00394FF8; } }
L_00394FE0:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394FECu); set32(c.r[5], c.r[4].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x00394FECu) [[unlikely]] return; }
L_00394FEC:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[3].w[0] + 40u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_00394FF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00395010:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395044u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00395044u) [[unlikely]] return; }
L_00395044:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_00395058; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00395318; } }
L_00395058:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    set32(c.r[7], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00395100; } }
L_00395068:
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[5], 0u + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00395090; } }
    c.r[1].d[0] = c.r[3].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00395090; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_00395090:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 224ll ? 1ull : 0ull;  if (t) { goto L_003950B8; } }
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003950A8; } }
    c.r[2].d[0] = c.r[3].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 1;
L_003950A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003950B8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003950B8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003950C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00395318; } }
L_003950C8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 91ll ? 1ull : 0ull;  if (t) { goto L_003950F0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 32u);  if (t) { goto L_003950F0; } }
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003950F0:
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00395068u | kUnwind; return; } goto L_00395068; } }
L_00395100:
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039510Cu); set32(c.r[4], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0039510Cu) [[unlikely]] return; }
L_0039510C:
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[22], c.r[22].w[0] + 13088u);
    c.budget -= 5;
L_00395120:
    set32(c.r[16], ld32((c.r[22].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039512Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0039512Cu) [[unlikely]] return; }
L_0039512C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00395300; } }
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395140u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 138u, depth + 1u); else { c.pc = 0x0011E108u; return; } if (c.pc != 0x00395140u) [[unlikely]] return; }
L_00395140:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00395300; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[4], c.r[21].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + 13092u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0] + 348u), static_cast<std::uint8_t>(0u));
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 44u));
    c.r[1].d[0] = c.r[2].sd[0] < 127ll ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], 0u + 127u);  if (t) { goto L_003951B8; } }
    c.budget -= 1;
L_00395190:
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 347u));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st8((c.r[3].w[0] + 348u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 44u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00395190u | kUnwind; return; } goto L_00395190; } }
    c.budget -= 1;
L_003951B8:
    set32(c.r[4], c.r[3].w[0] + 348u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003951C4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x003951C4u) [[unlikely]] return; }
L_003951C4:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 44u));
    set32(c.r[4], c.r[3].w[0] + 348u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003951E0u); set32(c.r[5], c.r[2].w[0] + 348u);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x003951E0u) [[unlikely]] return; }
L_003951E0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] - 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003951F0u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0007(c, 138u, depth + 1u); else { c.pc = 0x0011E108u; return; } if (c.pc != 0x003951F0u) [[unlikely]] return; }
L_003951F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], 0u + 2u);  if (t) { goto L_003952D8; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[6].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00395278; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_00395248; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00395218; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003952D8; } }
L_00395218:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], c.r[5].w[0] + 24696u);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 44u));
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] - 2u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039523Cu); set32(c.r[4], c.r[2].w[0] + 348u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x0039523Cu) [[unlikely]] return; }
L_0039523C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003952D8; } }
    c.budget -= 1;
L_00395248:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], c.r[5].w[0] + 24704u);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 44u));
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] - 2u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039526Cu); set32(c.r[4], c.r[2].w[0] + 348u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x0039526Cu) [[unlikely]] return; }
L_0039526C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003952D8; } }
    c.budget -= 1;
L_00395278:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 24712u);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 44u));
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] - 2u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003952A0u); set32(c.r[4], c.r[2].w[0] + 348u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x003952A0u) [[unlikely]] return; }
L_003952A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 44u));
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] + 347u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 44u));
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[3], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[2].w[0] + 348u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003952D8u); set32(c.r[4], c.r[3].w[0] + 348u);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x003952D8u) [[unlikely]] return; }
L_003952D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003952E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x003952E0u) [[unlikely]] return; }
L_003952E0:
    set32(c.r[5], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[3], c.r[18].w[0] - c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = ld16((c.r[5].w[0] + 44u));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00395318; } }
    c.budget -= 1;
L_00395300:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < 240ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[22], c.r[22].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00395120u | kUnwind; return; } goto L_00395120; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00395318:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00395340:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[6], 0u + 10u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395368u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00395368u) [[unlikely]] return; }
L_00395368:
    set32(c.r[5], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], 0u + 8u);
    c.r[4].d[0] = ld16((c.r[5].w[0] + 44u));
    set32(c.r[3], c.r[2].w[0] - c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00395388; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00395388:
    set32(c.r[2], 0u + 8u);
    set32(c.r[6], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] + 64u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003953A8u); set32(c.r[5], c.r[2].w[0] + 348u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x003953A8u) [[unlikely]] return; }
L_003953A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003953B4u); set32(c.r[5], c.r[29].w[0] + 66u);  if (depth < kMaxDepth) unit_00A5(c, 163u, depth + 1u); else { c.pc = 0x00395010u; return; } if (c.pc != 0x003953B4u) [[unlikely]] return; }
L_003953B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003953C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00395480; } }
    c.budget -= 1;
L_003953C8:
    set32(c.r[18], c.r[29].w[0] + 68u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003953D8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 163u, depth + 1u); else { c.pc = 0x00395010u; return; } if (c.pc != 0x003953D8u) [[unlikely]] return; }
L_003953D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003953E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00395480; } }
L_003953E8:
    set32(c.r[17], c.r[29].w[0] + 70u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003953F8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 163u, depth + 1u); else { c.pc = 0x00395010u; return; } if (c.pc != 0x003953F8u) [[unlikely]] return; }
L_003953F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00395408; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00395480; } }
L_00395408:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[2], 0u + 78u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 110u);  if (t) { goto L_00395428; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00395428; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00395480; } }
L_00395428:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], 0u + 89u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 121u);  if (t) { goto L_00395440; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00395448; } }
L_00395440:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00395480; } }
L_00395448:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 17576u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[6], 0u + 2u);
    c.r[2].d[0] = ld16((c.r[4].w[0] + 44u));
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395478u); set32(c.r[4], c.r[2].w[0] + 348u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x00395478u) [[unlikely]] return; }
L_00395478:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00395480:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003954A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 32u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00395508; } }
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[2], 0u + 44u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003954E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00395550; } }
    c.budget -= 1;
L_003954E0:
    c.r[2].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 127ll ? 1ull : 0ull;  if (t) { goto L_00395500; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00395500; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00395550; } }
    c.budget -= 1;
L_00395500:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00395550; } }
L_00395508:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] + 17040u);
    c.budget -= 4;
L_00395518:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395528u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0007(c, 138u, depth + 1u); else { c.pc = 0x0011E108u; return; } if (c.pc != 0x00395528u) [[unlikely]] return; }
L_00395528:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00395538; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00395550; } }
L_00395538:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(264ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00395518u | kUnwind; return; } goto L_00395518; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00395550:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00395570:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 348u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[5].w[0] + 348u);  if (t) { goto L_00395660; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395594u); set32(c.r[5], c.r[5].w[0] + 604u);  if (depth < kMaxDepth) unit_008E(c, 88u, depth + 1u); else { c.pc = 0x00338F50u; return; } if (c.pc != 0x00395594u) [[unlikely]] return; }
L_00395594:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 47u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + 604u);  if (t) { goto L_00395610; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003955ACu);  if (depth < kMaxDepth) unit_005B(c, 146u, depth + 1u); else { c.pc = 0x0026DB80u; return; } if (c.pc != 0x003955ACu) [[unlikely]] return; }
L_003955AC:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 256u);
    st8((c.r[2].w[0] + 47u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003955CCu); st8((c.r[2].w[0] + 38u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003955CCu) [[unlikely]] return; }
L_003955CC:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003955DCu); set32(c.r[5], c.r[2].w[0] + 860u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x003955DCu) [[unlikely]] return; }
L_003955DC:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003955ECu); set32(c.r[5], c.r[2].w[0] + 1116u);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x003955ECu) [[unlikely]] return; }
L_003955EC:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003955FCu); set32(c.r[5], c.r[2].w[0] + 1372u);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x003955FCu) [[unlikely]] return; }
L_003955FC:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039560Cu); set32(c.r[5], c.r[2].w[0] + 604u);  if (depth < kMaxDepth) unit_008E(c, 88u, depth + 1u); else { c.pc = 0x00338F50u; return; } if (c.pc != 0x0039560Cu) [[unlikely]] return; }
L_0039560C:
    c.budget -= 1;
L_00395610:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[6].d[0] = ld16((c.r[2].w[0] + 42u));
    set32(c.r[4], c.r[2].w[0] + 72u);
    c.r[7].d[0] = ld16((c.r[2].w[0] + 58u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395628u); set32(c.r[5], c.r[2].w[0] + 604u);  if (depth < kMaxDepth) unit_00A5(c, 199u, depth + 1u); else { c.pc = 0x00395670u; return; } if (c.pc != 0x00395628u) [[unlikely]] return; }
L_00395628:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[6], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395640u); set32(c.r[4], c.r[2].w[0] + 348u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00395640u) [[unlikely]] return; }
L_00395640:
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 42u));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st16((c.r[4].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    st16((c.r[3].w[0] + 44u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    st8((c.r[3].w[0] + 40u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_00395660:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_00395670:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003956A0u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x003956A0u) [[unlikely]] return; }
L_003956A0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003956ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x003956ACu) [[unlikely]] return; }
L_003956AC:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[20].w[0] - c.r[19].w[0]);  if (t) { goto L_003956D8; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_003956CC; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_003956CC:
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_003956D8:
    set32(c.r[16], c.r[18].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003956E8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x003956E8u) [[unlikely]] return; }
L_003956E8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003956F8u); st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x003956F8u) [[unlikely]] return; }
L_003956F8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395704u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x00395704u) [[unlikely]] return; }
L_00395704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039570Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0039570Cu) [[unlikely]] return; }
L_0039570C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_00395730:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 29u));
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 11ll ? 1ull : 0ull;  if (t) { goto L_00395758; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00395758; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00395760; } }
    c.budget -= 1;
L_00395758:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00395760:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00395770:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395784u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 206u, depth + 1u); else { c.pc = 0x00395730u; return; } if (c.pc != 0x00395784u) [[unlikely]] return; }
L_00395784:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003957C0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 30u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 11u);  if (t) { goto L_003957B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003957B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003957C0; } }
    c.budget -= 1;
L_003957B8:
    set32(c.r[16], 0u + 5u);
    c.budget -= 2;
L_003957C0:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    st8((c.r[3].w[0] + 54u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003957E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 47u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00395810; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395800u);  if (depth < kMaxDepth) unit_008E(c, 154u, depth + 1u); else { c.pc = 0x00339AF0u; return; } if (c.pc != 0x00395800u) [[unlikely]] return; }
L_00395800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395808u);  if (depth < kMaxDepth) unit_00A5(c, 297u, depth + 1u); else { c.pc = 0x003962C0u; return; } if (c.pc != 0x00395808u) [[unlikely]] return; }
L_00395808:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00395828; } }
L_00395810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395818u);  if (depth < kMaxDepth) unit_00A5(c, 304u, depth + 1u); else { c.pc = 0x00396340u; return; } if (c.pc != 0x00395818u) [[unlikely]] return; }
L_00395818:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395824u); set32(c.r[5], 0u + 194u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00395824u) [[unlikely]] return; }
L_00395824:
    c.budget -= 1;
L_00395828:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00395840:
    set32(c.r[29], c.r[29].w[0] - 400u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], 0u + 20u);
    c.f[20] = c.f[12];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395870u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 322u, depth + 1u); else { c.pc = 0x0038ACC0u; return; } if (c.pc != 0x00395870u) [[unlikely]] return; }
L_00395870:
    set32(c.r[17], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 47u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003958A0; } }
    c.r[4].d[0] = ld16((c.r[17].w[0] + 42u));
    set32(c.r[18], c.r[17].w[0] + 60u);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 44u));
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);  if (t) { goto L_003958C0; } }
    c.budget -= 1;
L_003958A0:
    set32(c.r[4], c.r[17].w[0] + 860u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003958ACu); set32(c.r[18], c.r[17].w[0] + 60u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x003958ACu) [[unlikely]] return; }
L_003958AC:
    c.r[4].d[0] = ld16((c.r[17].w[0] + 42u));
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
L_003958C0:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] - 6u);  if (t) { goto L_003958F0; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[3], c.r[2].w[0] + 60u);
    set32(c.r[2], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003958F0; } }
    st32((c.r[3].w[0]), 0u);
    c.budget -= 1;
L_003958F0:
    set32(c.r[17], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 47u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00395920; } }
    c.r[4].d[0] = ld16((c.r[17].w[0] + 42u));
    set32(c.r[18], c.r[17].w[0] + 60u);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 44u));
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);  if (t) { goto L_00395948; } }
    c.budget -= 1;
L_00395920:
    set32(c.r[4], c.r[17].w[0] + 860u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039592Cu); set32(c.r[18], c.r[17].w[0] + 60u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0039592Cu) [[unlikely]] return; }
L_0039592C:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 42u));
    set32(c.r[4], c.r[17].w[0] + 1116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039593Cu); set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0039593Cu) [[unlikely]] return; }
L_0039593C:
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 3;
L_00395948:
    c.r[1].d[0] = c.r[2].sd[0] < 43ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[2].w[0] - 38u);  if (t) { goto L_00395960; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00395960:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039596Cu); set32(c.r[4], c.r[2].w[0] + 72u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0039596Cu) [[unlikely]] return; }
L_0039596C:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 60u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00395AD0; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0; set32(c.r[4], c.r[3].w[0] + 72u);  if (t) { goto L_003959A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395990u);  if (depth < kMaxDepth) unit_00A5(c, 398u, depth + 1u); else { c.pc = 0x003971F0u; return; } if (c.pc != 0x00395990u) [[unlikely]] return; }
L_00395990:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003959A8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 4;
L_003959A8:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[6], 0u + 44u);
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003959C4u); set32(c.r[5], c.r[2].w[0] + 72u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x003959C4u) [[unlikely]] return; }
L_003959C4:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], 0u + 5u);
    st8((c.r[29].w[0] + 396u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 29u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 10u);  if (t) { goto L_003959E8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00395A78; } }
    c.budget -= 1;
L_003959E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003959F0u); set32(c.r[4], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x003959F0u) [[unlikely]] return; }
L_003959F0:
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00395A78; } }
    c.r[1].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[6], c.r[2].w[0] - 8u);  if (t) { goto L_00395A40; } }
    set32(c.r[5], c.r[29].w[0] + 352u);
    set32(c.r[4], 0u + 42u);
    c.budget -= 2;
L_00395A10:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[7], c.r[7].w[0] + 8u);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[5].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[5].w[0] + 7u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00395A10u | kUnwind; return; } goto L_00395A10; } }
L_00395A40:
    c.r[1].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[7].w[0] + c.r[29].w[0]);  if (t) { goto L_00395A78; } }
    set32(c.r[5], c.r[3].w[0] + 352u);
    set32(c.r[4], 0u + 42u);
    c.budget -= 3;
L_00395A58:
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00395A58u | kUnwind; return; } goto L_00395A58; } }
    c.budget -= 1;
L_00395A78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395A80u); set32(c.r[4], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00395A80u) [[unlikely]] return; }
L_00395A80:
    set32(c.r[3], 0u + 44u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 352u);  if (t) { goto L_00395AA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395A94u); set32(c.r[5], 0u + 43u);  if (depth < kMaxDepth) unit_00A5(c, 398u, depth + 1u); else { c.pc = 0x003971F0u; return; } if (c.pc != 0x00395A94u) [[unlikely]] return; }
L_00395A94:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00395AA8; } }
    st8((c.r[29].w[0] + 395u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00395AA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395AB0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 323u, depth + 1u); else { c.pc = 0x0038ACD0u; return; } if (c.pc != 0x00395AB0u) [[unlikely]] return; }
L_00395AB0:
    c.f[0] = fp::cvt_w_s(c.f[20]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395AC0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 324u, depth + 1u); else { c.pc = 0x0038ACE0u; return; } if (c.pc != 0x00395AC0u) [[unlikely]] return; }
L_00395AC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395AD0u); set32(c.r[4], c.r[4].w[0] + 30288u);  if (depth < kMaxDepth) unit_00AA(c, 51u, depth + 1u); else { c.pc = 0x003A87A0u; return; } if (c.pc != 0x00395AD0u) [[unlikely]] return; }
L_00395AD0:
    set32(c.r[5], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 348u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[5].w[0] + 348u);  if (t) { goto L_00395DA8; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 60u)));
    c.r[2].d[0] = ld16((c.r[5].w[0] + 42u));
    set32(c.r[18], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[18].sd[0] >= 0; set32(c.r[19], c.r[3].w[0] - c.r[2].w[0]);  if (t) { goto L_00395B00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00395B08; } }
    c.budget -= 1;
L_00395B00:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00395B08:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 47u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00395BC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395B1Cu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_008E(c, 88u, depth + 1u); else { c.pc = 0x00338F50u; return; } if (c.pc != 0x00395B1Cu) [[unlikely]] return; }
L_00395B1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395B24u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00395B24u) [[unlikely]] return; }
L_00395B24:
    c.r[1].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 44u);  if (t) { goto L_00395DA8; } }
    set32(c.r[2], c.r[19].w[0] + c.r[29].w[0]);
    set32(c.r[17], c.r[3].w[0] - c.r[18].w[0]);
    set32(c.r[5], c.r[2].w[0] + 96u);
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395B48u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x00395B48u) [[unlikely]] return; }
L_00395B48:
    set32(c.r[3], c.r[17].w[0] + c.r[29].w[0]);
    set32(c.r[2], 0u + 43u);
    set32(c.r[17], c.r[2].w[0] - c.r[18].w[0]);
    st8((c.r[3].w[0] + 352u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395B64u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 398u, depth + 1u); else { c.pc = 0x003971F0u; return; } if (c.pc != 0x00395B64u) [[unlikely]] return; }
L_00395B64:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00395B78; } }
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    st8((c.r[2].w[0] + 352u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00395B78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395B80u); set32(c.r[4], 0u + 14u);  if (depth < kMaxDepth) unit_00A2(c, 323u, depth + 1u); else { c.pc = 0x0038ACD0u; return; } if (c.pc != 0x00395B80u) [[unlikely]] return; }
L_00395B80:
    c.f[1] = c.r[18].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[20], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395BACu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 324u, depth + 1u); else { c.pc = 0x0038ACE0u; return; } if (c.pc != 0x00395BACu) [[unlikely]] return; }
L_00395BAC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395BBCu); set32(c.r[4], c.r[4].w[0] + 30288u);  if (depth < kMaxDepth) unit_00AA(c, 51u, depth + 1u); else { c.pc = 0x003A87A0u; return; } if (c.pc != 0x00395BBCu) [[unlikely]] return; }
L_00395BBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00395DA8; } }
    c.budget -= 1;
L_00395BC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395BD0u); set32(c.r[4], c.r[5].w[0] + 860u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00395BD0u) [[unlikely]] return; }
L_00395BD0:
    c.r[1].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00395C48; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395BF0u); set32(c.r[5], c.r[2].w[0] + 860u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00395BF0u) [[unlikely]] return; }
L_00395BF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395BF8u); set32(c.r[4], 0u + 14u);  if (depth < kMaxDepth) unit_00A2(c, 323u, depth + 1u); else { c.pc = 0x0038ACD0u; return; } if (c.pc != 0x00395BF8u) [[unlikely]] return; }
L_00395BF8:
    c.f[1] = c.r[18].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[20], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395C24u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 324u, depth + 1u); else { c.pc = 0x0038ACE0u; return; } if (c.pc != 0x00395C24u) [[unlikely]] return; }
L_00395C24:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395C34u); set32(c.r[4], c.r[4].w[0] + 30288u);  if (depth < kMaxDepth) unit_00AA(c, 51u, depth + 1u); else { c.pc = 0x003A87A0u; return; } if (c.pc != 0x00395C34u) [[unlikely]] return; }
L_00395C34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395C3Cu); set32(c.r[4], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00395C3Cu) [[unlikely]] return; }
L_00395C3C:
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_00395C48:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395C54u); set32(c.r[4], c.r[2].w[0] + 1116u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00395C54u) [[unlikely]] return; }
L_00395C54:
    c.r[1].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00395D08; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[3], 0u + 44u);
    set32(c.r[17], c.r[3].w[0] - c.r[18].w[0]);
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395C80u); set32(c.r[5], c.r[2].w[0] + 1116u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x00395C80u) [[unlikely]] return; }
L_00395C80:
    set32(c.r[3], c.r[17].w[0] + c.r[29].w[0]);
    set32(c.r[2], 0u + 43u);
    set32(c.r[17], c.r[2].w[0] - c.r[18].w[0]);
    st8((c.r[3].w[0] + 352u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395C9Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 398u, depth + 1u); else { c.pc = 0x003971F0u; return; } if (c.pc != 0x00395C9Cu) [[unlikely]] return; }
L_00395C9C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00395CB0; } }
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    st8((c.r[2].w[0] + 352u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00395CB0:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], 0u + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395CC0u); st32((c.r[2].w[0] + 344u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_00A2(c, 323u, depth + 1u); else { c.pc = 0x0038ACD0u; return; } if (c.pc != 0x00395CC0u) [[unlikely]] return; }
L_00395CC0:
    c.f[1] = c.r[18].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[20], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395CECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 324u, depth + 1u); else { c.pc = 0x0038ACE0u; return; } if (c.pc != 0x00395CECu) [[unlikely]] return; }
L_00395CEC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395CFCu); set32(c.r[4], c.r[4].w[0] + 30288u);  if (depth < kMaxDepth) unit_00AA(c, 51u, depth + 1u); else { c.pc = 0x003A87A0u; return; } if (c.pc != 0x00395CFCu) [[unlikely]] return; }
L_00395CFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395D04u); set32(c.r[4], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00395D04u) [[unlikely]] return; }
L_00395D04:
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_00395D08:
    c.r[1].d[0] = c.r[18].sd[0] < 44ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00395DA8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[3], 0u + 44u);
    set32(c.r[17], c.r[3].w[0] - c.r[18].w[0]);
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395D30u); set32(c.r[5], c.r[2].w[0] + 1372u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x00395D30u) [[unlikely]] return; }
L_00395D30:
    set32(c.r[3], c.r[17].w[0] + c.r[29].w[0]);
    set32(c.r[2], 0u + 43u);
    set32(c.r[17], c.r[2].w[0] - c.r[18].w[0]);
    st8((c.r[3].w[0] + 352u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395D4Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 398u, depth + 1u); else { c.pc = 0x003971F0u; return; } if (c.pc != 0x00395D4Cu) [[unlikely]] return; }
L_00395D4C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00395D60; } }
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    st8((c.r[2].w[0] + 352u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00395D60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395D68u); set32(c.r[4], 0u + 14u);  if (depth < kMaxDepth) unit_00A2(c, 323u, depth + 1u); else { c.pc = 0x0038ACD0u; return; } if (c.pc != 0x00395D68u) [[unlikely]] return; }
L_00395D68:
    c.f[1] = c.r[18].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[20], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395D94u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 324u, depth + 1u); else { c.pc = 0x0038ACE0u; return; } if (c.pc != 0x00395D94u) [[unlikely]] return; }
L_00395D94:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395DA4u); set32(c.r[4], c.r[4].w[0] + 30288u);  if (depth < kMaxDepth) unit_00AA(c, 51u, depth + 1u); else { c.pc = 0x003A87A0u; return; } if (c.pc != 0x00395DA4u) [[unlikely]] return; }
L_00395DA4:
    c.budget -= 1;
L_00395DA8:
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 47u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00395E38; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 39u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00395E38; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 40u));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00395E38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395DDCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 323u, depth + 1u); else { c.pc = 0x0038ACD0u; return; } if (c.pc != 0x00395DDCu) [[unlikely]] return; }
L_00395DDC:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395DE8u); set32(c.r[5], 0u + 22u);  if (depth < kMaxDepth) unit_00A2(c, 322u, depth + 1u); else { c.pc = 0x0038ACC0u; return; } if (c.pc != 0x00395DE8u) [[unlikely]] return; }
L_00395DE8:
    set32(c.r[6], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = ld16((c.r[6].w[0] + 42u));
    c.r[3].d[0] = ld16((c.r[6].w[0] + 44u));
    set32(c.r[2], ld32((c.r[6].w[0] + 60u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[20], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395E2Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 324u, depth + 1u); else { c.pc = 0x0038ACE0u; return; } if (c.pc != 0x00395E2Cu) [[unlikely]] return; }
L_00395E2C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395E38u); set32(c.r[4], c.r[4].w[0] + 30296u);  if (depth < kMaxDepth) unit_00AA(c, 51u, depth + 1u); else { c.pc = 0x003A87A0u; return; } if (c.pc != 0x00395E38u) [[unlikely]] return; }
L_00395E38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 400u);  c.pc = t; return; }
L_00395E60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u + 1300u);
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395E7Cu); set32(c.r[4], c.r[2].w[0] + 328u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00395E7Cu) [[unlikely]] return; }
L_00395E7C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 6496u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395E90u); set32(c.r[6], 0u + 768u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00395E90u) [[unlikely]] return; }
L_00395E90:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00395EA0:
    set32(c.r[29], c.r[29].w[0] - 544u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 54u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[4].w[0] + 1116u);  if (t) { goto L_00395F98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395EC4u); set32(c.r[4], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00395EC4u) [[unlikely]] return; }
L_00395EC4:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], c.r[2].w[0] + 1116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395ED4u); set32(c.r[5], c.r[2].w[0] + 1372u);  if (depth < kMaxDepth) unit_005B(c, 160u, depth + 1u); else { c.pc = 0x0026DCE0u; return; } if (c.pc != 0x00395ED4u) [[unlikely]] return; }
L_00395ED4:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], c.r[2].w[0] + 1116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395EE4u); set32(c.r[5], c.r[2].w[0] + 1372u);  if (depth < kMaxDepth) unit_005B(c, 144u, depth + 1u); else { c.pc = 0x0026DB50u; return; } if (c.pc != 0x00395EE4u) [[unlikely]] return; }
L_00395EE4:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], c.r[29].w[0] + 32u);
    st32((c.r[3].w[0] + 336u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395EFCu); set32(c.r[5], c.r[2].w[0] + 1116u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00395EFCu) [[unlikely]] return; }
L_00395EFC:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[5], c.r[29].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395F0Cu); set32(c.r[4], c.r[2].w[0] + 1116u);  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x00395F0Cu) [[unlikely]] return; }
L_00395F0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00395F98; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 336u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00395F98; } }
    c.budget -= 1;
L_00395F28:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], c.r[2].w[0] + 1116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395F38u); set32(c.r[5], c.r[2].w[0] + 1372u);  if (depth < kMaxDepth) unit_005B(c, 144u, depth + 1u); else { c.pc = 0x0026DB50u; return; } if (c.pc != 0x00395F38u) [[unlikely]] return; }
L_00395F38:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[5], c.r[29].w[0] + 288u);
    st32((c.r[3].w[0] + 336u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395F50u); set32(c.r[4], c.r[2].w[0] + 1116u);  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x00395F50u) [[unlikely]] return; }
L_00395F50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00395F98; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 336u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00395F98; } }
    set32(c.r[4], c.r[4].w[0] + 1116u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395F74u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x00395F74u) [[unlikely]] return; }
L_00395F74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00395F88; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 336u), 0u);  if (t) { goto L_00395F98; } }
L_00395F88:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00395F28u | kUnwind; return; } goto L_00395F28; } }
L_00395F98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 544u);  c.pc = t; return; }
L_00395FB0:
    set32(c.r[29], c.r[29].w[0] - 1072u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 54u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00395FF0; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 29u));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], 0u + 35u);  if (t) { goto L_00395FE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003960B8; } }
L_00395FE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 31u);  if (t) { goto L_003960B8; } }
L_00395FF0:
    set32(c.r[5], c.r[3].w[0] + 1116u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00395FFCu); set32(c.r[4], c.r[29].w[0] + 816u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00395FFCu) [[unlikely]] return; }
L_00395FFC:
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039600Cu); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 144u, depth + 1u); else { c.pc = 0x0026DB50u; return; } if (c.pc != 0x0039600Cu) [[unlikely]] return; }
L_0039600C:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], c.r[29].w[0] + 560u);
    set32(c.r[5], c.r[29].w[0] + 304u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396020u); st32((c.r[3].w[0] + 336u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00396020u) [[unlikely]] return; }
L_00396020:
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[5], c.r[29].w[0] + 816u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396030u); set32(c.r[16], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x00396030u) [[unlikely]] return; }
L_00396030:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003960B8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 336u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003960B8; } }
L_00396048:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396054u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_005B(c, 144u, depth + 1u); else { c.pc = 0x0026DB50u; return; } if (c.pc != 0x00396054u) [[unlikely]] return; }
L_00396054:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[5], c.r[29].w[0] + 816u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039606Cu); st32((c.r[3].w[0] + 336u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x0039606Cu) [[unlikely]] return; }
L_0039606C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003960B8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 336u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 304u);  if (t) { goto L_003960B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039608Cu); set32(c.r[5], c.r[29].w[0] + 560u);  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x0039608Cu) [[unlikely]] return; }
L_0039608C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003960A8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[16], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 336u), 0u);  if (t) { goto L_003960B8; } }
    c.budget -= 1;
L_003960A8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00396048u | kUnwind; return; } goto L_00396048; } }
L_003960B8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003960C8; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_003960C8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1072u);  c.pc = t; return; }
L_003960E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 54u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[4].w[0] + 348u);  if (t) { goto L_00396130; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039610Cu); set32(c.r[5], c.r[5].w[0] + 30608u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0039610Cu) [[unlikely]] return; }
L_0039610C:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    st8((c.r[2].w[0] + 1116u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396120u); st8((c.r[2].w[0] + 1372u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A5(c, 272u, depth + 1u); else { c.pc = 0x00395FB0u; return; } if (c.pc != 0x00396120u) [[unlikely]] return; }
L_00396120:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 340u), c.r[2].w[0]);  if (t) { goto L_003961E8; } }
    c.budget -= 1;
L_00396130:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 47u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003961B0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003961B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00396210; } }
L_00396150:
    set32(c.r[2], 0u + 78u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));  if (t) { goto L_00396168; } }
    set32(c.r[2], 0u + 110u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003961A8; } }
L_00396168:
    c.r[3].d[0] = c.r[4].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 89u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 121u);  if (t) { goto L_003961A8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003961A8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 17576u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] - 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003961A8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x003961A8u) [[unlikely]] return; }
L_003961A8:
    set32(c.r[16], c.r[16].w[0] + 2u);
    c.budget -= 2;
L_003961B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00396150u | kUnwind; return; } goto L_00396150; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], c.r[2].w[0] + 348u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003961CCu); set32(c.r[5], c.r[2].w[0] + 604u);  if (depth < kMaxDepth) unit_008E(c, 88u, depth + 1u); else { c.pc = 0x00338F50u; return; } if (c.pc != 0x003961CCu) [[unlikely]] return; }
L_003961CC:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], c.r[2].w[0] + 604u);
    set32(c.r[5], c.r[2].w[0] + 1116u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003961E0u); set32(c.r[6], c.r[2].w[0] + 1372u);  if (depth < kMaxDepth) unit_005B(c, 140u, depth + 1u); else { c.pc = 0x0026DAF0u; return; } if (c.pc != 0x003961E0u) [[unlikely]] return; }
L_003961E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    st32((c.r[3].w[0] + 340u), c.r[2].w[0]);
    c.budget -= 2;
L_003961E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003961F0u);  if (depth < kMaxDepth) unit_00A5(c, 262u, depth + 1u); else { c.pc = 0x00395EA0u; return; } if (c.pc != 0x003961F0u) [[unlikely]] return; }
L_003961F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 860u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    st8((c.r[3].w[0] + 47u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    st8((c.r[3].w[0] + 38u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
L_00396210:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00396220:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 54u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003962A8; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 340u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[5].w[0] + 1116u);  if (t) { goto L_00396278; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396250u); set32(c.r[5], c.r[5].w[0] + 1372u);  if (depth < kMaxDepth) unit_005B(c, 162u, depth + 1u); else { c.pc = 0x0026DD10u; return; } if (c.pc != 0x00396250u) [[unlikely]] return; }
L_00396250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396258u);  if (depth < kMaxDepth) unit_00A5(c, 262u, depth + 1u); else { c.pc = 0x00395EA0u; return; } if (c.pc != 0x00396258u) [[unlikely]] return; }
L_00396258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396260u);  if (depth < kMaxDepth) unit_00A5(c, 272u, depth + 1u); else { c.pc = 0x00395FB0u; return; } if (c.pc != 0x00396260u) [[unlikely]] return; }
L_00396260:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039626Cu); st32((c.r[3].w[0] + 340u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A5(c, 337u, depth + 1u); else { c.pc = 0x00396770u; return; } if (c.pc != 0x0039626Cu) [[unlikely]] return; }
L_0039626C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003962A8; } }
    c.budget -= 1;
L_00396278:
    set32(c.r[4], ld32((c.r[5].w[0] + 336u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[5].w[0] + 1116u);  if (t) { goto L_003962A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396290u); set32(c.r[5], c.r[5].w[0] + 1372u);  if (depth < kMaxDepth) unit_005B(c, 144u, depth + 1u); else { c.pc = 0x0026DB50u; return; } if (c.pc != 0x00396290u) [[unlikely]] return; }
L_00396290:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039629Cu); st32((c.r[3].w[0] + 336u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A5(c, 272u, depth + 1u); else { c.pc = 0x00395FB0u; return; } if (c.pc != 0x0039629Cu) [[unlikely]] return; }
L_0039629C:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003962A8u); st32((c.r[3].w[0] + 340u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A5(c, 337u, depth + 1u); else { c.pc = 0x00396770u; return; } if (c.pc != 0x003962A8u) [[unlikely]] return; }
L_003962A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003962C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003962D0u);  if (depth < kMaxDepth) unit_00A5(c, 206u, depth + 1u); else { c.pc = 0x00395730u; return; } if (c.pc != 0x003962D0u) [[unlikely]] return; }
L_003962D0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00396300; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 54u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00396300; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003962F4u);  if (depth < kMaxDepth) unit_008E(c, 65u, depth + 1u); else { c.pc = 0x00338800u; return; } if (c.pc != 0x003962F4u) [[unlikely]] return; }
L_003962F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00396328; } }
    c.budget -= 1;
L_00396300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396308u);  if (depth < kMaxDepth) unit_00A5(c, 281u, depth + 1u); else { c.pc = 0x003960E0u; return; } if (c.pc != 0x00396308u) [[unlikely]] return; }
L_00396308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396310u);  if (depth < kMaxDepth) unit_00A5(c, 272u, depth + 1u); else { c.pc = 0x00395FB0u; return; } if (c.pc != 0x00396310u) [[unlikely]] return; }
L_00396310:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039631Cu); st32((c.r[3].w[0] + 340u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A5(c, 337u, depth + 1u); else { c.pc = 0x00396770u; return; } if (c.pc != 0x0039631Cu) [[unlikely]] return; }
L_0039631C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396328u); set32(c.r[5], 0u + 194u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00396328u) [[unlikely]] return; }
L_00396328:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00396340:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1116u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[7].w[0] + 1116u);  if (t) { goto L_003963B0; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 47u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003963B0; } }
    c.r[6].d[0] = ld16((c.r[7].w[0] + 42u));
    set32(c.r[4], c.r[7].w[0] + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396374u); c.r[7].d[0] = ld16((c.r[7].w[0] + 58u));  if (depth < kMaxDepth) unit_00A5(c, 199u, depth + 1u); else { c.pc = 0x00395670u; return; } if (c.pc != 0x00396374u) [[unlikely]] return; }
L_00396374:
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 256u);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 42u));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[4].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396398u); set32(c.r[4], c.r[2].w[0] + 348u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00396398u) [[unlikely]] return; }
L_00396398:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    st8((c.r[3].w[0] + 47u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    st8((c.r[3].w[0] + 38u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    st16((c.r[3].w[0] + 44u), static_cast<std::uint16_t>(0u));
    c.budget -= 6;
L_003963B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003963C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 5985u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], c.r[4].w[0] << 8);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00CE0000u);  if (t) { goto L_00396440; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], c.r[3].w[0] + 6496u);
    set32(c.r[2], c.r[2].w[0] + 5984u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[17], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[5], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396410u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00396410u) [[unlikely]] return; }
L_00396410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396418u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00396418u) [[unlikely]] return; }
L_00396418:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00396440; } }
    set32(c.r[4], c.r[17].w[0] + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396430u); set32(c.r[5], c.r[5].w[0] + 30616u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00396430u) [[unlikely]] return; }
L_00396430:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], c.r[3].w[0] + 6509u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00396440:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00396460:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + 5984u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] + 17600u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { set32(c.r[4], c.r[4].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DC88u | kUnwind; return; } [[clang::musttail]] return unit_0007(c, 122u, depth); }
L_003964A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u + 256u);
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003964BCu); set32(c.r[4], c.r[2].w[0] + 1116u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003964BCu) [[unlikely]] return; }
L_003964BC:
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] + 5984u);
    set32(c.r[5], ld32((c.r[4].w[0] + 328u)));
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1116u);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[5].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003964F4u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x003964F4u) [[unlikely]] return; }
L_003964F4:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], c.r[2].w[0] + 348u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396504u); set32(c.r[5], c.r[2].w[0] + 1116u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00396504u) [[unlikely]] return; }
L_00396504:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00396510:
    set32(c.r[29], c.r[29].w[0] - 576u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[2].d[0] | 256ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 5984u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396544u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00396544u) [[unlikely]] return; }
L_00396544:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 6496u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396558u); set32(c.r[6], 0u + 768u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00396558u) [[unlikely]] return; }
L_00396558:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00396660; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], c.r[18].w[0] + 3u);
    set32(c.r[4], ld32((c.r[3].w[0] + 340u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[4].w[0] - c.r[18].w[0]);  if (t) { goto L_0039657C; } }
    set32(c.r[16], 0u + 3u);
    c.budget -= 1;
L_0039657C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 54u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].d[0] = 0ll < c.r[16].sd[0] ? 1ull : 0ull;  if (t) { goto L_003965C0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003965B0; } }
L_00396590:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039659Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 311u, depth + 1u); else { c.pc = 0x00396460u; return; } if (c.pc != 0x0039659Cu) [[unlikely]] return; }
L_0039659C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00396590u | kUnwind; return; } goto L_00396590; } }
    c.budget -= 1;
L_003965B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003965B8u);  if (depth < kMaxDepth) unit_00A5(c, 312u, depth + 1u); else { c.pc = 0x003964A0u; return; } if (c.pc != 0x003965B8u) [[unlikely]] return; }
L_003965B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00396630; } }
L_003965C0:
    c.r[1].d[0] = 0ll < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00396600; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[18], c.r[18].w[0] + 5984u);
    c.budget -= 3;
L_003965D8:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], c.r[18].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003965E8u); set32(c.r[5], c.r[2].w[0] + 1372u);  if (depth < kMaxDepth) unit_005B(c, 144u, depth + 1u); else { c.pc = 0x0026DB50u; return; } if (c.pc != 0x003965E8u) [[unlikely]] return; }
L_003965E8:
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 257u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003965D8u | kUnwind; return; } goto L_003965D8; } }
    c.budget -= 1;
L_00396600:
    set32(c.r[2], c.r[16].w[0] - 1u);
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00396630; } }
L_00396610:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039661Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_005B(c, 142u, depth + 1u); else { c.pc = 0x0026DB20u; return; } if (c.pc != 0x0039661Cu) [[unlikely]] return; }
L_0039661C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[16].w[0] - 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00396610u | kUnwind; return; } goto L_00396610; } }
L_00396630:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00396638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396640u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 307u, depth + 1u); else { c.pc = 0x003963C0u; return; } if (c.pc != 0x00396640u) [[unlikely]] return; }
L_00396640:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00396638u | kUnwind; return; } goto L_00396638; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00396758; } }
    c.budget -= 1;
L_00396660:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], c.r[18].w[0] + 3u);
    set32(c.r[4], ld32((c.r[3].w[0] + 340u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[4].w[0] - c.r[18].w[0]);  if (t) { goto L_0039667C; } }
    set32(c.r[17], 0u + 3u);
    c.budget -= 1;
L_0039667C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 54u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] - 1u);  if (t) { goto L_003966C0; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_003966B0; } }
L_00396690:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039669Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 311u, depth + 1u); else { c.pc = 0x00396460u; return; } if (c.pc != 0x0039669Cu) [[unlikely]] return; }
L_0039669C:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00396690u | kUnwind; return; } goto L_00396690; } }
    c.budget -= 1;
L_003966B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003966B8u);  if (depth < kMaxDepth) unit_00A5(c, 312u, depth + 1u); else { c.pc = 0x003964A0u; return; } if (c.pc != 0x003966B8u) [[unlikely]] return; }
L_003966B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00396730; } }
L_003966C0:
    set32(c.r[16], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] < 0; set32(c.r[3], c.r[16].w[0] << 8);  if (t) { goto L_00396700; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], c.r[2].w[0] + 5984u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_003966E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], c.r[18].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003966F0u); set32(c.r[5], c.r[2].w[0] + 1372u);  if (depth < kMaxDepth) unit_005B(c, 142u, depth + 1u); else { c.pc = 0x0026DB20u; return; } if (c.pc != 0x003966F0u) [[unlikely]] return; }
L_003966F0:
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[18], c.r[18].w[0] - 257u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003966E0u | kUnwind; return; } goto L_003966E0; } }
L_00396700:
    set32(c.r[2], c.r[17].w[0] - 1u);
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00396730; } }
L_00396710:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039671Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_005B(c, 144u, depth + 1u); else { c.pc = 0x0026DB50u; return; } if (c.pc != 0x0039671Cu) [[unlikely]] return; }
L_0039671C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], c.r[17].w[0] - 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00396710u | kUnwind; return; } goto L_00396710; } }
L_00396730:
    set32(c.r[16], 0u + 2u);
    c.budget -= 2;
L_00396738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396740u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 307u, depth + 1u); else { c.pc = 0x003963C0u; return; } if (c.pc != 0x00396740u) [[unlikely]] return; }
L_00396740:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00396738u | kUnwind; return; } goto L_00396738; } }
    c.budget -= 1;
L_00396758:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 576u);  c.pc = t; return; }
L_00396770:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    st32((c.r[3].w[0] + 328u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    st32((c.r[3].w[0] + 332u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 340u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00396908; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], c.r[4].w[0] + 5984u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003967BCu); c.r[6].d[0] = c.r[2].d[0] | 256ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003967BCu) [[unlikely]] return; }
L_003967BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 6496u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003967D0u); set32(c.r[6], 0u + 768u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003967D0u) [[unlikely]] return; }
L_003967D0:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 340u)));
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[19], c.r[2].w[0] - 1u);  if (t) { goto L_003967E8; } }
    set32(c.r[19], 0u + 2u);
    c.budget -= 1;
L_003967E8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 54u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[19].w[0] + 1u);  if (t) { goto L_00396830; } }
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00396820; } }
L_00396800:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039680Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 311u, depth + 1u); else { c.pc = 0x00396460u; return; } if (c.pc != 0x0039680Cu) [[unlikely]] return; }
L_0039680C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00396800u | kUnwind; return; } goto L_00396800; } }
L_00396820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396828u);  if (depth < kMaxDepth) unit_00A5(c, 312u, depth + 1u); else { c.pc = 0x003964A0u; return; } if (c.pc != 0x00396828u) [[unlikely]] return; }
L_00396828:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003968E0; } }
L_00396830:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[5], c.r[3].w[0] + 1116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396840u); set32(c.r[4], c.r[4].w[0] + 5985u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00396840u) [[unlikely]] return; }
L_00396840:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 340u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00396860; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 336u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5984u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00396860:
    c.r[1].d[0] = 0ll < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003968B0; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] + 5984u);
    c.budget -= 3;
L_00396878:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], c.r[18].w[0] + 257u);
    set32(c.r[3], c.r[3].w[0] + 5984u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396898u); set32(c.r[5], c.r[2].w[0] + 1372u);  if (depth < kMaxDepth) unit_005B(c, 144u, depth + 1u); else { c.pc = 0x0026DB50u; return; } if (c.pc != 0x00396898u) [[unlikely]] return; }
L_00396898:
    st8((c.r[17].w[0] + 257u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 257u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 257u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00396878u | kUnwind; return; } goto L_00396878; } }
L_003968B0:
    c.r[1].d[0] = 0ll < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003968E0; } }
    c.budget -= 1;
L_003968C0:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003968CCu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_005B(c, 142u, depth + 1u); else { c.pc = 0x0026DB20u; return; } if (c.pc != 0x003968CCu) [[unlikely]] return; }
L_003968CC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003968C0u | kUnwind; return; } goto L_003968C0; } }
    c.budget -= 1;
L_003968E0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003968E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003968F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 307u, depth + 1u); else { c.pc = 0x003963C0u; return; } if (c.pc != 0x003968F0u) [[unlikely]] return; }
L_003968F0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003968E8u | kUnwind; return; } goto L_003968E8; } }
    c.budget -= 1;
L_00396908:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_00396930:
    set32(c.r[29], c.r[29].w[0] - 528u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 47u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00396AA0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 328u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 328u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 328u)));
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[4], c.r[2].w[0] + 328u);  if (t) { goto L_003969C0; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 340u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55550000u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 21846ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 340u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 332u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 332u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003969B8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A5(c, 316u, depth + 1u); else { c.pc = 0x00396510u; return; } if (c.pc != 0x003969B8u) [[unlikely]] return; }
L_003969B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00396A18; } }
L_003969C0:
    set32(c.r[3], ld32((c.r[2].w[0] + 332u)));
    set32(c.r[4], c.r[2].w[0] + 332u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00396A08; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 332u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003969FCu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A5(c, 316u, depth + 1u); else { c.pc = 0x00396510u; return; } if (c.pc != 0x003969FCu) [[unlikely]] return; }
L_003969FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00396A18; } }
    c.budget -= 1;
L_00396A08:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396A14u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_005B(c, 142u, depth + 1u); else { c.pc = 0x0026DB20u; return; } if (c.pc != 0x00396A14u) [[unlikely]] return; }
L_00396A14:
    c.budget -= 1;
L_00396A18:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396A2Cu); set32(c.r[4], c.r[2].w[0] + 1116u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00396A2Cu) [[unlikely]] return; }
L_00396A2C:
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] + 5984u);
    set32(c.r[5], ld32((c.r[4].w[0] + 328u)));
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1116u);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[5].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396A64u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00396A64u) [[unlikely]] return; }
L_00396A64:
    set32(c.r[6], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + 5984u);
    set32(c.r[5], ld32((c.r[6].w[0] + 328u)));
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[5].w[0] << 8);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st32((c.r[6].w[0] + 336u), c.r[3].w[0]);
    c.budget -= 15;
L_00396AA0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 528u);  c.pc = t; return; }
L_00396AB0:
    set32(c.r[29], c.r[29].w[0] - 528u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 47u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00396BE8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 328u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 328u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 340u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 328u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + 328u);  if (t) { goto L_00396B10; } }
    st32((c.r[4].w[0]), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396B08u); st32((c.r[2].w[0] + 332u), 0u);  if (depth < kMaxDepth) unit_00A5(c, 316u, depth + 1u); else { c.pc = 0x00396510u; return; } if (c.pc != 0x00396B08u) [[unlikely]] return; }
L_00396B08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00396B60; } }
L_00396B10:
    set32(c.r[4], c.r[3].w[0] + 332u);
    set32(c.r[3], ld32((c.r[3].w[0] + 332u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 3u);
    c.r[1].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00396B50; } }
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 328u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396B44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 316u, depth + 1u); else { c.pc = 0x00396510u; return; } if (c.pc != 0x00396B44u) [[unlikely]] return; }
L_00396B44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00396B60; } }
    c.budget -= 1;
L_00396B50:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396B5Cu); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_005B(c, 144u, depth + 1u); else { c.pc = 0x0026DB50u; return; } if (c.pc != 0x00396B5Cu) [[unlikely]] return; }
L_00396B5C:
    c.budget -= 1;
L_00396B60:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396B74u); set32(c.r[4], c.r[2].w[0] + 1116u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00396B74u) [[unlikely]] return; }
L_00396B74:
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] + 5984u);
    set32(c.r[5], ld32((c.r[4].w[0] + 328u)));
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1116u);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[5].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396BACu); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00396BACu) [[unlikely]] return; }
L_00396BAC:
    set32(c.r[6], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + 5984u);
    set32(c.r[5], ld32((c.r[6].w[0] + 328u)));
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[5].w[0] << 8);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st32((c.r[6].w[0] + 336u), c.r[3].w[0]);
    c.budget -= 15;
L_00396BE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 528u);  c.pc = t; return; }
L_00396C00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].d[0] = ld8((c.r[7].w[0] + 47u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00396CC8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 860u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00396CC8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 54u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00396CC8; } }
    set32(c.r[4], ld32((c.r[7].w[0] + 336u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[6], c.r[7].w[0] + 1116u);
    set32(c.r[5], c.r[5].w[0] + 6240u);
    set32(c.r[8], c.r[29].w[0] + 46u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396C50u); set32(c.r[7], c.r[7].w[0] + 1372u);  if (depth < kMaxDepth) unit_005B(c, 148u, depth + 1u); else { c.pc = 0x0026DBB0u; return; } if (c.pc != 0x00396C50u) [[unlikely]] return; }
L_00396C50:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], c.r[2].w[0] + 1116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396C60u); set32(c.r[5], c.r[2].w[0] + 1372u);  if (depth < kMaxDepth) unit_005B(c, 156u, depth + 1u); else { c.pc = 0x0026DC80u; return; } if (c.pc != 0x00396C60u) [[unlikely]] return; }
L_00396C60:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], c.r[2].w[0] + 1116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396C70u); set32(c.r[5], c.r[2].w[0] + 1372u);  if (depth < kMaxDepth) unit_005B(c, 156u, depth + 1u); else { c.pc = 0x0026DC80u; return; } if (c.pc != 0x00396C70u) [[unlikely]] return; }
L_00396C70:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396C80u); st32((c.r[2].w[0] + 340u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00A5(c, 262u, depth + 1u); else { c.pc = 0x00395EA0u; return; } if (c.pc != 0x00396C80u) [[unlikely]] return; }
L_00396C80:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00396CC8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396C94u); set32(c.r[4], c.r[2].w[0] + 860u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00396C94u) [[unlikely]] return; }
L_00396C94:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396CA4u); set32(c.r[4], c.r[2].w[0] + 1116u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x00396CA4u) [[unlikely]] return; }
L_00396CA4:
    set32(c.r[3], c.r[16].w[0] - c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396CB8u); st8((c.r[2].w[0] + 860u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A5(c, 272u, depth + 1u); else { c.pc = 0x00395FB0u; return; } if (c.pc != 0x00396CB8u) [[unlikely]] return; }
L_00396CB8:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396CC4u); st32((c.r[3].w[0] + 340u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A5(c, 337u, depth + 1u); else { c.pc = 0x00396770u; return; } if (c.pc != 0x00396CC4u) [[unlikely]] return; }
L_00396CC4:
    c.budget -= 1;
L_00396CC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00396CE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 47u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00396D80; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1372u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[7], c.r[5].w[0] + 1372u);  if (t) { goto L_00396D80; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 54u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00396D80; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 336u)));
    set32(c.r[6], c.r[5].w[0] + 1116u);
    set32(c.r[8], c.r[29].w[0] + 30u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396D28u); set32(c.r[5], c.r[5].w[0] + 6240u);  if (depth < kMaxDepth) unit_005B(c, 148u, depth + 1u); else { c.pc = 0x0026DBB0u; return; } if (c.pc != 0x00396D28u) [[unlikely]] return; }
L_00396D28:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], c.r[2].w[0] + 1116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396D38u); set32(c.r[5], c.r[2].w[0] + 1372u);  if (depth < kMaxDepth) unit_005B(c, 156u, depth + 1u); else { c.pc = 0x0026DC80u; return; } if (c.pc != 0x00396D38u) [[unlikely]] return; }
L_00396D38:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[4], c.r[2].w[0] + 1116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396D48u); set32(c.r[5], c.r[2].w[0] + 1372u);  if (depth < kMaxDepth) unit_005B(c, 158u, depth + 1u); else { c.pc = 0x0026DCB0u; return; } if (c.pc != 0x00396D48u) [[unlikely]] return; }
L_00396D48:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396D54u); st32((c.r[3].w[0] + 340u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A5(c, 262u, depth + 1u); else { c.pc = 0x00395EA0u; return; } if (c.pc != 0x00396D54u) [[unlikely]] return; }
L_00396D54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396D5Cu);  if (depth < kMaxDepth) unit_00A5(c, 272u, depth + 1u); else { c.pc = 0x00395FB0u; return; } if (c.pc != 0x00396D5Cu) [[unlikely]] return; }
L_00396D5C:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[5], c.r[5].w[0] + 6240u);
    st32((c.r[3].w[0] + 340u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396D78u); set32(c.r[4], c.r[2].w[0] + 860u);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x00396D78u) [[unlikely]] return; }
L_00396D78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396D80u);  if (depth < kMaxDepth) unit_00A5(c, 337u, depth + 1u); else { c.pc = 0x00396770u; return; } if (c.pc != 0x00396D80u) [[unlikely]] return; }
L_00396D80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00396D90:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[28].w[0] - 22568u)));
    c.f[21] = c.f[12];
    c.r[3].d[0] = ld8((c.r[5].w[0] + 47u));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; c.f[22] = c.f[13];  if (t) { goto L_003970C0; } }
    c.f[2] = ld32((c.r[5].w[0] + 20u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00396E20; } }
    c.f[1] = ld32((c.r[5].w[0] + 344u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[20] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);  if (t) { goto L_00396E58; } }
L_00396E20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = ld32((c.r[5].w[0] + 344u));
    c.f[20] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 14;
L_00396E58:
    set32(c.r[18], c.r[29].w[0] + 228u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[19], c.r[29].w[0] + 226u);
    set32(c.r[17], c.r[29].w[0] + 230u);
    set32(c.r[16], c.r[29].w[0] + 232u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[21], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.f[0] = c.r[2].w[0];
    st16((c.r[29].w[0] + 224u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[22]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 224u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.r[2].w[0] + 162u);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.f[0]);
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 86u);
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396ECCu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008B(c, 150u, depth + 1u); else { c.pc = 0x0032DAC0u; return; } if (c.pc != 0x00396ECCu) [[unlikely]] return; }
L_00396ECC:
    set32(c.r[5], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 224u)));
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF300000u);
    c.r[2].d[0] = c.r[2].d[0] | 12336ull;
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st16((c.r[29].w[0] + 224u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    set32(c.r[3], c.r[3].w[0] + 5u);
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] - 5u);
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396F5Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008B(c, 150u, depth + 1u); else { c.pc = 0x0032DAC0u; return; } if (c.pc != 0x00396F5Cu) [[unlikely]] return; }
L_00396F5C:
    set32(c.r[4], 0u + 18u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396F68u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 322u, depth + 1u); else { c.pc = 0x0038ACC0u; return; } if (c.pc != 0x00396F68u) [[unlikely]] return; }
L_00396F68:
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 344u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396F84u); c.f[21] = fp::add(c.f[21], c.f[0]);  if (depth < kMaxDepth) unit_00A2(c, 323u, depth + 1u); else { c.pc = 0x0038ACD0u; return; } if (c.pc != 0x00396F84u) [[unlikely]] return; }
L_00396F84:
    c.f[20] = fp::add(c.f[20], c.f[21]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] + 6496u);
    c.budget -= 5;
L_00396F98:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[4].d[0] = c.r[17].d[0] << 48;
    set32(c.r[2], 0u + 3u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], ld32((c.r[3].w[0] + 328u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00396FD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396FCCu);  if (depth < kMaxDepth) unit_00A2(c, 323u, depth + 1u); else { c.pc = 0x0038ACD0u; return; } if (c.pc != 0x00396FCCu) [[unlikely]] return; }
L_00396FCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00396FE0; } }
    c.budget -= 1;
L_00396FD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00396FE0u); set32(c.r[4], 0u + 13u);  if (depth < kMaxDepth) unit_00A2(c, 323u, depth + 1u); else { c.pc = 0x0038ACD0u; return; } if (c.pc != 0x00396FE0u) [[unlikely]] return; }
L_00396FE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = fp::cvt_w_s(c.f[20]);
    set32(c.r[4], c.f[1]);
    c.f[2] = c.r[2].w[0];
    c.f[1] = c.r[17].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41D00000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.f[1], c.f[22]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397020u);  if (depth < kMaxDepth) unit_00A2(c, 324u, depth + 1u); else { c.pc = 0x0038ACE0u; return; } if (c.pc != 0x00397020u) [[unlikely]] return; }
L_00397020:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397030u); set32(c.r[4], c.r[4].w[0] + 30624u);  if (depth < kMaxDepth) unit_00AA(c, 51u, depth + 1u); else { c.pc = 0x003A87A0u; return; } if (c.pc != 0x00397030u) [[unlikely]] return; }
L_00397030:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 256u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00396F98u | kUnwind; return; } goto L_00396F98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397050u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 323u, depth + 1u); else { c.pc = 0x0038ACD0u; return; } if (c.pc != 0x00397050u) [[unlikely]] return; }
L_00397050:
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[5].w[0] + 30632u);
    set32(c.r[2], ld32((c.r[3].w[0] + 328u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 340u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397070u); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x00397070u) [[unlikely]] return; }
L_00397070:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[22]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003970B4u);  if (depth < kMaxDepth) unit_00A2(c, 324u, depth + 1u); else { c.pc = 0x0038ACE0u; return; } if (c.pc != 0x003970B4u) [[unlikely]] return; }
L_003970B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003970BCu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_00AA(c, 51u, depth + 1u); else { c.pc = 0x003A87A0u; return; } if (c.pc != 0x003970BCu) [[unlikely]] return; }
L_003970BC:
    c.budget -= 1;
L_003970C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_003970F0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026DBF0u | kUnwind; return; } [[clang::musttail]] return unit_005B(c, 150u, depth); }
L_00397100:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003971C8; } }
    c.budget -= 1;
L_00397110:
    c.r[2].d[0] = c.r[6].sd[0] < 128ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00397124; } }
    c.r[2].d[0] = c.r[6].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 1;
L_00397124:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00397140; } }
    c.r[2].d[0] = c.r[6].sd[0] < 224ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00397140; } }
    c.r[2].d[0] = c.r[6].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 1;
L_00397140:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00397150; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00397158; } }
L_00397150:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00397158:
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003971C8; } }
    c.r[1].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[6], c.r[2].w[0] - 8u);  if (t) { goto L_00397198; } }
    c.budget -= 1;
L_00397178:
    set32(c.r[4], c.r[4].w[0] + 2u);
    set32(c.r[4], c.r[4].w[0] + 2u);
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.r[3].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00397178u | kUnwind; return; } goto L_00397178; } }
    c.budget -= 1;
L_00397198:
    c.r[1].d[0] = c.r[8].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003971C8; } }
    c.budget -= 1;
L_003971A8:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003971A8u | kUnwind; return; } goto L_003971A8; } }
    c.budget -= 1;
L_003971C8:
    c.r[6].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[3].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;  if (t) { goto L_003971E0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00397110u | kUnwind; return; } goto L_00397110; } }
    c.budget -= 1;
L_003971E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003971F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039720Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0039720Cu) [[unlikely]] return; }
L_0039720C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00397220; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00397310; } }
    c.budget -= 1;
L_00397220:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00397280; } }
    c.budget -= 1;
L_00397230:
    c.r[2].d[0] = c.r[3].sd[0] < 128ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00397244; } }
    c.r[2].d[0] = c.r[3].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 1;
L_00397244:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00397260; } }
    c.r[2].d[0] = c.r[3].sd[0] < 224ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00397260; } }
    c.r[2].d[0] = c.r[3].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 1;
L_00397260:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00397270; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00397278; } }
L_00397270:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00397278:
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_00397280:
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;  if (t) { goto L_00397298; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00397230u | kUnwind; return; } goto L_00397230; } }
    c.budget -= 1;
L_00397298:
    c.r[1].d[0] = c.r[16].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003972B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00397310; } }
    c.budget -= 1;
L_003972B0:
    set32(c.r[2], c.r[17].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], 0u + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003972D8; } }
    c.r[1].d[0] = c.r[3].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003972D8; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_003972D8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 224ll ? 1ull : 0ull;  if (t) { goto L_00397300; } }
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003972F0; } }
    c.r[2].d[0] = c.r[3].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 1;
L_003972F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00397300; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00397300:
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], 0u + 1u);
    if (c.r[5].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];
    c.budget -= 4;
L_00397310:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00397330:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 47u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003973B0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 30u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_00397390; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00397390; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 31u));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00397380; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 53u));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00397390; } }
L_00397380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397388u); set32(c.r[4], ld32((c.r[4].w[0] + 8u)));  if (depth < kMaxDepth) unit_008E(c, 9u, depth + 1u); else { c.pc = 0x003380D0u; return; } if (c.pc != 0x00397388u) [[unlikely]] return; }
L_00397388:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003973B0; } }
L_00397390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397398u);  if (depth < kMaxDepth) unit_008E(c, 158u, depth + 1u); else { c.pc = 0x00339B80u; return; } if (c.pc != 0x00397398u) [[unlikely]] return; }
L_00397398:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003973B0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003973ACu); set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_008E(c, 9u, depth + 1u); else { c.pc = 0x003380D0u; return; } if (c.pc != 0x003973ACu) [[unlikely]] return; }
L_003973AC:
    c.budget -= 1;
L_003973B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003973C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 47u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00397440; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 30u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_00397420; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00397420; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 31u));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00397410; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 53u));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00397420; } }
L_00397410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397418u); set32(c.r[4], ld32((c.r[4].w[0] + 8u)));  if (depth < kMaxDepth) unit_008E(c, 9u, depth + 1u); else { c.pc = 0x003380D0u; return; } if (c.pc != 0x00397418u) [[unlikely]] return; }
L_00397418:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00397440; } }
L_00397420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397428u);  if (depth < kMaxDepth) unit_008E(c, 159u, depth + 1u); else { c.pc = 0x00339B90u; return; } if (c.pc != 0x00397428u) [[unlikely]] return; }
L_00397428:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00397440; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039743Cu); set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_008E(c, 9u, depth + 1u); else { c.pc = 0x003380D0u; return; } if (c.pc != 0x0039743Cu) [[unlikely]] return; }
L_0039743C:
    c.budget -= 1;
L_00397440:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00397450:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], c.r[2].w[0] + 17744u);
    set32(c.r[4], c.r[29].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 16u));
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 30u));
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00397490:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 17776u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00394000u < 16384u) { entry = entries_00A5[(t - 0x00394000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003974B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003974C0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_003974D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 17856u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00394000u < 16384u) { entry = entries_00A5[(t - 0x00394000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003974F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 17872u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 32u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 28856u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397538u); st8((c.r[4].w[0] + 304u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x00397538u) [[unlikely]] return; }
L_00397538:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00390000u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 30400u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397554u); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00397554u) [[unlikely]] return; }
L_00397554:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039755Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 418u, depth + 1u); else { c.pc = 0x00397570u; return; } if (c.pc != 0x0039755Cu) [[unlikely]] return; }
L_0039755C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00397570:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18782u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[7], c.r[4].w[0] + 304u);  if (t) { goto L_00397590; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003976B0; } }
    c.budget -= 1;
L_00397590:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00397630; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003975D0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003975B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003976A8; } }
L_003975B8:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 920u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003976A8; } }
    c.budget -= 1;
L_003975D0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003976A8; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2B40000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[5], 0u + 80u);
    set32(c.r[3], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[7].w[0] + 20u), 0u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 36u), c.f[0]);  if (t) { goto L_003976A8; } }
L_00397630:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00397658; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00397658:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[4] = ld32((c.r[7].w[0] + 36u));
    c.f[2] = ld32((c.r[7].w[0] + 20u));
    c.f[3] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[3].w[0];
    c.f[2] = fp::add(c.f[2], c.f[4]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[7].w[0] + 20u), c.f[2]);
    c.f[2] = c.f[2];
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[4].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 20;
L_003976A8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003976B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003976C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_00397730; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00397730; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397708u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00397708u) [[unlikely]] return; }
L_00397708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397710u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x00397710u) [[unlikely]] return; }
L_00397710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397718u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00397718u) [[unlikely]] return; }
L_00397718:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397730u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x00397730u) [[unlikely]] return; }
L_00397730:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00397750:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 17888u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00394000u < 16384u) { entry = entries_00A5[(t - 0x00394000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00397770:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 17904u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[8], c.r[29].w[0] + 32u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 28848u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[8].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 304u), static_cast<std::uint8_t>(0u));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003977C0u); st8((c.r[4].w[0] + 305u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x003977C0u) [[unlikely]] return; }
L_003977C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00390000u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 31152u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003977D8u); st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003977D8u) [[unlikely]] return; }
L_003977D8:
    st32((c.r[16].w[0] + 56u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003977F0u); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A5(c, 429u, depth + 1u); else { c.pc = 0x00397800u; return; } if (c.pc != 0x003977F0u) [[unlikely]] return; }
L_003977F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00397800:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18782u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00397828; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003979A0; } }
L_00397828:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00397958; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003978D8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00397878; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00397860; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00397998; } }
    c.budget -= 1;
L_00397860:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 210u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00397998; } }
    c.budget -= 1;
L_00397878:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00397998; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0C00000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[4], 0u + 30u);
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.f[0]);  if (t) { goto L_00397998; } }
    c.budget -= 1;
L_003978D8:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003978E4u); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x003978E4u) [[unlikely]] return; }
L_003978E4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00397998; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1700000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[5], 0u + 120u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x44720000u);
    set32(c.r[3], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 32u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 56u), c.f[0]);  if (t) { goto L_00397998; } }
    c.budget -= 1;
L_00397958:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00397988; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003979A0; } }
    c.budget -= 1;
L_00397988:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397994u); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00397994u) [[unlikely]] return; }
L_00397994:
    c.budget -= 1;
L_00397998:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003979A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003979B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_00397A28; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00397A28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397A00u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00397A00u) [[unlikely]] return; }
L_00397A00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397A08u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x00397A08u) [[unlikely]] return; }
L_00397A08:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397A28u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x00397A28u) [[unlikely]] return; }
L_00397A28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00397A40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 17920u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00394000u < 16384u) { entry = entries_00A5[(t - 0x00394000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00397A60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 17936u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[8], c.r[29].w[0] + 32u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 28848u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[8].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397AACu); st8((c.r[4].w[0] + 304u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x00397AACu) [[unlikely]] return; }
L_00397AAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00390000u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 31824u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397AC4u); st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00397AC4u) [[unlikely]] return; }
L_00397AC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397ADCu); st32((c.r[16].w[0] + 104u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A5(c, 441u, depth + 1u); else { c.pc = 0x00397AF0u; return; } if (c.pc != 0x00397ADCu) [[unlikely]] return; }
L_00397ADC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00397AF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18782u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00397B08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00397C48; } }
L_00397B08:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00397C10; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00397BC8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00397B60; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00397B40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00397C40; } }
    c.budget -= 1;
L_00397B40:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 100u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.r[3].d[0] = c.r[3].d[0] | 13107ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_00397C40; } }
L_00397B60:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00397C40; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    set32(c.r[5], 0u + 60u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 108u), c.f[0]);  if (t) { goto L_00397C40; } }
L_00397BC8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00397BF8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 80u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_00397BF8:
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 104u), c.f[0]);  if (t) { goto L_00397C40; } }
    c.budget -= 1;
L_00397C10:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00397C40; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00397C48; } }
    c.budget -= 1;
L_00397C40:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00397C48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00397C50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_00397CC0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00397CC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397C98u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00397C98u) [[unlikely]] return; }
L_00397C98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397CA0u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x00397CA0u) [[unlikely]] return; }
L_00397CA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397CBCu); c.f[12] = ld32((c.r[17].w[0] + 104u));  if (depth < kMaxDepth) unit_0068(c, 82u, depth + 1u); else { c.pc = 0x002A23A0u; return; } if (c.pc != 0x00397CBCu) [[unlikely]] return; }
L_00397CBC:
    c.budget -= 1;
L_00397CC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00397CE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 17952u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00394000u < 16384u) { entry = entries_00A5[(t - 0x00394000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00397D00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 17968u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 32u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 28848u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397D44u); st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x00397D44u) [[unlikely]] return; }
L_00397D44:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00390000u);
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + 32304u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    st32((c.r[16].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397D64u); st8((c.r[16].w[0] + 304u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00397D64u) [[unlikely]] return; }
L_00397D64:
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397D78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 451u, depth + 1u); else { c.pc = 0x00397D90u; return; } if (c.pc != 0x00397D78u) [[unlikely]] return; }
L_00397D78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00397D90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18782u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00397DA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00397E20; } }
L_00397DA8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00397DE8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00397DC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00397E18; } }
L_00397DC8:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 240u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_00397E18; } }
    c.budget -= 1;
L_00397DE8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00397E18; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00397E20; } }
    c.budget -= 1;
L_00397E18:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00397E20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00397E30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_00397E98; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00397E98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397E78u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00397E78u) [[unlikely]] return; }
L_00397E78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397E80u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x00397E80u) [[unlikely]] return; }
L_00397E80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397E98u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x00397E98u) [[unlikely]] return; }
L_00397E98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00397EB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 17984u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00394000u < 16384u) { entry = entries_00A5[(t - 0x00394000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00397ED0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + 18000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] - 28848u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[17].w[0] + 304u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397F1Cu); st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x00397F1Cu) [[unlikely]] return; }
L_00397F1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[3], 0u + 240u);
    set32(c.r[2], c.r[2].w[0] - 31696u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[2], 0u + 4u);
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397F48u); st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00397F48u) [[unlikely]] return; }
L_00397F48:
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[16].w[0] + 33u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 32u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00397F64u); st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A5(c, 461u, depth + 1u); else { c.pc = 0x00397F80u; return; } if (c.pc != 0x00397F64u) [[unlikely]] return; }
L_00397F64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00397F80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18782u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + 304u);  if (t) { [[clang::musttail]] return unit_00A6(c, 5u, depth); } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_00397FC0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_00A6(c, 5u, depth); } }
    c.budget -= 1;
L_00397FC0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 1u);  if (t) { [[clang::musttail]] return unit_00A6(c, 3u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { [[clang::musttail]] return unit_00A6(c, 2u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00397FE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00A6(c, 4u, depth); } }
L_00397FE8:
    set32(c.r[5], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], 0u + 30u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0xC2780000u);
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    c.budget -= 6;
    [[clang::musttail]] return unit_00A6(c, 1u, depth);
}

}
