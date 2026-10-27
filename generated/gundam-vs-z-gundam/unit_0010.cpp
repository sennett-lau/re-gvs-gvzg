#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0010[4096] = {
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 0, 12, 0, 13, 14, 15, 16, 0, 0, 0, 0, 0, 17, 0, 18, 19, 0, 20, 0, 21, 0,
    22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 25, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0,
    29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 32, 33, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 40, 0, 0, 41, 0, 0, 0, 0,
    42, 0, 0, 0, 0, 0, 0, 43, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0,
    0, 0, 59, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0,
    78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0,
    81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0,
    0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 101, 0, 0, 102, 0,
    0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0, 110,
    0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0, 115, 0, 0,
    116, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 121, 0, 0, 122, 0, 0, 123, 0, 124, 0, 0,
    0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0,
    0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0,
    0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0,
    147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0,
    161, 0, 0, 0, 162, 0, 0, 163, 0, 0, 164, 0, 0, 0, 165, 0, 166, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169,
    0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0,
    172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0,
    0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0, 187, 0, 0, 0, 0, 188,
    0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0,
    0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0,
    0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0,
    0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0,
    0, 221, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 224, 225, 0, 0, 0, 0, 0, 226, 0, 227, 0, 0, 0, 0, 0, 0,
    228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0,
    233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 240, 241, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0,
    0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    249, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0,
    0, 256, 0, 0, 0, 257, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0,
    0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 267, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 269, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0,
    0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 278, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 281, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 289,
    0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 291, 0, 292, 0, 293, 294, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0,
    297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0,
    0, 0, 300, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 305,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0,
    311, 0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0,
    0, 0, 0, 0, 0, 0, 317, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 326, 0, 0, 0, 0, 0, 0,
    0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0,
    330, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 334,
    0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 337, 0, 0, 0, 0, 338, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 342, 0,
    0, 343, 0, 0, 344, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0,
    0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 353, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 356, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 365,
    0, 0, 0, 0, 0, 0, 0, 366, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 373, 0, 0, 374, 0, 0, 0,
    375, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    380, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 394, 0, 0, 395, 0, 0, 396, 0, 0, 0, 0, 397, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 0, 400, 0, 0, 401, 0, 0, 402, 0,
    0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 409, 0, 0, 410, 0, 0, 411, 0, 0, 0, 0, 412, 0, 413, 0, 0,
    0, 0, 0, 414, 0, 415, 0, 0, 0, 416, 0, 0, 417, 0, 0, 418, 0, 0, 419, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0,
    0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 435, 0, 0, 0, 436,
    0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0,
    440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0,
    0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 453, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 457,
    0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 465, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 469, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 0, 0, 472, 0, 0, 473, 0, 0, 474, 0,
    0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 477, 0, 0, 0, 0, 478, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0,
    0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 485, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0,
    0, 0, 488, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 491, 0, 0, 0, 492, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0,
    0, 496, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0,
    0, 0, 0, 500, 0, 0, 0, 0, 501, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 504, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0,
    0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 508, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0,
    0, 0, 0, 0, 511, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0,
    515, 0, 0, 0, 516, 0, 0, 0, 517, 0, 0, 518, 0, 0, 519, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 524, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 526, 0, 0, 0, 527, 0, 0, 528, 0, 0, 529, 0, 530, 0, 0, 0,
    531, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 534, 0, 0, 535, 0, 0, 536, 0, 0, 537, 0, 0, 0, 0, 0, 0,
};

void unit_0010(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00140000;
    case 2u: goto L_00140004;
    case 3u: goto L_00140008;
    case 4u: goto L_0014000C;
    case 5u: goto L_00140010;
    case 6u: goto L_00140014;
    case 7u: goto L_00140018;
    case 8u: goto L_0014001C;
    case 9u: goto L_00140020;
    case 10u: goto L_00140024;
    case 11u: goto L_00140028;
    case 12u: goto L_00140030;
    case 13u: goto L_00140038;
    case 14u: goto L_0014003C;
    case 15u: goto L_00140040;
    case 16u: goto L_00140044;
    case 17u: goto L_0014005C;
    case 18u: goto L_00140064;
    case 19u: goto L_00140068;
    case 20u: goto L_00140070;
    case 21u: goto L_00140078;
    case 22u: goto L_00140080;
    case 23u: goto L_0014009C;
    case 24u: goto L_001400B4;
    case 25u: goto L_001400C0;
    case 26u: goto L_001400C4;
    case 27u: goto L_001400E0;
    case 28u: goto L_001400EC;
    case 29u: goto L_00140100;
    case 30u: goto L_00140124;
    case 31u: goto L_0014012C;
    case 32u: goto L_0014013C;
    case 33u: goto L_00140140;
    case 34u: goto L_0014014C;
    case 35u: goto L_00140160;
    case 36u: goto L_0014016C;
    case 37u: goto L_001401A0;
    case 38u: goto L_001401C8;
    case 39u: goto L_001401D8;
    case 40u: goto L_001401E0;
    case 41u: goto L_001401EC;
    case 42u: goto L_00140200;
    case 43u: goto L_0014021C;
    case 44u: goto L_00140220;
    case 45u: goto L_00140238;
    case 46u: goto L_00140248;
    case 47u: goto L_00140258;
    case 48u: goto L_00140280;
    case 49u: goto L_00140290;
    case 50u: goto L_001402AC;
    case 51u: goto L_001402B8;
    case 52u: goto L_001402F0;
    case 53u: goto L_00140330;
    case 54u: goto L_00140344;
    case 55u: goto L_0014035C;
    case 56u: goto L_001403B4;
    case 57u: goto L_001403CC;
    case 58u: goto L_001403F0;
    case 59u: goto L_00140408;
    case 60u: goto L_00140414;
    case 61u: goto L_00140424;
    case 62u: goto L_00140434;
    case 63u: goto L_0014045C;
    case 64u: goto L_00140468;
    case 65u: goto L_00140490;
    case 66u: goto L_001404A0;
    case 67u: goto L_001404BC;
    case 68u: goto L_001404FC;
    case 69u: goto L_0014053C;
    case 70u: goto L_00140548;
    case 71u: goto L_00140564;
    case 72u: goto L_0014058C;
    case 73u: goto L_001405A8;
    case 74u: goto L_001405B8;
    case 75u: goto L_001405C8;
    case 76u: goto L_001405E0;
    case 77u: goto L_001405F0;
    case 78u: goto L_00140600;
    case 79u: goto L_00140640;
    case 80u: goto L_0014066C;
    case 81u: goto L_00140680;
    case 82u: goto L_001406A0;
    case 83u: goto L_001406AC;
    case 84u: goto L_001406C4;
    case 85u: goto L_001406F0;
    case 86u: goto L_00140708;
    case 87u: goto L_00140718;
    case 88u: goto L_0014072C;
    case 89u: goto L_00140750;
    case 90u: goto L_00140764;
    case 91u: goto L_00140770;
    case 92u: goto L_001407A4;
    case 93u: goto L_001407CC;
    case 94u: goto L_00140810;
    case 95u: goto L_00140844;
    case 96u: goto L_00140858;
    case 97u: goto L_0014086C;
    case 98u: goto L_001408A0;
    case 99u: goto L_001408D0;
    case 100u: goto L_001408E0;
    case 101u: goto L_001408EC;
    case 102u: goto L_001408F8;
    case 103u: goto L_00140908;
    case 104u: goto L_00140928;
    case 105u: goto L_00140A34;
    case 106u: goto L_00140A48;
    case 107u: goto L_00140A58;
    case 108u: goto L_00140A64;
    case 109u: goto L_00140A70;
    case 110u: goto L_00140A7C;
    case 111u: goto L_00140A84;
    case 112u: goto L_00140AA0;
    case 113u: goto L_00140AE0;
    case 114u: goto L_00140AE8;
    case 115u: goto L_00140AF4;
    case 116u: goto L_00140B00;
    case 117u: goto L_00140B08;
    case 118u: goto L_00140B20;
    case 119u: goto L_00140B3C;
    case 120u: goto L_00140B4C;
    case 121u: goto L_00140B54;
    case 122u: goto L_00140B60;
    case 123u: goto L_00140B6C;
    case 124u: goto L_00140B74;
    case 125u: goto L_00140B8C;
    case 126u: goto L_00140BCC;
    case 127u: goto L_00140BD4;
    case 128u: goto L_00140BE0;
    case 129u: goto L_00140BEC;
    case 130u: goto L_00140C04;
    case 131u: goto L_00140C20;
    case 132u: goto L_00140C38;
    case 133u: goto L_00140C50;
    case 134u: goto L_00140C5C;
    case 135u: goto L_00140C88;
    case 136u: goto L_00140C94;
    case 137u: goto L_00140CC8;
    case 138u: goto L_00140CD4;
    case 139u: goto L_00140CF8;
    case 140u: goto L_00140D08;
    case 141u: goto L_00140D28;
    case 142u: goto L_00140D38;
    case 143u: goto L_00140D48;
    case 144u: goto L_00140D54;
    case 145u: goto L_00140D64;
    case 146u: goto L_00140D6C;
    case 147u: goto L_00140D80;
    case 148u: goto L_00140D98;
    case 149u: goto L_00140DD0;
    case 150u: goto L_00140E14;
    case 151u: goto L_00140E24;
    case 152u: goto L_00140F50;
    case 153u: goto L_00140F70;
    case 154u: goto L_00140FA0;
    case 155u: goto L_00140FAC;
    case 156u: goto L_00140FB8;
    case 157u: goto L_00140FF4;
    case 158u: goto L_0014103C;
    case 159u: goto L_00141040;
    case 160u: goto L_00141060;
    case 161u: goto L_00141080;
    case 162u: goto L_00141090;
    case 163u: goto L_0014109C;
    case 164u: goto L_001410A8;
    case 165u: goto L_001410B8;
    case 166u: goto L_001410C0;
    case 167u: goto L_001410C4;
    case 168u: goto L_001410F0;
    case 169u: goto L_001410FC;
    case 170u: goto L_00141104;
    case 171u: goto L_0014116C;
    case 172u: goto L_00141180;
    case 173u: goto L_001411D0;
    case 174u: goto L_001411E4;
    case 175u: goto L_00141220;
    case 176u: goto L_00141258;
    case 177u: goto L_0014126C;
    case 178u: goto L_001412C4;
    case 179u: goto L_0014130C;
    case 180u: goto L_00141324;
    case 181u: goto L_0014134C;
    case 182u: goto L_0014136C;
    case 183u: goto L_00141384;
    case 184u: goto L_001413A8;
    case 185u: goto L_001413D4;
    case 186u: goto L_001413DC;
    case 187u: goto L_001413E8;
    case 188u: goto L_001413FC;
    case 189u: goto L_00141418;
    case 190u: goto L_00141430;
    case 191u: goto L_0014143C;
    case 192u: goto L_0014144C;
    case 193u: goto L_00141458;
    case 194u: goto L_001414BC;
    case 195u: goto L_001414C8;
    case 196u: goto L_0014151C;
    case 197u: goto L_0014153C;
    case 198u: goto L_00141550;
    case 199u: goto L_00141564;
    case 200u: goto L_00141584;
    case 201u: goto L_001415A4;
    case 202u: goto L_001415D0;
    case 203u: goto L_001415D4;
    case 204u: goto L_001415E8;
    case 205u: goto L_00141608;
    case 206u: goto L_0014163C;
    case 207u: goto L_00141640;
    case 208u: goto L_00141690;
    case 209u: goto L_001416A0;
    case 210u: goto L_001416AC;
    case 211u: goto L_001416BC;
    case 212u: goto L_001416E0;
    case 213u: goto L_001416F0;
    case 214u: goto L_0014170C;
    case 215u: goto L_00141738;
    case 216u: goto L_00141744;
    case 217u: goto L_00141790;
    case 218u: goto L_001417A4;
    case 219u: goto L_001417B8;
    case 220u: goto L_001417F0;
    case 221u: goto L_00141804;
    case 222u: goto L_00141808;
    case 223u: goto L_0014183C;
    case 224u: goto L_00141840;
    case 225u: goto L_00141844;
    case 226u: goto L_0014185C;
    case 227u: goto L_00141864;
    case 228u: goto L_00141880;
    case 229u: goto L_001418AC;
    case 230u: goto L_001418C0;
    case 231u: goto L_001418D4;
    case 232u: goto L_001418E0;
    case 233u: goto L_00141900;
    case 234u: goto L_0014190C;
    case 235u: goto L_00141944;
    case 236u: goto L_00141954;
    case 237u: goto L_00141960;
    case 238u: goto L_00141978;
    case 239u: goto L_001419B4;
    case 240u: goto L_001419BC;
    case 241u: goto L_001419C0;
    case 242u: goto L_001419E4;
    case 243u: goto L_001419F0;
    case 244u: goto L_00141A04;
    case 245u: goto L_00141A14;
    case 246u: goto L_00141A40;
    case 247u: goto L_00141A44;
    case 248u: goto L_00141A54;
    case 249u: goto L_00141A80;
    case 250u: goto L_00141A90;
    case 251u: goto L_00141A9C;
    case 252u: goto L_00141AB4;
    case 253u: goto L_00141ACC;
    case 254u: goto L_00141AD8;
    case 255u: goto L_00141AF0;
    case 256u: goto L_00141B04;
    case 257u: goto L_00141B14;
    case 258u: goto L_00141B1C;
    case 259u: goto L_00141B28;
    case 260u: goto L_00141B50;
    case 261u: goto L_00141B5C;
    case 262u: goto L_00141BB8;
    case 263u: goto L_00141BC4;
    case 264u: goto L_00141BDC;
    case 265u: goto L_00141BF4;
    case 266u: goto L_00141C14;
    case 267u: goto L_00141C38;
    case 268u: goto L_00141C3C;
    case 269u: goto L_00141D08;
    case 270u: goto L_00141D10;
    case 271u: goto L_00141D50;
    case 272u: goto L_00141D64;
    case 273u: goto L_00141D84;
    case 274u: goto L_00141DA8;
    case 275u: goto L_00141DE4;
    case 276u: goto L_00141E18;
    case 277u: goto L_00141E2C;
    case 278u: goto L_00141E3C;
    case 279u: goto L_00141E40;
    case 280u: goto L_00141ED0;
    case 281u: goto L_00141F04;
    case 282u: goto L_00141F10;
    case 283u: goto L_00141F38;
    case 284u: goto L_00141F44;
    case 285u: goto L_00141FA0;
    case 286u: goto L_00141FAC;
    case 287u: goto L_00141FC4;
    case 288u: goto L_00141FDC;
    case 289u: goto L_00141FFC;
    case 290u: goto L_00142020;
    case 291u: goto L_0014202C;
    case 292u: goto L_00142034;
    case 293u: goto L_0014203C;
    case 294u: goto L_00142040;
    case 295u: goto L_00142048;
    case 296u: goto L_0014205C;
    case 297u: goto L_00142080;
    case 298u: goto L_00142090;
    case 299u: goto L_001420F8;
    case 300u: goto L_00142108;
    case 301u: goto L_00142114;
    case 302u: goto L_00142130;
    case 303u: goto L_00142160;
    case 304u: goto L_00142170;
    case 305u: goto L_0014217C;
    case 306u: goto L_001421A8;
    case 307u: goto L_001421B4;
    case 308u: goto L_00142230;
    case 309u: goto L_0014223C;
    case 310u: goto L_00142270;
    case 311u: goto L_00142280;
    case 312u: goto L_00142290;
    case 313u: goto L_0014229C;
    case 314u: goto L_001422B8;
    case 315u: goto L_001422C4;
    case 316u: goto L_001422F8;
    case 317u: goto L_00142318;
    case 318u: goto L_00142324;
    case 319u: goto L_00142384;
    case 320u: goto L_001423A4;
    case 321u: goto L_001423C4;
    case 322u: goto L_001423E4;
    case 323u: goto L_00142430;
    case 324u: goto L_001424C4;
    case 325u: goto L_001424DC;
    case 326u: goto L_001424E4;
    case 327u: goto L_00142508;
    case 328u: goto L_00142560;
    case 329u: goto L_00142578;
    case 330u: goto L_00142580;
    case 331u: goto L_001425A4;
    case 332u: goto L_001425BC;
    case 333u: goto L_001425EC;
    case 334u: goto L_001425FC;
    case 335u: goto L_0014260C;
    case 336u: goto L_00142620;
    case 337u: goto L_00142628;
    case 338u: goto L_0014263C;
    case 339u: goto L_00142640;
    case 340u: goto L_00142658;
    case 341u: goto L_00142668;
    case 342u: goto L_00142678;
    case 343u: goto L_00142684;
    case 344u: goto L_00142690;
    case 345u: goto L_00142698;
    case 346u: goto L_001426AC;
    case 347u: goto L_001426F4;
    case 348u: goto L_0014270C;
    case 349u: goto L_0014272C;
    case 350u: goto L_00142760;
    case 351u: goto L_001427C8;
    case 352u: goto L_001427E0;
    case 353u: goto L_001427E8;
    case 354u: goto L_00142828;
    case 355u: goto L_0014283C;
    case 356u: goto L_00142840;
    case 357u: goto L_00142848;
    case 358u: goto L_00142880;
    case 359u: goto L_001428B0;
    case 360u: goto L_001428E0;
    case 361u: goto L_00142910;
    case 362u: goto L_00142948;
    case 363u: goto L_00142958;
    case 364u: goto L_00142968;
    case 365u: goto L_0014297C;
    case 366u: goto L_0014299C;
    case 367u: goto L_001429A4;
    case 368u: goto L_001429B8;
    case 369u: goto L_001429F0;
    case 370u: goto L_00142A20;
    case 371u: goto L_00142A4C;
    case 372u: goto L_00142A5C;
    case 373u: goto L_00142A64;
    case 374u: goto L_00142A70;
    case 375u: goto L_00142A80;
    case 376u: goto L_00142A8C;
    case 377u: goto L_00142A9C;
    case 378u: goto L_00142AAC;
    case 379u: goto L_00142AB8;
    case 380u: goto L_00142B00;
    case 381u: goto L_00142B0C;
    case 382u: goto L_00142B60;
    case 383u: goto L_00142B90;
    case 384u: goto L_00142BA4;
    case 385u: goto L_00142BE0;
    case 386u: goto L_00142C10;
    case 387u: goto L_00142C24;
    case 388u: goto L_00142C3C;
    case 389u: goto L_00142C4C;
    case 390u: goto L_00142C60;
    case 391u: goto L_00142C90;
    case 392u: goto L_00142CBC;
    case 393u: goto L_00142D4C;
    case 394u: goto L_00142D84;
    case 395u: goto L_00142D90;
    case 396u: goto L_00142D9C;
    case 397u: goto L_00142DB0;
    case 398u: goto L_00142DB8;
    case 399u: goto L_00142DD4;
    case 400u: goto L_00142DE0;
    case 401u: goto L_00142DEC;
    case 402u: goto L_00142DF8;
    case 403u: goto L_00142E04;
    case 404u: goto L_00142E30;
    case 405u: goto L_00142E3C;
    case 406u: goto L_00142ECC;
    case 407u: goto L_00142EDC;
    case 408u: goto L_00142F38;
    case 409u: goto L_00142F40;
    case 410u: goto L_00142F4C;
    case 411u: goto L_00142F58;
    case 412u: goto L_00142F6C;
    case 413u: goto L_00142F74;
    case 414u: goto L_00142F8C;
    case 415u: goto L_00142F94;
    case 416u: goto L_00142FA4;
    case 417u: goto L_00142FB0;
    case 418u: goto L_00142FBC;
    case 419u: goto L_00142FC8;
    case 420u: goto L_00142FD4;
    case 421u: goto L_00143000;
    case 422u: goto L_00143040;
    case 423u: goto L_00143068;
    case 424u: goto L_001430B0;
    case 425u: goto L_001430EC;
    case 426u: goto L_0014310C;
    case 427u: goto L_00143138;
    case 428u: goto L_00143158;
    case 429u: goto L_001431A0;
    case 430u: goto L_001431D8;
    case 431u: goto L_001431E8;
    case 432u: goto L_00143224;
    case 433u: goto L_00143230;
    case 434u: goto L_00143254;
    case 435u: goto L_0014326C;
    case 436u: goto L_0014327C;
    case 437u: goto L_00143298;
    case 438u: goto L_001432BC;
    case 439u: goto L_001432E8;
    case 440u: goto L_00143300;
    case 441u: goto L_00143340;
    case 442u: goto L_00143374;
    case 443u: goto L_00143384;
    case 444u: goto L_001433B8;
    case 445u: goto L_001433C4;
    case 446u: goto L_001433F8;
    case 447u: goto L_0014343C;
    case 448u: goto L_00143494;
    case 449u: goto L_001434A4;
    case 450u: goto L_001434B8;
    case 451u: goto L_001434CC;
    case 452u: goto L_001434DC;
    case 453u: goto L_00143510;
    case 454u: goto L_0014351C;
    case 455u: goto L_00143550;
    case 456u: goto L_001435EC;
    case 457u: goto L_001435FC;
    case 458u: goto L_00143610;
    case 459u: goto L_0014363C;
    case 460u: goto L_00143640;
    case 461u: goto L_001436A0;
    case 462u: goto L_001436E4;
    case 463u: goto L_00143730;
    case 464u: goto L_00143764;
    case 465u: goto L_00143774;
    case 466u: goto L_001437B0;
    case 467u: goto L_001437BC;
    case 468u: goto L_001437E0;
    case 469u: goto L_001437F4;
    case 470u: goto L_0014383C;
    case 471u: goto L_0014384C;
    case 472u: goto L_00143860;
    case 473u: goto L_0014386C;
    case 474u: goto L_00143878;
    case 475u: goto L_0014388C;
    case 476u: goto L_001438D4;
    case 477u: goto L_001438E4;
    case 478u: goto L_001438F8;
    case 479u: goto L_00143930;
    case 480u: goto L_00143970;
    case 481u: goto L_00143984;
    case 482u: goto L_001439A8;
    case 483u: goto L_00143A0C;
    case 484u: goto L_00143A30;
    case 485u: goto L_00143A38;
    case 486u: goto L_00143A48;
    case 487u: goto L_00143A68;
    case 488u: goto L_00143A88;
    case 489u: goto L_00143AA4;
    case 490u: goto L_00143AD0;
    case 491u: goto L_00143B04;
    case 492u: goto L_00143B14;
    case 493u: goto L_00143B28;
    case 494u: goto L_00143B40;
    case 495u: goto L_00143B74;
    case 496u: goto L_00143B84;
    case 497u: goto L_00143B98;
    case 498u: goto L_00143BB0;
    case 499u: goto L_00143BF8;
    case 500u: goto L_00143C0C;
    case 501u: goto L_00143C20;
    case 502u: goto L_00143C2C;
    case 503u: goto L_00143C58;
    case 504u: goto L_00143C64;
    case 505u: goto L_00143CC4;
    case 506u: goto L_00143CF8;
    case 507u: goto L_00143D18;
    case 508u: goto L_00143D28;
    case 509u: goto L_00143D3C;
    case 510u: goto L_00143D70;
    case 511u: goto L_00143D90;
    case 512u: goto L_00143DA0;
    case 513u: goto L_00143DD0;
    case 514u: goto L_00143DF4;
    case 515u: goto L_00143E00;
    case 516u: goto L_00143E10;
    case 517u: goto L_00143E20;
    case 518u: goto L_00143E2C;
    case 519u: goto L_00143E38;
    case 520u: goto L_00143E50;
    case 521u: goto L_00143E9C;
    case 522u: goto L_00143EC4;
    case 523u: goto L_00143ED8;
    case 524u: goto L_00143EF8;
    case 525u: goto L_00143F38;
    case 526u: goto L_00143F40;
    case 527u: goto L_00143F50;
    case 528u: goto L_00143F5C;
    case 529u: goto L_00143F68;
    case 530u: goto L_00143F70;
    case 531u: goto L_00143F80;
    case 532u: goto L_00143F94;
    case 533u: goto L_00143FB0;
    case 534u: goto L_00143FC0;
    case 535u: goto L_00143FCC;
    case 536u: goto L_00143FD8;
    case 537u: goto L_00143FE4;
    default: bad_entry(c, 0x00140000u); return;
    }
L_00140000:
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_00140004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00140258; } }
    goto L_0014000C;
L_00140008:
    c.budget -= 1;
L_0014000C:
    c.budget -= 1;
L_00140010:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00140014:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014001Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0014001Cu) [[unlikely]] return; }
    goto L_0014001C;
L_00140018:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0014001C:
    c.f[1] = 0u;
    c.budget -= 1;
L_00140020:
    c.budget -= 1;
L_00140024:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 1;
L_00140028:
    c.budget -= 2;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00140158; } }
L_00140030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140038u); c.f[12] = ld32((c.r[29].w[0] + 156u));  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x00140038u) [[unlikely]] return; }
L_00140038:
    c.f[12] = ld32((c.r[29].w[0] + 152u));
    c.budget -= 1;
L_0014003C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140044u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x00140044u) [[unlikely]] return; }
    goto L_00140044;
L_00140040:
    c.f[20] = c.f[0];
    c.budget -= 1;
L_00140044:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_001400D0; } }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014005Cu); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0014005Cu) [[unlikely]] return; }
L_0014005C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140068u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x00140068u) [[unlikely]] return; }
    goto L_00140068;
L_00140064:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00140068:
    st32((c.r[29].w[0] + 156u), c.f[0]);
    c.f[12] = c.f[0];
    c.budget -= 2;
L_00140070:
    c.f[0] = 0u;
    c.budget -= 2;
L_00140078:
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00140090; } }
    goto L_00140084;
L_00140080:
    c.budget -= 1;
L_00140084:
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001400A8; } }
L_00140090:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014009Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0014009Cu) [[unlikely]] return; }
L_0014009C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00140258; } }
    c.budget -= 1;
L_001400A8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001400B4u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001400B4u) [[unlikely]] return; }
L_001400B4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001400C4u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001400C4u) [[unlikely]] return; }
    goto L_001400C4;
L_001400C0:
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_001400C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00140258; } }
    c.budget -= 1;
L_001400D0:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[20].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001400E0u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001400E0u) [[unlikely]] return; }
L_001400E0:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001400ECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001400ECu) [[unlikely]] return; }
L_001400EC:
    st32((c.r[29].w[0] + 156u), c.f[0]);
    c.f[12] = c.f[0];
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 5;
L_00140100:
    c.budget -= 2;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00140118; } }
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00140130; } }
    c.budget -= 1;
L_00140118:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140124u); set32(c.r[5], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00140124u) [[unlikely]] return; }
L_00140124:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00140258; } }
L_0014012C:
    c.budget -= 1;
L_00140130:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014013Cu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0014013Cu) [[unlikely]] return; }
L_0014013C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00140140:
    set32(c.r[5], c.r[20].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014014Cu); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0014014Cu) [[unlikely]] return; }
L_0014014C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00140258; } }
    c.budget -= 1;
L_00140158:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00140258; } }
L_00140160:
    set32(c.r[4], c.r[20].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014016Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0014016Cu) [[unlikely]] return; }
L_0014016C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 152u), c.f[0]);  if (t) { goto L_00140190; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001401A8; } }
    c.budget -= 1;
L_00140190:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[29].w[0] + 156u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001401A0u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001401A0u) [[unlikely]] return; }
L_001401A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001401C8; } }
L_001401A8:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[1] = ld32((c.r[29].w[0] + 156u));
    set32(c.r[5], c.r[20].w[0] + 48u);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001401C8u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001401C8u) [[unlikely]] return; }
L_001401C8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001401D8u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001401D8u) [[unlikely]] return; }
L_001401D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00140258; } }
L_001401E0:
    set32(c.r[4], c.r[20].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001401ECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001401ECu) [[unlikely]] return; }
L_001401EC:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 156u), c.f[0]);  if (t) { goto L_00140210; } }
L_00140200:
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00140228; } }
    c.budget -= 1;
L_00140210:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[29].w[0] + 152u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140220u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00140220u) [[unlikely]] return; }
    goto L_00140220;
L_0014021C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_00140220:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00140248; } }
L_00140228:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[1] = ld32((c.r[29].w[0] + 152u));
    set32(c.r[5], c.r[20].w[0] + 32u);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 4;
L_00140238:
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140248u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00140248u) [[unlikely]] return; }
L_00140248:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140258u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00140258u) [[unlikely]] return; }
L_00140258:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00140280:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
L_00140290:
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001402ACu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001402ACu) [[unlikely]] return; }
L_001402AC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001402B8u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001402B8u) [[unlikely]] return; }
L_001402B8:
    c.f[1] = 0u;
    set32(c.r[2], 0u + 1u);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0]), c.f[0]);  if (t) { goto L_001402D0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001402D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001402F0:
    set32(c.r[29], c.r[29].w[0] - 384u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 16;
L_00140330:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[21].w[0] + 176u);
    set32(c.r[6], c.r[17].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140344u); set32(c.r[7], c.r[29].w[0] + 380u);  if (depth < kMaxDepth) unit_0010(c, 48u, depth + 1u); else { c.pc = 0x00140280u; return; } if (c.pc != 0x00140344u) [[unlikely]] return; }
L_00140344:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 16u);
    set32(c.r[5], c.r[21].w[0] + 176u);
    set32(c.r[6], c.r[17].w[0] + 144u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014035Cu); set32(c.r[7], c.r[29].w[0] + 376u);  if (depth < kMaxDepth) unit_0010(c, 48u, depth + 1u); else { c.pc = 0x00140280u; return; } if (c.pc != 0x0014035Cu) [[unlikely]] return; }
L_0014035C:
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u + 3u);
    c.r[19].d[0] = c.r[19].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_001403D8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001403D8; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_00140398; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00140398; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00140410; } }
    c.budget -= 1;
L_00140398:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.f[1] = ld32((c.r[21].w[0] + 192u));
    set32(c.r[5], c.r[17].w[0] + 144u);
    c.f[0] = ld32((c.r[20].w[0] + 96u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001403B4u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001403B4u) [[unlikely]] return; }
L_001403B4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 352u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001403CCu); set32(c.r[8], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_000F(c, 432u, depth + 1u); else { c.pc = 0x0013FE10u; return; } if (c.pc != 0x001403CCu) [[unlikely]] return; }
L_001403CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00140410; } }
    c.budget -= 1;
L_001403D8:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.f[1] = ld32((c.r[21].w[0] + 192u));
    set32(c.r[5], c.r[17].w[0] + 144u);
    c.f[0] = ld32((c.r[20].w[0] + 96u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001403F0u); c.f[12] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001403F0u) [[unlikely]] return; }
L_001403F0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 352u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140408u); set32(c.r[8], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_000F(c, 432u, depth + 1u); else { c.pc = 0x0013FE10u; return; } if (c.pc != 0x00140408u) [[unlikely]] return; }
L_00140408:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00140410:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 336u);  if (t) { goto L_00140440; } }
    goto L_00140418;
L_00140414:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 1;
L_00140418:
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140424u); set32(c.r[6], c.r[17].w[0] + 144u);  if (depth < kMaxDepth) unit_0011(c, 65u, depth + 1u); else { c.pc = 0x00144C30u; return; } if (c.pc != 0x00140424u) [[unlikely]] return; }
L_00140424:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_00140440; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140434u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00140434u) [[unlikely]] return; }
L_00140434:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00140608; } }
    c.budget -= 1;
L_00140440:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00140330u | kUnwind; return; } goto L_00140330; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[18], 0u - 1u);
    c.budget -= 2;
L_0014045C:
    set32(c.r[17], c.r[17].w[0] + 2824u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[29].w[0] + 304u);
    c.budget -= 3;
L_00140468:
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[6], c.r[29].w[0] + 192u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] + 48u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140490u); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0010(c, 513u, depth + 1u); else { c.pc = 0x00143DD0u; return; } if (c.pc != 0x00140490u) [[unlikely]] return; }
L_00140490:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001404A0u); set32(c.r[6], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_0010(c, 520u, depth + 1u); else { c.pc = 0x00143E50u; return; } if (c.pc != 0x001404A0u) [[unlikely]] return; }
L_001404A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001404B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00140608; } }
L_001404B0:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001404BCu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001404BCu) [[unlikely]] return; }
L_001404BC:
    st32((c.r[29].w[0] + 380u), c.f[0]);
    c.f[2] = ld32((c.r[21].w[0] + 192u));
    c.f[1] = ld32((c.r[20].w[0] + 96u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u - 1u);  if (t) { goto L_00140508; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_001404F0; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00140508; } }
    c.budget -= 1;
L_001404F0:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001404FCu); set32(c.r[5], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001404FCu) [[unlikely]] return; }
L_001404FC:
    c.f[20] = ld32((c.r[29].w[0] + 380u));
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_00140508:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00140468u | kUnwind; return; } goto L_00140468; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00140530; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00140608; } }
    c.budget -= 1;
L_00140530:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014053Cu); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0014053Cu) [[unlikely]] return; }
L_0014053C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140548u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00140548u) [[unlikely]] return; }
L_00140548:
    c.f[0] = ld32((c.r[21].w[0] + 192u));
    set32(c.r[16], c.r[29].w[0] + 176u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 336u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140564u); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 37u, depth + 1u); else { c.pc = 0x00144460u; return; } if (c.pc != 0x00140564u) [[unlikely]] return; }
L_00140564:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00140598; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00140580; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001405D0; } }
L_00140580:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014058Cu); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0014058Cu) [[unlikely]] return; }
L_0014058C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00140600; } }
    c.budget -= 1;
L_00140598:
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[5], c.r[29].w[0] + 336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001405A8u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001405A8u) [[unlikely]] return; }
L_001405A8:
    c.f[12] = ld32((c.r[16].w[0]));
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001405B8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x001405B8u) [[unlikely]] return; }
L_001405B8:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001405C8u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x001405C8u) [[unlikely]] return; }
L_001405C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00140600; } }
L_001405D0:
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[5], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001405E0u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001405E0u) [[unlikely]] return; }
L_001405E0:
    c.f[12] = ld32((c.r[16].w[0]));
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001405F0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x001405F0u) [[unlikely]] return; }
L_001405F0:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140600u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x00140600u) [[unlikely]] return; }
L_00140600:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00140608:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 384u);  c.pc = t; return; }
L_00140640:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 144u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 48u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014066Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0010(c, 520u, depth + 1u); else { c.pc = 0x00143E50u; return; } if (c.pc != 0x0014066Cu) [[unlikely]] return; }
L_0014066C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[29].w[0] + 160u);  if (t) { goto L_00140740; } }
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140680u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x00140680u) [[unlikely]] return; }
L_00140680:
    c.f[2] = ld32((c.r[18].w[0] + 144u));
    c.f[1] = ld32((c.r[17].w[0] + 144u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_00140738; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001406A0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001406A0u) [[unlikely]] return; }
L_001406A0:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001406ACu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001406ACu) [[unlikely]] return; }
L_001406AC:
    c.f[0] = ld32((c.r[17].w[0] + 144u));
    set32(c.r[4], c.r[18].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001406C4u); st32((c.r[29].w[0] + 112u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 37u, depth + 1u); else { c.pc = 0x00144460u; return; } if (c.pc != 0x001406C4u) [[unlikely]] return; }
L_001406C4:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001406E0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001406E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001406F8; } }
L_001406E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001406F0u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001406F0u) [[unlikely]] return; }
L_001406F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00140750; } }
L_001406F8:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140708u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00140708u) [[unlikely]] return; }
L_00140708:
    c.f[12] = ld32((c.r[17].w[0] + 144u));
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140718u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x00140718u) [[unlikely]] return; }
L_00140718:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014072Cu); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x0014072Cu) [[unlikely]] return; }
L_0014072C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00140750; } }
    c.budget -= 1;
L_00140738:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00140758; } }
L_00140740:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140750u); set32(c.r[4], c.r[4].w[0] + 19072u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00140750u) [[unlikely]] return; }
L_00140750:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00140758:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 3;
L_00140764:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00140770:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[19].w[0] + 16u);
    set32(c.r[6], c.r[18].w[0] + 16u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001407A4u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001407A4u) [[unlikely]] return; }
L_001407A4:
    set32(c.r[17], c.r[29].w[0] + 100u);
    set32(c.r[16], c.r[29].w[0] + 104u);
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.f[2] = ld32((c.r[16].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001407CCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001407CCu) [[unlikely]] return; }
L_001407CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00140818; } }
    set32(c.r[6], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[17].w[0]), 0u);
    st32((c.r[16].w[0]), 0u);
    c.f[1] = ld32((c.r[19].w[0] + 48u));
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140810u); c.f[12] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 78u, depth + 1u); else { c.pc = 0x00144E60u; return; } if (c.pc != 0x00140810u) [[unlikely]] return; }
L_00140810:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00140880; } }
L_00140818:
    c.f[2] = ld32((c.r[18].w[0] + 48u));
    c.f[1] = ld32((c.r[19].w[0] + 48u));
    c.f[20] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00140878; } }
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140844u); set32(c.r[6], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00140844u) [[unlikely]] return; }
L_00140844:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.f[12] = c.f[20];
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140858u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0011(c, 78u, depth + 1u); else { c.pc = 0x00144E60u; return; } if (c.pc != 0x00140858u) [[unlikely]] return; }
L_00140858:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014086Cu); set32(c.r[6], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0010(c, 404u, depth + 1u); else { c.pc = 0x00142E30u; return; } if (c.pc != 0x0014086Cu) [[unlikely]] return; }
L_0014086C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00140880; } }
    c.budget -= 1;
L_00140878:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00140880:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001408A0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001408D0u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001408D0u) [[unlikely]] return; }
L_001408D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001408E0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x001408E0u) [[unlikely]] return; }
L_001408E0:
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001408ECu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001408ECu) [[unlikely]] return; }
L_001408EC:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001408F8u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001408F8u) [[unlikely]] return; }
L_001408F8:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140908u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00140908u) [[unlikely]] return; }
L_00140908:
    c.f[1] = ld32((c.r[17].w[0] + 148u));
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    c.f[2] = ld32((c.r[29].w[0] + 128u));
    c.f[3] = ld32((c.r[29].w[0] + 136u));
    c.f[21] = fp::add(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140928u); c.f[12] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x00140928u) [[unlikely]] return; }
L_00140928:
    set32(c.r[16], c.r[29].w[0] + 132u);
    c.r[4].d[0] = 0ull + 0ull;
    c.f[22] = ld32((c.r[16].w[0]));
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[21]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[20] = c.f[0];  if (t) { goto L_00140958; } }
    c.f[0] = c.f[21] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00140958; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 2;
L_00140958:
    c.f[2] = ld32((c.r[17].w[0] + 144u));
    c.f[1] = ld32((c.r[18].w[0] + 48u));
    c.f[0] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_00140974; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00140974:
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u + 3u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00140990; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00140DA8; } }
L_00140990:
    c.f[21] = ld32((c.r[17].w[0] + 148u));
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_001409A4; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001409A4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.f[0] = c.f[21] ^ fp::kSign;  if (t) { goto L_001409BC; } }
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], 0u + 1u);  if (t) { goto L_001409BC; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001409BC:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001409CC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001409CC:
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u + 3u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00140C40; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00140B98; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00140B28; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00140A08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00140DA0; } }
    c.budget -= 1;
L_00140A08:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00140A20; } }
    c.f[21] = c.f[21] ^ fp::kSign;
    c.budget -= 1;
L_00140A20:
    st32((c.r[16].w[0]), 0u);
    c.f[12] = ld32((c.r[17].w[0] + 144u));
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140A34u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x00140A34u) [[unlikely]] return; }
L_00140A34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140A48u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x00140A48u) [[unlikely]] return; }
L_00140A48:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140A58u); st32((c.r[16].w[0]), c.f[21]);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00140A58u) [[unlikely]] return; }
L_00140A58:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140A64u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x00127450u; return; } if (c.pc != 0x00140A64u) [[unlikely]] return; }
L_00140A64:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140A70u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 217u, depth + 1u); else { c.pc = 0x00127620u; return; } if (c.pc != 0x00140A70u) [[unlikely]] return; }
L_00140A70:
    c.f[22] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140A7Cu); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00125FA0u; return; } if (c.pc != 0x00140A7Cu) [[unlikely]] return; }
L_00140A7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140A84u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x00140A84u) [[unlikely]] return; }
L_00140A84:
    c.f[1] = ld32((c.r[18].w[0] + 48u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140AA0u); c.f[21] = fp::add(c.f[21], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00140AA0u) [[unlikely]] return; }
L_00140AA0:
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = c.f[21] ^ fp::kSign;  if (t) { goto L_00140DA0; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00140DA0; } }
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    c.f[1] = ld32((c.r[17].w[0] + 144u));
    c.f[0] = fp::mul(c.f[0], c.f[22]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 128u);  if (t) { goto L_00140DA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140AE0u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00140AE0u) [[unlikely]] return; }
L_00140AE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140AE8u); set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00140AE8u) [[unlikely]] return; }
L_00140AE8:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140AF4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x00140AF4u) [[unlikely]] return; }
L_00140AF4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140B00u); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x00127450u; return; } if (c.pc != 0x00140B00u) [[unlikely]] return; }
L_00140B00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140B08u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x00140B08u) [[unlikely]] return; }
L_00140B08:
    c.f[1] = ld32((c.r[18].w[0] + 48u));
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140B20u); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 78u, depth + 1u); else { c.pc = 0x00144E60u; return; } if (c.pc != 0x00140B20u) [[unlikely]] return; }
L_00140B20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00140DA8; } }
L_00140B28:
    st32((c.r[16].w[0]), 0u);
    c.f[12] = ld32((c.r[17].w[0] + 144u));
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140B3Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x00140B3Cu) [[unlikely]] return; }
L_00140B3C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140B4Cu); st32((c.r[16].w[0]), c.f[22]);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00140B4Cu) [[unlikely]] return; }
L_00140B4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140B54u); set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00140B54u) [[unlikely]] return; }
L_00140B54:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140B60u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x00140B60u) [[unlikely]] return; }
L_00140B60:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140B6Cu); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x00127450u; return; } if (c.pc != 0x00140B6Cu) [[unlikely]] return; }
L_00140B6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140B74u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x00140B74u) [[unlikely]] return; }
L_00140B74:
    c.f[1] = ld32((c.r[18].w[0] + 48u));
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140B8Cu); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 78u, depth + 1u); else { c.pc = 0x00144E60u; return; } if (c.pc != 0x00140B8Cu) [[unlikely]] return; }
L_00140B8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00140DA8; } }
    c.budget -= 1;
L_00140B98:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = fp::add(c.f[21], c.f[1]);  if (t) { goto L_00140BB8; } }
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { goto L_00140BC0; } }
L_00140BB8:
    c.f[0] = fp::add(c.f[21], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 2;
L_00140BC0:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140BCCu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00140BCCu) [[unlikely]] return; }
L_00140BCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140BD4u); set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00140BD4u) [[unlikely]] return; }
L_00140BD4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140BE0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x00140BE0u) [[unlikely]] return; }
L_00140BE0:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140BECu); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x00127450u; return; } if (c.pc != 0x00140BECu) [[unlikely]] return; }
L_00140BEC:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.f[12] = ld32((c.r[17].w[0] + 144u));
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], c.r[17].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140C04u); set32(c.r[7], c.r[17].w[0] + 112u);  if (depth < kMaxDepth) unit_0011(c, 98u, depth + 1u); else { c.pc = 0x00145240u; return; } if (c.pc != 0x00140C04u) [[unlikely]] return; }
L_00140C04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00140C18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00140DA8; } }
    c.budget -= 1;
L_00140C18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140C20u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x00140C20u) [[unlikely]] return; }
L_00140C20:
    c.f[1] = ld32((c.r[18].w[0] + 48u));
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140C38u); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 78u, depth + 1u); else { c.pc = 0x00144E60u; return; } if (c.pc != 0x00140C38u) [[unlikely]] return; }
L_00140C38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00140DA8; } }
L_00140C40:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140C50u); set32(c.r[6], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00140C50u) [[unlikely]] return; }
L_00140C50:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140C5Cu); set32(c.r[5], c.r[17].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x00140C5Cu) [[unlikely]] return; }
L_00140C5C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00140C74; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00140C74:
    set32(c.r[16], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140C88u); set32(c.r[6], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00140C88u) [[unlikely]] return; }
L_00140C88:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140C94u); set32(c.r[5], c.r[17].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x00140C94u) [[unlikely]] return; }
L_00140C94:
    c.f[1] = 0u;
    set32(c.r[2], 0u + 1u);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[20] = c.f[0];  if (t) { goto L_00140CAC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00140CAC:
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 128u);  if (t) { goto L_00140D98; } }
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140CC8u); set32(c.r[6], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00140CC8u) [[unlikely]] return; }
L_00140CC8:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140CD4u); set32(c.r[5], c.r[17].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x00140CD4u) [[unlikely]] return; }
L_00140CD4:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00140D10; } }
    c.f[12] = ld32((c.r[18].w[0] + 48u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140CF8u); set32(c.r[5], c.r[17].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00140CF8u) [[unlikely]] return; }
L_00140CF8:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140D08u); set32(c.r[6], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x00140D08u) [[unlikely]] return; }
L_00140D08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00140D58; } }
L_00140D10:
    set32(c.r[4], c.r[29].w[0] + 128u);
    fpu_div(c, 12u, c.f[20], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140D28u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00140D28u) [[unlikely]] return; }
L_00140D28:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140D38u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00140D38u) [[unlikely]] return; }
L_00140D38:
    c.f[12] = ld32((c.r[18].w[0] + 48u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140D48u); set32(c.r[5], c.r[17].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00140D48u) [[unlikely]] return; }
L_00140D48:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140D54u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00140D54u) [[unlikely]] return; }
L_00140D54:
    c.budget -= 1;
L_00140D58:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140D64u); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x00127450u; return; } if (c.pc != 0x00140D64u) [[unlikely]] return; }
L_00140D64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140D6Cu); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x00140D6Cu) [[unlikely]] return; }
L_00140D6C:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.f[12] = c.f[0];
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140D80u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0011(c, 78u, depth + 1u); else { c.pc = 0x00144E60u; return; } if (c.pc != 0x00140D80u) [[unlikely]] return; }
L_00140D80:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.f[12] = ld32((c.r[17].w[0] + 144u));
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], c.r[17].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140D98u); set32(c.r[7], c.r[17].w[0] + 112u);  if (depth < kMaxDepth) unit_0011(c, 98u, depth + 1u); else { c.pc = 0x00145240u; return; } if (c.pc != 0x00140D98u) [[unlikely]] return; }
L_00140D98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00140DA8; } }
L_00140DA0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00140DA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00140DD0:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 256u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140E14u); set32(c.r[5], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_002E(c, 117u, depth + 1u); else { c.pc = 0x001B9AF0u; return; } if (c.pc != 0x00140E14u) [[unlikely]] return; }
L_00140E14:
    set32(c.r[16], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140E24u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x00127450u; return; } if (c.pc != 0x00140E24u) [[unlikely]] return; }
L_00140E24:
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[3], c.r[29].w[0] + 244u);
    c.f[0] = ld32((c.r[20].w[0] + 48u));
    set32(c.r[2], c.r[29].w[0] + 248u);
    c.r[22].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 240u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = ld32((c.r[20].w[0] + 48u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[20].w[0] + 48u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 240u));
    c.f[1] = ld32((c.r[29].w[0] + 256u));
    c.f[0] = c.f[2] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 22;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00140E90; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00140E90; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 2;
L_00140E90:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00140ED0; } }
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 260u));
    c.f[0] = c.f[2] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00140EC0; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00140EC0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00140EC0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00140ED0; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 2;
L_00140ED0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00140F10; } }
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 264u));
    c.f[0] = c.f[2] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00140F00; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00140F00; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00140F00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00140F10; } }
    set32(c.r[22], 0u + 1u);
    c.budget -= 2;
L_00140F10:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_00141608; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00140F60; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00140F60; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00140F60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140F50u); set32(c.r[5], ld32((c.r[19].w[0] + 4u)));  if (depth < kMaxDepth) unit_0011(c, 99u, depth + 1u); else { c.pc = 0x00145340u; return; } if (c.pc != 0x00140F50u) [[unlikely]] return; }
L_00140F50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00140F60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00141610; } }
L_00140F60:
    c.r[21].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], c.r[29].w[0] + 192u);
    c.budget -= 4;
L_00140F70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55550000u);
    c.r[2].d[0] = c.r[2].d[0] | 21846ull;
    set32(c.r[3], c.r[18].w[0] >> 31);
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], c.r[20].w[0] + 16u);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140FA0u); set32(c.r[6], c.r[2].w[0] + 272u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00140FA0u) [[unlikely]] return; }
L_00140FA0:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140FACu); set32(c.r[5], c.r[17].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x00140FACu) [[unlikely]] return; }
L_00140FAC:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140FB8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x00140FB8u) [[unlikely]] return; }
L_00140FB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00140FD8; } }
    c.f[20] = 0u;
    c.budget -= 1;
L_00140FD8:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[12] = c.f[20];  if (t) { goto L_00141010; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00140FF4u);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x00140FF4u) [[unlikely]] return; }
L_00140FF4:
    c.f[1] = ld32((c.r[20].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00141010; } }
    st32((c.r[16].w[0]), c.r[18].w[0]);
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 3;
L_00141010:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00140F70u | kUnwind; return; } goto L_00140F70; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00141578; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == c.r[2].d[0];  if (t) { goto L_00141378; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[2].d[0];  if (t) { goto L_00141290; } }
    goto L_00141040;
L_0014103C:
    c.budget -= 1;
L_00141040:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_00141050; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00141608; } }
L_00141050:
    c.r[16].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[21], c.r[29].w[0] + 160u);
    c.budget -= 4;
L_00141060:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55550000u);
    c.r[2].d[0] = c.r[2].d[0] | 21846ull;
    set32(c.r[3], c.r[16].w[0] >> 31);
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
L_00141080:
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141090u); set32(c.r[5], c.r[2].w[0] + 272u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00141090u) [[unlikely]] return; }
L_00141090:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014109Cu); set32(c.r[5], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0014109Cu) [[unlikely]] return; }
L_0014109C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001410A8u); set32(c.r[5], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001410A8u) [[unlikely]] return; }
L_001410A8:
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001410B8u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001410B8u) [[unlikely]] return; }
L_001410B8:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001410C4u); set32(c.r[5], c.r[18].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001410C4u) [[unlikely]] return; }
    goto L_001410C4;
L_001410C0:
    set32(c.r[5], c.r[18].w[0] + 176u);
    c.budget -= 1;
L_001410C4:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[21] = c.f[0];  if (t) { goto L_001410E0; } }
    c.r[17].d[0] = c.r[17].d[0] | 1ull;
    c.budget -= 2;
L_001410E0:
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001410F0u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001410F0u) [[unlikely]] return; }
L_001410F0:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001410FCu); set32(c.r[5], c.r[18].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001410FCu) [[unlikely]] return; }
L_001410FC:
    c.f[1] = 0u;
    c.budget -= 2;
L_00141104:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[20] = c.f[0];  if (t) { goto L_00141118; } }
    c.r[17].d[0] = c.r[17].d[0] | 2ull;
    c.budget -= 2;
L_00141118:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001411F0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001411A8; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00141150; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00141148; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00141278; } }
L_00141148:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00141610; } }
L_00141150:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00141278; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014116Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 99u, depth + 1u); else { c.pc = 0x00145340u; return; } if (c.pc != 0x0014116Cu) [[unlikely]] return; }
L_0014116C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00141278; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 522u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 3;
L_00141180:
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001411A0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8657u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    st8((c.r[2].w[0] + 519u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_001411A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00141610; } }
L_001411A8:
    set32(c.r[2], c.r[16].w[0] << 4);
    c.f[0] = ld32((c.r[20].w[0] + 48u));
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] + 176u);
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.f[21] = fp::add(c.f[21], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001411D0u); c.f[12] = c.f[21] ^ fp::kSign;  if (depth < kMaxDepth) unit_0011(c, 78u, depth + 1u); else { c.pc = 0x00144E60u; return; } if (c.pc != 0x001411D0u) [[unlikely]] return; }
L_001411D0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001411E4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 391u, depth + 1u); else { c.pc = 0x00142C90u; return; } if (c.pc != 0x001411E4u) [[unlikely]] return; }
L_001411E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00141610; } }
    c.budget -= 1;
L_001411F0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00141230; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00141230; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.f[12] = 0u;
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[6], c.r[19].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141220u); set32(c.r[7], c.r[19].w[0] + 176u);  if (depth < kMaxDepth) unit_0011(c, 98u, depth + 1u); else { c.pc = 0x00145240u; return; } if (c.pc != 0x00141220u) [[unlikely]] return; }
L_00141220:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00141230; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00141610; } }
L_00141230:
    set32(c.r[2], c.r[16].w[0] << 4);
    c.f[0] = ld32((c.r[20].w[0] + 48u));
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] + 176u);
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141258u); c.f[12] = c.f[20] ^ fp::kSign;  if (depth < kMaxDepth) unit_0011(c, 78u, depth + 1u); else { c.pc = 0x00144E60u; return; } if (c.pc != 0x00141258u) [[unlikely]] return; }
L_00141258:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014126Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 391u, depth + 1u); else { c.pc = 0x00142C90u; return; } if (c.pc != 0x0014126Cu) [[unlikely]] return; }
L_0014126C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00141610; } }
    c.budget -= 1;
L_00141278:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00141060u | kUnwind; return; } goto L_00141060; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_00141608; } }
L_00141290:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001412D0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001412D0; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.f[12] = 0u;
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[6], c.r[19].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001412C4u); set32(c.r[7], c.r[19].w[0] + 176u);  if (depth < kMaxDepth) unit_0011(c, 98u, depth + 1u); else { c.pc = 0x00145240u; return; } if (c.pc != 0x001412C4u) [[unlikely]] return; }
L_001412C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00141608; } }
    c.budget -= 1;
L_001412D0:
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55550000u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.r[2].d[0] = c.r[2].d[0] | 21846ull;
    set32(c.r[5], c.r[20].w[0] + 16u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014130Cu); set32(c.r[6], c.r[2].w[0] + 272u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0014130Cu) [[unlikely]] return; }
L_0014130C:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141324u); set32(c.r[5], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x00141324u) [[unlikely]] return; }
L_00141324:
    c.f[1] = ld32((c.r[20].w[0] + 48u));
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[2].w[0] + 176u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014134Cu); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0011(c, 78u, depth + 1u); else { c.pc = 0x00144E60u; return; } if (c.pc != 0x0014134Cu) [[unlikely]] return; }
L_0014134C:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014136Cu); set32(c.r[6], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_0010(c, 391u, depth + 1u); else { c.pc = 0x00142C90u; return; } if (c.pc != 0x0014136Cu) [[unlikely]] return; }
L_0014136C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00141608; } }
    c.budget -= 1;
L_00141378:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141384u); set32(c.r[5], c.r[29].w[0] + 280u);  if (depth < kMaxDepth) unit_0011(c, 72u, depth + 1u); else { c.pc = 0x00144D30u; return; } if (c.pc != 0x00141384u) [[unlikely]] return; }
L_00141384:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00141608; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 280u)));
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], c.r[20].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001413A8u); set32(c.r[6], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001413A8u) [[unlikely]] return; }
L_001413A8:
    set32(c.r[16], c.r[29].w[0] + 284u);
    set32(c.r[2], ld32((c.r[29].w[0] + 280u)));
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[2].w[0] + 48u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001413D4u); set32(c.r[5], c.r[3].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001413D4u) [[unlikely]] return; }
L_001413D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001413DCu); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001413DCu) [[unlikely]] return; }
L_001413DC:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001413E8u); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001413E8u) [[unlikely]] return; }
L_001413E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
L_001413FC:
    c.budget -= 2;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00141408; } }
    c.f[0] = 0u;
    c.budget -= 1;
L_00141408:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141418u); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00141418u) [[unlikely]] return; }
L_00141418:
    set32(c.r[2], ld32((c.r[29].w[0] + 280u)));
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141430u); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00141430u) [[unlikely]] return; }
L_00141430:
    set32(c.r[2], ld32((c.r[29].w[0] + 280u)));
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 3;
L_0014143C:
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014144Cu); set32(c.r[6], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0014144Cu) [[unlikely]] return; }
L_0014144C:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141458u); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x00141458u) [[unlikely]] return; }
L_00141458:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001414A0; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 280u)));
    set32(c.r[2], c.r[29].w[0] + 224u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    c.f[3] = ld32((c.r[3].w[0] + 48u));
    c.f[2] = ld32((c.r[3].w[0] + 52u));
    c.f[1] = ld32((c.r[3].w[0] + 56u));
    c.f[0] = ld32((c.r[3].w[0] + 60u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.budget -= 13;
L_001414A0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001414BCu); set32(c.r[6], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001414BCu) [[unlikely]] return; }
L_001414BC:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001414C8u); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001414C8u) [[unlikely]] return; }
L_001414C8:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00141510; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[29].w[0] + 224u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    c.f[3] = ld32((c.r[3].w[0] + 48u));
    c.f[2] = ld32((c.r[3].w[0] + 52u));
    c.f[1] = ld32((c.r[3].w[0] + 56u));
    c.f[0] = ld32((c.r[3].w[0] + 60u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.budget -= 13;
L_00141510:
    set32(c.r[4], c.r[20].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014151Cu); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0014151Cu) [[unlikely]] return; }
L_0014151C:
    c.f[1] = ld32((c.r[20].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (t) { goto L_00141570; } }
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014153Cu); set32(c.r[6], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0014153Cu) [[unlikely]] return; }
L_0014153C:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.f[12] = c.f[20];
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141550u); set32(c.r[6], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0011(c, 78u, depth + 1u); else { c.pc = 0x00144E60u; return; } if (c.pc != 0x00141550u) [[unlikely]] return; }
L_00141550:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141564u); set32(c.r[6], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0010(c, 404u, depth + 1u); else { c.pc = 0x00142E30u; return; } if (c.pc != 0x00141564u) [[unlikely]] return; }
L_00141564:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00141610; } }
    c.budget -= 1;
L_00141570:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00141610; } }
L_00141578:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141584u); set32(c.r[5], c.r[29].w[0] + 280u);  if (depth < kMaxDepth) unit_0011(c, 75u, depth + 1u); else { c.pc = 0x00144DC0u; return; } if (c.pc != 0x00141584u) [[unlikely]] return; }
L_00141584:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00141608; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 280u)));
    set32(c.r[4], c.r[20].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001415A4u); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001415A4u) [[unlikely]] return; }
L_001415A4:
    c.f[1] = ld32((c.r[20].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00141608; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 280u)));
    c.f[20] = fp::sub(c.f[1], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[6], c.r[20].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001415D4u); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001415D4u) [[unlikely]] return; }
    goto L_001415D4;
L_001415D0:
    set32(c.r[5], c.r[2].w[0] + 48u);
    c.budget -= 1;
L_001415D4:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.f[12] = c.f[20];
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001415E8u); set32(c.r[6], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0011(c, 78u, depth + 1u); else { c.pc = 0x00144E60u; return; } if (c.pc != 0x001415E8u) [[unlikely]] return; }
L_001415E8:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 280u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141608u); set32(c.r[6], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0010(c, 404u, depth + 1u); else { c.pc = 0x00142E30u; return; } if (c.pc != 0x00141608u) [[unlikely]] return; }
L_00141608:
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 2;
L_00141610:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_0014163C:
    set32(c.r[29], c.r[29].w[0] + 288u);
    c.budget -= 1;
L_00141640:
    set32(c.r[29], c.r[29].w[0] - 384u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[19].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 20;
L_00141690:
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[5], c.r[20].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001416A0u); set32(c.r[6], c.r[19].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001416A0u) [[unlikely]] return; }
L_001416A0:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001416ACu); set32(c.r[5], c.r[16].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001416ACu) [[unlikely]] return; }
L_001416AC:
    c.f[20] = c.f[0];
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001416BCu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x001416BCu) [[unlikely]] return; }
L_001416BC:
    c.f[2] = ld32((c.r[20].w[0] + 48u));
    c.f[1] = ld32((c.r[19].w[0] + 192u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[29].w[0] + 368u);  if (t) { goto L_001416F8; } }
    set32(c.r[5], c.r[16].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001416E0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001416E0u) [[unlikely]] return; }
L_001416E0:
    set32(c.r[4], c.r[29].w[0] + 368u);
    set32(c.r[5], c.r[20].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001416F0u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001416F0u) [[unlikely]] return; }
L_001416F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00141728; } }
L_001416F8:
    set32(c.r[4], c.r[20].w[0] + 16u);
    set32(c.r[5], c.r[16].w[0] + 144u);
    set32(c.r[6], c.r[19].w[0] + 176u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014170Cu); set32(c.r[7], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_0010(c, 498u, depth + 1u); else { c.pc = 0x00143BB0u; return; } if (c.pc != 0x0014170Cu) [[unlikely]] return; }
L_0014170C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00141A60; } }
    set32(c.r[2], c.r[29].w[0] + 368u);
    set32(c.r[3], c.r[29].w[0] + 336u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[17], 0u + 1u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.budget -= 5;
L_00141728:
    set32(c.r[4], c.r[29].w[0] + 368u);
    set32(c.r[5], c.r[18].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141738u); set32(c.r[6], c.r[16].w[0] + 144u);  if (depth < kMaxDepth) unit_0011(c, 65u, depth + 1u); else { c.pc = 0x00144C30u; return; } if (c.pc != 0x00141738u) [[unlikely]] return; }
L_00141738:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00141A60; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 1;
L_00141744:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00141810; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001417C0; } }
    c.f[1] = ld32((c.r[20].w[0] + 48u));
    set32(c.r[2], c.r[21].w[0] << 4);
    c.f[0] = ld32((c.r[19].w[0] + 192u));
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[2].w[0] + 144u);
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141790u); c.f[20] = fp::sub(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00141790u) [[unlikely]] return; }
L_00141790:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.f[12] = c.f[20];
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001417A4u); set32(c.r[6], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_0011(c, 78u, depth + 1u); else { c.pc = 0x00144E60u; return; } if (c.pc != 0x001417A4u) [[unlikely]] return; }
L_001417A4:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001417B8u); set32(c.r[6], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_0010(c, 391u, depth + 1u); else { c.pc = 0x00142C90u; return; } if (c.pc != 0x001417B8u) [[unlikely]] return; }
L_001417B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00141808; } }
L_001417C0:
    set32(c.r[2], c.r[21].w[0] << 4);
    c.f[1] = ld32((c.r[20].w[0] + 48u));
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[19].w[0] + 192u));
    set32(c.r[16], c.r[2].w[0] + 144u);
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001417F0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0011(c, 78u, depth + 1u); else { c.pc = 0x00144E60u; return; } if (c.pc != 0x001417F0u) [[unlikely]] return; }
L_001417F0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141804u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 391u, depth + 1u); else { c.pc = 0x00142C90u; return; } if (c.pc != 0x00141804u) [[unlikely]] return; }
L_00141804:
    c.budget -= 1;
L_00141808:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00141E88; } }
L_00141810:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00141870; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00141870; } }
    set32(c.r[5], c.r[29].w[0] + 320u);
    c.budget -= 1;
L_0014183C:
    st32((c.r[29].w[0] + 324u), c.r[2].w[0]);
    c.budget -= 1;
L_00141840:
    st32((c.r[29].w[0] + 320u), c.f[0]);
    c.budget -= 1;
L_00141844:
    set32(c.r[2], c.r[21].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 328u), c.f[0]);
    set32(c.r[4], c.r[2].w[0] + 144u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014185Cu); st32((c.r[29].w[0] + 332u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 217u, depth + 1u); else { c.pc = 0x00127620u; return; } if (c.pc != 0x0014185Cu) [[unlikely]] return; }
L_0014185C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141864u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00125FA0u; return; } if (c.pc != 0x00141864u) [[unlikely]] return; }
L_00141864:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].sd[0] < 8192ll ? 1ull : 0ull;  if (t) { goto L_00141878; } }
    c.budget -= 1;
L_00141870:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00141878:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00141980; } }
L_00141880:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00141898; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00141E88; } }
L_00141898:
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001418ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 99u, depth + 1u); else { c.pc = 0x00145340u; return; } if (c.pc != 0x001418ACu) [[unlikely]] return; }
L_001418AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 352u);  if (t) { goto L_00141920; } }
    set32(c.r[5], c.r[20].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001418C0u); set32(c.r[6], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001418C0u) [[unlikely]] return; }
L_001418C0:
    c.f[0] = ld32((c.r[29].w[0] + 356u));
    c.f[1] = ld32((c.r[29].w[0] + 352u));
    c.f[2] = ld32((c.r[29].w[0] + 360u));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
L_001418D4:
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001418E0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001418E0u) [[unlikely]] return; }
L_001418E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[21].w[0] << 4);  if (t) { goto L_00141918; } }
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 1;
L_00141900:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014190Cu); set32(c.r[5], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0014190Cu) [[unlikely]] return; }
L_0014190C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[21] = c.f[0];  if (t) { goto L_00141920; } }
    c.budget -= 1;
L_00141918:
    c.f[21] = c.f[20];
    c.budget -= 2;
L_00141920:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00141A58; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00141960; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 514u));
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 2;
L_00141944:
    set32(c.r[5], c.r[29].w[0] + 336u);
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141954u); st8((c.r[16].w[0] + 514u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00141954u) [[unlikely]] return; }
L_00141954:
    set32(c.r[4], c.r[20].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141960u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00141960u) [[unlikely]] return; }
L_00141960:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.f[12] = ld32((c.r[19].w[0] + 192u));
    set32(c.r[6], c.r[19].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141978u); set32(c.r[7], c.r[19].w[0] + 144u);  if (depth < kMaxDepth) unit_0011(c, 98u, depth + 1u); else { c.pc = 0x00145240u; return; } if (c.pc != 0x00141978u) [[unlikely]] return; }
L_00141978:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00141A58; } }
L_00141980:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_001419F0; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001419A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00141E88; } }
    c.budget -= 1;
L_001419A8:
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001419B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 99u, depth + 1u); else { c.pc = 0x00145340u; return; } if (c.pc != 0x001419B4u) [[unlikely]] return; }
L_001419B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001419C8; } }
L_001419BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00141E88; } }
    goto L_001419C4;
L_001419C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001419C4:
    c.budget -= 1;
L_001419C8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 514u));
    c.f[20] = 0u;
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[5], c.r[29].w[0] + 336u);
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001419E4u); st8((c.r[16].w[0] + 514u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001419E4u) [[unlikely]] return; }
L_001419E4:
    set32(c.r[4], c.r[20].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001419F0u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001419F0u) [[unlikely]] return; }
L_001419F0:
    c.f[1] = ld32((c.r[20].w[0] + 48u));
    c.f[0] = ld32((c.r[19].w[0] + 192u));
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141A04u); c.f[21] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x00141A04u) [[unlikely]] return; }
L_00141A04:
    c.f[0] = fp::sub(c.f[21], c.f[0]);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141A14u); c.f[21] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x00141A14u) [[unlikely]] return; }
L_00141A14:
    fpu_div(c, 0u, c.f[20], c.f[0]);
    set32(c.r[2], c.r[21].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[16], c.r[2].w[0] + 144u);
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141A40u); c.f[12] = fp::mul(c.f[21], c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 78u, depth + 1u); else { c.pc = 0x00144E60u; return; } if (c.pc != 0x00141A40u) [[unlikely]] return; }
L_00141A40:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_00141A44:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141A54u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 391u, depth + 1u); else { c.pc = 0x00142C90u; return; } if (c.pc != 0x00141A54u) [[unlikely]] return; }
L_00141A54:
    c.budget -= 1;
L_00141A58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00141E88; } }
L_00141A60:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00141690u | kUnwind; return; } goto L_00141690; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 176u), 0u);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.budget -= 3;
L_00141A80:
    c.r[30].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], 0u + 2u);
    c.r[21].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.budget -= 4;
L_00141A90:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141A9Cu); set32(c.r[5], c.r[30].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00141A9Cu) [[unlikely]] return; }
L_00141A9C:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141AB4u); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00141AB4u) [[unlikely]] return; }
L_00141AB4:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141ACCu); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00141ACCu) [[unlikely]] return; }
L_00141ACC:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141AD8u); set32(c.r[5], c.r[30].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00141AD8u) [[unlikely]] return; }
L_00141AD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45FA0000u);
    set32(c.r[18], c.r[29].w[0] + 256u);
    c.f[20] = c.r[2].w[0];
    c.r[22].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_00141AF0:
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[5], c.r[20].w[0] + 16u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141B04u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00141B04u) [[unlikely]] return; }
L_00141B04:
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141B14u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00141B14u) [[unlikely]] return; }
L_00141B14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141B1Cu); set32(c.r[4], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x00141B1Cu) [[unlikely]] return; }
L_00141B1C:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141B28u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x00141B28u) [[unlikely]] return; }
L_00141B28:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00141B40; } }
    c.r[16].d[0] = c.r[16].d[0] | 1ull;
    c.budget -= 1;
L_00141B40:
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[5], c.r[20].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141B50u); set32(c.r[6], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00141B50u) [[unlikely]] return; }
L_00141B50:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141B5Cu); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x00141B5Cu) [[unlikely]] return; }
L_00141B5C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[22] = c.f[0];  if (t) { goto L_00141B78; } }
    c.r[16].d[0] = c.r[16].d[0] | 2ull;
    c.budget -= 2;
L_00141B78:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00141C00; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00141BE8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00141BD0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00141BA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00141C08; } }
L_00141BA8:
    set32(c.r[4], c.r[29].w[0] + 368u);
    set32(c.r[5], c.r[29].w[0] + 336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141BB8u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00141BB8u) [[unlikely]] return; }
L_00141BB8:
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141BC4u); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00141BC4u) [[unlikely]] return; }
L_00141BC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00141C08; } }
    c.budget -= 1;
L_00141BD0:
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141BDCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00141BDCu) [[unlikely]] return; }
L_00141BDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00141C08; } }
    c.budget -= 1;
L_00141BE8:
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141BF4u); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00141BF4u) [[unlikely]] return; }
L_00141BF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00141C08; } }
    c.budget -= 1;
L_00141C00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00141E88; } }
L_00141C08:
    set32(c.r[4], c.r[20].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141C14u); set32(c.r[5], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x00141C14u) [[unlikely]] return; }
L_00141C14:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00141C38; } }
    c.f[20] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[29].w[0] + 368u);
    c.r[23].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141C38u); set32(c.r[22], c.r[17].w[0] + c.r[21].w[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00141C38u) [[unlikely]] return; }
L_00141C38:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00141C3C:
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00141AF0u | kUnwind; return; } goto L_00141AF0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45FA0000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00141E48; } }
    c.f[1] = ld32((c.r[20].w[0] + 48u));
    c.f[0] = ld32((c.r[19].w[0] + 192u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00141E48; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].d[0] = c.r[22].d[0] ^ 1ull;
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[4].d[0] = c.r[4].d[0] & 128ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[17].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[17].d[0] | c.r[3].d[0];  if (t) { goto L_00141CB4; } }
    c.r[2].d[0] = c.r[22].d[0] ^ 4ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_00141CB4:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].d[0] = c.r[23].d[0] ^ 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[17].d[0] | c.r[3].d[0];  if (t) { goto L_00141CD0; } }
    c.r[2].d[0] = c.r[23].d[0] ^ 2ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00141CD0:
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 224u);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[17].d[0] = c.r[17].d[0] | c.r[3].d[0];
    st32((c.r[29].w[0] + 224u), 0u);
    st32((c.r[29].w[0] + 232u), 0u);
    st32((c.r[29].w[0] + 236u), 0u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] + 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141D08u); st32((c.r[29].w[0] + 228u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 217u, depth + 1u); else { c.pc = 0x00127620u; return; } if (c.pc != 0x00141D08u) [[unlikely]] return; }
L_00141D08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141D10u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00125FA0u; return; } if (c.pc != 0x00141D10u) [[unlikely]] return; }
L_00141D10:
    c.r[3].d[0] = c.r[2].sd[0] < 8192ll ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], 0u + 31u);
    c.r[17].d[0] = c.r[17].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00141DF8; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00141D40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00141E88; } }
L_00141D40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141D50u); set32(c.r[5], ld32((c.r[19].w[0] + 4u)));  if (depth < kMaxDepth) unit_0011(c, 99u, depth + 1u); else { c.pc = 0x00145340u; return; } if (c.pc != 0x00141D50u) [[unlikely]] return; }
L_00141D50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 352u);  if (t) { goto L_00141DB8; } }
    set32(c.r[5], c.r[20].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141D64u); set32(c.r[6], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00141D64u) [[unlikely]] return; }
L_00141D64:
    c.f[0] = ld32((c.r[29].w[0] + 356u));
    c.f[1] = ld32((c.r[29].w[0] + 352u));
    c.f[2] = ld32((c.r[29].w[0] + 360u));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141D84u); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x00141D84u) [[unlikely]] return; }
L_00141D84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00141DB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141DA8u); set32(c.r[4], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x00141DA8u) [[unlikely]] return; }
L_00141DA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[21] = c.f[0];  if (t) { goto L_00141DB8; } }
L_00141DB0:
    c.f[21] = c.f[22];
    c.budget -= 2;
L_00141DB8:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00141DF8; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.f[12] = ld32((c.r[19].w[0] + 192u));
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[6], c.r[19].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141DE4u); set32(c.r[7], c.r[19].w[0] + 144u);  if (depth < kMaxDepth) unit_0011(c, 98u, depth + 1u); else { c.pc = 0x00145240u; return; } if (c.pc != 0x00141DE4u) [[unlikely]] return; }
L_00141DE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00141DF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00141E88; } }
    c.budget -= 1;
L_00141DF8:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.f[1] = ld32((c.r[20].w[0] + 48u));
    set32(c.r[5], c.r[29].w[0] + 240u);
    c.f[0] = ld32((c.r[19].w[0] + 192u));
    set32(c.r[6], c.r[20].w[0] + 16u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141E18u); c.f[20] = fp::sub(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00141E18u) [[unlikely]] return; }
L_00141E18:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.f[12] = c.f[20];
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141E2Cu); set32(c.r[6], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_0011(c, 78u, depth + 1u); else { c.pc = 0x00144E60u; return; } if (c.pc != 0x00141E2Cu) [[unlikely]] return; }
L_00141E2C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141E40u); set32(c.r[6], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0010(c, 404u, depth + 1u); else { c.pc = 0x00142E30u; return; } if (c.pc != 0x00141E40u) [[unlikely]] return; }
    goto L_00141E40;
L_00141E3C:
    set32(c.r[6], c.r[29].w[0] + 240u);
    c.budget -= 1;
L_00141E40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00141E88; } }
L_00141E48:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[30], c.r[30].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 3u);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[2], c.r[2].w[0] + 3u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 3u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00141A90u | kUnwind; return; } goto L_00141A90; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00141E88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
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
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 384u);  c.pc = t; return; }
L_00141ED0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[6], c.r[18].w[0] + 48u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141F04u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00141F04u) [[unlikely]] return; }
L_00141F04:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141F10u); set32(c.r[5], c.r[18].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x00141F10u) [[unlikely]] return; }
L_00141F10:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00141F28; } }
    c.r[17].d[0] = c.r[17].d[0] | 1ull;
    c.budget -= 1;
L_00141F28:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141F38u); set32(c.r[6], c.r[18].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00141F38u) [[unlikely]] return; }
L_00141F38:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141F44u); set32(c.r[5], c.r[18].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x00141F44u) [[unlikely]] return; }
L_00141F44:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00141F60; } }
    c.r[17].d[0] = c.r[17].d[0] | 2ull;
    c.budget -= 2;
L_00141F60:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00141FE8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00141FD0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00141FB8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00141F90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00141FF0; } }
L_00141F90:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141FA0u); set32(c.r[5], c.r[18].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00141FA0u) [[unlikely]] return; }
L_00141FA0:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141FACu); set32(c.r[5], c.r[18].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00141FACu) [[unlikely]] return; }
L_00141FAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00141FF0; } }
    c.budget -= 1;
L_00141FB8:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141FC4u); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00141FC4u) [[unlikely]] return; }
L_00141FC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00141FF0; } }
    c.budget -= 1;
L_00141FD0:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141FDCu); set32(c.r[5], c.r[18].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00141FDCu) [[unlikely]] return; }
L_00141FDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00141FF0; } }
    c.budget -= 1;
L_00141FE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00142070; } }
L_00141FF0:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00141FFCu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x00141FFCu) [[unlikely]] return; }
L_00141FFC:
    c.f[2] = ld32((c.r[16].w[0] + 48u));
    c.f[1] = ld32((c.r[18].w[0] + 144u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (t) { goto L_00142068; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142020u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00142020u) [[unlikely]] return; }
L_00142020:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014202Cu); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x00127450u; return; } if (c.pc != 0x0014202Cu) [[unlikely]] return; }
L_0014202C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142034u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x00142034u) [[unlikely]] return; }
L_00142034:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.f[12] = c.f[20];
    c.budget -= 2;
L_0014203C:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_00142040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142048u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0011(c, 78u, depth + 1u); else { c.pc = 0x00144E60u; return; } if (c.pc != 0x00142048u) [[unlikely]] return; }
L_00142048:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014205Cu); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0010(c, 404u, depth + 1u); else { c.pc = 0x00142E30u; return; } if (c.pc != 0x0014205Cu) [[unlikely]] return; }
L_0014205C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00142070; } }
    c.budget -= 1;
L_00142068:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00142070:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.budget -= 4;
L_00142080:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00142090:
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
    c.r[19].d[0] = 0ull + 0ull;
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001420F8u); st32((c.r[29].w[0] + 196u), 0u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001420F8u) [[unlikely]] return; }
L_001420F8:
    set32(c.r[16], c.r[29].w[0] + 256u);
    set32(c.r[5], c.r[22].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142108u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00142108u) [[unlikely]] return; }
L_00142108:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142114u); set32(c.r[5], c.r[22].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00142114u) [[unlikely]] return; }
L_00142114:
    set32(c.r[30], c.r[29].w[0] + 188u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[30].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[29].w[0] + 192u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[21].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 7;
L_00142130:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55550000u);
    c.r[2].d[0] = c.r[2].d[0] | 21846ull;
    set32(c.r[3], c.r[21].w[0] >> 31);
    mmi::mult(c, 0, c.r[2].w[0], c.r[21].w[0]);
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.r[20].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142160u); set32(c.r[5], c.r[2].w[0] + 272u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00142160u) [[unlikely]] return; }
L_00142160:
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142170u); set32(c.r[6], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00142170u) [[unlikely]] return; }
L_00142170:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014217Cu); set32(c.r[5], c.r[18].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0014217Cu) [[unlikely]] return; }
L_0014217C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[21] = c.f[0];  if (t) { goto L_00142198; } }
    c.r[20].d[0] = c.r[20].d[0] | 1ull;
    c.budget -= 2;
L_00142198:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001421A8u); set32(c.r[6], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001421A8u) [[unlikely]] return; }
L_001421A8:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001421B4u); set32(c.r[5], c.r[18].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001421B4u) [[unlikely]] return; }
L_001421B4:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[20] = c.f[0];  if (t) { goto L_001421D0; } }
    c.r[20].d[0] = c.r[20].d[0] | 2ull;
    c.budget -= 2;
L_001421D0:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00142330; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_001422A8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_00142220; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00142200; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00142330; } }
L_00142200:
    set32(c.r[19], c.r[19].w[0] + 1u);
    st32((c.r[17].w[0]), c.r[21].w[0]);
    c.r[1].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { goto L_00142330; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001423F8; } }
    c.budget -= 1;
L_00142220:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142230u); set32(c.r[6], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00142230u) [[unlikely]] return; }
L_00142230:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014223Cu); set32(c.r[5], c.r[18].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0014223Cu) [[unlikely]] return; }
L_0014223C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00142260; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00142278; } }
    c.budget -= 1;
L_00142260:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142270u); set32(c.r[5], c.r[18].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00142270u) [[unlikely]] return; }
L_00142270:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00142290; } }
L_00142278:
    set32(c.r[4], c.r[29].w[0] + 208u);
    fpu_div(c, 12u, c.f[20], c.f[0]);
    c.budget -= 2;
L_00142280:
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142290u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00142290u) [[unlikely]] return; }
L_00142290:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014229Cu); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x00127450u; return; } if (c.pc != 0x0014229Cu) [[unlikely]] return; }
L_0014229C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[30].w[0]), c.r[21].w[0]);  if (t) { goto L_00142330; } }
    c.budget -= 1;
L_001422A8:
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001422B8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001422B8u) [[unlikely]] return; }
L_001422B8:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001422C4u); set32(c.r[5], c.r[18].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001422C4u) [[unlikely]] return; }
L_001422C4:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001422E8; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00142300; } }
    c.budget -= 1;
L_001422E8:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.f[12] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001422F8u); set32(c.r[5], c.r[18].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001422F8u) [[unlikely]] return; }
L_001422F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00142318; } }
L_00142300:
    set32(c.r[4], c.r[29].w[0] + 208u);
    fpu_div(c, 12u, c.f[21], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142318u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00142318u) [[unlikely]] return; }
L_00142318:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142324u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x00127450u; return; } if (c.pc != 0x00142324u) [[unlikely]] return; }
L_00142324:
    set32(c.r[2], c.r[29].w[0] + 192u);
    st32((c.r[2].w[0]), c.r[21].w[0]);
    c.budget -= 3;
L_00142330:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00142130u | kUnwind; return; } goto L_00142130; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001423D0; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_001423B0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_00142390; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00142370; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001423F0; } }
L_00142370:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142384u); set32(c.r[6], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0010(c, 323u, depth + 1u); else { c.pc = 0x00142430u; return; } if (c.pc != 0x00142384u) [[unlikely]] return; }
L_00142384:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001423F8; } }
    c.budget -= 1;
L_00142390:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 240u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001423A4u); set32(c.r[7], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0010(c, 350u, depth + 1u); else { c.pc = 0x00142760u; return; } if (c.pc != 0x001423A4u) [[unlikely]] return; }
L_001423A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001423F8; } }
    c.budget -= 1;
L_001423B0:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 240u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001423C4u); set32(c.r[7], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0010(c, 360u, depth + 1u); else { c.pc = 0x001428E0u; return; } if (c.pc != 0x001423C4u) [[unlikely]] return; }
L_001423C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001423F8; } }
    c.budget -= 1;
L_001423D0:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 240u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001423E4u); set32(c.r[7], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0010(c, 369u, depth + 1u); else { c.pc = 0x001429F0u; return; } if (c.pc != 0x001423E4u) [[unlikely]] return; }
L_001423E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001423F8; } }
    c.budget -= 1;
L_001423F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001423F8:
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
L_00142430:
    set32(c.r[29], c.r[29].w[0] - 352u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[7].w[0])));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00142478; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00142478; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00142738; } }
L_00142478:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00142510; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x55550000u);  if (t) { goto L_00142510; } }
    set32(c.r[3], c.r[4].w[0] >> 31);
    c.r[2].d[0] = c.r[2].d[0] | 21846ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001424C4u); set32(c.r[5], c.r[2].w[0] + 272u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001424C4u) [[unlikely]] return; }
L_001424C4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001424DCu); set32(c.r[5], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001424DCu) [[unlikely]] return; }
L_001424DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001424E4u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x001424E4u) [[unlikely]] return; }
L_001424E4:
    c.f[1] = ld32((c.r[18].w[0] + 144u));
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.f[12] = fp::add(c.f[1], c.f[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142508u); set32(c.r[6], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_0011(c, 78u, depth + 1u); else { c.pc = 0x00144E60u; return; } if (c.pc != 0x00142508u) [[unlikely]] return; }
L_00142508:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00142730; } }
L_00142510:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001425B0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001425B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55550000u);
    set32(c.r[3], c.r[4].w[0] >> 31);
    c.r[2].d[0] = c.r[2].d[0] | 21846ull;
    set32(c.r[6], c.r[17].w[0] + 16u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142560u); set32(c.r[5], c.r[2].w[0] + 272u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00142560u) [[unlikely]] return; }
L_00142560:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142578u); set32(c.r[5], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x00142578u) [[unlikely]] return; }
L_00142578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142580u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x00142580u) [[unlikely]] return; }
L_00142580:
    c.f[1] = ld32((c.r[18].w[0] + 144u));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.f[12] = fp::add(c.f[1], c.f[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001425A4u); set32(c.r[6], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_0011(c, 78u, depth + 1u); else { c.pc = 0x00144E60u; return; } if (c.pc != 0x001425A4u) [[unlikely]] return; }
L_001425A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00142730; } }
    c.budget -= 1;
L_001425B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001425BCu); set32(c.r[5], c.r[29].w[0] + 344u);  if (depth < kMaxDepth) unit_0011(c, 72u, depth + 1u); else { c.pc = 0x00144D30u; return; } if (c.pc != 0x001425BCu) [[unlikely]] return; }
L_001425BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001426B8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 344u)));
    set32(c.r[6], c.r[29].w[0] + 176u);
    set32(c.r[2], ld32((c.r[29].w[0] + 348u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] + 48u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001425ECu); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0010(c, 513u, depth + 1u); else { c.pc = 0x00143DD0u; return; } if (c.pc != 0x001425ECu) [[unlikely]] return; }
L_001425EC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001425FCu); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0010(c, 513u, depth + 1u); else { c.pc = 0x00143DD0u; return; } if (c.pc != 0x001425FCu) [[unlikely]] return; }
L_001425FC:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014260Cu); set32(c.r[6], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0010(c, 520u, depth + 1u); else { c.pc = 0x00143E50u; return; } if (c.pc != 0x0014260Cu) [[unlikely]] return; }
L_0014260C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 320u);  if (t) { goto L_00142648; } }
    set32(c.r[5], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142620u); set32(c.r[6], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00142620u) [[unlikely]] return; }
L_00142620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142628u); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0009(c, 202u, depth + 1u); else { c.pc = 0x00127320u; return; } if (c.pc != 0x00142628u) [[unlikely]] return; }
L_00142628:
    c.f[1] = ld32((c.r[18].w[0] + 144u));
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[6], c.r[29].w[0] + 320u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142640u); c.f[12] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 78u, depth + 1u); else { c.pc = 0x00144E60u; return; } if (c.pc != 0x00142640u) [[unlikely]] return; }
    goto L_00142640;
L_0014263C:
    c.f[12] = fp::add(c.f[1], c.f[0]);
    c.budget -= 1;
L_00142640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00142730; } }
L_00142648:
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142658u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00142658u) [[unlikely]] return; }
L_00142658:
    set32(c.r[16], c.r[29].w[0] + 240u);
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142668u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x00142668u) [[unlikely]] return; }
L_00142668:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142678u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00142678u) [[unlikely]] return; }
L_00142678:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142684u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00142684u) [[unlikely]] return; }
L_00142684:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142690u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x00127450u; return; } if (c.pc != 0x00142690u) [[unlikely]] return; }
L_00142690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142698u); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0009(c, 202u, depth + 1u); else { c.pc = 0x00127320u; return; } if (c.pc != 0x00142698u) [[unlikely]] return; }
L_00142698:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.f[12] = c.f[0];
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001426ACu); set32(c.r[6], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0011(c, 78u, depth + 1u); else { c.pc = 0x00144E60u; return; } if (c.pc != 0x001426ACu) [[unlikely]] return; }
L_001426AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00142730; } }
    c.budget -= 1;
L_001426B8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55550000u);
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.r[2].d[0] = c.r[2].d[0] | 21846ull;
    set32(c.r[5], c.r[18].w[0] + 64u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001426F4u); set32(c.r[6], c.r[2].w[0] + 272u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001426F4u) [[unlikely]] return; }
L_001426F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014270Cu); set32(c.r[5], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0014270Cu) [[unlikely]] return; }
L_0014270C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.f[12] = c.f[0] ^ fp::kSign;
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014272Cu); set32(c.r[6], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_0011(c, 78u, depth + 1u); else { c.pc = 0x00144E60u; return; } if (c.pc != 0x0014272Cu) [[unlikely]] return; }
L_0014272C:
    c.budget -= 1;
L_00142730:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00142738:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_00142760:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55550000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 21846ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[2].w[0] + 272u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001427C8u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001427C8u) [[unlikely]] return; }
L_001427C8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001427E0u); set32(c.r[5], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001427E0u) [[unlikely]] return; }
L_001427E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001427E8u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x001427E8u) [[unlikely]] return; }
L_001427E8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x55550000u);
    c.r[2].d[0] = c.r[2].d[0] | 21846ull;
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.f[20] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 96u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142828u); set32(c.r[6], c.r[2].w[0] + 272u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00142828u) [[unlikely]] return; }
L_00142828:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142840u); set32(c.r[5], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x00142840u) [[unlikely]] return; }
    goto L_00142840;
L_0014283C:
    set32(c.r[5], c.r[2].w[0] + 176u);
    c.budget -= 1;
L_00142840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142848u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x00142848u) [[unlikely]] return; }
L_00142848:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00142858; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_00142858:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00142878; } }
    c.f[20] = 0u;
    c.budget -= 1;
L_00142878:
    c.f[0] = ld32((c.r[18].w[0] + 144u));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 2;
L_00142880:
    c.budget -= 2;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00142890; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001428B8; } }
L_00142890:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.f[12] = fp::sub(c.f[0], c.f[20]);
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001428B0u); set32(c.r[6], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_0011(c, 78u, depth + 1u); else { c.pc = 0x00144E60u; return; } if (c.pc != 0x001428B0u) [[unlikely]] return; }
L_001428B0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_001428B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001428E0:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 328u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142910u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0011(c, 72u, depth + 1u); else { c.pc = 0x00144D30u; return; } if (c.pc != 0x00142910u) [[unlikely]] return; }
L_00142910:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00142920; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001429C8; } }
L_00142920:
    set32(c.r[3], ld32((c.r[29].w[0] + 328u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 332u)));
    set32(c.r[6], c.r[29].w[0] + 224u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] + 48u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142948u); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0010(c, 513u, depth + 1u); else { c.pc = 0x00143DD0u; return; } if (c.pc != 0x00142948u) [[unlikely]] return; }
L_00142948:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142958u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0010(c, 513u, depth + 1u); else { c.pc = 0x00143DD0u; return; } if (c.pc != 0x00142958u) [[unlikely]] return; }
L_00142958:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142968u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0010(c, 520u, depth + 1u); else { c.pc = 0x00143E50u; return; } if (c.pc != 0x00142968u) [[unlikely]] return; }
L_00142968:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[29].w[0] + 112u);  if (t) { goto L_001429C0; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014297Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0014297Cu) [[unlikely]] return; }
L_0014297C:
    c.f[1] = ld32((c.r[17].w[0] + 144u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (t) { goto L_001429C0; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014299Cu); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0014299Cu) [[unlikely]] return; }
L_0014299C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001429A4u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001429A4u) [[unlikely]] return; }
L_001429A4:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.f[12] = c.f[20];
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001429B8u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0011(c, 78u, depth + 1u); else { c.pc = 0x00144E60u; return; } if (c.pc != 0x001429B8u) [[unlikely]] return; }
L_001429B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001429C8; } }
L_001429C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001429C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_001429F0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 140u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142A20u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0011(c, 75u, depth + 1u); else { c.pc = 0x00144DC0u; return; } if (c.pc != 0x00142A20u) [[unlikely]] return; }
L_00142A20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00142A30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00142BB8; } }
L_00142A30:
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142A4Cu); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00142A4Cu) [[unlikely]] return; }
L_00142A4C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142A5Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00142A5Cu) [[unlikely]] return; }
L_00142A5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142A64u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x00142A64u) [[unlikely]] return; }
L_00142A64:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142A70u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x00142A70u) [[unlikely]] return; }
L_00142A70:
    c.f[12] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142A80u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00142A80u) [[unlikely]] return; }
L_00142A80:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142A8Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00142A8Cu) [[unlikely]] return; }
L_00142A8C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142A9Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00142A9Cu) [[unlikely]] return; }
L_00142A9C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142AACu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00142AACu) [[unlikely]] return; }
L_00142AAC:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142AB8u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x00142AB8u) [[unlikely]] return; }
L_00142AB8:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00142AF0; } }
    c.f[3] = ld32((c.r[16].w[0]));
    set32(c.r[2], c.r[29].w[0] + 80u);
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.budget -= 9;
L_00142AF0:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142B00u); set32(c.r[6], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00142B00u) [[unlikely]] return; }
L_00142B00:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142B0Cu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x00142B0Cu) [[unlikely]] return; }
L_00142B0C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00142B48; } }
    c.f[3] = ld32((c.r[16].w[0] + 16u));
    set32(c.r[2], c.r[29].w[0] + 80u);
    c.f[2] = ld32((c.r[16].w[0] + 20u));
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.budget -= 10;
L_00142B48:
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142B60u); set32(c.r[4], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x00142B60u) [[unlikely]] return; }
L_00142B60:
    c.f[1] = ld32((c.r[17].w[0] + 144u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00142BB0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    c.f[20] = fp::sub(c.f[1], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142B90u); set32(c.r[6], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00142B90u) [[unlikely]] return; }
L_00142B90:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.f[12] = c.f[20];
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142BA4u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0011(c, 78u, depth + 1u); else { c.pc = 0x00144E60u; return; } if (c.pc != 0x00142BA4u) [[unlikely]] return; }
L_00142BA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00142BB8; } }
    c.budget -= 1;
L_00142BB0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00142BB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00142BE0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[18].w[0] + 48u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142C10u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0010(c, 520u, depth + 1u); else { c.pc = 0x00143E50u; return; } if (c.pc != 0x00142C10u) [[unlikely]] return; }
L_00142C10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[29].w[0] + 96u);  if (t) { goto L_00142C68; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142C24u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x00142C24u) [[unlikely]] return; }
L_00142C24:
    c.f[2] = ld32((c.r[18].w[0] + 144u));
    c.f[1] = ld32((c.r[17].w[0] + 144u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (t) { goto L_00142C68; } }
L_00142C3C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142C4Cu); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00142C4Cu) [[unlikely]] return; }
L_00142C4C:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.f[12] = c.f[20];
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142C60u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0011(c, 78u, depth + 1u); else { c.pc = 0x00144E60u; return; } if (c.pc != 0x00142C60u) [[unlikely]] return; }
L_00142C60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00142C70; } }
L_00142C68:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00142C70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00142C90:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142CBCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x00142CBCu) [[unlikely]] return; }
L_00142CBC:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], ld32((c.r[4].w[0] + 20u)));  if (t) { goto L_00142CE0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00142CE0; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_00142CE8; } }
L_00142CE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00142E10; } }
L_00142CE8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00142E10; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00142E10; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00142E10; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    set32(c.r[3], 0u + 8200u);
    c.r[4].d[0] = c.r[4].d[0] & 8200ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00142E10; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_00142E10; } }
    set32(c.r[5], c.r[19].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142D4Cu); set32(c.r[6], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00142D4Cu) [[unlikely]] return; }
L_00142D4C:
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    c.f[2] = ld32((c.r[29].w[0] + 96u));
    c.f[3] = ld32((c.r[29].w[0] + 104u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00142E10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142D84u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00142D84u) [[unlikely]] return; }
L_00142D84:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142D90u); c.r[5].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0009(c, 183u, depth + 1u); else { c.pc = 0x00126930u; return; } if (c.pc != 0x00142D90u) [[unlikely]] return; }
L_00142D90:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142D9Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x00142D9Cu) [[unlikely]] return; }
L_00142D9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[16].w[0] + 1440u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142DB0u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00142DB0u) [[unlikely]] return; }
L_00142DB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142DB8u); set32(c.r[4], c.r[16].w[0] + 1440u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x00142DB8u) [[unlikely]] return; }
L_00142DB8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 766u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00142E10; } }
    c.f[12] = ld32((c.r[19].w[0] + 48u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142DD4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00142DD4u) [[unlikely]] return; }
L_00142DD4:
    set32(c.r[5], c.r[19].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142DE0u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00142DE0u) [[unlikely]] return; }
L_00142DE0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142DECu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001A(c, 127u, depth + 1u); else { c.pc = 0x0016A150u; return; } if (c.pc != 0x00142DECu) [[unlikely]] return; }
L_00142DEC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142DF8u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x00142DF8u) [[unlikely]] return; }
L_00142DF8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142E04u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x00142E04u) [[unlikely]] return; }
L_00142E04:
    set32(c.r[3], 0u + 16u);
    st8((c.r[16].w[0] + 766u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00142E10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00142E30:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.budget -= 3;
L_00142E3C:
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00142E70; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00142E70; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00142E78; } }
L_00142E70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00142FE0; } }
L_00142E78:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00142FE0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00142FE0; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    set32(c.r[3], 0u + 8200u);
    c.r[4].d[0] = c.r[4].d[0] & 8200ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00142FE0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_00142FE0; } }
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142ECCu); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00142ECCu) [[unlikely]] return; }
L_00142ECC:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142EDCu); set32(c.r[6], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00142EDCu) [[unlikely]] return; }
L_00142EDC:
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.f[3] = ld32((c.r[29].w[0] + 120u));
    c.f[2] = 0u;
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00142FE0; } }
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.f[3] = ld32((c.r[29].w[0] + 104u));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_00142FE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142F38u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x00142F38u) [[unlikely]] return; }
L_00142F38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142F40u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00142F40u) [[unlikely]] return; }
L_00142F40:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142F4Cu); c.r[5].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0009(c, 183u, depth + 1u); else { c.pc = 0x00126930u; return; } if (c.pc != 0x00142F4Cu) [[unlikely]] return; }
L_00142F4C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142F58u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x00142F58u) [[unlikely]] return; }
L_00142F58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[16].w[0] + 1440u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142F6Cu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00142F6Cu) [[unlikely]] return; }
L_00142F6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142F74u); set32(c.r[4], c.r[16].w[0] + 1440u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x00142F74u) [[unlikely]] return; }
L_00142F74:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 766u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00142FE0; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142F8Cu); set32(c.r[6], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00142F8Cu) [[unlikely]] return; }
L_00142F8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142F94u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x00142F94u) [[unlikely]] return; }
L_00142F94:
    c.f[12] = ld32((c.r[18].w[0] + 48u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142FA4u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00142FA4u) [[unlikely]] return; }
L_00142FA4:
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142FB0u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00142FB0u) [[unlikely]] return; }
L_00142FB0:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142FBCu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001A(c, 127u, depth + 1u); else { c.pc = 0x0016A150u; return; } if (c.pc != 0x00142FBCu) [[unlikely]] return; }
L_00142FBC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142FC8u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x00142FC8u) [[unlikely]] return; }
L_00142FC8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00142FD4u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x00142FD4u) [[unlikely]] return; }
L_00142FD4:
    set32(c.r[3], 0u + 16u);
    st8((c.r[16].w[0] + 766u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00142FE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00143000:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00143180; } }
    set32(c.r[17], ld32((c.r[3].w[0] + 620u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00143180; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23836u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[3], c.r[28].w[0] - 23804u);
    c.budget -= 3;
L_00143040:
    set32(c.r[5], c.r[5].w[0] + 26976u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[4].w[0] << 10);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[19], c.r[5].w[0] + c.r[6].w[0]);  if (t) { goto L_00143180; } }
    c.budget -= 1;
L_00143068:
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00143158; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00143158; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 516u));
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00143158; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 560u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00143158; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001430B0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 63u, depth + 1u); else { c.pc = 0x00144A20u; return; } if (c.pc != 0x001430B0u) [[unlikely]] return; }
L_001430B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00143158; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001430F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001430D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00143118; } }
L_001430D8:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], c.r[18].w[0] + 48u);
    set32(c.r[6], c.r[17].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001430ECu); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0010(c, 429u, depth + 1u); else { c.pc = 0x001431A0u; return; } if (c.pc != 0x001430ECu) [[unlikely]] return; }
L_001430EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00143120; } }
    c.budget -= 1;
L_001430F8:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], c.r[18].w[0] + 48u);
    set32(c.r[6], c.r[17].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014310Cu); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0010(c, 441u, depth + 1u); else { c.pc = 0x00143340u; return; } if (c.pc != 0x0014310Cu) [[unlikely]] return; }
L_0014310C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00143120; } }
    c.budget -= 1;
L_00143118:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00143120:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00143140; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143138u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 290u, depth + 1u); else { c.pc = 0x0013B8D0u; return; } if (c.pc != 0x00143138u) [[unlikely]] return; }
L_00143138:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00143158; } }
L_00143140:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00143158; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143158u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 290u, depth + 1u); else { c.pc = 0x0013B8D0u; return; } if (c.pc != 0x00143158u) [[unlikely]] return; }
L_00143158:
    set32(c.r[4], ld32((c.r[28].w[0] - 23836u)));
    set32(c.r[3], c.r[28].w[0] - 23804u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00143068u | kUnwind; return; } goto L_00143068; } }
    c.budget -= 1;
L_00143180:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001431A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[4], c.r[18].w[0] + 16u);
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001431D8u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001431D8u) [[unlikely]] return; }
L_001431D8:
    c.f[22] = c.f[0];
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001431E8u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001431E8u) [[unlikely]] return; }
L_001431E8:
    c.f[21] = c.f[0];
    c.f[1] = ld32((c.r[18].w[0] + 48u));
    c.f[0] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00143308; } }
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_00143308; } }
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143224u); set32(c.r[6], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00143224u) [[unlikely]] return; }
L_00143224:
    c.f[13] = ld32((c.r[29].w[0] + 88u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143230u); c.f[12] = ld32((c.r[29].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x00143230u) [[unlikely]] return; }
L_00143230:
    c.r[1].d[0] = c.r[2].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = 0ull | 32768ull;  if (t) { goto L_00143260; } }
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00143260; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143254u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 479u, depth + 1u); else { c.pc = 0x00143930u; return; } if (c.pc != 0x00143254u) [[unlikely]] return; }
L_00143254:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00143310; } }
    c.budget -= 1;
L_00143260:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014326Cu); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0014326Cu) [[unlikely]] return; }
L_0014326C:
    c.f[20] = c.f[0];
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014327Cu); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0014327Cu) [[unlikely]] return; }
L_0014327C:
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001432A0; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143298u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_0010(c, 490u, depth + 1u); else { c.pc = 0x00143AD0u; return; } if (c.pc != 0x00143298u) [[unlikely]] return; }
L_00143298:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00143310; } }
L_001432A0:
    c.f[2] = ld32((c.r[16].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001432C8; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001432BCu); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0010(c, 494u, depth + 1u); else { c.pc = 0x00143B40u; return; } if (c.pc != 0x001432BCu) [[unlikely]] return; }
L_001432BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00143310; } }
    c.budget -= 1;
L_001432C8:
    c.f[1] = fp::sub(c.f[1], c.f[20]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001432F0; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001432E8u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_0010(c, 490u, depth + 1u); else { c.pc = 0x00143AD0u; return; } if (c.pc != 0x001432E8u) [[unlikely]] return; }
L_001432E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00143310; } }
L_001432F0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143300u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0010(c, 494u, depth + 1u); else { c.pc = 0x00143B40u; return; } if (c.pc != 0x00143300u) [[unlikely]] return; }
L_00143300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00143310; } }
L_00143308:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00143310:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00143340:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 16u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143374u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x00143374u) [[unlikely]] return; }
L_00143374:
    c.f[21] = c.f[0];
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143384u); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x00143384u) [[unlikely]] return; }
L_00143384:
    c.f[20] = c.f[0];
    c.f[1] = ld32((c.r[16].w[0] + 144u));
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001434C0; } }
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_001434C0; } }
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001433B8u); set32(c.r[6], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001433B8u) [[unlikely]] return; }
L_001433B8:
    c.f[13] = ld32((c.r[29].w[0] + 88u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001433C4u); c.f[12] = ld32((c.r[29].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001433C4u) [[unlikely]] return; }
L_001433C4:
    c.r[1].d[0] = c.r[2].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = 0ull | 32768ull;  if (t) { goto L_001433E8; } }
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001433E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00143620; } }
    c.budget -= 1;
L_001433E8:
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001433F8u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0011(c, 37u, depth + 1u); else { c.pc = 0x00144460u; return; } if (c.pc != 0x001433F8u) [[unlikely]] return; }
L_001433F8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00143438; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00143418; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001434C0; } }
    c.budget -= 1;
L_00143418:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], c.r[29].w[0] + 80u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st128((c.r[4].w[0]) & ~15u, c.r[3]);  if (t) { goto L_00143620; } }
    c.budget -= 1;
L_00143438:
    set32(c.r[2], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_0014343C:
    c.f[3] = ld32((c.r[16].w[0] + 64u));
    c.f[2] = ld32((c.r[16].w[0] + 68u));
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = ld32((c.r[16].w[0] + 76u));
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[20]));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[2].w[0] + 12u), c.f[0]);  if (t) { goto L_00143488; } }
    c.f[3] = ld32((c.r[16].w[0] + 48u));
    c.f[2] = ld32((c.r[16].w[0] + 52u));
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.budget -= 9;
L_00143488:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143494u); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x00127450u; return; } if (c.pc != 0x00143494u) [[unlikely]] return; }
L_00143494:
    c.f[12] = ld32((c.r[18].w[0] + 48u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001434A4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x001434A4u) [[unlikely]] return; }
L_001434A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[6], c.r[18].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001434B8u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x001434B8u) [[unlikely]] return; }
L_001434B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00143620; } }
L_001434C0:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001434CCu); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001434CCu) [[unlikely]] return; }
L_001434CC:
    c.f[21] = c.f[0];
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001434DCu); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001434DCu) [[unlikely]] return; }
L_001434DC:
    c.f[20] = c.f[0];
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = ld32((c.r[16].w[0] + 144u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00143618; } }
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_00143618; } }
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143510u); set32(c.r[6], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00143510u) [[unlikely]] return; }
L_00143510:
    c.f[13] = ld32((c.r[29].w[0] + 88u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014351Cu); c.f[12] = ld32((c.r[29].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0014351Cu) [[unlikely]] return; }
L_0014351C:
    c.r[1].d[0] = c.r[2].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = 0ull | 32768ull;  if (t) { goto L_00143540; } }
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00143540; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00143620; } }
    c.budget -= 1;
L_00143540:
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143550u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0011(c, 37u, depth + 1u); else { c.pc = 0x00144460u; return; } if (c.pc != 0x00143550u) [[unlikely]] return; }
L_00143550:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00143590; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00143570; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00143618; } }
    c.budget -= 1;
L_00143570:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], c.r[29].w[0] + 80u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st128((c.r[4].w[0]) & ~15u, c.r[3]);  if (t) { goto L_00143620; } }
    c.budget -= 1;
L_00143590:
    set32(c.r[2], c.r[29].w[0] + 80u);
    c.f[3] = ld32((c.r[16].w[0] + 64u));
    c.f[2] = ld32((c.r[16].w[0] + 68u));
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = ld32((c.r[16].w[0] + 76u));
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[20]));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[2].w[0] + 12u), c.f[0]);  if (t) { goto L_001435E0; } }
    c.f[3] = ld32((c.r[16].w[0] + 48u));
    c.f[2] = ld32((c.r[16].w[0] + 52u));
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.budget -= 9;
L_001435E0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001435ECu); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x00127450u; return; } if (c.pc != 0x001435ECu) [[unlikely]] return; }
L_001435EC:
    c.f[12] = ld32((c.r[17].w[0] + 48u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001435FCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x001435FCu) [[unlikely]] return; }
L_001435FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[6], c.r[17].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143610u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x00143610u) [[unlikely]] return; }
L_00143610:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00143620; } }
L_00143618:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00143620:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0014363C:
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 1;
L_00143640:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00143710; } }
    set32(c.r[17], ld32((c.r[3].w[0] + 620u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00143710; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23836u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[3], c.r[28].w[0] - 23812u);
    set32(c.r[5], c.r[5].w[0] + 22880u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[4].w[0] << 10);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[18], c.r[5].w[0] + c.r[6].w[0]);  if (t) { goto L_00143710; } }
L_001436A0:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001436E8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001436E8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001436D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001436E8; } }
L_001436D0:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] + 48u);
    set32(c.r[6], c.r[17].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001436E4u); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0010(c, 463u, depth + 1u); else { c.pc = 0x00143730u; return; } if (c.pc != 0x001436E4u) [[unlikely]] return; }
L_001436E4:
    c.budget -= 1;
L_001436E8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23836u)));
    set32(c.r[3], c.r[28].w[0] - 23812u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001436A0u | kUnwind; return; } goto L_001436A0; } }
    c.budget -= 1;
L_00143710:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00143730:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 16u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143764u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x00143764u) [[unlikely]] return; }
L_00143764:
    c.f[21] = c.f[0];
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143774u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x00143774u) [[unlikely]] return; }
L_00143774:
    c.f[20] = c.f[0];
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00143900; } }
    c.f[0] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_00143900; } }
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001437B0u); set32(c.r[6], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001437B0u) [[unlikely]] return; }
L_001437B0:
    c.f[13] = ld32((c.r[29].w[0] + 88u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001437BCu); c.f[12] = ld32((c.r[29].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001437BCu) [[unlikely]] return; }
L_001437BC:
    c.r[1].d[0] = c.r[2].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = 0ull | 32768ull;  if (t) { goto L_001437E8; } }
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001437E8; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001437E0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0010(c, 479u, depth + 1u); else { c.pc = 0x00143930u; return; } if (c.pc != 0x001437E0u) [[unlikely]] return; }
L_001437E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00143908; } }
L_001437E8:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001437F4u); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001437F4u) [[unlikely]] return; }
L_001437F4:
    c.f[1] = ld32((c.r[18].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00143880; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00143820; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00143908; } }
L_00143820:
    set32(c.r[6], c.r[18].w[0] + 16u);
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014383Cu); c.f[20] = fp::sub(c.f[0], c.f[21]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0014383Cu) [[unlikely]] return; }
L_0014383C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014384Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x0014384Cu) [[unlikely]] return; }
L_0014384C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143860u); set32(c.r[4], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00143860u) [[unlikely]] return; }
L_00143860:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014386Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0014386Cu) [[unlikely]] return; }
L_0014386C:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143878u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00143878u) [[unlikely]] return; }
L_00143878:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00143908; } }
L_00143880:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014388Cu); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0014388Cu) [[unlikely]] return; }
L_0014388C:
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00143900; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001438B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00143908; } }
L_001438B8:
    set32(c.r[6], c.r[17].w[0] + 16u);
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001438D4u); c.f[20] = fp::sub(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001438D4u) [[unlikely]] return; }
L_001438D4:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001438E4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x001438E4u) [[unlikely]] return; }
L_001438E4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001438F8u); set32(c.r[4], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x00127450u; return; } if (c.pc != 0x001438F8u) [[unlikely]] return; }
L_001438F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00143908; } }
L_00143900:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00143908:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00143930:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[6], c.r[5].w[0] + 16u);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], c.r[19].w[0] + 16u);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143970u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00143970u) [[unlikely]] return; }
L_00143970:
    c.f[20] = ld32((c.r[19].w[0] + 48u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143984u); set32(c.r[5], c.r[5].w[0] + 2976u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x00143984u) [[unlikely]] return; }
L_00143984:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 136u), c.f[0]);  if (t) { goto L_00143998; } }
    c.r[16].d[0] = c.r[16].d[0] | 1ull;
    c.budget -= 2;
L_00143998:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001439A8u); set32(c.r[5], c.r[5].w[0] + 2992u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001439A8u) [[unlikely]] return; }
L_001439A8:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 140u), c.f[0]);  if (t) { goto L_001439B8; } }
    c.r[16].d[0] = c.r[16].d[0] | 2ull;
    c.budget -= 1;
L_001439B8:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00143A18; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001439E0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001439E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00143A70; } }
L_001439E0:
    set32(c.r[2], c.r[16].w[0] - 1u);
    set32(c.r[4], c.r[2].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 2976u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 136u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143A0Cu); c.f[12] = fp::sub(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00143A0Cu) [[unlikely]] return; }
L_00143A0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00143A78; } }
    c.budget -= 1;
L_00143A18:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[5].w[0] + 2976u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143A30u); set32(c.r[6], c.r[6].w[0] + 2992u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x00143A30u) [[unlikely]] return; }
L_00143A30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143A38u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x00143A38u) [[unlikely]] return; }
L_00143A38:
    c.f[20] = ld32((c.r[19].w[0] + 48u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143A48u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x00143A48u) [[unlikely]] return; }
L_00143A48:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 136u), c.f[0]);  if (t) { goto L_00143A70; } }
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143A68u); c.f[12] = fp::sub(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00143A68u) [[unlikely]] return; }
L_00143A68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00143A78; } }
L_00143A70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00143AB0; } }
L_00143A78:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 32u);  if (t) { goto L_00143A90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143A88u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x00143A88u) [[unlikely]] return; }
L_00143A88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00143AA8; } }
L_00143A90:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143AA4u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x00143AA4u) [[unlikely]] return; }
L_00143AA4:
    c.budget -= 1;
L_00143AA8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00143AB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00143AD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], c.r[5].w[0] + 16u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = ld32((c.r[5].w[0] + 48u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143B04u); c.f[20] = fp::sub(c.f[0], c.f[12]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00143B04u) [[unlikely]] return; }
L_00143B04:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143B14u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x00143B14u) [[unlikely]] return; }
L_00143B14:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143B28u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x00143B28u) [[unlikely]] return; }
L_00143B28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00143B40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], c.r[5].w[0] + 16u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[5].w[0] + 48u));
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143B74u); c.f[20] = fp::sub(c.f[12], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00143B74u) [[unlikely]] return; }
L_00143B74:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143B84u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x00143B84u) [[unlikely]] return; }
L_00143B84:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 19072u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143B98u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00143B98u) [[unlikely]] return; }
L_00143B98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00143BB0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[29].w[0] + 144u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[5], c.r[20].w[0] + 16u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143BF8u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00143BF8u) [[unlikely]] return; }
L_00143BF8:
    set32(c.r[16], c.r[29].w[0] + 160u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143C0Cu); set32(c.r[6], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00143C0Cu) [[unlikely]] return; }
L_00143C0C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143C20u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00143C20u) [[unlikely]] return; }
L_00143C20:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143C2Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x00143C2Cu) [[unlikely]] return; }
L_00143C2C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[21] = c.f[0];  if (t) { goto L_00143C48; } }
    c.r[17].d[0] = c.r[17].d[0] | 1ull;
    c.budget -= 2;
L_00143C48:
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143C58u); set32(c.r[5], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00143C58u) [[unlikely]] return; }
L_00143C58:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143C64u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x00143C64u) [[unlikely]] return; }
L_00143C64:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[20] = c.f[0];  if (t) { goto L_00143C80; } }
    c.r[17].d[0] = c.r[17].d[0] | 2ull;
    c.budget -= 2;
L_00143C80:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00143D30; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00143CB8; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00143CB0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00143CB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00143DA0; } }
L_00143CB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00143DA0; } }
L_00143CB8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143CC4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x00143CC4u) [[unlikely]] return; }
L_00143CC4:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00143CE8; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00143D00; } }
    c.budget -= 1;
L_00143CE8:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143CF8u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00143CF8u) [[unlikely]] return; }
L_00143CF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00143D18; } }
L_00143D00:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    fpu_div(c, 12u, c.f[21], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143D18u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00143D18u) [[unlikely]] return; }
L_00143D18:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143D28u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00143D28u) [[unlikely]] return; }
L_00143D28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00143DA0; } }
L_00143D30:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143D3Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x00143D3Cu) [[unlikely]] return; }
L_00143D3C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00143D60; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00143D78; } }
    c.budget -= 1;
L_00143D60:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143D70u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00143D70u) [[unlikely]] return; }
L_00143D70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00143D90; } }
L_00143D78:
    set32(c.r[4], c.r[29].w[0] + 128u);
    fpu_div(c, 12u, c.f[20], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143D90u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00143D90u) [[unlikely]] return; }
L_00143D90:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143DA0u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00143DA0u) [[unlikely]] return; }
L_00143DA0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00143DD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143DF4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00143DF4u) [[unlikely]] return; }
L_00143DF4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143E00u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00143E00u) [[unlikely]] return; }
L_00143E00:
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143E10u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00143E10u) [[unlikely]] return; }
L_00143E10:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143E20u); set32(c.r[6], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00143E20u) [[unlikely]] return; }
L_00143E20:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143E2Cu); set32(c.r[5], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 203u, depth + 1u); else { c.pc = 0x00127360u; return; } if (c.pc != 0x00143E2Cu) [[unlikely]] return; }
L_00143E2C:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143E38u); set32(c.r[5], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 203u, depth + 1u); else { c.pc = 0x00127360u; return; } if (c.pc != 0x00143E38u) [[unlikely]] return; }
L_00143E38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00143E50:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[29].w[0] + 192u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143E9Cu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00143E9Cu) [[unlikely]] return; }
L_00143E9C:
    set32(c.r[17], c.r[29].w[0] + 196u);
    set32(c.r[16], c.r[29].w[0] + 200u);
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 192u));
    c.f[2] = ld32((c.r[16].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143EC4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x00143EC4u) [[unlikely]] return; }
L_00143EC4:
    c.f[22] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[21].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143ED8u); set32(c.r[6], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00143ED8u) [[unlikely]] return; }
L_00143ED8:
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 192u));
    c.f[2] = ld32((c.r[16].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143EF8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x00143EF8u) [[unlikely]] return; }
L_00143EF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00143F28; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00143F28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0011(c, 36u, depth); } }
L_00143F28:
    set32(c.r[4], c.r[21].w[0] + 32u);
    set32(c.r[5], c.r[20].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143F38u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 216u, depth + 1u); else { c.pc = 0x00127600u; return; } if (c.pc != 0x00143F38u) [[unlikely]] return; }
L_00143F38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143F40u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x00143F40u) [[unlikely]] return; }
L_00143F40:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143F50u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00143F50u) [[unlikely]] return; }
L_00143F50:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143F5Cu); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x00143F5Cu) [[unlikely]] return; }
L_00143F5C:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143F68u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x00143F68u) [[unlikely]] return; }
L_00143F68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143F70u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0005(c, 46u, depth + 1u); else { c.pc = 0x001158E0u; return; } if (c.pc != 0x00143F70u) [[unlikely]] return; }
L_00143F70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F500000u);
    c.r[3].d[0] = 0ull | 54001ull;
    c.r[4].d[0] = c.r[4].d[0] | 25165ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.budget -= 4;
L_00143F80:
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | 43516ull;
    c.r[5].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143F94u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 33u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x00143F94u) [[unlikely]] return; }
L_00143F94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00143FA0; } }
    c.f[20] = 0u;
    c.budget -= 1;
L_00143FA0:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143FB0u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00143FB0u) [[unlikely]] return; }
L_00143FB0:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143FC0u); set32(c.r[6], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x00143FC0u) [[unlikely]] return; }
L_00143FC0:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143FCCu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x00127450u; return; } if (c.pc != 0x00143FCCu) [[unlikely]] return; }
L_00143FCC:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143FD8u); set32(c.r[5], c.r[21].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00143FD8u) [[unlikely]] return; }
L_00143FD8:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00143FE4u); set32(c.r[5], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00143FE4u) [[unlikely]] return; }
L_00143FE4:
    c.f[3] = ld32((c.r[17].w[0]));
    c.r[18].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    c.f[4] = ld32((c.r[29].w[0] + 180u));
    c.f[1] = ld32((c.r[29].w[0] + 192u));
    c.f[5] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 184u));
    c.budget -= 7;
    [[clang::musttail]] return unit_0011(c, 1u, depth);
}

}
